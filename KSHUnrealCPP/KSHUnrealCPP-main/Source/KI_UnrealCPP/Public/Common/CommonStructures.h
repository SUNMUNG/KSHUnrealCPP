// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonStructures.generated.h"

USTRUCT(BlueprintType)
struct FTestStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 DataA = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DataB = 15.5f;
};

USTRUCT(BlueprintType)
struct FItemDropInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DropItems")
	TArray<TSubclassOf<class APickup>> DropItems;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DropItems")
	TArray<float> DropRate;
};

