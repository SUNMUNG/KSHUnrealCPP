// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/MainHUD.h"
#include "Blueprint/UserWidget.h"
#include "Player/ActionPlayerController.h"


void AMainHUD::BeginPlay()
{
	Super::BeginPlay();

	if (MainWidgetClass)
	{
		MainWidgetInstance = CreateWidget<UMainHudWidget>(GetWorld(), MainWidgetClass);
		if (MainWidgetInstance)
		{
			MainWidgetInstance->AddToViewport();
			AActionPlayerController* pc = Cast<AActionPlayerController>(GetOwningPlayerController());

			if (pc) {
				pc->setMainHudWidget(MainWidgetInstance);
				FScriptDelegate delegate;
				delegate.BindUFunction(pc, "CloseInventoryWidget");
				MainWidgetInstance->AddToInventoryCloseDelegate(delegate);
			}
		}
	}
}
