// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PracticeEnemyCountSubSystem.generated.h"


class AEnemyPawn;
/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UPracticeEnemyCountSubSystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	void ShowEnemyCount();

	void ReturnToPool();
protected:
	
	UPROPERTY()
	TSubclassOf<AEnemyPawn> EnemyPawn = nullptr;

	UPROPERTY()
	TArray<AActor*> CountArray;
private:
	UPROPERTY(Transient)
	TArray<TObjectPtr<AEnemyPawn>> Pool;

};
