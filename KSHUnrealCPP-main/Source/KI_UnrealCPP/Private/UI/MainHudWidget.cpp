// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainHudWidget.h"
#include "Player/ActionCharacter.h"
#include "Player/ResourceComponent.h"
#include "Player/InventoryComponent.h"
#include "UI/ResourceBarWidget.h"

void UMainHudWidget::NativeConstruct()
{
	CloseInventory();
	CloseShop();
	
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
		if (UInventoryComponent* inventory = player->GetInventoryComponent()) {
			if (Shop) {
				inventory->OnInventoryMoneyChanged.AddDynamic(Shop, &UShopWidget::UpdateAllBuyButtonState);
			}
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

void UMainHudWidget::OpenShop(UDataTable* ItemList)
{
	Shop->InitializeShop(ItemList);
	Shop->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}

void UMainHudWidget::CloseShop()
{
	Shop->SetVisibility(ESlateVisibility::Hidden);
}
