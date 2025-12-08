// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShopWidget.generated.h"

class UInventoryComponent;
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShopCloseRequested);
/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UShopWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void InitializeShop(UDataTable* ItemList);

	UFUNCTION()
	void OnExitClicked();

	void InitializeShopWidget(UInventoryComponent* InInventoryComponent);
	UFUNCTION()
	void UpdateAllBuyButtonState(int32 _);
protected:

	void ResetShopItemListWidget();

	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

	virtual void NativeConstruct() override;
public:
	UPROPERTY(BlueprintAssignable, Category = "UI|Shop")
	FOnShopCloseRequested OnShopCloseRequested;

protected:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UButton> ExitButton = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shop|Buy", meta = (BindWidget))
	TObjectPtr<class UShopItemListWidget> ItemListWidget = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shop|Buy")
	TWeakObjectPtr<UDataTable> ShopItemList = nullptr;
private:

	UPROPERTY()
	TWeakObjectPtr<UInventoryComponent> TargetInventory = nullptr;
};
