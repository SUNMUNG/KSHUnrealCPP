// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainHudWidget.h"
#include "Player/ActionCharacter.h"
#include "Player/ResourceComponent.h"
#include "UI/ResourceBarWidget.h"

void UMainHudWidget::NativeConstruct()
{
	CloseInventory();
	CloseShopUI();
	
	AActionCharacter* player = Cast<AActionCharacter>(GetOwningPlayerPawn());
	if (player)
	{
		if (UResourceComponent* resource = player->GetResourceComponent())
		{
			resource->OnHealthChanged.AddUObject(HealthBar.Get(), &UResourceBarWidget::RefreshWidget);
			resource->OnStaminaChanged.AddDynamic(StaminaBar.Get(), &UResourceBarWidget::RefreshWidget);		

			HealthBar->RefreshWidget(resource->GetCurrentHealth(), resource->GetMaxHealth());
			StaminaBar->RefreshWidget(resource->GetCurrentStamina(), resource->GetMaxStamina());
		}
	}
}

void UMainHudWidget::OpenInventory()
{
	Inventory->RefreshInventoryWidget();	// 열릴때마다 UI 내용 갱신
	Inventory->SetVisibility(ESlateVisibility::Visible);
	InventoryOpenState = EOpenState::Open;
}

void UMainHudWidget::CloseInventory()
{
	InventoryOpenState = EOpenState::Close;
	Inventory->SetVisibility(ESlateVisibility::Hidden);
}

void UMainHudWidget::OpenShopUI()
{
	ShopOpenState = EOpenState::Open;
	Shop->SetVisibility(ESlateVisibility::Visible);
}

void UMainHudWidget::CloseShopUI()
{
	ShopOpenState = EOpenState::Close;
	Shop->SetVisibility(ESlateVisibility::Hidden);
}
