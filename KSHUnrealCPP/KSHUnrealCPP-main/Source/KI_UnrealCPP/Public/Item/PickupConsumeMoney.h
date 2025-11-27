// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/PickupConsume.h"
#include "PickupConsumeMoney.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API APickupConsumeMoney : public APickupConsume
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	int32 Money=100;

protected:
	virtual void OnConsume() override;
};
