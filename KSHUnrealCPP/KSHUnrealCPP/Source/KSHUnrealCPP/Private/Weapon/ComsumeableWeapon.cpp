// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/ComsumeableWeapon.h"

void AComsumeableWeapon::OnAttack()
{
	RemainingUseCount--;
	if (RemainingUseCount <= 0) {
		OnWeaponUseEnded.Broadcast();
	}
}

void AComsumeableWeapon::OnWeaponPickuped(AActionCharacter* InOwner)
{
	Super::OnWeaponPickuped(InOwner);

	RemainingUseCount = MaxUseCount;
}
