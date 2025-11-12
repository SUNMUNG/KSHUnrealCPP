// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ResourceComponent.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UResourceComponent::UResourceComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UResourceComponent::BeginPlay()
{
	Super::BeginPlay();

	// 게임 진행 중에 자주 변경되는 값은 시작 시점에서 리셋을 해주는 것이 좋다.
	SetCurrentStamina(MaxStamina);
	

}


// Called every frame
void UResourceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

void UResourceComponent::AddStamina(float InValue)
{
	// 스태미너 변경 처리
	StaminaAutoRegenCoolTimerSet();
	SetCurrentStamina(FMath::Clamp(CurrentStamina+InValue, 0, MaxStamina));

	if (CurrentStamina <= 0)
	{
		// 델리게이트로 스태미너가 떨어졌음을 알림
		OnStaminaEmpty.Broadcast();
	}
}

void UResourceComponent::AddHealth(float InValue)
{
	float health = CurrentHealth + InValue;
	CurrentHealth = FMath::Clamp(CurrentHealth, 0, MaxHealth);
	OnHealthChanged.Broadcast(CurrentHealth, MaxHealth);

	if (!IsAlive())
	{
		Ondie.Broadcast();
	}

	
}

void UResourceComponent::StaminaAutoRegenCoolTimerSet()
{
	UWorld* world = GetWorld();
	FTimerManager& timerManager = world->GetTimerManager();

	//GetWorldTimerManager().ClearTimer(StaminaCoolTimer);	// 해서 나쁠 것은 없음(SetTimer할 때 이미 내부적으로 처리하고 있다)
	timerManager.SetTimer(
		StaminaAutoRegenCoolTimer,
		[this]() {
			//bRegenStamina = true;
			UE_LOG(LogTemp, Log, TEXT("리젠 타이머 실행"));

			UWorld* world = GetWorld();
			FTimerManager& timerManager = world->GetTimerManager();
			timerManager.SetTimer(
				StaminaRegenTickTimer,
				this,
				&UResourceComponent::StaminaRegenPerTick,
				StaminaTickInterval,	// 실행 간격
				true,	// 반복 재생 여부
				StaminaTickInterval);	// 첫 딜레이
		},
		StaminaRegenCoolTime,
		false);
}

void UResourceComponent::StaminaRegenPerTick()
{
	float stamina = CurrentStamina +StaminaRegenAmountPerTick;
		// 틱당 10
	if (stamina > MaxStamina)
	{
		stamina = MaxStamina;
		UWorld* world = GetWorld();
		FTimerManager& timerManager = world->GetTimerManager();
		timerManager.ClearTimer(StaminaRegenTickTimer);
	}

	SetCurrentStamina(stamina);

	UE_LOG(LogTemp, Warning, TEXT("Stamina Regen : %.1f"), CurrentStamina);
}

void UResourceComponent::TimerClear()
{
	UWorld* world = GetWorld();
	FTimerManager& timerManager = world->GetTimerManager();

	timerManager.ClearTimer(StaminaRegenTickTimer);
}
