// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/PickUp.h"
#include "Player/InventoryOwner.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"

// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseRoot= CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
	SetRootComponent(BaseRoot);
	BaseRoot->SetSimulatePhysics(true);
	BaseRoot->InitSphereRadius(1.0f);
	BaseRoot->BodyInstance.bLockXRotation = true;
	BaseRoot->BodyInstance.bLockYRotation = true;
	BaseRoot->BodyInstance.bLockZRotation = false;
	BaseRoot->SetCollisionProfileName(TEXT("BlockAllDynamic"));

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(BaseRoot);
	Mesh->SetCollisionProfileName(TEXT("NoCollision"));
	Mesh->AddRelativeRotation(FRotator(0, 0, 10.0f));

	PickupOverlap = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap"));
	PickupOverlap->SetupAttachment(BaseRoot);
	PickupOverlap->InitSphereRadius(100.0f);
	PickupOverlap->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));



	PickupEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Effect"));
	PickupEffect->SetupAttachment(BaseRoot);

}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();	

	if (PickupOverlap) {
		PickupOverlap->OnComponentBeginOverlap.AddDynamic(this,&APickUp::OnPickupBeginOverlap);
	}
	

}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mesh->AddWorldRotation(FRotator(0, RotateSpeed * DeltaTime, 0));
}

void APickUp::OnPickUp_Implementation(AActor* Target)
{
	UE_LOG(LogTemp, Log, TEXT("OnPickup_Implementation 실행"));

	if (Target && Target->Implements<UInventoryOwner>())
	{
		IInventoryOwner::Execute_AddItem(Target, PickupItem);
	}
}

void APickUp::OnPickupBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("Pickup Overlap"));
}


