// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "ActionPlayerController.generated.h"

class UInputAction;
class UInputMappingContext;	// UInputMappingContext라는 클래스가 있다고 알려주는 역할
/**
 * 
 */
UCLASS()
class KSHUNREALCPP_API AActionPlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	void OnCameraLook(const FInputActionValue& Invalue);
	//UInputMappingContext a;	// 전방 선언한 것은 해더가 없으면 인스턴스를 만들 수 없다.
	//UInputMappingContext* b;	// 전방 선언한 것의 주소는 저장할 수 있다.
public:
	virtual void SetupInputComponent() override;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UInputAction> IA_Look;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr< UInputMappingContext> DefaultMappingContext = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ViewMax = 30.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ViewMin = -40.0f;

private:
	int32 GameInputPriority=1;


};
