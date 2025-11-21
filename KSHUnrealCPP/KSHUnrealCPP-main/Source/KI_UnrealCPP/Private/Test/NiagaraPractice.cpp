// Fill out your copyright notice in the Description page of Project Settings.


#include "Test/NiagaraPractice.h"
#include "NiagaraComponent.h"
#include "Components/BoxComponent.h"
// Sets default values
ANiagaraPractice::ANiagaraPractice()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Root = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("root"));
	SetRootComponent(Root);

	Collision=CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	Collision->SetupAttachment(Root);
	Collision->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));

	Effect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Effect"));
	Effect->SetupAttachment(Root);
	Effect->SetRelativeLocation(FVector(0, 0, 100.0f));

}

// Called when the game starts or when spawned
void ANiagaraPractice::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANiagaraPractice::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if (OtherActor) {
		if (DamageType) {
			if (DamageType->GetName() == "BP_DamageTypeFire") {
				UE_LOG(LogTemp, Warning, TEXT("%s1234"), *DamageType->GetName());
				TestColorChange(FLinearColor::Red);
			}
			else if (DamageType->GetName() == "BP_DamageTypeIce") {
				TestColorChange(FLinearColor::Blue);
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("%s"), *DamageType->GetName());
			}
			
			
		}
		Effect->Activate();
	}
	
}

void ANiagaraPractice::NotifyActorEndOverlap(AActor* OtherActor)
{
	Effect->Deactivate();
}

// Called every frame
void ANiagaraPractice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANiagaraPractice::TestColorChange(const FLinearColor& InColor)
{
	Effect->SetColorParameter(FName("EffectColor"), InColor);

	//Effect->SetNiagaraVariableLinearColor(FString("EffectColor"), InColor);
}
