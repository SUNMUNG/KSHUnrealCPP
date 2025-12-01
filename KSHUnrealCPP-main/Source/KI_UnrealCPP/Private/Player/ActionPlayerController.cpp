// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ActionPlayerController.h"
#include "Player/InventoryComponent.h"
#include "Player/ActionCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubSystems.h"
#include "InputMappingContext.h"
#include "Framework/MainHUD.h"

void AActionPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = 
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());	// Subsystem 가져오기 시도
	if (Subsystem)	// Subsystem이 null이 아니면
	{
		Subsystem->AddMappingContext(DefaultMappingContext, GameInputPriority);
	}

	PlayerCameraManager->ViewPitchMax = VewPitchMax;
	PlayerCameraManager->ViewPitchMin = VewPitchMin;
	
}

void AActionPlayerController::OnPossess(APawn* pawn)
{
	Super::OnPossess(pawn);

	AActionCharacter* player = Cast<AActionCharacter>(pawn);
	if (player) {
		InventoryComponent = player->GetInventoryComponent();
		if (InventoryComponent.IsValid()) {
			if (InventoryWidget.IsValid()) {
				InventoryWidget->InitializeInventoryWidget(InventoryComponent.Get());
			}			
		}
		
	}
}

void AActionPlayerController::OnUnPossess()
{
	if (InventoryComponent.IsValid()) {
		InventoryWidget->ClearInventoryWidget();
	}
	InventoryComponent = nullptr;
	Super::OnUnPossess();
}

void AActionPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* enhanced = Cast<UEnhancedInputComponent>(InputComponent);
	if (enhanced)	// 입력 컴포넌트가 향상된 입력 컴포넌트일 때
	{
		//UE_LOG(LogTemp, Log, TEXT("바인드 성공"));
		enhanced->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AActionPlayerController::OnLookInput);

		enhanced->BindAction(IA_InventoryOnOff, ETriggerEvent::Started, this, &AActionPlayerController::OnInventoryOnOff);
	}
}

void AActionPlayerController::InitializeMainWidget(UMainHudWidget* widget)
{
	if (widget) {
		MainHudWidget = widget;

		FScriptDelegate delegate;
		delegate.BindUFunction(this, "CloseInventoryWidget");
		MainHudWidget->AddToInventoryCloseDelegate(delegate);

		InventoryWidget = MainHudWidget->GetInventoryWidget();
		if (InventoryWidget.IsValid()) {
			InventoryWidget->InitializeInventoryWidget(InventoryComponent.Get());
		}
	}

}

void AActionPlayerController::OnLookInput(const FInputActionValue& InValue)
{
	FVector2D lookAxis = InValue.Get<FVector2D>();
	//UE_LOG(LogTemp, Log, TEXT("OnLookInput : %s"), *lookAxis.ToString());
	AddYawInput(lookAxis.X);
	AddPitchInput(lookAxis.Y);
}

void AActionPlayerController::OnInventoryOnOff()
{
	if (MainHudWidget.IsValid()) {
		if (MainHudWidget->GetOpenState() == EOpenState::Open) {
			CloseInventoryWidget();
		}
		else if(MainHudWidget->GetOpenState() == EOpenState::Close){
			OpenInventoryWidget();
		}
		else {
			UE_LOG(LogTemp, Error, TEXT("OnInventoryOnOff : EOpenState 이상함 "));
		}
	}
	
}

void AActionPlayerController::OpenInventoryWidget()
{
	if (MainHudWidget.IsValid()) {
		MainHudWidget->OpenInventory();
		
		FInputModeGameAndUI inputmode;
		inputmode.SetWidgetToFocus(MainHudWidget->TakeWidget());
		inputmode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		inputmode.SetHideCursorDuringCapture(false);
		inputmode.ShouldFlushInputOnViewportFocus();
		SetInputMode(inputmode);

		bShowMouseCursor = true;
		SetIgnoreMoveInput(true);
		SetIgnoreLookInput(true);
		
		//SetPause(true);
	}
}

void AActionPlayerController::CloseInventoryWidget()
{
	if (MainHudWidget.IsValid()) {
		MainHudWidget->CloseInventory();

		FInputModeGameOnly inputmode;
		inputmode.SetConsumeCaptureMouseDown(true);
		SetInputMode(inputmode);

		bShowMouseCursor = false;
		SetIgnoreMoveInput(false);
		SetIgnoreLookInput(false);

		//SetPause(false);
	}
}
