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
	UPROPERTY(Config, EditAnywhere, Category = "PickUpFactory")
	TSoftObjectPtr<UDataTable> DropItemTable = nullptr;
};
