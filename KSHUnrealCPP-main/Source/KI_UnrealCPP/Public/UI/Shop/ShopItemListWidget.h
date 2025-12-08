// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShopItemListWidget.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UShopItemListWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void ResetItemList(UDataTable* ItemList);

	void UpdateAllBuyButton();
protected:

	virtual void NativeConstruct() override;


protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UVerticalBox> ItemBoxContainer = nullptr;

	UPROPERTY(BlueprintReadOnly)
	TArray<class UItemBuyWidget*> ShopItems;
};
