// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/Merchant.h"
#include "Components/WidgetComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Player/Interactor.h"

// Sets default values
AMerchant::AMerchant()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	TextWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("TextWidget"));
	TextWidgetComponent->SetupAttachment(RootComponent);
	TextWidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
	TextWidgetComponent->SetVisibility(false);
	
	InteractionBound = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionBound"));
	InteractionBound->SetupAttachment(RootComponent);
	InteractionBound->SetSphereRadius(500.0f);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	
}

void AMerchant::OnInteraction_Implementation()
{
}

// Called when the game starts or when spawned
void AMerchant::BeginPlay()
{
	Super::BeginPlay();
	
	OnActorBeginOverlap.AddDynamic(this,&AMerchant::OnInteractionOverlap);
	OnActorEndOverlap.AddDynamic(this, &AMerchant::OnInteractionEndOverlap);
}

void AMerchant::OnInteractionOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	TextWidgetComponent->SetVisibility(true);

	if (OtherActor->Implements<UInteractor>()) {
		IInteractor::Execute_SetInteractionTarget(OtherActor, this);
	}
}

void AMerchant::OnInteractionEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{

	if (OtherActor->Implements<UInteractor>()) {
		IInteractor::Execute_ClearInteractionTarget(OtherActor, this);
	}
	TextWidgetComponent->SetVisibility(false);
}



