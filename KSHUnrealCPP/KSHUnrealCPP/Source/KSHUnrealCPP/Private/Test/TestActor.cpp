// Fill out your copyright notice in the Description page of Project Settings.


#include "Test/TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp,Log, TEXT("Hello Unreal. 한글"));
	UE_LOG(LogTemp,Warning, TEXT("Hello Unreal. 한글"));
	UE_LOG(LogTemp,Error, TEXT("Hello Unreal. 한글"));
	//Test_BlueprintNativeEvent();
}

void ATestActor::Test_NormalFunction()
{
	UE_LOG(LogTemp, Log, TEXT("Test_NormalFunction. 한글"));
}

void ATestActor::Test_UFunction()
{
	UE_LOG(LogTemp, Log, TEXT("Test_UFunction. 한글"));
}


void ATestActor::Test_BlueprintNativeEvent_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("Test_BlueprintNativeEvent. 한글"));
}




// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

