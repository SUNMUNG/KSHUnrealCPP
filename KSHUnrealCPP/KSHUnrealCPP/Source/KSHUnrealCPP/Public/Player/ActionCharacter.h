// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "ActionCharacter.generated.h"
class UInputAction;
class USpringArmComponent;
class UCameraComponent;
UCLASS()
class KSHUNREALCPP_API AActionCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AActionCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	void OnMoveInput(const FInputActionValue& Invalue);
	

	void SetSprintMode();
	void SetWalkMode();

	void SetSprintModeF();
	void SetWalkModeF();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* SpringArm = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TObjectPtr<UInputAction> IA_Move= nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UInputAction> IA_Sprint= nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadOnly)

	float SprintSpeed = 1200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)

	float WalkSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Speed = 5;

	float time = 0.0f;
};
