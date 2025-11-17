// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/PickUp.h"
#include "Player/InventoryOwner.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "Components/TimelineComponent.h"
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


	PickupTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("PickupTimeline"));
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();	

	if (PickupOverlap) {
		PickupOverlap->OnComponentBeginOverlap.AddDynamic(this,&APickUp::OnPickupBeginOverlap);
	}
	
	if (PickupTimeline)
	{
		if (ScaleCurve)
		{
			FOnTimelineFloat ScaleUpdateDelegate;
			ScaleUpdateDelegate.BindUFunction(this, FName("OnScaleUpdate"));
			PickupTimeline->AddInterpFloat(ScaleCurve, ScaleUpdateDelegate);

			FOnTimelineEvent ScaleFinishDelegate;
			ScaleFinishDelegate.BindUFunction(this, FName("OnScaleFinish"));
			PickupTimeline->SetTimelineFinishedFunc(ScaleFinishDelegate);
		}

		if (LocationCurve) {
			FOnTimelineFloat LocationUpdateDelegate;
			LocationUpdateDelegate.BindUFunction(this, FName("OnLocationUpdate"));
			PickupTimeline->AddInterpFloat(LocationCurve, LocationUpdateDelegate);
			FOnTimelineEvent LocationFinishDelegate;
			LocationFinishDelegate.BindUFunction(this, FName("OnLocationFinish"));
			PickupTimeline->SetTimelineFinishedFunc(LocationFinishDelegate);
		}

		PickupTimeline->SetPlayRate(duration);
	}
	bPickuped = false;
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mesh->AddWorldRotation(FRotator(0, RotateSpeed * DeltaTime, 0));
}

void APickUp::OnPickUp_Implementation(AActor* Target)
{
	if (!bPickuped) {
		PickupOwner = Target;
		bPickuped = true;
		UE_LOG(LogTemp, Log, TEXT("OnPickup_Implementation 실행"));
		BaseRoot->SetSimulatePhysics(false);
		BaseRoot->SetCollisionProfileName(TEXT("NoCollision"));
		PickupTimeline->PlayFromStart();
	}

}

void APickUp::OnPickupBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("Pickup Overlap"));
}

void APickUp::OnScaleUpdate(float Value)
{
	FVector NewScale = FVector::One() * Value;
	SetActorScale3D(NewScale);
}

void APickUp::OnScaleFinish()
{
	// 자신을 먹은 대상에게 자기가 가지고 있는 무기를 알려줘야 함
	if (PickupOwner.IsValid() && PickupOwner->Implements<UInventoryOwner>())
	{
		IInventoryOwner::Execute_AddItem(PickupOwner.Get(), PickupItem);
	}
}

void APickUp::OnLocationUpdate(float Value)
{
	TargetLocation = PickupOwner->GetActorLocation();
	FVector NewLocation = FMath::Lerp(GetActorLocation(), TargetLocation, Value);
	SetActorLocation(NewLocation);
}

void APickUp::OnLocationFinish()
{
	if (PickupOwner.IsValid() && PickupOwner->Implements<UInventoryOwner>())
	{
		IInventoryOwner::Execute_AddItem(PickupOwner.Get(), PickupItem);
		Destroy();
	}
}


