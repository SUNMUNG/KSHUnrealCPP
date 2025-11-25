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
	void DropPickupItem(EItemCode ItemCode, UDataTable* DropTable,FVector SpawnLocation);
private:


};
