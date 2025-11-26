// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Common/CommonEnums.h"
#include "PickupFactorySubsystem.generated.h"

class APickup;
class AEnemyPawn;
class UDataTable;
/**
 * 
 */

UCLASS()
class KI_UNREALCPP_API UPickupFactorySubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	//실습 연습
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
	//실습 연습
	void DropPickupItem(EItemCode ItemCode, UDataTable* DropTable,FVector SpawnLocation);

	//실습 풀이
	UFUNCTION(BlueprintCallable, Category = "Pickup Factoy")
	APickup* SpawnPickup(EItemCode InCode,FVector InLocation = FVector::ZeroVector,FRotator InRotator = FRotator::ZeroRotator);
private:
	//실습 연습
	UPROPERTY()
	TObjectPtr<class UDataTable> DropItemTable = nullptr;


	//실습 풀이
	UPROPERTY()
	TMap<EItemCode, TSubclassOf<APickup>> PickupClasses;

	void LoadPickClassesMap();
};
