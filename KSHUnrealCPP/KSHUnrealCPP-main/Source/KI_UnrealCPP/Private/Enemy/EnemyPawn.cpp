// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyPawn.h"
#include "Framework/DamagePopupSubsystem.h"
#include "Framework/PracticeEnemyCountSubSystem.h"
#include "Enemy/DamagePopUpActor.h"
// Sets default values
AEnemyPawn::AEnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
	PopupLocation = CreateDefaultSubobject<USceneComponent>(TEXT("PopupLocation"));
	PopupLocation->SetupAttachment(Mesh);
	PopupLocation->SetRelativeLocation(FVector(0, 0, 100.0f));
}

// Called when the game starts or when spawned
void AEnemyPawn::BeginPlay()
{
	Super::BeginPlay();
	OnTakeAnyDamage.AddDynamic(this,&AEnemyPawn::OnTakeDamage);

	UPracticeEnemyCountSubSystem* EnemycountSystem = GetWorld()->GetSubsystem<UPracticeEnemyCountSubSystem>();
	EnemycountSystem->ShowEnemyCount();
}

void AEnemyPawn::OnTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	UDamagePopupSubsystem* popupSystem = GetWorld()->GetSubsystem<UDamagePopupSubsystem>();
	UPracticeEnemyCountSubSystem* EnemycountSystem = GetWorld()->GetSubsystem<UPracticeEnemyCountSubSystem>();
	popupSystem->ShowDamagePopup(Damage, PopupLocation->GetComponentLocation());
	
	EnemycountSystem->ShowEnemyCount();
	//UE_LOG(LogTemp, Warning, TEXT("OnTakeDamage함수"));
	//ADamagePopUpActor* actor = GetWorld()->SpawnActor<ADamagePopUpActor>(
	//	DamagePopupclass,
	//	PopupLocation->GetComponentToWorld()
	//);

	//if (actor) {
	//	actor->PopupActivate(Damage);
	//	//UE_LOG(LogTemp, Warning, TEXT("actor 스폰"));
	//}
	//else {
	//	//UE_LOG(LogTemp, Warning, TEXT("actor 스폰 실패"));
	//}
}

// Called to bind functionality to input
void AEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

