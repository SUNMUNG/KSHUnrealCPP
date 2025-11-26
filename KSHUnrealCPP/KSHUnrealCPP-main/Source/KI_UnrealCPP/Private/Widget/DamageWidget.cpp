// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/DamageWidget.h"
#include "Components/TextBlock.h"

void UDamageWidget::SetDamageTextBlock(float Damage)
{
	if (DamageText) {
		DamageText->SetText(FText::AsNumber(static_cast<int>(Damage)));
	}	
}

void UDamageWidget::PlayPopupAnimation()
{
	if (PopupAnimation) {
		PlayAnimation(PopupAnimation, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
	}

}
//void UDamageWidget::PlayPopupAnimation()
//{
//	if (PopupAnimation)
//	{
//		StopAnimation(PopupAnimation);
//
//		// ★ [핵심] 준비 운동하는 동안에는 눈에 안 보이게 숨깁니다.
//		// 이렇게 하면 "멈춰있는 0.01초"가 화면에 안 그려져서 뚝 끊기는 느낌이 사라집니다.
//		SetRenderOpacity(0.0f);
//
//		if (UWorld* World = GetWorld())
//		{
//			FTimerDelegate TimerDelegate;
//			TimerDelegate.BindWeakLambda(this, [this]()
//				{
//					if (IsValid(this) && PopupAnimation)
//					{
//						// ★ [핵심] 이제 보여주면서 동시에 재생합니다.
//						SetRenderOpacity(1.0f);
//						PlayAnimation(PopupAnimation, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
//					}
//				});
//
//			FTimerHandle TempHandle;
//			// 시간을 0.01초로 더 줄임 (반응 속도 UP)
//			World->GetTimerManager().SetTimer(TempHandle, TimerDelegate, 0.01f, false);
//		}
//	}
//	else
//	{
//		UE_LOG(LogTemp, Warning, TEXT("PopupAnimation null"));
//	}
//}