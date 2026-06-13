/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Widgets/GameSettingScreen.h"

#include "UI_GameWorldSettingScreen.generated.h"

class UCommonButtonBase;
class UUI_TabListWidgetBase;

UCLASS(Abstract, meta=(Category="Settings", DisableNativeTick, DisplayName="Game World Setting Screen Base"))
class UUI_GameWorldSettingScreen : public UGameSettingScreen
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;
	virtual UGameSettingRegistry* CreateRegistry() override;

protected:
	virtual void ApplyChanges() override;

	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual bool NativeOnHandleBackAction() override;

	void OnClickedConfirmButton();
	void OnClickedCancelButton();
	void OnClickedCancelChangesButton();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnCreateSession();

	UFUNCTION(BlueprintImplementableEvent)
	void OnShowBackWidget();

protected:
	UPROPERTY(BlueprintReadOnly, Category="Input", meta=(BindWidget, OptionalWidget=true))
	TObjectPtr<UUI_TabListWidgetBase> TopSettingsTabs;

	// 确认按钮
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	TObjectPtr<UCommonButtonBase> ConfirmButton;

	// 取消按钮
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	TObjectPtr<UCommonButtonBase> CancelButton;

	// 取消更改按钮，该控件可选择绑定
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	TObjectPtr<UCommonButtonBase> CancelChangesButton;

	/** 是否启用接收第二个返回操作，默认为鼠标右键返回 */
	UPROPERTY(EditAnywhere, Category="Back")
	bool bIsSecondBackHandler = false;
};
