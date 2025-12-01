// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/MainHudWidget.h"
#include "MainHUD.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API AMainHUD : public AHUD
{
	GENERATED_BODY()


public:
	inline UMainHudWidget* GetMainWidget() {
		return MainWidgetInstance;
	}
protected:
	virtual void BeginPlay() override;

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UMainHudWidget> MainWidgetClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UMainHudWidget> MainWidgetInstance = nullptr;
	
};
