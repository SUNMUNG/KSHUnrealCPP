// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ActionCharacterAnimtion.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UActionCharacterAnimtion::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	OwnerPawn = TryGetPawnOwner();
	
}

void UActionCharacterAnimtion::NativeUpdateAnimation(float deltatime)
{
	Super::NativeUpdateAnimation(deltatime);

	CharacterInit();
	SpeedCheck();

}

void UActionCharacterAnimtion::SpeedCheck()
{
	if (IsValid(CharacterMovement)) {
		if (CharacterMovement->GetLastInputVector().Length() > 0) {
			bisWalk = true;
		}
		else {
			bisWalk = false;
		}
	}
}

void UActionCharacterAnimtion::CharacterInit()
{
	if (IsValid(OwnerPawn)) {

		OwnerCharacter = Cast<ACharacter>(OwnerPawn);
		
		if (IsValid(OwnerCharacter)) {
			CharacterMovement = OwnerCharacter->GetCharacterMovement();
		}
		else {
			OwnerPawn = TryGetPawnOwner();
			OwnerCharacter = Cast<ACharacter>(OwnerPawn);
		}


	}
	else {
		OwnerPawn = TryGetPawnOwner();
	}
}
	
