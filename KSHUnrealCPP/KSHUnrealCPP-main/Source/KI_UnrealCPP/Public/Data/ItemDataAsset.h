// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemDataAsset.generated.h"

class APickupItem;
/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UItemDataAsset : public UDataAsset
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
	FName ItemName = NAME_None;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
	FString ItemDetails = "None";

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
	TObjectPtr<UTexture2D> ItemThumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
	int ItemPrice = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data",meta = (ClampMin = "0", ClampMax = "99"))
	int ItemQuantity = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Data")
	TSubclassOf<APickupItem> PickupItemClass = nullptr;
};
