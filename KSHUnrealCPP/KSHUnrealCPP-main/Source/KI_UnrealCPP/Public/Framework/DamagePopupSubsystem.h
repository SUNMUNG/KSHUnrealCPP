// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DamagePopupSubsystem.generated.h"


class ADamagePopUpActor;
/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UDamagePopupSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	UFUNCTION(BlueprintCallable, Category = "Damage Popup pool")
	void ShowDamagePopup(float Damage, const FVector& Location);

	void ReturnToPool(ADamagePopUpActor* ReturnActor);

protected:
	UPROPERTY()
	TSubclassOf<ADamagePopUpActor> Popupclass = nullptr;

private:
	UPROPERTY(Transient)
	TArray<TObjectPtr<ADamagePopUpActor>> Pool;
};
