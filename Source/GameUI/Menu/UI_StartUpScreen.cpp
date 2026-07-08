/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_StartUpScreen.h"

#include "Framework/Application/IInputProcessor.h"
#include "GameFramework/GameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "UI/Frontend/OrionFrontendStateComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_StartUpScreen)

class FPressAnyKeyInputPreProcessor : public IInputProcessor
{
public:
	FPressAnyKeyInputPreProcessor()
	{
	}

	virtual void Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor) override { }

	virtual bool HandleKeyUpEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override
	{
		HandleKey(InKeyEvent.GetKey());
		return true;
	}

	virtual bool HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override { return true; }

	virtual bool HandleMouseButtonDoubleClickEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override
	{
		HandleKey(MouseEvent.GetEffectingButton());
		return true;
	}

	virtual bool HandleMouseButtonDownEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override { return true; }

	virtual bool HandleMouseButtonUpEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override
	{
		HandleKey(MouseEvent.GetEffectingButton());
		return true;
	}

	virtual bool HandleMouseWheelOrGestureEvent(FSlateApplication& SlateApp, const FPointerEvent& InWheelEvent, const FPointerEvent* InGestureEvent) override
	{
		if (InWheelEvent.GetWheelDelta() != 0)
		{
			const FKey Key = InWheelEvent.GetWheelDelta() < 0 ? EKeys::MouseScrollDown : EKeys::MouseScrollUp;
			HandleKey(Key);
		}
		return true;
	}

	DECLARE_DELEGATE_OneParam(FSettingsPressAnyKeyInputPreProcessorKeySelected, FKey);
	FSettingsPressAnyKeyInputPreProcessorKeySelected OnKeySelected;

private:
	void HandleKey(const FKey& Key) const
	{
		if (OnKeySelected.IsBound())
			OnKeySelected.Execute(Key);
	}
};

void UUI_StartUpScreen::NativeOnActivated()
{
	Super::NativeOnActivated();

	bPressedAnyKey = false;

	InputProcessor = MakeShared<FPressAnyKeyInputPreProcessor>();
	InputProcessor->OnKeySelected.BindUObject(this, &ThisClass::HandleKeySelected);
	FSlateApplication::Get().RegisterInputPreProcessor(InputProcessor, 0);
}

void UUI_StartUpScreen::NativeOnDeactivated()
{
	Super::NativeOnDeactivated();

	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().UnregisterInputPreProcessor(InputProcessor);
	}
}

void UUI_StartUpScreen::HandleKeySelected(FKey InKey)
{
	if (!bPressedAnyKey)
	{
		bPressedAnyKey = true;

		OnPressedAnyKey();
	}
}

void UUI_StartUpScreen::ContinueFlow()
{
	AGameStateBase* GameState = UGameplayStatics::GetGameState(this);
	UOrionFrontendStateComponent* FrontendStateComponent = GameState->FindComponentByClass<UOrionFrontendStateComponent>();
	check(FrontendStateComponent)
	FrontendStateComponent->ContinueFlow();
}
