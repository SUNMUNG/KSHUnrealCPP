// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ActionPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"

void AActionPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    UEnhancedInputComponent* enhanced = Cast<UEnhancedInputComponent>(InputComponent);
    if (enhanced)	// 입력 컴포넌트가 향상된 입력 컴포넌트일 때
    {
        enhanced->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AActionPlayerController::OnCameraLook);
    }
}

void AActionPlayerController::BeginPlay()
{
	Super::BeginPlay();

    UEnhancedInputLocalPlayerSubsystem* Subsystem =
        ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

    if (Subsystem)
    {
        Subsystem->AddMappingContext(DefaultMappingContext, GameInputPriority);
    }

    PlayerCameraManager->ViewPitchMax = ViewMax;
    PlayerCameraManager->ViewPitchMin = ViewMin;

}
void AActionPlayerController::OnCameraLook(const FInputActionValue& Invalue)
{
    FVector2D lookDir = Invalue.Get<FVector2d>();

    AddYawInput(lookDir.X);
    AddPitchInput(-lookDir.Y);

}