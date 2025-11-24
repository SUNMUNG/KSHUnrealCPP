// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/DamagePopUpActor.h"
#include "Engine/DeveloperSettings.h"
#include "DamagePopupSettings.generated.h"

/**
 * 
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Damage Popup Settings"))
class KI_UNREALCPP_API UDamagePopupSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(Config, EditAnywhere, Category = "UI")
	TSoftClassPtr<ADamagePopUpActor> DamagePopupClass = nullptr;

};
