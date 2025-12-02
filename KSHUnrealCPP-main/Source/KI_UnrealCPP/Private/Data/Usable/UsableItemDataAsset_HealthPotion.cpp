// Fill out your copyright notice in the Description page of Project Settings.


#include "Data/Usable/UsableItemDataAsset_HealthPotion.h"
#include "Player/HasHealth.h"

#include "Player/ActionCharacter.h"
#include "Player/ResourceComponent.h"

void UUsableItemDataAsset_HealthPotion::UseItem_Implementation(AActor* InTarget)
{
	if (InTarget->Implements<UHasHealth>())
	{
		IHasHealth::Execute_HealHealth(InTarget, HealAmount);
	}
}

//bool UUsableItemDataAsset_HealthPotion::UseItemPractice_Implementation(AActor* InTarget)
//{
//	AActionCharacter* player = Cast<AActionCharacter>(InTarget);
//
//	if (player->GetResourceComponent()->GetCurrentHealth() >= player->GetResourceComponent()->GetMaxHealth()) {
//		return false;
//	}
//	else {
//		if (InTarget->Implements<UHasHealth>())
//		{
//			IHasHealth::Execute_HealHealth(InTarget, HealAmount);
//			return true;
//		}
//	}
//
//	return false;
//
//	
//}
