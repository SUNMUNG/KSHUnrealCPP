// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/PickupFactorySubsystem.h"
#include "Settings/PickupFactorySettings.h"
#include "Data/DropItemDataTableRow.h"
#include "Item/Pickup.h"


void UPickupFactorySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	
	Super::Initialize(Collection);

	const UPickupFactorySettings* settings = GetDefault<UPickupFactorySettings>();

	if (settings && !settings->DropItemTable.IsNull()) {
		DropItemTable = settings->DropItemTable.LoadSynchronous();
	}

	
}

void UPickupFactorySubsystem::DropPickupItem(EItemCode ItemCode, UDataTable* DropTable, FVector SpawnLocation)
{
	if (DropItemTable) {
		UE_LOG(LogTemp, Warning, TEXT("DropPickupItem 실행"));
		if (UWorld* world = GetWorld()) {

			TMap<FName, uint8*>RowMap = DropItemTable->GetRowMap();

			for (const auto element : RowMap) {
				FDropItemDataTableRow* row = (FDropItemDataTableRow*)element.Value;

				if (TSubclassOf<APickup>* FoundValue = row->DropItemInfo.Find(ItemCode)) {
					world->SpawnActor<APickup>(*FoundValue, SpawnLocation + FVector::UpVector * 200.0f, FRotator());
				}
			}
		}
	}
	
}
