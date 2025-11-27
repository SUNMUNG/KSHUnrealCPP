// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Pickup.h"
#include "PickupItem.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API APickupItem : public APickup
{
	GENERATED_BODY()
	
	virtual void OnPickupComplete_Implementation() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DataAsset")
	TObjectPtr<class UItemDataAsset> ItemDataAsset = nullptr;
};
