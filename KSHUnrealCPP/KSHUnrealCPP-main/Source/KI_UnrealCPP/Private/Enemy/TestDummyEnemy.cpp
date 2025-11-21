// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/TestDummyEnemy.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"

// Sets default values
ATestDummyEnemy::ATestDummyEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	Collision= CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	SetRootComponent(Collision);
	Collision->SetCollisionProfileName(TEXT("Pawn"));

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Collision); 
	Mesh->SetCollisionProfileName(TEXT("NoCollision"));

	DamageWidget= CreateDefaultSubobject<UWidgetComponent>(TEXT("DamageWidget"));
	DamageWidget->SetupAttachment(Collision);

	
}

float ATestDummyEnemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	UE_LOG(LogTemp, Warning, TEXT("%.1f 데미지를 받음"), DamageAmount);
	if (Health > 0) {
		Health -= DamageAmount;
		DamageWidget->SetHiddenInGame(false);
		SetDamageText(DamageAmount, GetActorLocation());
	}
	else {
		Health = 0;
	}
	UE_LOG(LogTemp, Warning, TEXT("%.1f 남은 적 체력"), Health);
	return 0.0f;
}

// Called when the game starts or when spawned
void ATestDummyEnemy::BeginPlay()
{
	Super::BeginPlay();
	DamageWidget->SetHiddenInGame(true);
	
}


// Called to bind functionality to input
void ATestDummyEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

