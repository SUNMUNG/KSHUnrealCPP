// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor2.generated.h"

UCLASS()
class KSHUNREALCPP_API AFloatingActor2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 스테틱메시 움직임 업데이트하는 함수
	virtual void OnFloatingMeshUpdate(float DeltaTime);


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	void MoveUpDownCos();
	UFUNCTION(BlueprintCallable)
	void MoveUpDown();
	UFUNCTION(BlueprintCallable)
	void RotateZ();

public:
	//시간
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float time = 0.0f; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ElapsedTime = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Speed = 10.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MoveHeight = 1000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SpinSpeed = 10.0f;
	bool Reverse = true;
protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> BodyMesh = nullptr;
};
