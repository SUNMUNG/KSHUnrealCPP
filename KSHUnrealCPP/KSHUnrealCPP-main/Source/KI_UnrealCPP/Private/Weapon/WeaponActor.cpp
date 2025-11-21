// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponActor.h"
#include "Components/CapsuleComponent.h"
#include "Player/ActionCharacter.h"
#include "Player/StatusComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AWeaponActor::AWeaponActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(root);

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	WeaponMesh->SetupAttachment(root);
	WeaponMesh->SetCollisionProfileName(TEXT("NoCollision"));

	WeaponCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	WeaponCollision->SetupAttachment(WeaponMesh);
	WeaponCollision->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));

	WeaponSlashEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("WeaponSlashEffect"));
	WeaponSlashEffect->SetupAttachment(WeaponMesh);
}

// Called when the game starts or when spawned
void AWeaponActor::BeginPlay()
{
	Super::BeginPlay();

	OnActorBeginOverlap.AddDynamic(this, &AWeaponActor::OnWeaponBeginOverlap);
	
}

void AWeaponActor::OnWeaponBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{	
	DamageToTarget(OtherActor);
}

void AWeaponActor::DamageToTarget(AActor* InTarget)
{
	float finalDamage = Damage;
	AController* instigator = nullptr;
	if (WeaponOwner.IsValid())
	{
		if (WeaponOwner == InTarget)	// 내가 오버랩될 때는 무시
			return;

		if (WeaponOwner->GetStatusComponent() != nullptr)	// 스테이터스 컴포넌트가 있으면 공격력 가져와서 추가하기
		{
			finalDamage += WeaponOwner->GetStatusComponent()->GetAttackPower();
		}
		instigator = WeaponOwner->GetController();
	}
	//UE_LOG(LogTemp, Log, TEXT("Overlapped : %s"), *OtherActor->GetName());
	UGameplayStatics::ApplyDamage(InTarget, finalDamage, instigator, this, DamageType);
}

void AWeaponActor::DamageToArea()
{
	float finalDamage = Damage;
	AController* instigator = nullptr;
	if (WeaponOwner.IsValid())
	{
		if (WeaponOwner->GetStatusComponent() != nullptr)	// 스테이터스 컴포넌트가 있으면 공격력 가져와서 추가하기
		{
			finalDamage += WeaponOwner->GetStatusComponent()->GetAttackPower();
		}
		instigator = WeaponOwner->GetController();
	}
	finalDamage *= 2.0f;

	FVector center = FMath::Lerp(WeaponMesh->GetSocketLocation(TEXT("BladeBase")), WeaponMesh->GetSocketLocation(TEXT("BladeTip")), 0.5f);

	if (AreaAttackEffect) {
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			GetWorld(),
			AreaAttackEffect,
			center,
			WeaponOwner->GetActorRotation());
	}

	TArray<AActor*> IgnoreActors = { WeaponOwner.Get(),this};
	UGameplayStatics::ApplyRadialDamageWithFalloff(
		GetWorld(),
		finalDamage,
		Damage,
		center,
		AreaInnerRadius,
		AreaOutterRadius,
		Falloff,
		DamageType,
		IgnoreActors,
		this, WeaponOwner->GetController(),
		ECollisionChannel::ECC_Pawn
		);

	DrawDebugSphere(GetWorld(), center, AreaInnerRadius, 12, FColor::Red, false, 3.0f, 0, 1.0f);
	DrawDebugSphere(GetWorld(), center, AreaOutterRadius, 12, FColor::Green, false, 3.0f, 0, 1.0f);
}

void AWeaponActor::WeaponActivate(bool bActivate)
{
	//SetActorHiddenInGame(!bActivate);	// 무기는 비지빌리티만 수정하면 된다.
	if (bActivate)
	{
		// 무기 활성화
		AttachToComponent(
			WeaponOwner->GetMesh(),
			FAttachmentTransformRules::SnapToTargetNotIncludingScale,
			TEXT("hand_rSocket"));		// 플레이어의 손에 붙이기
		SetActorHiddenInGame(false);	// 게임에서 보이게 하기
		//SetActorEnableCollision(true);
		//SetActorTickEnabled(true);

		OnWeaponActivate();
	}
	else
	{
		// 무기 비활성화
		SetActorHiddenInGame(true);
		AttachToComponent(
			WeaponOwner->GetMesh(),
			FAttachmentTransformRules::SnapToTargetNotIncludingScale,
			TEXT("root"));
		SetActorRelativeLocation(FVector(0.0f, 0.0f, -10000.0f));	// 안보이는 곳에 배치
		//SetActorEnableCollision(false);
		//SetActorTickEnabled(false);

		TrailEnable(false);
		AttackEnable(false);
		OnWeaponDeactivate();
	}

	// 비지빌리티 - O
	// 충돌 - X
	// 액터의 틱 - X
	// 액터의 컴포넌트들의 틱 - X
	// 물리 시뮬레이션 - X
	// 타이머 - X
	// 오디오 - X
	// 파티클 - X
	// 애니메이션 - X
	// Movement 컴포넌트 - X

	//TSet<UActorComponent*> components = GetComponents();
	//for (auto comp : components)
	//{
	//	// 자식 컴포넌트 전부 끄기
	//}
}


void AWeaponActor::AttackEnable(bool bEnable)
{
	if (bEnable)
	{
		WeaponCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
	else
	{
		WeaponCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AWeaponActor::TrailEnable(bool bEnable)
{
	if (bEnable) {
		WeaponSlashEffect->Activate(true);
	}
	else {
		WeaponSlashEffect->Deactivate();
	}
}

FVector AWeaponActor::GetCollisionLocation()
{
	return WeaponCollision->GetSocketLocation(NAME_None);
}

void AWeaponActor::OnWeaponPickuped(int InCount)
{
}

void AWeaponActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	// CDO(Class Default Object)의 설정대로 초기화 된 이후( = OverlapOnlyPawn 설정 이후)
	WeaponCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
