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

	void OnRollInput(const FInputActionValue& Invalue);
	

	void SetSprintMode();
	void SetWalkMode();
	void Runtime();

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

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UInputAction> IA_Roll = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadOnly)

	float SprintSpeed = 1200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)

	float WalkSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Speed = 5;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Stamina = 100;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UAnimMontage> RollMontage = nullptr;

	bool bisSprint = false;
	float RollStamina = 30.0f;
	float MaxStamina = 100.0f;
	float StaminaRate = 10.0f;
	float RDeltatime = 0.0f;
	float WalkStateTime = 0.0f;
	float HealStaminaTime = 3.0f;
private:
	UPROPERTY()
	TWeakObjectPtr<UAnimInstance> AnimInstance = nullptr;
};
