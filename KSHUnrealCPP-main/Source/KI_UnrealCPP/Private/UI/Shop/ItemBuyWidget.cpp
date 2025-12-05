// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Shop/ItemBuyWidget.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Components/Overlay.h"
#include "Data/ItemDataAsset.h"
#include "Player/InventoryOwner.h"


void UItemBuyWidget::SetItemData(const UItemDataAsset* itemData, int32 stockCount)
{
	ItemIcon->SetBrushFromTexture(itemData->ItemIcon);
	ItemName->SetText(itemData->ItemName);
	ItemPrice->SetText(FText::AsNumber(itemData->ItemPrice));
	ItemDescription->SetText(itemData->ItemDescription);
	ItemStackCount->SetText(FText::AsNumber(stockCount));
}

void UItemBuyWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (ItemCount) {
		ItemCount->OnTextChanged.AddDynamic(this, &UItemBuyWidget::OnItemCountTextChanged);
		ItemCount->OnTextCommitted.AddDynamic(this, &UItemBuyWidget::OnItemCountTextCommitted);

		ItemCount->SetHintText(FText::AsNumber(MinimumItemCount));
	}
	if (ItemStackCount) {
		MaxStackCount = FCString::Atoi(*ItemStackCount->GetText().ToString());
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

		UE_LOG(LogTemp, Log, TEXT("%d %d"), count, MaxStackCount);
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
