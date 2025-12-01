// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Inventory/InventoryWidget.h"
#include "UI/Inventory/InventorySlotWidget.h"
#include "Player/InventoryComponent.h"
#include "Components/Button.h"
#include "Components/UniformGridPanel.h"

void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (CloseButton) {
		CloseButton->OnClicked.AddDynamic(this, &UInventoryWidget::OnCloseClicked);
	}

}

void UInventoryWidget::InitializeInventoryWidget(UInventoryComponent* InventoryComponent)
{
	if (InventoryComponent) {
		TargetInventory = InventoryComponent;
		if (TargetInventory.IsValid()) {

			if (SlotGridPanel->GetChildrenCount()!= TargetInventory->GetInventorySize()) {
				UE_LOG(LogTemp, Warning, TEXT("인벤토리 컴포넌트 슬롯과 위젯 슬롯 크기가다릅니다."));
				return;
			}
			int32 size = FMath::Min(SlotGridPanel->GetChildrenCount(), TargetInventory->GetInventorySize());

			for (int i = 0; i < TargetInventory->GetInventorySize(); i++) {
				UE_LOG(LogTemp, Warning, TEXT("%d"), i);
				FInvenSlot* slotData = TargetInventory->GetSlotData(i);
				UInventorySlotWidget* slotwidget = Cast<UInventorySlotWidget>(SlotGridPanel->GetChildAt(i));
				slotwidget->InitializeSlot(i, slotData);
				SlotWidgets.Add(slotwidget);
			}
		}
	}
}

void UInventoryWidget::RefreshInventoryWidget()
{
	for (const UInventorySlotWidget* slot : SlotWidgets) {
		UE_LOG(LogTemp, Warning, TEXT("RefreshInventoryWidget"));
		slot->RefreshSlot();
	}

}

void UInventoryWidget::ClearInventoryWidget()
{
	TargetInventory = nullptr;
}

void UInventoryWidget::OnCloseClicked()
{
	OnInventoryCloseRequested.Broadcast();
}