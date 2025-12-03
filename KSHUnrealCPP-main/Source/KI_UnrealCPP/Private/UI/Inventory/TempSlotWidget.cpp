// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Inventory/TempSlotWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
void UTempSlotWidget::SetItemIconImage(UTexture2D* InTexture)
{
	ItemIconImage->SetBrushFromTexture(InTexture);
}

void UTempSlotWidget::SetCountText(int32 InCount)
{
	CountText->SetText(FText::AsNumber(InCount));
}
