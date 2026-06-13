/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonActivatableWidget.h"

#include "UI_ActivatableWidget.generated.h"

UENUM(BlueprintType)
enum class EWidgetInputMode : uint8
{
	Default,
	GameAndMenu,
	Game,
	Menu
};

/**
 * An activatable widget that automatically drives the desired input config when activated
 */
UCLASS(Abstract, Blueprintable, meta=(DisplayName="Activatable Widget Base"))
class GAMEUI_API UUI_ActivatableWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UUI_ActivatableWidget(const FObjectInitializer& ObjectInitializer);

	//~UCommonActivatableWidget interface
	virtual TOptional<FUIInputConfig> GetDesiredInputConfig() const override;
	//~End of UCommonActivatableWidget interface

#if WITH_EDITOR
	virtual void ValidateCompiledWidgetTree(const UWidgetTree& BlueprintWidgetTree, class IWidgetCompilerLog& CompileLog) const override;
#endif

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

public:
	/** 获取当前聚焦的Widget */
	UFUNCTION(BlueprintCallable)
	UWidget* GetCurrentFocusWidget() const { return CurrentFocusWidget.Get(); }

	/** 设置当前聚焦的Widget */
	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetCurrentFocusWidget(UWidget* InWidget) { CurrentFocusWidget = InWidget; }

protected:
	/** The desired input mode to use while this UI is activated, for example do you want key presses to still reach the game/player controller? */
	UPROPERTY(EditDefaultsOnly, Category="Input")
	EWidgetInputMode InputConfig = EWidgetInputMode::Default;

	/** The desired mouse behavior when the game gets input. */
	UPROPERTY(EditDefaultsOnly, Category="Input")
	EMouseCaptureMode GameMouseCaptureMode = EMouseCaptureMode::CapturePermanently;

	/** 是否启用接收第二个返回操作，默认为鼠标右键返回 */
	UPROPERTY(EditAnywhere, Category="Back")
	bool bIsSecondBackHandler = false;

	UPROPERTY(EditAnywhere, Category="Back")
	bool bIsSecondBackActionDisplayedInActionBar = false;

	TSoftObjectPtr<UWidget> CurrentFocusWidget;

private:
	FUIActionBindingHandle SecondBackActionHandle;

	bool bRightMouseButtonBackAction = false;
};
