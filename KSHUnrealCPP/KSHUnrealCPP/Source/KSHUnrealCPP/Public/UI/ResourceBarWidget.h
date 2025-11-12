// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ResourceBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class KSHUNREALCPP_API UResourceBarWidget : public UUserWidget
{
	GENERATED_BODY()

	
	
public:
	UFUNCTION()
	void RefreshWidget(float InCurrent, float InMax);

	void ColorChange(FLinearColor inColor);
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Resource", meta = (BindWidget));
	TObjectPtr<class UProgressBar> Bar;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Resource", meta = (BindWidget));
	TObjectPtr<class UTextBlock> Current;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Resource", meta = (BindWidget));
	TObjectPtr<class UTextBlock> Max;
};
