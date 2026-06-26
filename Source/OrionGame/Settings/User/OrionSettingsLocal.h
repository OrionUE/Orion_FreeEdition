/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "SceneUtils.h"
#include "StreamlineLibraryDLSSG.h"
#include "GameFramework/GameUserSettings.h"
#include "Performance/GameDLSSSettings.h"

#include "OrionSettingsLocal.generated.h"

class ULocalPlayer;
class USoundControlBusMix;
class USoundControlBus;

USTRUCT()
struct FGameScalabilitySnapshot
{
	GENERATED_BODY()

	FGameScalabilitySnapshot();

	Scalability::FQualityLevels Qualities;
	bool bActive = false;
	bool bHasOverrides = false;
};

/**
 * UGameSettingsLocal - 游戏本地设置
 * 本地设置独立于不同的主机，不会上传到云端进行共享
 * 基于不同主机的设置，如分辨率、画质等应在此处配置
 *
 * - 注意 -
 * 需要在DefaultEngine.ini添加此类的名称和路径
 * [/Script/Engine.Engine]
 * GameUserSettingsClassName=/Script/OrionGame.OrionSettingsLocal
 */
UCLASS()
class ORIONGAME_API UOrionSettingsLocal : public UGameUserSettings
{
	GENERATED_BODY()

public:
	UOrionSettingsLocal();

	static UOrionSettingsLocal* Get();

	virtual void BeginDestroy() override;

	//~UGameUserSettings interface
	virtual void SetToDefaults() override;
	virtual void LoadSettings(bool bForceReload) override;
	virtual void ConfirmVideoMode() override;
	virtual float GetEffectiveFrameRateLimit() override;
	virtual void ResetToCurrentSettings() override;
	virtual void ApplyNonResolutionSettings() override;
	virtual int32 GetOverallScalabilityLevel() const override;
	virtual void SetOverallScalabilityLevel(int32 Value) override;
	//~End of UGameUserSettings interface
	
	virtual void Initialize(ULocalPlayer* LP);

	void OnExperienceLoaded();
	
	////////////////////////////////////////////////////////
	// Performance stats
public:
	/** Fired when the display state for a performance stat has changed, or the settings are applied */
	DECLARE_EVENT(ULyraSettingsLocal, FPerfStatSettingsChanged);
	FPerfStatSettingsChanged& OnPerfStatDisplayStateChanged() { return PerfStatSettingsChangedEvent; }

private:
	// Event for display stat widget containers to bind to
	FPerfStatSettingsChanged PerfStatSettingsChangedEvent;

	////////////////////////////////////////////////////////
	// Graphics
public:
	UFUNCTION()
	float GetFrameRateLimit_OnBattery() const;
	UFUNCTION()
	void SetFrameRateLimit_OnBattery(float NewLimitFPS);

	UFUNCTION()
	float GetFrameRateLimit_InMenu() const;
	UFUNCTION()
	void SetFrameRateLimit_InMenu(float NewLimitFPS);

	UFUNCTION()
	float GetFrameRateLimit_WhenBackground() const;
	UFUNCTION()
	void SetFrameRateLimit_WhenBackground(float NewLimitFPS);

	UFUNCTION()
	float GetFrameRateLimit_Always() const;
	UFUNCTION()
	void SetFrameRateLimit_Always(float NewLimitFPS);

	UFUNCTION()
	float GetDynamicResolutionFrameRateTarget() const;
	UFUNCTION()
	void SetDynamicResolutionFrameRateTarget(float NewDynamicResolutionFPS);

protected:
	void UpdateEffectiveFrameRateLimit();

private:
	UPROPERTY(Config)
	float FrameRateLimit_OnBattery;
	UPROPERTY(Config)
	float FrameRateLimit_InMenu;
	UPROPERTY(Config)
	float FrameRateLimit_WhenBackground;

	////////////////////////////////////////////////////////
	// Graphics - Mobile quality settings
public:
	static int32 GetDefaultMobileFrameRate();
	static int32 GetMaxMobileFrameRate();
	
	static bool IsSupportedMobileFramePace(int32 TestFPS);

	/** Returns the first frame rate at which overall quality is restricted/limited by the current device profile */
	int32 GetFirstFrameRateWithQualityLimit() const;

	/** Returns the lowest quality at which there's a limit on the overall frame rate (or -1 if there is no limit) */
	int32 GetLowestQualityWithFrameRateLimit() const;
	
	int32 GetDesiredMobileFrameRateLimit() const { return DesiredMobileFrameRateLimit; }
	void SetDesiredMobileFrameRateLimit(int32 NewLimitFPS);

	void ResetToMobileDeviceDefaults();

	int32 GetMaxSupportedOverallQualityLevel() const;

private:
	void ClampMobileResolutionQuality(int32 TargetFPS);
	void RemapMobileResolutionQuality(int32 FromFPS, int32 ToFPS);

	void ClampMobileFPSQualityLevels(bool bWriteBack);
	void ClampMobileQuality();

	int32 GetHighestLevelOfAnyScalabilityChannel() const;

	/* Modifies the input levels based on the active mode's overrides */
	void OverrideQualityLevelsToScalabilityMode(const FGameScalabilitySnapshot& InMode, Scalability::FQualityLevels& InOutLevels);

	/* Clamps the input levels based on the active device profile's default allowed levels */
	void ClampQualityLevelsToDeviceProfile(const Scalability::FQualityLevels& ClampLevels, Scalability::FQualityLevels& InOutLevels);

private:
	UPROPERTY(Config)
	int32 MobileFrameRateLimit = 30;

	FGameScalabilitySnapshot DeviceDefaultScalabilitySettings;
	
	int32 DesiredMobileFrameRateLimit = 0;

	////////////////////////////////////////////////////////
	// Graphics - Console quality presets
public:
	UFUNCTION()
	FString GetDesiredDeviceProfileQualitySuffix() const;
	UFUNCTION()
	void SetDesiredDeviceProfileQualitySuffix(const FString& InDesiredSuffix);

protected:
	/** Updates device profiles, FPS mode etc for the current game mode */
	void UpdateGameModeDeviceProfileAndFps();

	void UpdateConsoleFramePacing();
	void UpdateDesktopFramePacing();
	void UpdateMobileFramePacing();

	void UpdateDynamicResFrameTime(float TargetFPS);

private:
	UPROPERTY(Transient)
	FString DesiredUserChosenDeviceProfileSuffix;

	UPROPERTY(Transient)
	FString CurrentAppliedDeviceProfileOverrideSuffix;

	UPROPERTY(Config)
	FString UserChosenDeviceProfileSuffix;

	////////////////////////////////////////////////////////
	// Graphics - Benchmark
public:
	/** Returns true if this platform can run the auto benchmark */
	UFUNCTION(BlueprintCallable, Category="Settings")
	bool CanRunAutoBenchmark() const;

	/** Returns true if this user should run the auto benchmark as it has never been run */
	UFUNCTION(BlueprintCallable, Category="Settings")
	bool ShouldRunAutoBenchmarkAtStartup() const;
	
	/** Run the auto benchmark, optionally saving right away */
	UFUNCTION(BlueprintCallable, Category="Settings")
	void RunAutoBenchmark(bool bSaveImmediately);

	/** Apply just the quality scalability settings */
	void ApplyScalabilitySettings();

	////////////////////////////////////////////////////////
	// Graphics - Brightness/Gamma
public:
	UFUNCTION()
	float GetDisplayGamma() const;
	UFUNCTION()
	void SetDisplayGamma(float InGamma);

private:
	void ApplyDisplayGamma();
	
	UPROPERTY(Config)
	float DisplayGamma = 2.2f;

	////////////////////////////////////////////////////////
	// Graphics - ResolutionScale
public:
	UFUNCTION()
	float GetResolutionScaleNormalized_Lerp() const;
	UFUNCTION()
	void SetResolutionScaleNormalized_Lerp(float NewScaleNormalized);

	////////////////////////////////////////////////////////
	// Graphics - AntiAliasing
public:
	EAntiAliasingMethod GetAntiAliasingMethod() const { return EAntiAliasingMethod(AntiAliasingMethod); }
	UFUNCTION()
	void SetAntiAliasingMethod(EAntiAliasingMethod InAntiAliasingMethod);
	UFUNCTION()
	EAntiAliasingMethod GetDesiredAntiAliasingMethod() const { return EAntiAliasingMethod(DesiredAntiAliasingMethod); }
	void SetDesiredAntiAliasingMethod(EAntiAliasingMethod InAntiAliasingMethod);

protected:
	// 抗锯齿模式 Lumen模式下使用TAA会减轻画面拖延，帧率高但清晰度降低；TSR清晰度最高，有些情况下画面会拖延，帧率略低
	UPROPERTY(Config)
	uint8 AntiAliasingMethod = AAM_TemporalAA;

	UPROPERTY(Transient)
	uint8 DesiredAntiAliasingMethod;

	////////////////////////////////////////////////////////
	// Graphics - RTX
public:
	UFUNCTION()
	bool GetRTXEnabled() const { return bRTXEnabled; }
	UFUNCTION()
	void SetRTXEnabled(bool bEnabled);

protected:
	UPROPERTY(Config)
	bool bRTXEnabled = false;

	////////////////////////////////////////////////////////
	// Graphics - DLSS
public:
	UFUNCTION()
	bool GetDLSSUpscaleEnabled() const { return bDLSSUpscaleEnabled; }
	UFUNCTION()
	void SetDLSSUpscaleEnabled(bool bEnabled);

	EGameDLSSMode GetDLSSMode() const { return DLSSMode; }
	UFUNCTION()
	void SetDLSSMode(EGameDLSSMode InDLSSMode);
	UFUNCTION()
	EGameDLSSMode GetDesiredDLSSMode() const { return DesiredDLSSMode; }
	void SetDesiredDLSSMode(EGameDLSSMode InDLSSMode);

	UFUNCTION()
	bool GetDLSSFGEnabled() const { return bDLSSFGEnabled; }
	UFUNCTION()
	void SetDLSSFGEnabled(bool bEnabled);

	EStreamlineDLSSGMode GetDLSSFGMode() const { return DLSSFGMode; }
	UFUNCTION()
	void SetDLSSFGMode(EStreamlineDLSSGMode InDLSSFGMode);
	UFUNCTION()
	EStreamlineDLSSGMode GetDesiredDLSSFGMode() const { return DesiredDLSSFGMode; }
	void SetDesiredDLSSFGMode(EStreamlineDLSSGMode InDLSSFGMode);

protected:
	UPROPERTY(Config)
	bool bDLSSUpscaleEnabled = false;

	UPROPERTY(Config)
	EGameDLSSMode DLSSMode = EGameDLSSMode::Auto;

	UPROPERTY(Transient)
	EGameDLSSMode DesiredDLSSMode;

	UPROPERTY(Config)
	bool bDLSSFGEnabled = true;

	UPROPERTY(Config)
	EStreamlineDLSSGMode DLSSFGMode = EStreamlineDLSSGMode::Auto;

	UPROPERTY(Transient)
	EStreamlineDLSSGMode DesiredDLSSFGMode;
	
	//////////////////////////////////////////////////////////////////
	// Display - Mobile quality settings
private:
	void SetMobileFPSMode(int32 NewLimitFPS);

	bool bSettingOverallQualityGuard = false;

	////////////////////////////////////////////////////////
	// Audio - Volume
public:
	UFUNCTION()
	float GetOverallVolume() const;
	UFUNCTION()
	void SetOverallVolume(float InVolume);

	UFUNCTION()
	float GetMusicVolume() const;
	UFUNCTION()
	void SetMusicVolume(float InVolume);

	UFUNCTION()
	float GetSoundFXVolume() const;
	UFUNCTION()
	void SetSoundFXVolume(float InVolume);

	UFUNCTION()
	float GetDialogueVolume() const;
	UFUNCTION()
	void SetDialogueVolume(float InVolume);

	UFUNCTION()
	float GetVoiceChatVolume() const;
	UFUNCTION()
	void SetVoiceChatVolume(float InVolume);

private:
	void LoadAndSetVolume(FName SoundClassName, float InVolume);
	
	void LoadUserControlBusMix();

	void SetVolumeForControlBus(USoundControlBus* InSoundControlBus, float InVolume);

private:
	UPROPERTY(Config)
	float OverallVolume = 1.0f;
	UPROPERTY(Config)
	float MusicVolume = 1.0f;
	UPROPERTY(Config)
	float SoundFXVolume = 1.0f;
	UPROPERTY(Config)
	float DialogueVolume = 1.0f;
	UPROPERTY(Config)
	float VoiceChatVolume = 1.0f;

	UPROPERTY(Transient)
	TMap<FName, TObjectPtr<USoundControlBus>> ControlBusMap;

	UPROPERTY(Transient)
	TObjectPtr<USoundControlBusMix> ControlBusMix = nullptr;

	UPROPERTY(Transient)
	bool bSoundControlBusMixLoaded;

	//////////////////////////////////////////////////////////////////
	// Audio - Sound Device
public:
	DECLARE_EVENT_OneParam(UOrionSettingsLocal, FAudioDeviceChanged, const FString& /*DeviceId*/);
	FAudioDeviceChanged OnAudioOutputDeviceChanged;
	FAudioDeviceChanged OnAudioInputDeviceChanged;
	
	/** Returns the user's audio device id */
	UFUNCTION()
	FString GetAudioOutputDeviceId() const { return AudioOutputDeviceId; }
	UFUNCTION()
	FString GetAudioInputDeviceId() const { return AudioInputDeviceId; }

	UFUNCTION()
	int32 GetInputDeviceSampleRate() const { return InputDeviceSampleRate; }
	UFUNCTION()
	int32 GetInputDeviceNumChannels() const { return InputDeviceNumChannels; }

	/** Sets the user's audio device by id */
	UFUNCTION()
	void SetAudioOutputDeviceId(const FString& InAudioOutputDeviceId);
	UFUNCTION()
	void SetAudioInputDeviceId(const FString& InAudioInputDeviceId);

private:
	UPROPERTY(Config)
	FString AudioOutputDeviceId;
	UPROPERTY(Config)
	FString AudioInputDeviceId;

	UPROPERTY(Config)
	int32 InputDeviceSampleRate = 48000;
	UPROPERTY(Config)
	int32 InputDeviceNumChannels = 1;

	//////////////////////////////////////////////////////////////////
	// Audio - Sound HRTF
public:
	/** Returns if we're using headphone mode (HRTF) **/
	UFUNCTION()
	bool IsHeadphoneModeEnabled() const;

	/** Enables or disables headphone mode (HRTF) - NOTE this setting will be overruled if au.DisableBinauralSpatialization is set */
	UFUNCTION()
	void SetHeadphoneModeEnabled(bool bEnabled);

	/** Returns if we can enable/disable headphone mode (i.e., if it's not forced on or off by the platform) */
	UFUNCTION()
	bool CanModifyHeadphoneModeEnabled() const;

public:
	/** Whether we *want* to use headphone mode (HRTF); may or may not actually be applied **/
	UPROPERTY(Transient)
	bool bDesiredHeadphoneMode;

private:
	/** Whether to use headphone mode (HRTF) **/
	UPROPERTY(config)
	bool bUseHeadphoneMode;

	//////////////////////////////////////////////////////////////////
	// Audio - Sound HDR
public:
	/** Returns if we're using High Dynamic Range Audio mode (HDR Audio) **/
	UFUNCTION()
	bool IsHDRAudioModeEnabled() const;

	/** Enables or disables High Dynamic Range Audio mode (HDR Audio) */
	UFUNCTION()
	void SetHDRAudioModeEnabled(bool bEnabled);

	/** Whether to use High Dynamic Range Audio mode (HDR Audio) **/
	UPROPERTY(config)
	bool bUseHDRAudioMode;

	//////////////////////////////////////////////////////////////////
	// Audio - Steam Audio GPU Acceleration
public:
	/** Returns if Steam Audio GPU acceleration should be used when supported */
	UFUNCTION()
	bool IsGPUAudioAccelerationEnabled() const;

	/** Enables or disables Steam Audio GPU acceleration. Changes apply next time Steam Audio initializes. */
	UFUNCTION()
	void SetGPUAudioAccelerationEnabled(bool bEnabled);

	/** Returns if the current machine has the runtime required for Steam Audio GPU acceleration */
	UFUNCTION()
	bool CanEnableGPUAudioAcceleration() const;

private:
	void ApplyGPUAudioAccelerationSetting();

	/** Whether to use Steam Audio GPU acceleration when the runtime supports it */
	UPROPERTY(Config)
	bool bUseGPUAudioAcceleration = false;

	////////////////////////////////////////////////////////
	// Frontend state
public:
	void SetShouldUseFrontendPerformanceSettings(bool bInFrontEnd);
protected:
	bool ShouldUseFrontendPerformanceSettings() const;
private:
	bool bInFrontEndForPerformancePurposes = false;

	////////////////////////////////////////////////////////
	// Replays
public:
	FORCEINLINE bool ShouldAutoRecordReplays() const { return bShouldAutoRecordReplays; }
private:
	UPROPERTY(Config)
	bool bShouldAutoRecordReplays = false;

	////////////////////////////////////////////////////////
	// Safezone
public:
	UFUNCTION()
	bool IsSafeZoneSet() const { return SafeZoneScale != -1; }
	UFUNCTION()
	float GetSafeZone() const { return SafeZoneScale >= 0 ? SafeZoneScale : 0; }
	UFUNCTION()
	void SetSafeZone(float Value) { SafeZoneScale = Value; ApplySafeZoneScale(); }

	void ApplySafeZoneScale();

private:
	UPROPERTY(Config)
	float SafeZoneScale = -1;

	////////////////////////////////////////////////////////
	// Keybindings
public:
	UFUNCTION()
	void SetControllerPlatform(const FName InControllerPlatform);
	UFUNCTION()
	FName GetControllerPlatform() const;

private:
	/**
	 * The name of the controller the player is using.
	 * This is maps to the name of a UCommonInputBaseControllerData that is available on this current platform.
	 * The gamepad data are registered per platform, find them in <Platform>Game.ini files listed under +ControllerData=
	 */
	UPROPERTY(Config)
	FName ControllerPlatform;

	////////////////////////////////////////////////////////
private:
	void ReapplyThingsDueToPossibleDeviceProfileChange();

protected:
	TWeakObjectPtr<ULocalPlayer> OwningLocalPlayer;
	
private:
	FDelegateHandle OnApplicationActivationStateChangedHandle;
};
