// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/EnemyTrackingSubsystem.h"

void UEnemyTrackingSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogTemp, Warning, TEXT("EnemyTrackingSubsystem Initialize"));
	//CurrentEnemyCount = 0;
}

void UEnemyTrackingSubsystem::Deinitialize()
{
	Super::Deinitialize();

	UE_LOG(LogTemp, Warning, TEXT("EnemyTrackingSubsystem Deinitialize"));
}

void UEnemyTrackingSubsystem::RegistEnemy()
{
	CurrentEnemyCount++;
	OnEnemyCountChanged.Broadcast(CurrentEnemyCount);
}

void UEnemyTrackingSubsystem::UnregistEnemy()
{
	if (CurrentEnemyCount > 0) {
		CurrentEnemyCount--;
		OnEnemyCountChanged.Broadcast(CurrentEnemyCount);

		if (CurrentEnemyCount <= 0) {
			OnAllEnemyClear.Broadcast();
		}
	}
}
