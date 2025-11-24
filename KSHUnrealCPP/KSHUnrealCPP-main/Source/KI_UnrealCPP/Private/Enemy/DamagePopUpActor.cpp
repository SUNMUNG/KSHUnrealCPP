// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/DamagePopUpActor.h"
#include "Widget/DamageWidget.h"
#include "Framework/DamagePopupSubsystem.h"
#include "Components/WidgetComponent.h"

// Sets default values
ADamagePopUpActor::ADamagePopUpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	DamageWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("DamageWidgetComponent"));
	SetRootComponent(DamageWidgetComponent);

	DamageWidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
	DamageWidgetComponent->SetDrawAtDesiredSize(true);

}

void ADamagePopUpActor::PopupActivate(float Damage)
{
	if (DamageWidget) {
		UE_LOG(LogTemp, Warning, TEXT("DamageWidget"));
		DamageWidget->SetDamageTextBlock(Damage);
		DamageWidget->PlayPopupAnimation();
	}
	
	GetWorldTimerManager().SetTimer(
		LifeTimerHandle,
		this,
		&ADamagePopUpActor::PopupDeActivate,
		Lifetime,
		false
		);
}

void ADamagePopUpActor::PopupDeActivate()
{
	if (UWorld* world = GetWorld()) {
		if (UDamagePopupSubsystem* PoolSystem = world->GetSubsystem<UDamagePopupSubsystem>()) {
			PoolSystem->ReturnToPool(this);
		}
		else {
			Destroy();
		}
	}
	else {
		Destroy();
	}
}


void ADamagePopUpActor::BeginPlay()
{
	Super::BeginPlay();

	if (DamageWidgetComponent) {
		UE_LOG(LogTemp, Warning, TEXT("DamageWidget valid"));
		DamageWidget = Cast<UDamageWidget>(DamageWidgetComponent->GetUserWidgetObject());
	}
}

void ADamagePopUpActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

}



