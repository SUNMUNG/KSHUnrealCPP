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

	if (Pool.Num() > 0) {
		//풀에 사용가능한 액터가 있다
		selected = Pool.Pop();
		selected->SetActorHiddenInGame(false);

	}
	else {
		//풀에 사용가능한 액터가 없다
		if (Popupclass && GetWorld()) {
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = nullptr;
			spawnParams.ObjectFlags = RF_Transient;
			selected = GetWorld()->SpawnActor<ADamagePopUpActor>(
				Popupclass,
				FVector::ZeroVector,
				FRotator::ZeroRotator,
				spawnParams
			);
//에디터에서만 처리되는 전처리기
#if WITH_EDITOR
			//월드 아웃라이너에서 pool이라는 폴더에 모아줌
			selected->SetFolderPath(FName("Pool"));
#endif
			if (selected) {
				selected->SetActorLocation(Location);
				selected->PopupActivate(Damage);
			}
		}
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
