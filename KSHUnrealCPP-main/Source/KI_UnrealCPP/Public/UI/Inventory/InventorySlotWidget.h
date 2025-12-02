// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/ItemDataAsset.h"
#include "InventorySlotWidget.generated.h"

struct FInvenSlot;
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSlotClicked, int32, InSlotIndex);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSlotDragCancelled, int32, InSlotIndex,int32,DropAmount);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnSlotDropCompleted, int32, DropSlotIndex, UItemDataAsset*,Slotdata,int32,inCount);
/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UInventorySlotWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// 이 위젯이 보여줄 데이터를 세팅
	void InitializeSlot(int32 InIndex, FInvenSlot* InSlotData);

	// 설정된 데이터를 기반으로 위젯에서 표시하는 내용을 갱신
	void RefreshSlot() const;

protected:
	void ClearSlotWidget() const;

	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;

	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

	virtual void NativeOnDragCancelled(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

public:
	FOnSlotClicked OnSlotRightClick;

	FOnSlotDragCancelled OnSlotDragCancelled;

	FOnSlotDropCompleted OnSlotDropCompleted;
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI|IventorySlot", meta = (BindWidget))
	TObjectPtr<class UImage> ItemIconImage = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI|IventorySlot", meta = (BindWidget))
	TObjectPtr<class UTextBlock> CountText = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI|IventorySlot", meta = (BindWidget))
	TObjectPtr<class UTextBlock> SeparateText = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI|IventorySlot", meta = (BindWidget))
	TObjectPtr<class UTextBlock> MaxCountText = nullptr;

private:


	int32 Index = -1;

	FInvenSlot* SlotData = nullptr;

	FInvenSlot* TempSlotData = nullptr;


};
