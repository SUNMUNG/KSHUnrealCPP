// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Shop/ItemSellWidget.h"
#include "UI/Inventory/InventoryDragDropOperation.h"
#include "Player/InventoryOwner.h"


bool UItemSellWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UE_LOG(LogTemp,Warning,TEXT("ItemSellWidget : 드랍성공"))
	//판매처리 InOperation 이용

	UInventoryDragDropOperation* invenOp = Cast<UInventoryDragDropOperation>(InOperation);
	if (invenOp && invenOp->ItemData.IsValid())
	{
		int32 sellPrice = static_cast<int32>((invenOp->ItemData->ItemPrice / 2)* invenOp->Count);
		APawn* player = GetOwningPlayerPawn();
		if (player->Implements<UInventoryOwner>()) {
			IInventoryOwner::Execute_AddMoney(player,sellPrice);
			return true;
		}
		
	}
	
	return false;

}
