// Copyright Epic Games, Inc. All Rights Reserved.

#include "Widgets/Misc/GameSettingPressAnyKey.h"

#include "Framework/Application/IInputProcessor.h"
#include "Framework/Application/SlateApplication.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameSettingPressAnyKey)

class ICursor;

class FSettingsPressAnyKeyInputPreProcessor : public IInputProcessor
{
public:
	FSettingsPressAnyKeyInputPreProcessor(const EPressAnyKeyAcceptKeyType InAcceptKeyType)
	{
		AcceptKeyType = InAcceptKeyType;
	}

	virtual void Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor) override { }

	virtual bool HandleKeyUpEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override
	{
		HandleKey(InKeyEvent.GetKey());
		return true;
	}

	virtual bool HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override
	{
		return true;
	}

	virtual bool HandleMouseButtonDoubleClickEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override
	{
		HandleKey(MouseEvent.GetEffectingButton());
		return true;
	}

	virtual bool HandleMouseButtonDownEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override
	{
		return true;
	}

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

	DECLARE_MULTICAST_DELEGATE(FSettingsPressAnyKeyInputPreProcessorCanceled);
	FSettingsPressAnyKeyInputPreProcessorCanceled OnKeySelectionCanceled;

	DECLARE_MULTICAST_DELEGATE_OneParam(FSettingsPressAnyKeyInputPreProcessorKeySelected, FKey);
	FSettingsPressAnyKeyInputPreProcessorKeySelected OnKeySelected;

private:
	EPressAnyKeyAcceptKeyType AcceptKeyType = EPressAnyKeyAcceptKeyType::All;

private:
	void HandleKey(const FKey& Key)
	{
		// Cancel this process if it's Escape.
		if (Key == EKeys::LeftCommand || Key == EKeys::RightCommand)
		{
			// Ignore
		}

		if (Key == EKeys::Escape)
		{
			OnKeySelectionCanceled.Broadcast();
		}

		switch (AcceptKeyType)
		{
		case EPressAnyKeyAcceptKeyType::All:
			OnKeySelected.Broadcast(Key);
			break;

		case EPressAnyKeyAcceptKeyType::Gamepad:
			if (Key.IsGamepadKey())
			{
				OnKeySelected.Broadcast(Key);
			}
			else
			{
				OnKeySelectionCanceled.Broadcast();
			}
			break;

		case EPressAnyKeyAcceptKeyType::Touch:
			if (Key.IsTouch())
			{
				OnKeySelected.Broadcast(Key);
			}
			else
			{
				OnKeySelectionCanceled.Broadcast();
			}
			break;

		case EPressAnyKeyAcceptKeyType::Gesture:
			if (Key.IsGesture())
			{
				OnKeySelected.Broadcast(Key);
			}
			else
			{
				OnKeySelectionCanceled.Broadcast();
			}
			break;

		default:
			if (!Key.IsGamepadKey() && !Key.IsTouch() && !Key.IsGesture())
			{
				OnKeySelected.Broadcast(Key);
			}
			else
			{
				OnKeySelectionCanceled.Broadcast();
			}
		}
	}
};

UGameSettingPressAnyKey::UGameSettingPressAnyKey(const FObjectInitializer& Initializer)
	: Super(Initializer)
{
}

void UGameSettingPressAnyKey::NativeOnActivated()
{
	Super::NativeOnActivated();

	bKeySelected = false;
}

void UGameSettingPressAnyKey::NativeOnDeactivated()
{
	Super::NativeOnDeactivated();

	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().UnregisterInputPreProcessor(InputProcessor);
	}
}

void UGameSettingPressAnyKey::HandleKeySelected(FKey InKey)
{
	if (!bKeySelected)
	{
		bKeySelected = true;
		Dismiss([this, InKey]() {
			OnKeySelected.Broadcast(InKey);
		});
	}
}

void UGameSettingPressAnyKey::HandleKeySelectionCanceled()
{
	if (!bKeySelected)
	{
		bKeySelected = true;
		Dismiss([this]() {
			OnKeySelectionCanceled.Broadcast();
		});
	}
}

void UGameSettingPressAnyKey::Dismiss(TFunction<void()> PostDismissCallback)
{
	// We delay a tick so that we're done processing input.
	FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateWeakLambda(this, [this, PostDismissCallback](float DeltaTime)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_UGameSettingPressAnyKey_Dismiss);

		FSlateApplication::Get().UnregisterInputPreProcessor(InputProcessor);

		PostDismissCallback();

		return false;
	}));
}

void UGameSettingPressAnyKey::SetAcceptKeyType(const EPressAnyKeyAcceptKeyType InKeyType)
{
	AcceptKeyType = InKeyType;

	InputProcessor = MakeShared<FSettingsPressAnyKeyInputPreProcessor>(AcceptKeyType);
	InputProcessor->OnKeySelected.AddUObject(this, &ThisClass::HandleKeySelected);
	InputProcessor->OnKeySelectionCanceled.AddUObject(this, &ThisClass::HandleKeySelectionCanceled);
	FSlateApplication::Get().RegisterInputPreProcessor(InputProcessor, 0);
}
