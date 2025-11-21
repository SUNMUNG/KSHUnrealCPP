// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PracticeDamageWidget.generated.h"

/**
 * 
 */
UCLASS()
class KI_UNREALCPP_API UPracticeDamageWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void NativeConstruct() override;

protected:
	// meta = (BindWidget)
	// 위젯 블루프린트의 변수와 이 클래스의 변수를 바인드하겠다라는 의미(=둘이 같은 거라고 설정)
	// 위젯 블루프린트의 변수명과 이 클래스의 변수명이 반드시 같아야 한다.(대소문자도 같아야 한다)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DamageText", meta = (BindWidget))
	TWeakObjectPtr<class UTextBlock> DamageText;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadOnly, Category = "FloatingDamageText", meta = (BindWidgetAnim))
	TWeakObjectPtr<class UWidgetAnimation> FloatingDamageText;
};
