// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DetailInfoWidget.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UDetailInfoWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetItemIcon(UTexture2D* InTexture);

	void SetItemNameText(FText InItemName);

	void SetItemPriceText(int32 InPrice);

	void SetItemDescriptionText(FText InItemDescription);
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI|DetailInfo", meta = (BindWidget))
	TObjectPtr<class UImage> ItemIcon = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI|DetailInfo", meta = (BindWidget))
	TObjectPtr<class UTextBlock> ItemName = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI|DetailInfo", meta = (BindWidget))
	TObjectPtr<class UTextBlock> ItemPrice = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI|DetailInfo", meta = (BindWidget))
	TObjectPtr<class UTextBlock> ItemDescription = nullptr;
};
