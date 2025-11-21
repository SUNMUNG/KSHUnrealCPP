// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/AnimNotify_AreaDamage.h"
#include "Player/ActionCharacter.h"

void UAnimNotify_AreaDamage::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	if (!OwnerCharacter.IsValid()) {
		OwnerCharacter = Cast<AActionCharacter>(MeshComp->GetOwner());

	}


	if (OwnerCharacter.IsValid()) {
		OwnerCharacter->OnAreaAttack();
	}

}
