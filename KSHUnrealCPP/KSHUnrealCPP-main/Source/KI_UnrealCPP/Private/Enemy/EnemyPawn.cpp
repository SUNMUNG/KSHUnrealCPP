// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyPawn.h"
#include "Framework/DamagePopupSubsystem.h"
#include "Framework/PracticeEnemyCountSubSystem.h"
#include "Framework/EnemyTrackingSubsystem.h"
#include "Data/DropItemDataTableRow.h"
#include "Player/ResourceComponent.h"
#include "Item/Pickup.h"
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

	Resource = CreateDefaultSubobject<UResourceComponent>(TEXT("Resource"));
}

// Called when the game starts or when spawned
void AEnemyPawn::BeginPlay()
{
	Super::BeginPlay();
	OnTakeAnyDamage.AddDynamic(this,&AEnemyPawn::OnTakeDamage);

	if (UWorld* world = GetWorld()) {
		if (UEnemyTrackingSubsystem* EnemyTracking = world->GetSubsystem<UEnemyTrackingSubsystem>()) {
			EnemyTracking->RegistEnemy();
		}
	}

	/*UPracticeEnemyCountSubSystem* EnemycountSystem = GetWorld()->GetSubsystem<UPracticeEnemyCountSubSystem>();
	EnemycountSystem->ShowEnemyCount();*/
}

void AEnemyPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (UWorld* world = GetWorld()) {
		if (UEnemyTrackingSubsystem* EnemyTracking = world->GetSubsystem<UEnemyTrackingSubsystem>()) {
			EnemyTracking->UnregistEnemy();
		}
	}
}

void AEnemyPawn::OnTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	UDamagePopupSubsystem* popupSystem = GetWorld()->GetSubsystem<UDamagePopupSubsystem>();
	//UPracticeEnemyCountSubSystem* EnemycountSystem = GetWorld()->GetSubsystem<UPracticeEnemyCountSubSystem>();

	if (!bInvincible || FMath::IsNearlyEqual(LastDamage,Damage)) {

		popupSystem->ShowDamagePopup(Damage, PopupLocation->GetComponentLocation());

		//EnemycountSystem->ShowEnemyCount();
		Resource->AddHealth(-Damage);
		UE_LOG(LogTemp, Warning, TEXT("%.1f"), Damage);
		bInvincible = true;
		LastDamage = Damage;

		/*FTimerDelegate resetInvincibleDelegate = FTimerDelegate::CreateWeakLambda(
			this,
			[this]()
			{
				bInvincible = false;
			}
		);*/


		GetWorldTimerManager().ClearTimer(InvincibleTimer);
		GetWorldTimerManager().SetTimer(
			InvincibleTimer,
			[this]() {
				bInvincible = false;
			},
			0.016f,
			false
		);
	}

	
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

void AEnemyPawn::OnDie()
{
	DropItems();
	Destroy();
}

void AEnemyPawn::DropItems()
{
	if (DropItemTable) {
		APickup* pickup = nullptr;
		TMap<FName, uint8*>RowMap = DropItemTable->GetRowMap();

		UE_LOG(LogTemp, Warning, TEXT("DropItemTable존재"));

		float totalweight = 0.0f;


		for (const auto& element : RowMap) {
			FDropItemDataTableRow* row = (FDropItemDataTableRow*)element.Value;
			totalweight += row->DropRate;
		}
		float RandomSelect = FMath::FRandRange(0, totalweight);
		float CurrentWeight = 0.0f;

		for (const auto& element : RowMap) {
			FDropItemDataTableRow* row = (FDropItemDataTableRow*)element.Value;
			CurrentWeight += row->DropRate;
			if (RandomSelect < CurrentWeight) {
				pickup = GetWorld()->SpawnActor<APickup>(row->DropItemClass, GetActorLocation() + FVector::UpVector * 200.0f,
					GetActorRotation());
				break;
			}
		}

		if (pickup) {
			UE_LOG(LogTemp, Warning, TEXT("pickup존재"));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("pickup존재X"));
		}
	}
}



// Called to bind functionality to input
void AEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyPawn::TestDropItem()
{
	DropItems();
}

