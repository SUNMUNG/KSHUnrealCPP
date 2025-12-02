// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/Usable/UsableItemDataAsset.h"
#include "UsableItemDataAsset_Pouch.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UUsableItemDataAsset_Pouch : public UUsableItemDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ItemData|Pouch")
	int32 MoneyAmount = 0;

private:

	int32 MinMoney=100;

	int32 MaxMoney=300;

public:
	virtual void UseItem_Implementation(AActor* InTarget) override;
};
