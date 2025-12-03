// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Inventory/DetailInfoWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"

void UDetailInfoWidget::SetItemIcon(UTexture2D* InTexture)
{
	ItemIcon->SetBrushFromTexture(InTexture);
}

void UDetailInfoWidget::SetItemNameText(FText InItemName)
{
	ItemName->SetText(InItemName);
}

void UDetailInfoWidget::SetItemPriceText(int32 InPrice)
{
	ItemPrice->SetText(FText::AsNumber(InPrice));
}

void UDetailInfoWidget::SetItemDescriptionText(FText InItemDescription)
{
	ItemDescription->SetText(InItemDescription);
}
