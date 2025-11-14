// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponActor.generated.h"

UCLASS()
class KSHUNREALCPP_API AWeaponActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnWeaponBeginOverlap(AActor* OverlappedActor, AActor* otherActor);

public:
	UFUNCTION(BlueprintCallable)
	void AttackEnable(bool bEnable);

	virtual void PostInitializeComponents() override;

	UFUNCTION(BlueprintCallable)
	inline void SetWeaponOwner(AActionCharacter* InOwner) {
		WeaponOwner = InOwner;
	}
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Componenets")
	TObjectPtr<USkeletalMeshComponent> WeaponMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Componenets")
	TObjectPtr<class UCapsuleComponent> WeaponCollision = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	float Damage = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TSubclassOf<UDamageType> DamageType = nullptr;

private:
	TObjectPtr<class AActionCharacter> WeaponOwner = nullptr;
};
