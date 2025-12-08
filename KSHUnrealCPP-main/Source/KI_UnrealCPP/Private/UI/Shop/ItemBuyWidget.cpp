// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Shop/ItemBuyWidget.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Components/Overlay.h"
#include "Player/InventoryOwner.h"
#include "Data/ItemDataAsset.h"



void UItemBuyWidget::BuyItem()
{
	int32 itemcount = FCString::Atoi(*ItemCount->GetText().ToString());
	if (itemcount == 0) {
		UE_LOG(LogTemp, Log, TEXT("구매할 수량이 0 입니다."));
		return;
	}

	if (MaxStackCount - itemcount >= 0) {

		APawn* player = GetOwningPlayerPawn();
		int32 BuyPrice = itemPrice * itemcount;
		if (player && player->Implements<UInventoryOwner>()) {
			if (IInventoryOwner::Execute_HasEnoughMoney(player, BuyPrice)) {
				UE_LOG(LogTemp, Log, TEXT("구매처리 : %d"), BuyPrice);
				MaxStackCount -= itemcount;
				ItemStackCount->SetText(FText::AsNumber(MaxStackCount));
				IInventoryOwner::Execute_RemoveMoney(player,BuyPrice);
				IInventoryOwner::Execute_AddItem(player, ItemData.Get(), itemcount);
			}
			else {
				UE_LOG(LogTemp, Log, TEXT("구매불가능"));
			}
			
		}
		
		if (MaxStackCount == 0) {
			Soldout->SetVisibility(ESlateVisibility::HitTestInvisible);
			ItemBuy->SetIsEnabled(false);
			ItemCount->SetIsEnabled(false);
			UE_LOG(LogTemp, Log, TEXT("SOLD OUT"));
		}
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("재고가 없습니다."));
	}
	
	
}

void UItemBuyWidget::SetItemData(UItemDataAsset* itemData, int32 stockCount)
{
	ItemCount->SetIsEnabled(true);
	Soldout->SetVisibility(ESlateVisibility::Hidden);

	ItemIcon->SetBrushFromTexture(itemData->ItemIcon);
	ItemName->SetText(itemData->ItemName);
	ItemPrice->SetText(FText::AsNumber(itemData->ItemPrice));
	ItemDescription->SetText(itemData->ItemDescription);
	ItemStackCount->SetText(FText::AsNumber(stockCount));
	MaxStackCount = stockCount;
	itemPrice = itemData->ItemPrice;
	ItemData = itemData;
	

	UpdateBuyButton();
}

void UItemBuyWidget::UpdateBuyButton()
{
	APawn* player = GetOwningPlayerPawn();

	if (player && player->Implements<UInventoryOwner>()) {
		if (bool hasEnoughMoney = IInventoryOwner::Execute_HasEnoughMoney(player, itemPrice)) {
			ItemBuy->SetIsEnabled(hasEnoughMoney);
		}
		else {
			ItemBuy->SetIsEnabled(hasEnoughMoney);
		}
	}

}

void UItemBuyWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (ItemCount) {
		ItemCount->OnTextChanged.AddDynamic(this, &UItemBuyWidget::OnItemCountTextChanged);
		ItemCount->OnTextCommitted.AddDynamic(this, &UItemBuyWidget::OnItemCountTextCommitted);

		ItemCount->SetHintText(FText::AsNumber(MinimumItemCount));
	}

	if (ItemBuy) {
		
		ItemBuy->OnClicked.AddDynamic(this, &UItemBuyWidget::BuyItem);
	}

	if (Soldout) {
		Soldout->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UItemBuyWidget::OnItemCountTextChanged(const FText& Text)
{
	FString number = Text.ToString();

	if (number.IsNumeric()) {
		int32 count = FCString::Atoi(*number);
		ItemCount->SetText(FText::AsNumber(count));
	}

}

void UItemBuyWidget::OnItemCountTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	FString number = Text.ToString();


	if (number.IsNumeric()) {
		int32 count = FCString::Atoi(*number);

		//UE_LOG(LogTemp, Log, TEXT("%d %d"), count, MaxStackCount);
		if (MaxStackCount > count) {
			ItemCount->SetText(FText::AsNumber(count));
		}
		else {
			ItemCount->SetText(FText::AsNumber(MaxStackCount));
		}

	}
	else {
		ItemCount->SetText(FText::AsNumber(MinimumItemCount));
	}

	
}
