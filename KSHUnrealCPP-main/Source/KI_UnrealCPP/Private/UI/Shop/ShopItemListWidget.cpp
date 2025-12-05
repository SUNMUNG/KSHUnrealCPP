// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Shop/ShopItemListWidget.h"
#include "UI/Shop/ItemBuyWidget.h"
#include "Data/DataTableRows.h"
#include "Components/VerticalBox.h"
void UShopItemListWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (ItemBoxContainer) {
		int count = ItemBoxContainer->GetChildrenCount();
		ShopItems.Empty(count);
		for (int i = 0; i < count; i++) {
			UItemBuyWidget* widget = Cast<UItemBuyWidget>(ItemBoxContainer->GetChildAt(i));
			ShopItems.Add(widget);
		}
		
	}
}

void UShopItemListWidget::ResetItemList(UDataTable* ItemList)
{
	int32 index = 0;
	float totalweight = 0.0f;
	TArray<FShopData_TableRow*> allRows;
	ItemList->GetAllRows(TEXT("ShopDataTable"),allRows);

	for (const FShopData_TableRow* row : allRows) {
		totalweight += row->SelectWeight;
	}

	int32 selectCount = ShopItems.Num();
	TArray<const FShopData_TableRow*> selectedRows;
	selectedRows.Empty(selectCount);
	for (int32 i = 0; i < ShopItems.Num(); i++) {
		float hit = FMath::FRandRange(0.0f,totalweight);
		float currentweight = 0.0f;
		for (const FShopData_TableRow* row : allRows) {
			currentweight += row->SelectWeight;
			if (hit < currentweight) {
				selectedRows.Add(row);
				break;
			}
		}
	}
	for (int32 i = 0; i < selectCount; i++) {
		ShopItems[index]->SetItemData(selectedRows[i]->ItemData, selectedRows[i]->StockCount);
		index++;
	}
}

