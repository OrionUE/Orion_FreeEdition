/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Foundation/UI_ActivatableWidget.h"

#include "UI_ArchiveActionBar.generated.h"

class UCommonButtonBase;

DECLARE_DELEGATE(FOnDeleteArchive);
DECLARE_DELEGATE(FOnArchiveActionBarDeactivated)

UCLASS(Abstract, meta=(DisableNativeTick, DisplayName="Archive Action Bar"))
class UUI_ArchiveActionBar : public UUI_ActivatableWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual void NativeOnDeactivated() override;

	void OnClickedPlayButton();

protected:
	UFUNCTION(BlueprintCallable)
	void DeleteArchive();

public:
	FOnDeleteArchive OnDeleteArchive;
	FOnArchiveActionBarDeactivated OnArchiveActionBarDeactivated;

private:
	// 开始游戏按钮
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UCommonButtonBase> PlayButton;

	// 世界设置按钮
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UCommonButtonBase> WorldSettingButton;

	// 删除存档按钮
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UCommonButtonBase> DeleteButton;
};
