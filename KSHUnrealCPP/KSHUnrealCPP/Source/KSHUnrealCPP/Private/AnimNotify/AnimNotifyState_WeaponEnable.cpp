// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/AnimNotifyState_WeaponEnable.h"
#include "Weapon/WeaponActor.h"
#include "Player/ActionCharacter.h"

void UAnimNotifyState_WeaponEnable::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp,Animation,TotalDuration,EventReference);
	if (!OwnerCharacter.IsValid()) {
		OwnerCharacter = Cast<AActionCharacter>(MeshComp->GetOwner());
	}

	


	if (OwnerCharacter.IsValid()) {
		//OwnerCharacter->GetWeapon()->AttackEnable(true);
		OwnerCharacter->OnEnableAttack(true);
	}
	

	

}

void UAnimNotifyState_WeaponEnable::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp,Animation,EventReference);
	if (OwnerCharacter.IsValid()) {
		//OwnerCharacter->GetWeapon()->AttackEnable(false);
		OwnerCharacter->OnEnableAttack(false);
	}
}
