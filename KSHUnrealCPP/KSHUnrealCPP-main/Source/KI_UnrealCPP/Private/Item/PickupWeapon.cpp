// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/PickupWeapon.h"
#include "Player/InventoryOwner.h"

void APickupWeapon::OnPickupComplete_Implementation()
{
	// 자신을 먹은 대상에게 자기가 가지고 있는 무기를 알려줘야 함
	if (PickupOwner.IsValid() && PickupOwner->Implements<UInventoryOwner>())
	{
		IInventoryOwner::Execute_AddWeapon(PickupOwner.Get(), PickupWeapon, UseCount);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("OnPickupComplete_Implementaion : IsValid"));
	}

	Super::OnPickupComplete_Implementation();
}


