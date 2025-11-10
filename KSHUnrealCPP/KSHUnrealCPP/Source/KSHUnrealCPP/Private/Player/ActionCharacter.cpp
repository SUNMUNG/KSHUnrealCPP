// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ActionCharacter.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

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
	
	//Camera->AddLocalOffset(FVector(0, 0, 150));
}

// Called when the game starts or when spawned
void AActionCharacter::BeginPlay()
{
	Super::BeginPlay();

	

	
}

// Called every frame
void AActionCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AActionCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhanced = Cast< UEnhancedInputComponent>(PlayerInputComponent);
	if (enhanced) { //입력 컴포넌트가 향상된 입력 컴포넌트일 때 
		enhanced->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AActionCharacter::OnMoveInput);
		enhanced->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AActionCharacter::OnCameraLook);

	}
}

void AActionCharacter::OnMoveInput(const FInputActionValue& Invalue)
{
	FVector2D inputDir = Invalue.Get<FVector2d>();
	FVector CameraForward = Camera->GetForwardVector();
	FVector CameraRight = Camera->GetRightVector();

	FVector DirWS = inputDir.Y * CameraForward;
	FVector DirAD = inputDir.X * CameraRight;

	FVector Dir = DirWS + DirAD;

	//SetActorLocation(GetActorLocation() + FVector(inputDir.Y* Speed, inputDir.X* Speed, 0));
	AddMovementInput(Dir);
}

void AActionCharacter::OnCameraLook(const FInputActionValue& Invalue)
{
	FVector2D lookDir = Invalue.Get<FVector2d>();
	UE_LOG(LogTemp, Log, TEXT("Dir : (%.1f, %.1f)"), lookDir.X, lookDir.Y);
	UE_LOG(LogTemp, Log, TEXT("Dir : (%s)"), *lookDir.ToString());


	//AddControllerRollInput(lookDir.X);
	AddControllerYawInput(lookDir.X);
	AddControllerPitchInput(-lookDir.Y);

}

