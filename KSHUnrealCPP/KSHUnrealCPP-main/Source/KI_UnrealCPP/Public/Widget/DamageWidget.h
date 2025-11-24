// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DamageWidget.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UDamageWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable,Category = "UI")
	void SetDamageTextBlock(float Damage);
	
	void PlayPopupAnimation();

protected:

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> DamageText = nullptr;

	UPROPERTY(Transient, BlueprintReadOnly, meta = (BindWidgetAnim)) //Transient 런타임에 임시로 생성 명시
	TObjectPtr<UWidgetAnimation> PopupAnimation = nullptr;



};
