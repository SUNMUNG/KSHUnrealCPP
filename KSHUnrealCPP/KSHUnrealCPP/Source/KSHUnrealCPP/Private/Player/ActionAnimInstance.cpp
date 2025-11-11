// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ActionAnimInstance.h"
#include "GameFramework/PawnMovementComponent.h"



void UActionAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	APawn* OwnerPawn = TryGetPawnOwner();

	
	if (IsValid(OwnerPawn)) {
		OwnerMovementComponent = OwnerPawn->GetMovementComponent();
	}
}

void UActionAnimInstance::NativeUpdateAnimation(float deltatime)
{
	Super::NativeUpdateAnimation(deltatime);

	if (OwnerMovementComponent.IsValid()) {
		Speed = OwnerMovementComponent.Get()->Velocity.Size();
	}

	
}
