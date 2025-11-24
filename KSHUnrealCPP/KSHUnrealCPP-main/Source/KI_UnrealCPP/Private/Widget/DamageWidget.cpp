// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/DamageWidget.h"
#include "Components/TextBlock.h"

void UDamageWidget::SetDamageTextBlock(float Damage)
{
	if (DamageText) {
		DamageText->SetText(FText::AsNumber(static_cast<int>(Damage)));
	}	
}

void UDamageWidget::PlayPopupAnimation()
{
	if (PopupAnimation) {
		PlayAnimation(PopupAnimation);
		UE_LOG(LogTemp, Warning, TEXT("1234"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PopupAnimation null"));
	}
}
