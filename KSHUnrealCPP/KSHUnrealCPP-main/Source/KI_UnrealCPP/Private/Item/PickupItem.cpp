// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/PickupItem.h"
#include "Data/ItemDataAsset.h"

void APickupItem::OnPickupComplete_Implementation()
{
	if (ItemDataAsset) {
		UE_LOG(LogTemp, Warning, TEXT("아이템 추가 : %s"), *ItemDataAsset->ItemName.ToString());
	}
	
}
