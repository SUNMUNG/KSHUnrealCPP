// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/ActionCharacter.h"
#include "Camera/CameraShakeBase.h"
#include "AnimNotify/AnimNotify_CameraShake.h"

void UAnimNotify_CameraShake::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	//if (!OwnerCharacter.IsValid()) {
	//	OwnerCharacter = Cast<AActionCharacter>(MeshComp->GetOwner());

	//}
	//


	//if (OwnerCharacter.IsValid()) {
	//	OwnerCharacter->OnAreaAttack();
	//}

	UWorld* world = GetWorld();
	if (!CameraManager.IsValid()) {
		if (world) {
			CameraManager = world->GetFirstPlayerController()->PlayerCameraManager;
		}
		
	}


	if (CameraShake && CameraManager.IsValid()) {
		CameraManager->StartCameraShake(CameraShake);
	}

}