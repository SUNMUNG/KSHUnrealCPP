// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponActor.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Player/ActionCharacter.h"
#include "Player/StatusComponent.h"
#include "GameFramework/Character.h"


// Sets default values
AWeaponActor::AWeaponActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(root);

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	WeaponMesh->SetupAttachment(root);
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	WeaponMesh->SetCollisionProfileName(TEXT("NoCollision"));


	WeaponCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	WeaponCollision->SetupAttachment(WeaponMesh);
	WeaponCollision->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));

	UE_LOG(LogTemp, Warning, TEXT("생성자"));
}

// Called when the game starts or when spawned
void AWeaponActor::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AWeaponActor::OnWeaponBeginOverlap);
	UE_LOG(LogTemp, Warning, TEXT("연결"));
}

void AWeaponActor::OnWeaponBeginOverlap(AActor* OverlappedActor, AActor* otherActor)
{

	float finalDamage = Damage;
	AController* instigator = nullptr;
	if (WeaponOwner) {
		//본인은 무시
		if (WeaponOwner == otherActor) {
			return;
		}
		UE_LOG(LogTemp, Warning, TEXT("Overlapped : %s"), *otherActor->GetName());

		if (WeaponOwner->GetStatusComponent() != nullptr) {
			finalDamage += WeaponOwner->GetStatusComponent()->GetAttackPower();
		}
		
		instigator = WeaponOwner->GetController();
		UGameplayStatics::ApplyDamage(otherActor, finalDamage, instigator, this, DamageType);
	}
	
}

void AWeaponActor::AttackEnable(bool bEnable)
{
	if (bEnable) {
		WeaponCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
	else {
		WeaponCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}



void AWeaponActor::OnWeaponPickuped(AActionCharacter* InOwner)
{
	WeaponOwner = InOwner;
}

void AWeaponActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	//CDO (class Default Object)의 설정대로 초기화된 이후 (= overlapOnlyPawn 설정이후)
	WeaponCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}



