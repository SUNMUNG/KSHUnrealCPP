// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TestDummyEnemy.generated.h"

UCLASS()
class KI_UNREALCPP_API ATestDummyEnemy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATestDummyEnemy();

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "UI|Damage")
	void SetDamageText(float DamageAmount, FVector location);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mesh")
	TObjectPtr<USkeletalMeshComponent> Mesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Collision")
	TObjectPtr<class UCapsuleComponent> Collision = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CameraShake")
	float Damage = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DamageText")
	TSubclassOf<AActor> DamageText = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Helath")
	float Health =  200.0f;
};
