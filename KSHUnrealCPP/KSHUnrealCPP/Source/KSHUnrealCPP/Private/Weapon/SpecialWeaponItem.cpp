// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/SpecialWeaponItem.h"
#include "Player/ActionCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Weapon/WeaponActor.h"

// Sets default values
ASpecialWeaponItem::ASpecialWeaponItem()
{
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
	SetRootComponent(ItemMesh);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ItemCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ItemCollision"));
	ItemCollision->SetupAttachment(ItemMesh);
	ItemCollision->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));

	

	OnActorBeginOverlap.AddDynamic(this, &ASpecialWeaponItem::OnItemBeginOverlap);
}

// Called when the game starts or when spawned
void ASpecialWeaponItem::BeginPlay()
{
	Super::BeginPlay();
	
}


void ASpecialWeaponItem::OnItemBeginOverlap(AActor* OverlappedActor, AActor* otherActor)
{
	Cast<AActionCharacter>(otherActor)->EquipWeapon(ThisWeaponItem);
	Destroy();
}



void ASpecialWeaponItem::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ItemCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}