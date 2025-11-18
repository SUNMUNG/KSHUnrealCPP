// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponActor.h"
#include "ComsumeableWeapon.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponUseEnded);
/**
 * 
 */
UCLASS()
class KSHUNREALCPP_API AComsumeableWeapon : public AWeaponActor
{
	GENERATED_BODY()
	
public:
	virtual void OnAttack() override;

	virtual bool CanAttack() override {
		return RemainingUseCount > 0;
	}

	virtual void OnWeaponPickuped(AActionCharacter* InOwner) override;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	int32 MaxUseCount = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int32 RemainingUseCount = 3;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, Category = "Weapon")
	FOnWeaponUseEnded OnWeaponUseEnded;
};
