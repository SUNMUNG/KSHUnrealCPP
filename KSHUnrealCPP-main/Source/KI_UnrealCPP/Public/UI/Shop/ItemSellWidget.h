// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemSellWidget.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UItemSellWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

private:
	UPROPERTY()
	TWeakObjectPtr<class UInventoryComponent> TargetInventory = nullptr;
};
