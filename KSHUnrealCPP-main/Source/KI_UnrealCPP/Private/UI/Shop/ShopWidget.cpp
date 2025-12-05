// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Shop/ShopWidget.h"
#include "UI/Inventory/InventoryDragDropOperation.h"
#include "Player/InventoryComponent.h"
#include "UI/Shop/ShopItemListWidget.h"
#include "Components/Button.h"

void UShopWidget::OnExitClicked()
{
	OnShopCloseRequested.Broadcast();
}

void UShopWidget::InitializeShopWidget(UInventoryComponent* InInventoryComponent)
{
	TargetInventory = InInventoryComponent;
}



void UShopWidget::ResetShopItemListWidget()
{
	if (ShopItemList.IsValid()) {
		ItemListWidget->ResetItemList(ShopItemList.Get());
	}
}

bool UShopWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UInventoryDragDropOperation* invenOp = Cast<UInventoryDragDropOperation>(InOperation);
	if (invenOp && invenOp->ItemData.IsValid())
	{
		if (TargetInventory.IsValid()) {
			TargetInventory->SetItemAtIndex(invenOp->StartIndex, invenOp->ItemData.Get(), invenOp->Count);
			UE_LOG(LogTemp, Log, TEXT("인벤토리에 드랍 : 원래 슬롯(%d)으로 아이템이 돌아가야 한다."), invenOp->StartIndex);
			return true;
		}
		else {
			UE_LOG(LogTemp, Log, TEXT("TargetInventory X"), invenOp->StartIndex);
		}
	}
	
	return false;
}

void UShopWidget::NativeConstruct()
{
	Super::NativeConstruct();
	ExitButton->OnClicked.AddDynamic(this, &UShopWidget::OnExitClicked);

	ResetShopItemListWidget();
}

