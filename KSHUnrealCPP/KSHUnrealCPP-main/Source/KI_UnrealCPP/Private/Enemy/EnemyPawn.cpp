// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyPawn.h"
#include "Framework/DamagePopupSubsystem.h"
#include "Framework/PracticeEnemyCountSubSystem.h"
#include "Framework/PickupFactorySubsystem.h"
#include "Framework/EnemyTrackingSubsystem.h"
#include "Data/DataTableRow.h"
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

		Resource->AddHealth(-Damage);
		UE_LOG(LogTemp, Warning, TEXT("%.1f"), Damage);
		bInvincible = true;
		LastDamage = Damage;

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
}

void AEnemyPawn::OnDie()
{
	DropItems();
	Destroy();
}

void AEnemyPawn::DropItems()
{

	//if (DropItemTable)
	//{
	//	//TArray<FDropItemData_TableRow*> AllRows;
	//	//DropItemTable->GetAllRows<FDropItemData_TableRow>(TEXT("Rows"), AllRows);

	//	APickup* pickup = nullptr;
	//	TMap<FName, uint8*> RowMap = DropItemTable->GetRowMap();

	//	// 중복으로 당첨 가능(아무것도 안나올 수도 있음)
	//	for (const auto& element : RowMap)
	//	{
	//		pickup = nullptr;
	//		FDropItemDataTableRow* row = (FDropItemDataTableRow*)element.Value;
	//		if (FMath::FRand() <= row->DropRate)
	//		{
	//			//pickup = GetWorld()->SpawnActor<APickup>(
	//			//	row->DropItemClass,
	//			//	GetActorLocation() + FVector::UpVector * 200.0f,
	//			//	GetActorRotation());

	//		
	//			pickup = GetWorld()->GetSubsystem<UPickupFactorySubsystem>()->SpawnPickup(
	//				,
	//				GetActorLocation() + FVector::UpVector * 200.0f,
	//				GetActorRotation()
	//			);
	//		}
	//		if (pickup)
	//		{
	//			UE_LOG(LogTemp, Log, TEXT("Drop Success : %s"), *pickup->GetName());
	//		}
	//		else
	//		{
	//			UE_LOG(LogTemp, Log, TEXT("Drop empty"));
	//		}
	//	}
	//}
	UPickupFactorySubsystem* pickupFactory = GetWorld()->GetSubsystem<UPickupFactorySubsystem>();

	if (pickupFactory) {
		if (DropItemTable) {
			APickup* pickup = nullptr;
			TMap<FName, uint8*>RowMap = DropItemTable->GetRowMap();

			UE_LOG(LogTemp, Warning, TEXT("DropItemTable존재"));

			FDropItemDataTableRow* row = nullptr;
			float totalweight = 0.0f;

			
			for (const auto& element : RowMap) {
				row = (FDropItemDataTableRow*)element.Value;
				totalweight += row->DropRate;
			}
			float RandomSelect = FMath::FRandRange(0, totalweight);
			float CurrentWeight = 0.0f;

			for (const auto& element : RowMap)
			{
				row = (FDropItemDataTableRow*)element.Value;

				if (!row) continue;

				CurrentWeight += row->DropRate;

				
				if (RandomSelect <= CurrentWeight)
				{

					//pickupFactory->SpawnPickup(row->PickupCode, GetActorLocation(), GetActorRotation());
					for (const auto& pair : row->DropItemInfo)
					{
						//pickupFactory->DropPickupItem(pair.Key, DropItemTable, GetActorLocation());
						pickupFactory->SpawnPickup(pair.Key, GetActorLocation()+FVector(0,0,200.0f), GetActorRotation());
					}
					break;
				}
			}
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

