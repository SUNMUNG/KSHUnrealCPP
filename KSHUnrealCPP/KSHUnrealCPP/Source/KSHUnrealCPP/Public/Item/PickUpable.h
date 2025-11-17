// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PickUpable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPickUpable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class KSHUNREALCPP_API IPickUpable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//아이템을 주웠을 때  호출할 함수
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PickUp")
	void OnPickUp(AActor* Target);
	
};
