// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_CameraShake.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UAnimNotify_CameraShake : public UAnimNotify
{
	GENERATED_BODY()
public:

	virtual void Notify(USkeletalMeshComponent* MeshComp,
		UAnimSequenceBase* Animation) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CameraShake")
	TSubclassOf<class UCameraShakeBase> CameraShake = nullptr;
	

private:
	FVector WeaponCenterLocation;


	TWeakObjectPtr<class AActionCharacter> OwnerCharacter = nullptr;

	TWeakObjectPtr<APlayerCameraManager> CameraManager = nullptr;


};
