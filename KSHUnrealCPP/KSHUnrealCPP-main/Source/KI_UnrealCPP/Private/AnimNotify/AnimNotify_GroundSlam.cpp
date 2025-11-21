// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ActionCharacter.h"
#include "Weapon/WeaponActor.h"
#include "AnimNotify/AnimNotify_GroundSlam.h"


void UAnimNotify_GroundSlam::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (!OwnerCharacter.IsValid()) {
		OwnerCharacter = Cast<AActionCharacter>(MeshComp->GetOwner());

		WeaponCenterLocation = OwnerCharacter->GetCurrentWeapon()->GetCollisionLocation();
	
	}
	

	if (OwnerCharacter.IsValid()) {
		//DrawDebugSphere(GetWorld(), WeaponCenterLocation, 200, 12, FColor::Red, false, 2.0f, 0, 1.0f);

	}

}
