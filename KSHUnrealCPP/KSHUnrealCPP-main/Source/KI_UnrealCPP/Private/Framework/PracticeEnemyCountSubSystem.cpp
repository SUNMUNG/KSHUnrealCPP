// Fill out your copyright notice in the Description page of Project Settings.

#include "Settings/PracticeEnemyCountSettings.h"
#include "Framework/PracticeEnemyCountSubSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy/EnemyPawn.h"

void UPracticeEnemyCountSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	const UPracticeEnemyCountSettings* settings = GetDefault<UPracticeEnemyCountSettings>();

	if (settings && !settings->EnemyPawn.IsNull()) {
		EnemyPawn = settings->EnemyPawn.LoadSynchronous();
	}

}

void UPracticeEnemyCountSubSystem::ShowEnemyCount()
{
	UGameplayStatics* gameplayStatics;
	gameplayStatics->GetAllActorsOfClass(GetWorld(), EnemyPawn, CountArray);
#if WITH_EDITOR

	for (int i = 0; i < CountArray.Num(); i++) {
		CountArray[i]->SetFolderPath(FName("EnemyPawn2"));
	}
	//selected->SetFolderPath(FName(""));
#endif
	UE_LOG(LogTemp, Warning, TEXT("Enemy Count : %d"), CountArray.Num());
}

void UPracticeEnemyCountSubSystem::ReturnToPool()
{
}
