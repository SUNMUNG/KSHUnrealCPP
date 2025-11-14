// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpecialWeaponItem.generated.h"

UCLASS()
class KSHUNREALCPP_API ASpecialWeaponItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpecialWeaponItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	virtual void PostInitializeComponents() override;
	UFUNCTION()
	void OnItemBeginOverlap(AActor* OverlappedActor, AActor* otherActor);

private:

public:

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Componenets")
	TObjectPtr<USkeletalMeshComponent> ItemMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Componenets")
	TObjectPtr<class UCapsuleComponent> ItemCollision = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "OriginWeapon")
	TSubclassOf<class AWeaponActor> ThisWeaponItem = nullptr;

private:


};
