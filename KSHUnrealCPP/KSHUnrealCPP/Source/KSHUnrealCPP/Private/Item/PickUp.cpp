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
	//PickupOverlap->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
	PickupOverlap->SetCollisionProfileName(TEXT("NoCollision"));


	PickupEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Effect"));
	PickupEffect->SetupAttachment(BaseRoot);


	PickupTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("PickupTimeline"));
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	UE_LOG(LogTemp, Log, TEXT("%d"), bPickuped);
	Super::BeginPlay();	
	
	if (PickupTimeline)
	{
		if (ScaleCurve && LocationCurve)
		{
			FOnTimelineFloat ScaleUpdateDelegate;
			ScaleUpdateDelegate.BindUFunction(this, FName("OnTimeLineUpdate"));
			PickupTimeline->AddInterpFloat(ScaleCurve, ScaleUpdateDelegate);

			FOnTimelineEvent ScaleFinishDelegate;
			ScaleFinishDelegate.BindUFunction(this, FName("OnTimeLineFinished"));
			PickupTimeline->SetTimelineFinishedFunc(ScaleFinishDelegate);
		}
		PickupTimeline->SetPlayRate(duration);
	}
	FTimerManager& timeManager = GetWorld()->GetTimerManager();
	timeManager.ClearTimer(PickupableTimer);
	timeManager.SetTimer(PickupableTimer, [this]() {
		PickupOverlap->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
		},
		PickupableTime,false);
	
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
	UE_LOG(LogTemp, Log, TEXT("%d"), bPickuped);
	if (!bPickuped) {
		PickupOwner = Target;
		bPickuped = true;
		UE_LOG(LogTemp, Log, TEXT("OnPickup_Implementation 실행"));
		BaseRoot->SetSimulatePhysics(false);
		BaseRoot->SetCollisionProfileName(TEXT("NoCollision"));
		PickupTimeline->PlayFromStart();
	}

}

void APickUp::AddImpulse(FVector& Velocity)
{
	BaseRoot->AddImpulse(Velocity, NAME_None, true);
}

void APickUp::OnTimeLineUpdate(float Value)
{
	float currentTime = PickupTimeline->GetPlaybackPosition();
	

	float distanceValue = Value;
	float LocationValue = LocationCurve ? LocationCurve->GetFloatValue(currentTime) : 0.0f;
	float scaleValue = ScaleCurve ? ScaleCurve->GetFloatValue(currentTime) : 1.0f;

	TargetLocation = PickupOwner->GetActorLocation();
	FVector NewLocation = FMath::Lerp(GetActorLocation(), TargetLocation, LocationValue);
	SetActorLocation(NewLocation);

	FVector NewScale = FVector::One() * Value;
	Mesh->SetRelativeScale3D(NewScale);
}

void APickUp::OnTimeLineFinished()
{
	UE_LOG(LogTemp, Log, TEXT("Pickup Overlap"));
	// 자신을 먹은 대상에게 자기가 가지고 있는 무기를 알려줘야 함
	if (PickupOwner.IsValid() && PickupOwner->Implements<UInventoryOwner>())
	{
		IInventoryOwner::Execute_AddItem(PickupOwner.Get(), PickupItem);
		Destroy();
	}
}




