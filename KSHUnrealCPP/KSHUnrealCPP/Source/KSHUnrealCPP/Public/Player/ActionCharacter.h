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
	void StaminaRegenTimerSet();
	void StaminaRegenPerTick();
	void Runtime();
private:

public:

protected:

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

	// 현재 스태미너
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Resource")
	float CurrentStamina = 100.0f;

	// 최대 스태미너
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Resource")
	float MaxStamina = 100.0f;

	// 달리기 상태일 때 초당 스테미너 비용
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Resource")
	float SprintStaminaRate = 20.0f;

	// 플레이어가 뛰고 있는 중인지 표시 해놓은 변수
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player|State")
	bool bisSprint = false;

	//구르기 스태미나 소모량
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Resource")
	float RollStamina = 30.0f;

	//스태미나 자동 회복에 걸리는 시간
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Resource")
	float HealStaminaTime = 3.0f;

	// 스태미나 회복량
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float HealRate = 0.01f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UAnimMontage> RollMontage = nullptr;
	
	
private:
	UPROPERTY()
	TWeakObjectPtr<UAnimInstance> AnimInstance = nullptr;

	FTimerHandle StaminaCoolTimer;
	FTimerHandle StaminaRegenTimer;

	float RDeltatime = 0.0f;
	float bRegenStamina = false;

	
};
