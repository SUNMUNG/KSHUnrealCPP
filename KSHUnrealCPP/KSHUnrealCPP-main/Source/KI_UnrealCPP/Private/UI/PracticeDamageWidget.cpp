// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PracticeDamageWidget.h"
#include "Components/TextBlock.h"
#include "Animation/WidgetAnimation.h"

void UPracticeDamageWidget::SetDamageText(float DamageAmount)
{
	Damage = FText::AsNumber(DamageAmount);
	DamageText->SetText(Damage);
}

void UPracticeDamageWidget::NativeConstruct()
{
	Super::NativeConstruct();
	PlayAnimation(FloatingDamageText.Get(), 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
	
}
