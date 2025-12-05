// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemBuyWidget.generated.h"

class UImage;
class UTextBlock;
class UEditableTextBox;
class UButton;
class UOverlay;
/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UItemBuyWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void BuyItem();

	void SetItemData(const class UItemDataAsset* itemData, int32 stockCount);
protected:
	virtual void NativeConstruct() override;
	
	
private:
	UFUNCTION()
	void OnItemCountTextChanged(const FText& Text);

	UFUNCTION()
	void OnItemCountTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);
protected:
	UPROPERTY(BlueprintReadOnly, Category = "Shop|ItemBuy", meta = (BindWidget))
	TObjectPtr<UImage> ItemIcon = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Shop|ItemBuy", meta = (BindWidget))
	TObjectPtr<UTextBlock> ItemName = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Shop|ItemBuy", meta = (BindWidget))
	TObjectPtr<UTextBlock> ItemPrice = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Shop|ItemBuy", meta = (BindWidget))
	TObjectPtr<UTextBlock> ItemDescription = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Shop|ItemBuy", meta = (BindWidget))
	TObjectPtr<UTextBlock> ItemStackCount = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Shop|ItemBuy", meta = (BindWidget))
	TObjectPtr<UOverlay> Soldout = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Shop|ItemBuy", meta = (BindWidget))
	TObjectPtr<UEditableTextBox> ItemCount = nullptr;
	
	UPROPERTY(BlueprintReadOnly, Category = "Shop|ItemBuy", meta = (BindWidget))
	TObjectPtr<UButton> ItemBuy = nullptr;
private:
	static const int32 MinimumItemCount = 1;

	int32 MaxStackCount = -1;

	int32 itemPrice = -1;
};
