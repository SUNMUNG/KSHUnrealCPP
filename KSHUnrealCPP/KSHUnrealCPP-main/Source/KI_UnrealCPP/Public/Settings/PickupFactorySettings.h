// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/DataTable.h"
#include "PickupFactorySettings.generated.h"

/**
 * 
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Pickup Factory Settings"))
class KI_UNREALCPP_API UPickupFactorySettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	//실습 연습
	UPROPERTY(Config, EditAnywhere, Category = "PickUpFactory")
	TSoftObjectPtr<UDataTable> DropItemTable = nullptr;

	//실습 풀이
	UPROPERTY(Config, EditAnywhere, Category = "Pickup Data")
	TSoftObjectPtr<UDataTable> PickupDataTable = nullptr;
};
