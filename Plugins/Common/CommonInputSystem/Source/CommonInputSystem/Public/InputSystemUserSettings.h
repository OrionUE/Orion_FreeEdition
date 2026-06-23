/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "UserSettings/EnhancedInputUserSettings.h"
#include "InputSystemUserSettings.generated.h"

USTRUCT(BlueprintType)
struct COMMONINPUTSYSTEM_API FPlayerKeyMappingExtension final
{
	GENERATED_BODY()

public:
	FPlayerKeyMappingExtension();
	FPlayerKeyMappingExtension(const FName& InGamepadKeyName, bool InEnabledInKeySetting, UObject* InMetadata);

public:
	FName GetGamepadKeyName() const;

	bool IsEnabledInKeySetting() const;

	const UObject* GetMetadata() const;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enhanced Input|User Settings")
	FName GamepadKeyName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enhanced Input|User Settings")
	bool bEnabledInKeySetting;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enhanced Input|User Settings")
	TObjectPtr<UObject> Metadata;
};

/**
 * Custom settings class for any input related settings for this project
 *
 * 需要在项目DefaultInput.ini文件中添加以下配置
 * [/Script/EnhancedInput.EnhancedInputDeveloperSettings]
 * bEnableUserSettings=True
 * UserSettingsClass=/Script/CommonInputSystem.InputSystemUserSettings
 *
 * Todo: 该设置默认保存路径为SaveGames文件夹下，修改源码更改保存路径为SaveGames/[用户ID]文件夹，使云端能够同步
 */
UCLASS()
class COMMONINPUTSYSTEM_API UInputSystemUserSettings : public UEnhancedInputUserSettings
{
	GENERATED_BODY()

public:
	virtual void ApplySettings() override;
	virtual void SetToDefaults();

protected:
	virtual bool RegisterKeyMappingsToProfile(UEnhancedPlayerMappableKeyProfile& Profile, const UInputMappingContext* IMC) override;

public:
	const TMap<FName, FPlayerKeyMappingExtension>& GetKeyMappingExtensions() const;

// UInputSystemUserSettings
////////////////////////////////////////////////////////////////////////////////////
public:
	// Latency flash indicators
	static bool DoesPlatformSupportLatencyMarkers();

	DECLARE_EVENT(UInputSystemUserSettings, FLatencyFlashInidicatorSettingChanged);
	UFUNCTION()
	void SetEnableLatencyFlashIndicators(const bool bNewVal);
	UFUNCTION()
	bool GetEnableLatencyFlashIndicators() const { return bEnableLatencyFlashIndicators; }
	FLatencyFlashInidicatorSettingChanged& OnLatencyFlashInidicatorSettingsChangedEvent() { return LatencyFlashInidicatorSettingsChangedEvent; }

	// Latency tracking stats
	static bool DoesPlatformSupportLatencyTrackingStats();

	DECLARE_EVENT(UInputSystemUserSettings, FLatencyStatEnabledSettingChanged);
	FLatencyStatEnabledSettingChanged& OnLatencyStatIndicatorSettingsChangedEvent() { return LatencyStatIndicatorSettingsChangedEvent; }

	UFUNCTION()
	void SetEnableLatencyTrackingStats(const bool bNewVal);
	UFUNCTION()
	bool GetEnableLatencyTrackingStats() const { return bEnableLatencyTrackingStats; }

	void ApplyLatencyTrackingStatSetting();

private:
	// If true, enable latency flash markers which can be used to measure input latency.
	UPROPERTY(Config)
	bool bEnableLatencyFlashIndicators = false;

	// Event for when the latency flash indicator setting had changed for player input to bind to.
	FLatencyFlashInidicatorSettingChanged LatencyFlashInidicatorSettingsChangedEvent;

	// Event for when the latency stats being toggled on or off has changed
	FLatencyStatEnabledSettingChanged LatencyStatIndicatorSettingsChangedEvent;

	// If true, then the game will track latency stats via ILatencyMarkerModule modules.
	// This enables you to view some more latency oriented performance stats.
	// The default value is set to true if the platform supports it, false otherwise.
	UPROPERTY(Config)
	bool bEnableLatencyTrackingStats;

////////////////////////////////////////////////////////////////////////////////////

protected:
	UPROPERTY(Transient)
	TMap<FName, FPlayerKeyMappingExtension> KeyMappingExtensions;
};
