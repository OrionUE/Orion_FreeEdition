/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingValueDiscreteDynamic.h"

#include "GameSettingValueDiscreteDynamic_AudioInputDevice.generated.h"

class FOrionAudioInputManager;

enum class EAudioDeviceChangedRole : uint8;

/**
 * 游戏设置 - 音频输入设置
 * 依赖 OrionVoiceChat 和 WmfMedia 插件
 */
UCLASS()
class UGameSettingValueDiscreteDynamic_AudioInputDevice : public UGameSettingValueDiscreteDynamic
{
	GENERATED_BODY()

public:
	virtual ~UGameSettingValueDiscreteDynamic_AudioInputDevice() = default;

protected:
	/** UGameSettingValueDiscrete */
	virtual void SetDiscreteOptionByIndex(int32 Index) override;
	virtual void OnApply() override;

protected:
	virtual void OnInitialized() override;

protected:
	UFUNCTION()
	void OnAudioInputDevicesChanged(const TArray<FString>& InputDevices, int32 CurrentInputDeviceIndex);

	void OnAudioInputDevicesObtained(const TArray<FString>& InputDevices);
};
