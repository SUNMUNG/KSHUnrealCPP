// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/PickupFactorySubsystem.h"
#include "Data/DropItemDataTableRow.h"
#include "Item/Pickup.h"


void UPickupFactorySubsystem::DropPickupItem(EItemCode ItemCode, UDataTable* DropTable, FVector SpawnLocation)
{
	UE_LOG(LogTemp, Warning, TEXT("DropPickupItem 실행"));
	if (UWorld* world = GetWorld()) {

		TMap<FName, uint8*>RowMap = DropTable->GetRowMap();

		for (const auto element : RowMap) {
			FDropItemDataTableRow* row = (FDropItemDataTableRow*)element.Value;
			
			if (TSubclassOf<APickup>* FoundValue = row->DropItemInfo.Find(ItemCode)) {
				world->SpawnActor<APickup>(*FoundValue, SpawnLocation+FVector::UpVector * 200.0f, FRotator());
				UE_LOG(LogTemp, Warning, TEXT("생성 실행"));
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("생성 미실행"));
			}
			
		}
	}
}
