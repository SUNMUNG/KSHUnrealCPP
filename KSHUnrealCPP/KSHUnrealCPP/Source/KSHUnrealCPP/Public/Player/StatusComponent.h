// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KSHUNREALCPP_API UStatusComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatusComponent();

	float GetAttackPower();
	float GetDefaultStamina();
	float GetDefaultHealth();



protected:
	//힘
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status", meta = (ClampMin = "0", ClampMax = "20"))
	float Strength = 10;
	//민첩
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status", meta = (ClampMin = "0", ClampMax = "20"))
	float Agility = 20;
	//생명력
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status", meta = (ClampMin = "0", ClampMax = "20"))
	float Vitality = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status", meta = (ClampMin = "0", ClampMax = "20"))
	float Stamina = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status", meta = (ClampMin = "0", ClampMax = "20"))
	float Health = 0;


	//공격력 모디파이어
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Modifier")
	float AttackModifier = 1.0f;

};
