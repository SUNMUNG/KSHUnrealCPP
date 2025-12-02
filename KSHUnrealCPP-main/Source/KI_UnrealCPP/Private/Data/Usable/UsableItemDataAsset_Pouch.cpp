// Fill out your copyright notice in the Description page of Project Settings.


#include "Data/Usable/UsableItemDataAsset_Pouch.h"
#include "Player/InventoryOwner.h"
#include "Player/ActionCharacter.h"

void UUsableItemDataAsset_Pouch::UseItem_Implementation(AActor* InTarget)
{
	MoneyAmount = FMath::RandRange(MinMoney, MaxMoney);
	/*AActionCharacter* player = Cast<AActionCharacter>(InTarget);

	if (player) {
		player->AddMoney_Implementation(MoneyAmount);
	}*/

	if (InTarget->Implements<UInventoryOwner>()) {
		IInventoryOwner::Execute_AddMoney(InTarget, MoneyAmount);
	}
}
