// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/PickupFactorySubsystem.h"
#include "Settings/PickupFactorySettings.h"
#include "Data/DataTableRow.h"
#include "Item/Pickup.h"


void UPickupFactorySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	
	Super::Initialize(Collection);

	//실습 연습
	const UPickupFactorySettings* settings = GetDefault<UPickupFactorySettings>();

	if (settings && !settings->DropItemTable.IsNull()) {
		DropItemTable = settings->DropItemTable.LoadSynchronous();
	}

	//실습 풀이
	LoadPickClassesMap();

}

//실습 연습
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

//실습 풀이
APickup* UPickupFactorySubsystem::SpawnPickup(EItemCode InCode, FVector InLocation, FRotator InRotator)
{
	APickup* spawnedPickup = nullptr;
	if (PickupClasses.Contains(InCode)) {
		if (UWorld* world = GetWorld()) {
			spawnedPickup = world->SpawnActor<APickup>(PickupClasses[InCode], InLocation, InRotator);

			FVector velocity = FMath::VRand() * 300.0f;
			spawnedPickup->AddImpulse(velocity);
		}
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("SpawnPickup : PickupClasses 에 설정되지 않은 아이템"));
	}
	return spawnedPickup;
}

//실습 풀이
void UPickupFactorySubsystem::LoadPickClassesMap()
{
	const UPickupFactorySettings* settings = GetDefault<UPickupFactorySettings>();

	if (settings && !settings->DropItemTable.IsNull()){
		UDataTable* dataTable = settings->PickupDataTable.LoadSynchronous();

		if (dataTable) {
			//TMap<FName, uint8*> RowMap = dataTable->GetRowMap();

			TArray<FPickData_TableRow*> allRows;
			dataTable->GetAllRows(TEXT("PickupDataTable"), allRows);
			for (const FPickData_TableRow* row : allRows) {
				if (PickupClasses.Contains(row->PickupCode)) {
					UE_LOG(LogTemp, Warning, TEXT("키값이 중복 : 이전값이 덮어씌어집니다."));
				}
				PickupClasses.Add(row->PickupCode, row->PickupClass);
			}
			UE_LOG(LogTemp, Log, TEXT("로딩 완료"));
		}
		else {
			UE_LOG(LogTemp, Error, TEXT("PickupDataTable : NUll"));
		}
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("UPickupFactorySettings : NUll"));
	}
}
