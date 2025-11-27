// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Pickup.h"
#include "Item/ConsumableItem.h"
#include "PickupConsume.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API APickupConsume : public APickup
{
	GENERATED_BODY()
	
public:
	virtual void OnPickupComplete_Implementation() override;

	virtual void OnConsume() {};
	//virtual void OnConsume_Implementation(AActor* Target) override;

};
