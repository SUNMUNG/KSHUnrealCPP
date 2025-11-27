// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/PickupConsume.h"
#include "PickupConsumeHealthOrb.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API APickupConsumeHealthOrb : public APickupConsume
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Heal Amount")
	float HealAmount = 30.0f;

	virtual void OnConsume() override;
};
