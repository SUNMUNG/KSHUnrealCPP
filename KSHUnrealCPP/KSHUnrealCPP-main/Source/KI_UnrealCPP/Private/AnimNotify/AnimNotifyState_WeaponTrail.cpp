// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ActionCharacter.h"
#include "AnimNotify/AnimNotifyState_WeaponTrail.h"

void UAnimNotifyState_WeaponTrail::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	if (!OwnerCharacter.IsValid()) {
		OwnerCharacter = Cast<AActionCharacter>(MeshComp->GetOwner());
	}

	if (OwnerCharacter.IsValid()) {
		OwnerCharacter->OnWeaponTrailEnable(true);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("OwnerCharacter 없음"));
	}
}

void UAnimNotifyState_WeaponTrail::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (OwnerCharacter.IsValid()) {
		OwnerCharacter->OnWeaponTrailEnable(false);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("OwnerCharacter 없음"));
	}
}
