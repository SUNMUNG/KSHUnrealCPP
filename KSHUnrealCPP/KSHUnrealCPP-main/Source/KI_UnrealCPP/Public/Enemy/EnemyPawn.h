// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnemyPawn.generated.h"

UCLASS(Blueprintable)
class KI_UNREALCPP_API AEnemyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
private:
	UFUNCTION()
	void OnTakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
		class AController* InstigatedBy, AActor* DamageCauser);

	void OnDie();
public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "component")
	TObjectPtr<UStaticMeshComponent> Mesh = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "component")
	TObjectPtr<USceneComponent> PopupLocation = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componenets")
	TObjectPtr<class UResourceComponent> Resource = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Popup")
	TSubclassOf<class ADamagePopUpActor> DamagePopupclass = nullptr;
private:
	bool bInvincible = false;
	FTimerHandle InvincibleTimer;
	float LastDamage = 0.0f;
};
