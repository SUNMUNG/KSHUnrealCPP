// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraPractice.generated.h"

UCLASS()
class KI_UNREALCPP_API ANiagaraPractice : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANiagaraPractice();

	UFUNCTION(BlueprintCallable)
	void TestColorChange(const FLinearColor& InColor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;


	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Root = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<class UBoxComponent> Collision = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<class UNiagaraComponent> Effect = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DamageType")
	TSubclassOf<UDamageType> DamageType = nullptr;
};
