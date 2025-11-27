// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/PickupConsume.h"

void APickupConsume::OnPickupComplete_Implementation()
{
	OnConsume();

	Super::OnPickupComplete_Implementation();
}

//void APickupConsume::OnConsume_Implementation(AActor* Target)
//{
//	UE_LOG(LogTemp, Warning, TEXT("OnConsume_Implementation 실행 : %s  : %s"), *Target->GetName(),*this->GetName());
//
//}

//FName
//FString
//Texture2D
//int
//int
//APickupItem클래스