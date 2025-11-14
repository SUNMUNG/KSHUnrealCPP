// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ActionCharacter.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Player/ResourceComponent.h"
#include "Player/StatusComponent.h"
#include "AnimNotify/AnimNotifyState_SectionJump.h"
#include "Weapon/WeaponActor.h"

// Sets default values
AActionCharacter::AActionCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 350.0f;
	SpringArm->SocketOffset = FVector(0, 0, 250);
	SpringArm->bUsePawnControlRotation = true;	// 스프링암의 회전을 컨트롤러에 맞춤

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	PlayerCamera->SetupAttachment(SpringArm);
	PlayerCamera->SetRelativeRotation(FRotator(-20.0f, 0.0f, 0.0f));

	Resource = CreateDefaultSubobject<UResourceComponent>(TEXT("PlayerResource"));
	Status = CreateDefaultSubobject<UStatusComponent>(TEXT("PlayerStatus"));

	bUseControllerRotationYaw = false;	// 컨트롤러의 Yaw 회전 사용 안함
	GetCharacterMovement()->bOrientRotationToMovement = true;	// 이동 방향으로 캐릭터 회전
	GetCharacterMovement()->RotationRate = FRotator(0, 360, 0);
}

// Called when the game starts or when spawned
void AActionCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (GetMesh())
	{
		AnimInstance = GetMesh()->GetAnimInstance();	// ABP 객체 가져오기
	}
	if (Resource)
	{
		Resource->OnStaminaEmpty.AddDynamic(this, &AActionCharacter::SetWalkMode);
	}

	// 게임 진행 중에 자주 변경되는 값은 시작 시점에서 리셋을 해주는 것이 좋다.
	bIsSprint = false;

	Resource->SetDefaultHealth(Status->GetDefaultHealth());
	UE_LOG(LogTemp, Warning, TEXT("%.1f"), Status->GetDefaultHealth());
	Resource->SetDefaultStamina(Status->GetDefaultStamina());
}

// Called every frame
void AActionCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SpendRunStamina(DeltaTime);
}

void AActionCharacter::SpendRunStamina(float DeltaTime)
{
	if ((bIsSprint && !GetVelocity().IsNearlyZero())
		&& (AnimInstance.IsValid() && !AnimInstance->IsAnyMontagePlaying()))	// 달리기 모드인 상태에서 움직이면 스태미너를 소비한다.
	{
		Resource->AddStamina(-SprintStaminaCost * DeltaTime);	// 스태미너 감소
	}
}

// Called to bind functionality to input
void AActionCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhanced = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (enhanced)	// 입력 컴포넌트가 향상된 입력 컴포넌트일 때
	{
		enhanced->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AActionCharacter::OnMoveInput);
		enhanced->BindActionValueLambda(IA_Sprint, ETriggerEvent::Started,
			[this](const FInputActionValue& _) {
				SetSprintMode();
			});
		enhanced->BindActionValueLambda(IA_Sprint, ETriggerEvent::Completed,
			[this](const FInputActionValue& _) {
				SetWalkMode();
			});
		enhanced->BindAction(IA_Roll, ETriggerEvent::Triggered, this, &AActionCharacter::OnRollInput);
		enhanced->BindAction(IA_Attack, ETriggerEvent::Triggered, this, &AActionCharacter::OnAttackInput);
		enhanced->BindAction(IA_MeleeAttack, ETriggerEvent::Triggered, this, &AActionCharacter::OnMeleeAttackInput);
	}
}

void AActionCharacter::OnMoveInput(const FInputActionValue& InValue)
{
	FVector2D inputDirection = InValue.Get<FVector2D>();
	FVector moveDirection(inputDirection.Y, inputDirection.X, 0.0f);

	FQuat controlYawRotation = FQuat(FRotator(0, GetControlRotation().Yaw, 0));	// 컨트롤러의 Yaw회전을 따로 뽑아와서
	moveDirection = controlYawRotation.RotateVector(moveDirection);	// 이동 방향에 적용

	AddMovementInput(moveDirection);

}

void AActionCharacter::OnRollInput(const FInputActionValue& InValue)
{
	if (AnimInstance.IsValid())
	{
		if (!AnimInstance->IsAnyMontagePlaying()
			&& Resource->HasEnoughStamina(RollStaminaCost))	// 몽타주 재생중이 아니고 충분한 스태미너가 있을 때만 작동
		{
			if (!GetLastMovementInputVector().IsNearlyZero())	// 입력을 하는 중에만 즉시 회전
			{
				SetActorRotation(GetLastMovementInputVector().Rotation());	// 마지막 입력 방향으로 즉시 회전 시키기
			}
			Resource->AddStamina(-RollStaminaCost);	// 스태미너 감소
			PlayAnimMontage(RollMontage);
		}
	}
}

void AActionCharacter::OnAttackInput(const FInputActionValue& InValue)
{
	if (AnimInstance.IsValid()&&Resource->HasEnoughStamina(AttackStaminaCost))
	{
		if (!AnimInstance->IsAnyMontagePlaying())	// 몽타주 재생중이 아니고 충분한 스태미너가 있을 때만 작동
		{
			if (!GetLastMovementInputVector().IsNearlyZero())	// 입력을 하는 중에만 즉시 회전
			{
				SetActorRotation(GetLastMovementInputVector().Rotation());	// 마지막 입력 방향으로 즉시 회전 시키기
			}
			Resource->AddStamina(-AttackStaminaCost);	// 스태미너 감소
			PlayAnimMontage(AttackMontage);
		}
		else if (AnimInstance->GetCurrentActiveMontage()==AttackMontage) {
				// 스태미너 감소
			
			SectionJumpForCombo(AttackStaminaCost);
		}
	}
}

void AActionCharacter::OnMeleeAttackInput(const FInputActionValue& InValue)
{
	if (AnimInstance.IsValid() && Resource->HasEnoughStamina(MeleeAttackStaminaCost))
	{
		if (!AnimInstance->IsAnyMontagePlaying())	// 몽타주 재생중이 아니고 충분한 스태미너가 있을 때만 작동
		{
			if (!GetLastMovementInputVector().IsNearlyZero())	// 입력을 하는 중에만 즉시 회전
			{
				SetActorRotation(GetLastMovementInputVector().Rotation());	// 마지막 입력 방향으로 즉시 회전 시키기
			}
			Resource->AddStamina(-MeleeAttackStaminaCost);	// 스태미너 감소
			PlayAnimMontage(MeleeAttackMontage);
		}
		else if (AnimInstance->GetCurrentActiveMontage() == MeleeAttackMontage) {
			// 스태미너 감소

			SectionJumpForCombo(MeleeAttackStaminaCost);
		}
	}
}

void AActionCharacter::SetSprintMode()
{
	UWorld* world = GetWorld();
	FTimerManager& timerManager = world->GetTimerManager();
	//UE_LOG(LogTemp, Warning, TEXT("달리기 모드"));
	timerManager.ClearTimer(UpdateWalkSpeed);
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	bIsSprint = true;
}

void AActionCharacter::OnEnableAttack(bool bEnable)
{
	CurrentWeapon->AttackEnable(bEnable);
}


void AActionCharacter::UpdatePlayerWalkSpeed()
{
	UWorld* world = GetWorld();
	FTimerManager& timerManager = world->GetTimerManager();
	if (FMath::IsNearlyEqual(GetCharacterMovement()->MaxWalkSpeed, WalkSpeed,50.0f)) {
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		UE_LOG(LogTemp, Warning, TEXT("타이머종료"));
		timerManager.ClearTimer(UpdateWalkSpeed);
	}

	float CurrentSpeed = GetCharacterMovement()->MaxWalkSpeed;
	UE_LOG(LogTemp, Warning, TEXT("%.1f"), CurrentSpeed);

	CurrentSpeed = FMath::FInterpTo(CurrentSpeed, WalkSpeed, 0.016f, 1.0f);
	GetCharacterMovement()->MaxWalkSpeed = CurrentSpeed;

}



void AActionCharacter::SetWalkMode()
{
	//UE_LOG(LogTemp, Warning, TEXT("걷기 모드"));
	//GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	bIsSprint = false;

	UWorld* world = GetWorld();
	FTimerManager& timerManager = world->GetTimerManager();

	timerManager.ClearTimer(UpdateWalkSpeed);
	timerManager.SetTimer(UpdateWalkSpeed,this,
		&AActionCharacter::UpdatePlayerWalkSpeed,
		0.016f,
		true
	);

}

void AActionCharacter::SectionJumpForCombo(int StaminaCost)
{
	if (SectionJumpNotify && bComboReady) {
		UAnimMontage* current = AnimInstance->GetCurrentActiveMontage();
		AnimInstance->Montage_SetNextSection(
			AnimInstance->Montage_GetCurrentSection(current),
			SectionJumpNotify->GetNextSectionName(),
			current
		);
		Resource->AddStamina(-StaminaCost);
		bComboReady = false;
	}

}
