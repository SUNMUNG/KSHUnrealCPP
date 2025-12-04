// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Inventory/InventorySlotWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "player/InventoryComponent.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "UI/Inventory/TempSlotWidget.h"
#include "UI/Inventory/DetailInfoWidget.h"
#include "Framework/PickupFactorySubsystem.h"
#include "UI/Inventory/InventoryDragDropOperation.h"
#include "Blueprint/SlateBlueprintLibrary.h"

void UInventorySlotWidget::InitializeSlot(UInventoryComponent* InInventoryComponent ,int32 InIndex)
{
	if (InInventoryComponent) {
		TargetInventory = InInventoryComponent;
		Index = InIndex;
		SlotData = TargetInventory->GetSlotData(InIndex);
		OnSlotRightClick.BindUFunction(TargetInventory.Get(), "UseItem");
	}
	

	RefreshSlot();
}

void UInventorySlotWidget::RefreshSlot() const
{
	if (SlotData && !SlotData->IsEmpty())
	{
		// 슬롯에 아이템이 들어있으면 들어있는 아이템 보여주기
		ItemIconImage->SetBrushFromTexture(SlotData->ItemData->ItemIcon);
		ItemIconImage->SetBrushTintColor(FLinearColor(1.0f,1.0f,1.0f,1.0f));

		CountText->SetText(FText::AsNumber(SlotData->GetCount()));
		MaxCountText->SetText(FText::AsNumber(SlotData->ItemData->ItemMaxStackCount));

		CountText->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		SeparateText->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		MaxCountText->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}
	else
	{
		// 슬롯에 아이템이 없으면 빈 슬롯 보여주기
		ClearSlotWidget();
	}
}


void UInventorySlotWidget::ClearSlotWidget() const
{
	ItemIconImage->SetBrushFromTexture(nullptr);
	ItemIconImage->SetBrushTintColor(FLinearColor::Transparent);
	CountText->SetVisibility(ESlateVisibility::Hidden);
	SeparateText->SetVisibility(ESlateVisibility::Hidden);
	MaxCountText->SetVisibility(ESlateVisibility::Hidden);
}

void UInventorySlotWidget::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);
	UE_LOG(LogTemp, Log, TEXT("DragDetected : %d Slot"), this->Index);

	UInventoryDragDropOperation* DragOp = NewObject<UInventoryDragDropOperation>();
	DragOp->StartIndex = this->Index;
	DragOp->ItemData = this->SlotData->ItemData;
	DragOp->Count = this->SlotData->GetCount();
	
	UTempSlotWidget* DragTempWidget = CreateWidget<UTempSlotWidget>(this,TargetInventory->GetTempSlotWidget());

	if (DragTempWidget) {
		UE_LOG(LogTemp, Log, TEXT("DragTempWidget : 존재"));
		DragTempWidget->SetItemIconImage(SlotData->ItemData->ItemIcon);
		DragTempWidget->SetCountText(SlotData->GetCount());
		DragOp->DefaultDragVisual = DragTempWidget;
	}


	OutOperation = DragOp;

	TargetInventory->ClearSlotAtIndex(this->Index);
}

bool UInventorySlotWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UInventoryDragDropOperation* invenOp = Cast<UInventoryDragDropOperation>(InOperation);
	if (invenOp && invenOp->ItemData.IsValid())
	{
		if (SlotData->IsEmpty()) {
			TargetInventory->SetItemAtIndex(Index, invenOp->ItemData.Get(), invenOp->Count);
		}
		else {
			if (invenOp->ItemData == SlotData->ItemData) {
				int32 Count = FMath::Min(SlotData->GetRemainingCount(),invenOp->Count);
				TargetInventory->UpdateSlotCount(Index, Count);

				int32 returnCount = invenOp->Count -Count;

				if (returnCount > 0) {
					TargetInventory->SetItemAtIndex(invenOp->StartIndex, invenOp->ItemData.Get(), returnCount);	
				}


			}
			else {
				TargetInventory->SetItemAtIndex(invenOp->StartIndex, SlotData->ItemData.Get(), SlotData->GetCount());
				TargetInventory->SetItemAtIndex(Index, invenOp->ItemData.Get(), invenOp->Count);
			}
		}

		return true;
	}	
	return false;
}

void UInventorySlotWidget::NativeOnDragCancelled(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::NativeOnDragCancelled(InDragDropEvent, InOperation);
	UInventoryDragDropOperation* invenOp = Cast<UInventoryDragDropOperation>(InOperation);
	if (invenOp && invenOp->ItemData.IsValid())
	{
		//UE_LOG(LogTemp, Log, 
		//	TEXT("DragCancelled : 바닥에다가 (%s)아이템을 버려야 한다."), 
		//	*(invenOp->ItemData->ItemName.ToString()));		

		APlayerController* playerController = GetOwningPlayer();
		if (playerController)
		{
			FVector2D absolutePosition = InDragDropEvent.GetScreenSpacePosition();	// 마우스의 스크린 좌표(절대좌표) 가져오기
			FVector2D pixelPosition;
			FVector2D viewportPosition;
			USlateBlueprintLibrary::AbsoluteToViewport(this, absolutePosition, pixelPosition, viewportPosition);
			UE_LOG(LogTemp, Log, TEXT("Screen : %s"), *absolutePosition.ToString());
			UE_LOG(LogTemp, Log, TEXT("Pixel : %s"), *pixelPosition.ToString());
			UE_LOG(LogTemp, Log, TEXT("Viewport : %s"), *viewportPosition.ToString());

			FVector worldLocation;
			FVector worldDirection;
			if (playerController->DeprojectScreenPositionToWorld(
				pixelPosition.X,
				pixelPosition.Y,
				worldLocation, worldDirection))	// 스크린 좌표를 월드 좌표로 변환
			{
				FVector start = worldLocation;						// 시작점은 worldLocation(카메라 위치)
				FVector end = start + worldDirection * 10000.0f;	// 끝점은 시작점에서 worldDirection방향으로 100m 이동한 곳

				FVector spawnLocation;		// 아이템이 생성될 위치를 저장할 변수		
				UWorld* world = GetWorld();
				FHitResult hitResult;
				if (world->LineTraceSingleByChannel(hitResult, start, end, ECollisionChannel::ECC_Visibility))	// LineTraceSingleByChannel
				{
					// LineTrace 성공										
					spawnLocation = hitResult.Location;
				}
				else
				{
					spawnLocation = end;
				}

				// 일정 거리 이상 떨어지지 않게 생성 위치 조절
				const float maxDistance = 500;
				FVector playerLocation = GetOwningPlayerPawn()->GetActorLocation();
				if (FVector::DistSquared2D(playerLocation, spawnLocation) > maxDistance * maxDistance)
				{
					FVector direction = (spawnLocation - playerLocation).GetUnsafeNormal2D();

					spawnLocation = playerLocation + direction * maxDistance;
					FVector DownStart = spawnLocation + FVector(0, 0, 10000.0f); // 100m 위에서
					FVector DownEnd = spawnLocation - FVector(0, 0, -10000.0f);  // 100m 아래까지
					FHitResult GroundHit;
					if (world->LineTraceSingleByChannel(GroundHit, DownStart, DownEnd, ECollisionChannel::ECC_Visibility))
					{
						spawnLocation = GroundHit.Location;
					}
				}

				// 실제 생성 시작
				UPickupFactorySubsystem* pickupFactory = world->GetSubsystem<UPickupFactorySubsystem>();
				for (int32 i = 0; i < invenOp->Count; i++)
				{
					FVector location = spawnLocation + FVector::UpVector * 100.0f;
					FVector2D randCircle = FMath::RandPointInCircle(30.0f);
					location.X += randCircle.X;
					location.Y += randCircle.Y;
					pickupFactory->SpawnPickup(invenOp->ItemData->ItemCode, location);
				}
			}
		}
	}
}

FReply UInventorySlotWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))	// 마우스 오른쪽 버튼 눌렸는지 확인
	{
		if (SlotData->ItemData)
		{
			UE_LOG(LogTemp, Log, TEXT("Widget %d Slot : Right click(%s)"), Index, *SlotData->ItemData->ItemName.ToString());
			OnSlotRightClick.ExecuteIfBound(Index);
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("Widget %d Slot : Right click(empty)"), Index);
		}
		return FReply::Handled();	// 이 마우스 클릭은 완료되었다라고 전달
	}
	else if(InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))	// 마우스 왼쪽 버튼 눌렸는지 확인
	{
		if (SlotData->ItemData)
		{
			return FReply::Handled().DetectDrag(TakeWidget(), EKeys::LeftMouseButton);
		}
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);	// 나는 처리안했다. 부모 or 다른 위젯이 처리할거다.
}

void UInventorySlotWidget::NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseEnter(InGeometry, InMouseEvent);

	FVector2D MousePos = UWidgetLayoutLibrary::GetMousePositionOnViewport(GetWorld());
	float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(GetWorld());
	MousePos *= ViewportScale;
	//MousePos += FVector2D(0.0f, -100.0f);


	DetailInfoWidget = CreateWidget<UDetailInfoWidget>(this, TargetInventory->GetDetailInfoWidget());


	if (DetailInfoWidget && this->SlotData->ItemData) {
		DetailInfoWidget->SetItemIcon(this->SlotData->ItemData->ItemIcon);
		DetailInfoWidget->SetItemNameText(this->SlotData->ItemData->ItemName);
		DetailInfoWidget->SetItemDescriptionText(this->SlotData->ItemData->ItemDescription);
		DetailInfoWidget->SetItemPriceText(this->SlotData->ItemData->ItemPrice);

		DetailInfoWidget->AddToViewport();
		DetailInfoWidget->SetPositionInViewport(MousePos);
	}	
}

void UInventorySlotWidget::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);
	DetailInfoWidget->RemoveFromParent();
}
