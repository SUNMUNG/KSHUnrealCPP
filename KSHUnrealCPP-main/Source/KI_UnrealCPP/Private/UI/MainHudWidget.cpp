// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainHudWidget.h"
#include "Player/ActionCharacter.h"
#include "Player/ResourceComponent.h"
#include "UI/ResourceBarWidget.h"


void UMainHudWidget::NativeConstruct()
{
	AActionCharacter* player = Cast<AActionCharacter>(GetOwningPlayerPawn());
	if (player) {
		if (player->GetResourceComponent())
		{
			UResourceComponent* resource = player->GetResourceComponent();
			resource->OnHealthChanged.AddUObject(HealthBar.Get(), &UResourceBarWidget::RefreshWidget);
			resource->OnStaminaChanged.AddDynamic(StaminaBar.Get(), &UResourceBarWidget::RefreshWidget);

			HealthBar->RefreshWidget(resource->GetCurrentHealth(), resource->GetMaxHealth());
			StaminaBar->RefreshWidget(resource->GetCurrentStamina(), resource->GetMaxStamina());
		}
		CloseInventory();
	}	
}

void UMainHudWidget::OpenInventory()
{
	if (Inventory) {
		Inventory->RefreshInventoryWidget();
		Inventory->SetVisibility(ESlateVisibility::Visible);
		OpenState = EOpenState::Open;
	}
	
}

void UMainHudWidget::CloseInventory()
{
	if (Inventory) {
		Inventory->SetVisibility(ESlateVisibility::Hidden);
		OpenState = EOpenState::Close;
	}
}