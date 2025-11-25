// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Common/CommonEnums.h"
#include "DropItemDataTableRow.generated.h"
class APickup;
/**
 * 
 */

USTRUCT(BlueprintType)
struct FDropItemDataTableRow : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<EItemCode, TSubclassOf<APickup>> DropItemInfo;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0", ClampMax = "1"))
	float DropRate = 1.0f;

};
