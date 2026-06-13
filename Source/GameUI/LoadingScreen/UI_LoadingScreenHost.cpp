/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_LoadingScreenHost.h"

#include "Framework/Application/IInputProcessor.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_LoadingScreenHost)

class FDisableAnyInputPreProcessor : public IInputProcessor
{
public:
	FDisableAnyInputPreProcessor()
	{
	}

	virtual void Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor) override { }

	virtual bool HandleKeyUpEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override
	{
		return true;
	}

	virtual bool HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override
	{
		return true;
	}

	virtual bool HandleMouseButtonDoubleClickEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override
	{
		return true;
	}

	virtual bool HandleMouseButtonDownEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override
	{
		return true;
	}

	virtual bool HandleMouseButtonUpEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override
	{
		return true;
	}

	virtual bool HandleMouseWheelOrGestureEvent(FSlateApplication& SlateApp, const FPointerEvent& InWheelEvent, const FPointerEvent* InGestureEvent) override
	{
		return true;
	}
};

void UUI_LoadingScreenHost::NativeConstruct()
{
	Super::NativeConstruct();

	Execute_OnLoadingPercentChanged(this, 0.f);

#if !WITH_EDITOR
	InputProcessor = MakeShared<FDisableAnyInputPreProcessor>();
	FSlateApplication::Get().RegisterInputPreProcessor(InputProcessor, 0);
#endif
}

void UUI_LoadingScreenHost::NativeDestruct()
{
	Super::NativeDestruct();

#if !WITH_EDITOR
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().UnregisterInputPreProcessor(InputProcessor);
	}
#endif
}
