// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/DamagePopupSubsystem.h"
#include "Settings/DamagePopupSettings.h"
#include "Enemy/DamagePopUpActor.h"

void UDamagePopupSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	const UDamagePopupSettings* settings = GetDefault<UDamagePopupSettings>();

	if (settings && !settings->DamagePopupClass.IsNull()) {
		Popupclass = settings->DamagePopupClass.LoadSynchronous();
	}
	
}

void UDamagePopupSubsystem::ShowDamagePopup(float Damage, const FVector& Location)
{
	ADamagePopUpActor* selected = nullptr;

	if (Pool.Num() > 0)
	{
		// 풀에 사용가능한 액터가 있다.
		selected = Pool.Pop();
		selected->SetActorHiddenInGame(false);
	}
	else
	{
		// 풀에 사용가능한 액터가 없다.
		if (Popupclass && GetWorld())
		{
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = nullptr;
			spawnParams.ObjectFlags = RF_Transient;	// 레벨 저장할 때 포함 안되게 설정

			selected = GetWorld()->SpawnActor<ADamagePopUpActor>(
				Popupclass, FVector::ZeroVector, FRotator::ZeroRotator, spawnParams);
#if WITH_EDITOR
			selected->SetFolderPath(FName("Pool"));	// 월드 아웃라이너에서 Pool이라는 폴더 아래에 생성한 액터를 놓는다.
#endif
		}
	}

	if (selected)
	{
		selected->SetActorLocation(Location);	// 위치설정
		selected->PopupActivate(Damage);		// 활성화
	}
}

void UDamagePopupSubsystem::ReturnToPool(ADamagePopUpActor* ReturnActor)
{
	if (IsValid(ReturnActor)) {
		UE_LOG(LogTemp, Warning, TEXT("ReturnToPool 실행"));
		ReturnActor->SetActorHiddenInGame(true);
		Pool.Add(ReturnActor);
	}
}
