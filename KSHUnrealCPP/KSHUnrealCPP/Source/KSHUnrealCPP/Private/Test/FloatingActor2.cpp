// Fill out your copyright notice in the Description page of Project Settings.


#include "Test/FloatingActor2.h"

// Sets default values
AFloatingActor2::AFloatingActor2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	USceneComponent* root = CreateDefaultSubobject<USceneComponent>(TEXT("Rootd"));
	SetRootComponent(root);

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMeshd"));
	BodyMesh->SetupAttachment(root);

}

// Called when the game starts or when spawned
void AFloatingActor2::BeginPlay()
{
	Super::BeginPlay();

}

void AFloatingActor2::OnFloatingMeshUpdate(float DeltaTime)
{
	ElapsedTime += DeltaTime;
	//UE_LOG(LogTemp, Log, TEXT("Elapsed Time : %.2f"), ElapsedTime);

	// Cos 
	float cosValue = FMath::Cos(ElapsedTime);	// 1 -> -1 -> 1
	cosValue += 1;				// 2 -> 0 -> 2
	cosValue *= 0.5f;			// 1 -> 0 -> 1
	cosValue = 1 - cosValue;	// 0 -> 1 -> 0

	BodyMesh->SetRelativeLocation(FVector(0, 0, cosValue * MoveHeight));
	BodyMesh->AddRelativeRotation(FRotator(0, SpinSpeed * DeltaTime, 0));
}

// Called every frame
void AFloatingActor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	time += DeltaTime;
	OnFloatingMeshUpdate(DeltaTime);
}
void AFloatingActor2::MoveUpDownCos()
{
	BodyMesh->SetRelativeLocation(FVector(0, 0, (FMath::Cos(time) + 1) * MoveHeight));
}

void AFloatingActor2::MoveUpDown()
{
	if (Reverse) {
		BodyMesh->AddRelativeLocation(FVector::UpVector);
		if (BodyMesh->GetRelativeLocation().Z >= MoveHeight) {
			Reverse = false;
		}
	}
	else {
		BodyMesh->AddRelativeLocation(FVector::DownVector);
		if (BodyMesh->GetRelativeLocation().Z <= 0) {
			Reverse = true;
		}
	}
}

void AFloatingActor2::RotateZ()
{
	BodyMesh->AddRelativeRotation(FRotator(0, SpinSpeed, 0));
}

