// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamagePopUpActor.generated.h"

UCLASS(Blueprintable)
class KI_UNREALCPP_API ADamagePopUpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamagePopUpActor();

	UFUNCTION(BlueprintCallable)
	void PopupActivate(float Damage = 1.0f);

	UFUNCTION(BlueprintCallable)
	void PopupDeActivate();
protected:

	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Setting", meta = (ClampMin = "1.0"))
	float Lifetime=1.1f;
protected:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "DamageWidget")
	TObjectPtr<class UWidgetComponent> DamageWidgetComponent = nullptr;

private:
	TObjectPtr<class UDamageWidget>  DamageWidget =nullptr;

	FTimerHandle LifeTimerHandle;

};
