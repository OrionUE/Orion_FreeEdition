/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Widgets/GameSettingScreen.h"

#include "UI_UserSettingScreen.generated.h"

class UUI_TabListWidgetBase;

UCLASS(Abstract, meta=(Category="Settings", DisableNativeTick, DisplayName="Setting Screen Base"))
class UUI_UserSettingScreen : public UGameSettingScreen
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnMouseLeave(const FPointerEvent& InMouseEvent) override;
	virtual UGameSettingRegistry* CreateRegistry() override;

	virtual void OnSettingsDirtyStateChanged_Implementation(bool bSettingsDirty) override;

protected:
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual bool NativeOnHandleBackAction() override;
	void HandleApplyAction();
	void HandleCancelChangesAction();

	UFUNCTION(BlueprintCallable)
	void ApplyActionAndBack();

	UFUNCTION(BlueprintCallable)
	void CancelChangesActionAndBack();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnShowBackWidget();

protected:
	UPROPERTY(BlueprintReadOnly, Category="Input", meta=(BindWidget, OptionalWidget=true))
	TObjectPtr<UUI_TabListWidgetBase> TopSettingsTabs;

	/** 是否启用接收第二个返回操作，默认为鼠标右键返回 */
	UPROPERTY(EditAnywhere, Category="Back")
	bool bIsSecondBackHandler = false;

	UPROPERTY(EditAnywhere, Category="Back")
	bool bIsSecondBackActionDisplayedInActionBar = false;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle ApplyInputActionData;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle CancelChangesInputActionData;

	FDelegateHandle InputMethodChangedDelegateHandle;

private:
	FUIActionBindingHandle ApplyHandle;
	FUIActionBindingHandle CancelChangesHandle;
	FUIActionBindingHandle SecondBackActionHandle;

	bool bRightMouseButtonBackAction = false;
};
