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
		StopAnimation(PopupAnimation);

		// 2. 처음부터 다시 재생
		PlayAnimation(PopupAnimation, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
		
		UE_LOG(LogTemp, Warning, TEXT("PlayPopupAnimation"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PopupAnimation null"));
	}

}
