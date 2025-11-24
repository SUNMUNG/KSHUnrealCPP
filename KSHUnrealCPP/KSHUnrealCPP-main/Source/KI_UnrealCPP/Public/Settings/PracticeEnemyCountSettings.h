// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/EnemyPawn.h"
#include "Engine/DeveloperSettings.h"
#include "PracticeEnemyCountSettings.generated.h"

/**
 * 
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Practice Enemy Count Settings"))
class KI_UNREALCPP_API UPracticeEnemyCountSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	UPROPERTY(Config, EditAnywhere, Category = "EnemyPawn")
	TSoftClassPtr<AEnemyPawn> EnemyPawn = nullptr;
};
