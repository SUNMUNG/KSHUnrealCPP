// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ActionCharacterAnimtion.generated.h"

class UCharacterMovementComponent;
/**
 * 
 */
UCLASS()
class KSHUNREALCPP_API UActionCharacterAnimtion : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bisWalk =false;

protected:
	virtual void NativeInitializeAnimation() override; 

	virtual void NativeUpdateAnimation(float deltatime) override;

	void SpeedCheck();

	void CharacterInit();

private:
	UPROPERTY()
	APawn* OwnerPawn;
	UPROPERTY()
	ACharacter* OwnerCharacter;
	UPROPERTY()
	UCharacterMovementComponent* CharacterMovement;
};
