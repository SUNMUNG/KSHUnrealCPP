// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/ActionCharacter.h"
#include "AnimNotify/AnimNotify_CameraShake.h"

void UAnimNotify_CameraShake::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	if (!OwnerCharacter.IsValid()) {
		OwnerCharacter = Cast<AActionCharacter>(MeshComp->GetOwner());

	}


	if (OwnerCharacter.IsValid()) {
		OwnerCharacter->OnAreaAttack();
	}

}