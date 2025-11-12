// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ActionCharacter.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AActionCharacter::AActionCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength=350.0f;
	SpringArm->SocketOffset = FVector(0, 0, 250);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	Camera->SetRelativeRotation(FRotator(-20.0f, 0.0f, 0.0f));
	
	SpringArm->bUsePawnControlRotation = true;
	bUseControllerRotationYaw = false;
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0,360,0);
	GetCharacterMovement()->MaxAcceleration = 1000.0f;

}

// Called when the game starts or when spawned
void AActionCharacter::BeginPlay()
{
	Super::BeginPlay();

	CurrentStamina = MaxStamina;
	bisSprint = false;
	AnimInstance = GetMesh()->GetAnimInstance();
}

// Called every frame
void AActionCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("%.1f"), Stamina);
	if (bisSprint) {
		RDeltatime = DeltaTime;
	}

}

// Called to bind functionality to input
void AActionCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhanced = Cast< UEnhancedInputComponent>(PlayerInputComponent);
	if (enhanced) { //입력 컴포넌트가 향상된 입력 컴포넌트일 때 
		enhanced->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AActionCharacter::OnMoveInput);
		enhanced->BindActionValueLambda(IA_Sprint, ETriggerEvent::Started, [this](const FInputActionValue& _) {
				SetSprintMode();
			});
		enhanced->BindActionValueLambda(IA_Sprint, ETriggerEvent::Triggered, [this](const FInputActionValue& _) {
				Runtime();
			});
		enhanced->BindActionValueLambda(IA_Sprint, ETriggerEvent::Completed, [this](const FInputActionValue& _) {
				SetWalkMode();
			});
		enhanced->BindAction(IA_Roll, ETriggerEvent::Triggered, this, &AActionCharacter::OnRollInput);

	}
}

void AActionCharacter::OnMoveInput(const FInputActionValue& Invalue)
{
	FVector2D inputDir = Invalue.Get<FVector2d>();

	FVector CameraForward = FVector(Camera->GetForwardVector().X, Camera->GetForwardVector().Y, 0);
	FVector CameraRight = FVector(Camera->GetRightVector().X, Camera->GetRightVector().Y, 0);

	FVector DirWS = inputDir.Y * CameraForward;
	FVector DirAD = inputDir.X * CameraRight;

	FVector Dir = DirWS + DirAD;

	Dir.Normalize(0.001f);
	

	//SetActorLocation(GetActorLocation() + FVector(inputDir.Y* Speed, inputDir.X* Speed, 0));
	AddMovementInput(FVector(Dir.X,Dir.Y,0));
}

void AActionCharacter::OnRollInput(const FInputActionValue& Invalue)
{
	if (AnimInstance.IsValid()) {

		if (!AnimInstance->IsAnyMontagePlaying() && CurrentStamina >= RollStamina) {
			if (!GetLastMovementInputVector().IsNearlyZero()) {
				SetActorRotation(GetLastMovementInputVector().Rotation());
			}
			GetWorldTimerManager().ClearTimer(StaminaRegenTimer);
			StaminaRegenTimerSet();
			CurrentStamina -= RollStamina;
			PlayAnimMontage(RollMontage);
		}

	}
	
	
}


void AActionCharacter::SetSprintMode()
{	
	if (CurrentStamina >= 0 && GetMovementComponent()->GetLastInputVector().Length() > 0) {
		bisSprint = true;
		GetWorldTimerManager().ClearTimer(StaminaRegenTimer);
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	}

}

void AActionCharacter::SetWalkMode()
{	
	if (bisSprint) {
		bisSprint = false;
		GetWorldTimerManager().ClearTimer(StaminaRegenTimer);
		StaminaRegenTimerSet();
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	}
	
}

void AActionCharacter::StaminaRegenTimerSet()
{
	GetWorldTimerManager().SetTimer(
		StaminaCoolTimer,
		[this]() {
			bRegenStamina = true;
			GetWorldTimerManager().SetTimer(
				StaminaRegenTimer,
				this,
				&AActionCharacter::StaminaRegenPerTick,
				0.1f,	// 실행 간격
				true,	// 반복 재생 여부
				0.1f);
		},
		HealStaminaTime,
		false);
}

void AActionCharacter::StaminaRegenPerTick()
{
	CurrentStamina += MaxStamina * HealRate;

	if (CurrentStamina > MaxStamina)
	{
		CurrentStamina = MaxStamina;
		GetWorldTimerManager().ClearTimer(StaminaRegenTimer);
	}
}

void AActionCharacter::Runtime()
{
	if (bisSprint) {
		if (CurrentStamina >= 0) {
			CurrentStamina -= RDeltatime * SprintStaminaRate;
		}
		else {
			CurrentStamina = 0.0f;
			SetWalkMode();
		}
	}

	if (GetMovementComponent()->GetLastInputVector().Length() > 0) {
		SetSprintMode();
	}
	else {
		SetWalkMode();
	}
}



