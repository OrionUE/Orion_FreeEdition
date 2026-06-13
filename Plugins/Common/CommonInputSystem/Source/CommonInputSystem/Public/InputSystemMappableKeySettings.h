// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

#pragma once

#include "PlayerMappableKeySettings.h"
#include "InputSystemMappableKeySettings.generated.h"

/**
 * Player Mappable Key settings are settings that are accessible per-action key mapping.
 * This is where you could place additional metadata that may be used by your settings UI,
 * input triggers, or other places where you want to know about a key setting.
 *
 * 需要在项目DefaultInput.ini文件中添加以下配置
 * [/Script/EnhancedInput.EnhancedInputDeveloperSettings]
 * DefaultPlayerMappableKeyProfileClass=/Script/CommonInputSystem.InputSystemMappableKeySettings
 */
UCLASS()
class COMMONINPUTSYSTEM_API UInputSystemMappableKeySettings : public UPlayerMappableKeySettings
{
	GENERATED_BODY()

public:
	// 该按键功能的手柄按键设置名称
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Settings")
	FName GamepadKeyName;

	// 是否在按键设置中启用
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Settings")
	bool bEnabledInKeySetting = true;
};
