/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameSettingRegistry.h"

#include "GameSettingAction.h"
#include "GameSettingCollection.h"
#include "GameSettingValueDiscreteDynamic.h"
#include "GameSettingValueScalarDynamic.h"
#include "OrionSettingsLocal.h"
#include "OrionSettingsShared.h"
#include "DataSource/GameSettingDataSourceDynamic.h"
#include "EditCondition/WhenPlatformHasTrait.h"
#include "NativeGameplayTags.h"
#include "CustomSettings/GameSettingValueDiscreteDynamic_AntiAliasingMethod.h"
#include "CustomSettings/GameSettingValueDiscreteDynamic_DLSSFGMode.h"
#include "CustomSettings/GameSettingValueDiscreteDynamic_DLSSMode.h"
#include "CustomSettings/GameSettingValueDiscreteDynamic_RayTracing.h"
#include "CustomSettings/GameSettingValueDiscrete_MobileFPSType.h"
#include "CustomSettings/GameSettingValueDiscrete_OverallQuality.h"
#include "CustomSettings/GameSettingValueDiscrete_Resolution.h"
#include "EditCondition/WhenCondition.h"
#include "EditCondition/WhenPlayingAsPrimaryPlayer.h"
#include "Performance/GameDLSSSubsystem.h"
#include "Performance/GamePerformanceSettings.h"
#include "Player/OrionLocalPlayer.h"
#include "System/OrionGameRenderSubsystem.h"

#define LOCTEXT_NAMESPACE "Orion"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Platform_Trait_SupportsWindowedMode, "Platform.Trait.SupportsWindowedMode");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Platform_Trait_NeedsBrightnessAdjustment, "Platform.Trait.NeedsBrightnessAdjustment");

enum class EGameFramePacingEditCondition
{
	EnableIf,
	DisableIf
};

/**
 * Checks the platform-specific value for FramePacingMode
 */
class FGameSettingEditCondition_FramePacingMode : public FGameSettingEditCondition
{
public:
	FGameSettingEditCondition_FramePacingMode(EGameFramePacingMode InDesiredMode, EGameFramePacingEditCondition InMatchMode = EGameFramePacingEditCondition::EnableIf)
		: DesiredMode(InDesiredMode)
		, MatchMode(InMatchMode)
	{
	}

	virtual void GatherEditState(const ULocalPlayer * InLocalPlayer, FGameSettingEditableState & InOutEditState) const override
	{
		const EGameFramePacingMode ActualMode = UGamePlatformSpecificRenderingSettings::Get()->FramePacingMode;
		
		const bool bMatches = (ActualMode == DesiredMode);
		const bool bMatchesAreBad = (MatchMode == EGameFramePacingEditCondition::DisableIf);

		if (bMatches == bMatchesAreBad)
		{
			InOutEditState.Kill(FString::Printf(TEXT("Frame pacing mode %d didn't match requirement %d"), (int32)ActualMode, (int32)DesiredMode));
		}
	}
private:
	EGameFramePacingMode DesiredMode;
	EGameFramePacingEditCondition MatchMode;
};

/**
 * Checks the platform-specific value for bSupportsGranularVideoQualitySettings
 */
class FGameSettingEditCondition_VideoQuality : public FGameSettingEditCondition
{
public:
	FGameSettingEditCondition_VideoQuality(const FString& InDisableString)
		: DisableString(InDisableString)
	{
	}

	virtual void GatherEditState(const ULocalPlayer* InLocalPlayer, FGameSettingEditableState& InOutEditState) const override
	{
		if (!UGamePlatformSpecificRenderingSettings::Get()->bSupportsGranularVideoQualitySettings)
		{
			InOutEditState.Kill(DisableString);
		}
	}

	virtual void SettingChanged(const ULocalPlayer* LocalPlayer, UGameSetting* Setting, EGameSettingChangeReason Reason) const override
	{
		// TODO: for now this applies the setting immediately
		const UOrionLocalPlayer* OrionLocalPlayer = CastChecked<UOrionLocalPlayer>(LocalPlayer);
		OrionLocalPlayer->GetLocalSettings()->ApplyScalabilitySettings();
	}

private:
	FString DisableString;
};

////////////////////////////////////////////////////////////////////////////////////

UGameSettingCollection* UOrionGameSettingRegistry::InitializeVideoSettings(UCoreLocalPlayer* InLocalPlayer)
{
	UGameSettingCollection* Screen = NewObject<UGameSettingCollection>();
	Screen->SetDevName(TEXT("VideoCollection"));
	Screen->SetDisplayName(LOCTEXT("VideoCollection_Name", "Video"));
	Screen->Initialize(InLocalPlayer);
	
	////////////////////////////////////////////////////////////////////////////////////

	UGameSettingValueDiscreteDynamic_Enum* WindowModeSetting = nullptr;
	UGameSetting* MobileFPSType = nullptr;
	UGameSettingValueDiscreteDynamic_AntiAliasingMethod* AntiAliasingMethod = nullptr;

	////////////////////////////////////////////////////////////////////////////////////

	// Display
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* Display = NewObject<UGameSettingCollection>();
		Display->SetDevName(TEXT("DisplayCollection"));
		Display->SetDisplayName(LOCTEXT("DisplayCollection_Name", "Display"));
		Screen->AddSetting(Display);

		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Enum* Setting = NewObject<UGameSettingValueDiscreteDynamic_Enum>();
			Setting->SetDevName(TEXT("WindowMode"));
			Setting->SetDisplayName(LOCTEXT("WindowMode_Name", "Window Mode"));
			// TODO: 将设置的DescriptionRichText使用蓝图填写
			Setting->SetDescriptionRichText(LOCTEXT("WindowMode_Description", "WindowMode Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetFullscreenMode));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetFullscreenMode));
			Setting->AddEnumOption(EWindowMode::Fullscreen, LOCTEXT("WindowModeFullscreen", "Fullscreen"));
			Setting->AddEnumOption(EWindowMode::WindowedFullscreen, LOCTEXT("WindowModeWindowedFullscreen", "Windowed Fullscreen"));
			Setting->AddEnumOption(EWindowMode::Windowed, LOCTEXT("WindowModeWindowed", "Windowed"));

			Setting->AddEditCondition(FWhenPlatformHasTrait::KillIfMissing(TAG_Platform_Trait_SupportsWindowedMode, TEXT("Platform does not support window mode")));

			WindowModeSetting = Setting;

			Display->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscrete_Resolution* Setting = NewObject<UGameSettingValueDiscrete_Resolution>();
			Setting->SetDevName(TEXT("Resolution"));
			Setting->SetDisplayName(LOCTEXT("Resolution_Name", "Resolution"));
			Setting->SetDescriptionRichText(LOCTEXT("Resolution_Description", "Resolution Tips"));

			Setting->AddEditDependency(WindowModeSetting);
			Setting->AddEditCondition(FWhenPlatformHasTrait::KillIfMissing(TAG_Platform_Trait_SupportsWindowedMode, TEXT("Platform does not support window mode")));
			Setting->AddEditCondition(MakeShared<FWhenCondition>([WindowModeSetting](const ULocalPlayer*, FGameSettingEditableState& InOutEditState)
			{
				if (WindowModeSetting->GetValue<EWindowMode::Type>() == EWindowMode::WindowedFullscreen)
				{
					InOutEditState.Disable(LOCTEXT("ResolutionWindowedFullscreen_Disabled", "When the Window Mode is set to <strong>Windowed Fullscreen</>, the resolution must match the native desktop resolution."));
				}
			}));

			Display->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			AddPerformanceStatPage(Display, InLocalPlayer);
		}
		//----------------------------------------------------------------------------------
	}

	// Graphics
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* Graphics = NewObject<UGameSettingCollection>();
		Graphics->SetDevName(TEXT("GraphicsCollection"));
		Graphics->SetDisplayName(LOCTEXT("GraphicsCollection_Name", "Graphics"));
		Screen->AddSetting(Graphics);
		
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
			Setting->SetDevName(TEXT("Brightness"));
			Setting->SetDisplayName(LOCTEXT("Brightness_Name", "Brightness"));
			Setting->SetDescriptionRichText(LOCTEXT("Brightness_Description", "Brightness Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetDisplayGamma));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetDisplayGamma));
			Setting->SetDefaultValue(2.2);
			Setting->SetDisplayFormat([](double SourceValue, double NormalizedValue) {
				return FText::Format(LOCTEXT("BrightnessFormat", "{0}%"), (int32)FMath::GetMappedRangeValueClamped(FVector2D(0, 1), FVector2D(50, 150), NormalizedValue));
			});
			Setting->SetSourceRangeAndStep(TRange<double>(1.7, 2.7), 0.01);

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());
			Setting->AddEditCondition(FWhenPlatformHasTrait::KillIfMissing(TAG_Platform_Trait_NeedsBrightnessAdjustment, TEXT("Platform does not require brightness adjustment.")));

			Graphics->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingCollectionPage* SubtitlePage = NewObject<UGameSettingCollectionPage>();
			SubtitlePage->SetDevName(TEXT("SubtitlePage"));
			SubtitlePage->SetDisplayName(LOCTEXT("SubtitlePage_Name", "Subtitles"));
			SubtitlePage->SetDescriptionRichText(LOCTEXT("SubtitlePage_Description", "SubtitlePage Tips"));
			SubtitlePage->SetNavigationText(LOCTEXT("SubtitlePage_Navigation", "Options"));

			SubtitlePage->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			Graphics->AddSetting(SubtitlePage);

			// Subtitles
			////////////////////////////////////////////////////////////////////////////////////
			{
				UGameSettingCollection* SubtitleCollection = NewObject<UGameSettingCollection>();
				SubtitleCollection->SetDevName(TEXT("SubtitlesCollection"));
				SubtitleCollection->SetDisplayName(LOCTEXT("SubtitlesCollection_Name", "Subtitles"));
				SubtitlePage->AddSetting(SubtitleCollection);

				//----------------------------------------------------------------------------------
				{
					UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
					Setting->SetDevName(TEXT("Subtitles"));
					Setting->SetDisplayName(LOCTEXT("Subtitles_Name", "Subtitles"));
					Setting->SetDescriptionRichText(LOCTEXT("Subtitles_Description", "Subtitles Tips"));

					Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetSubtitlesEnabled));
					Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetSubtitlesEnabled));
					Setting->SetDefaultValue(GetDefault<UOrionSettingsShared>()->GetSubtitlesEnabled());

					SubtitleCollection->AddSetting(Setting);
				}
				//----------------------------------------------------------------------------------
				{
					UGameSettingValueDiscreteDynamic_Enum* Setting = NewObject<UGameSettingValueDiscreteDynamic_Enum>();
					Setting->SetDevName(TEXT("SubtitleTextSize"));
					Setting->SetDisplayName(LOCTEXT("SubtitleTextSize_Name", "Text Size"));
					Setting->SetDescriptionRichText(LOCTEXT("SubtitleTextSize_Description", "SubtitleTextSize Tips"));

					Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetSubtitlesTextSize));
					Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetSubtitlesTextSize));
					Setting->SetDefaultValue(GetDefault<UOrionSettingsShared>()->GetSubtitlesTextSize());
					Setting->AddEnumOption(ESubtitleDisplayTextSize::ExtraSmall, LOCTEXT("ESubtitleTextSize_ExtraSmall", "Extra Small"));
					Setting->AddEnumOption(ESubtitleDisplayTextSize::Small, LOCTEXT("ESubtitleTextSize_Small", "Small"));
					Setting->AddEnumOption(ESubtitleDisplayTextSize::Medium, LOCTEXT("ESubtitleTextSize_Medium", "Medium"));
					Setting->AddEnumOption(ESubtitleDisplayTextSize::Large, LOCTEXT("ESubtitleTextSize_Large", "Large"));
					Setting->AddEnumOption(ESubtitleDisplayTextSize::ExtraLarge, LOCTEXT("ESubtitleTextSize_ExtraLarge", "Extra Large"));

					SubtitleCollection->AddSetting(Setting);
				}
				//----------------------------------------------------------------------------------
				/**
				{
					UGameSettingValueDiscreteDynamic_Enum* Setting = NewObject<UGameSettingValueDiscreteDynamic_Enum>();
					Setting->SetDevName(TEXT("SubtitleTextColor"));
					Setting->SetDisplayName(LOCTEXT("SubtitleTextColor_Name", "Text Color"));
					Setting->SetDescriptionRichText(LOCTEXT("SubtitleTextColor_Description", "SubtitleTextColor Tips"));

					Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetSubtitlesTextColor));
					Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetSubtitlesTextColor));
					Setting->SetDefaultValue(GetDefault<UOrionSettingsShared>()->GetSubtitlesTextColor());
					Setting->AddEnumOption(ESubtitleDisplayTextColor::White, LOCTEXT("ESubtitleTextColor_White", "White"));
					Setting->AddEnumOption(ESubtitleDisplayTextColor::Yellow, LOCTEXT("ESubtitleTextColor_Yellow", "Yellow"));

					SubtitleCollection->AddSetting(Setting);
				}
				*/
				//----------------------------------------------------------------------------------
				{
					UGameSettingValueDiscreteDynamic_Enum* Setting = NewObject<UGameSettingValueDiscreteDynamic_Enum>();
					Setting->SetDevName(TEXT("SubtitleTextBorder"));
					Setting->SetDisplayName(LOCTEXT("SubtitleBackgroundStyle_Name", "Text Border"));
					Setting->SetDescriptionRichText(LOCTEXT("SubtitleTextBorder_Description", "SubtitleTextBorder Tips"));

					Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetSubtitlesTextBorder));
					Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetSubtitlesTextBorder));
					Setting->SetDefaultValue(GetDefault<UOrionSettingsShared>()->GetSubtitlesTextBorder());
					Setting->AddEnumOption(ESubtitleDisplayTextBorder::None, LOCTEXT("ESubtitleTextBorder_None", "None"));
					Setting->AddEnumOption(ESubtitleDisplayTextBorder::Outline, LOCTEXT("ESubtitleTextBorder_Outline", "Outline"));
					Setting->AddEnumOption(ESubtitleDisplayTextBorder::DropShadow, LOCTEXT("ESubtitleTextBorder_DropShadow", "Drop Shadow"));

					SubtitleCollection->AddSetting(Setting);
				}
				//----------------------------------------------------------------------------------
				{
					UGameSettingValueDiscreteDynamic_Enum* Setting = NewObject<UGameSettingValueDiscreteDynamic_Enum>();
					Setting->SetDevName(TEXT("SubtitleBackgroundOpacity"));
					Setting->SetDisplayName(LOCTEXT("SubtitleBackground_Name", "Background Opacity"));
					Setting->SetDescriptionRichText(LOCTEXT("SubtitleBackgroundOpacity_Description", "SubtitleBackgroundOpacity Tips"));

					Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetSubtitlesBackgroundOpacity));
					Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetSubtitlesBackgroundOpacity));
					Setting->SetDefaultValue(GetDefault<UOrionSettingsShared>()->GetSubtitlesBackgroundOpacity());
					Setting->AddEnumOption(ESubtitleDisplayBackgroundOpacity::Clear, LOCTEXT("ESubtitleBackgroundOpacity_Clear", "Clear"));
					Setting->AddEnumOption(ESubtitleDisplayBackgroundOpacity::Low, LOCTEXT("ESubtitleBackgroundOpacity_Low", "Low"));
					Setting->AddEnumOption(ESubtitleDisplayBackgroundOpacity::Medium, LOCTEXT("ESubtitleBackgroundOpacity_Medium", "Medium"));
					Setting->AddEnumOption(ESubtitleDisplayBackgroundOpacity::High, LOCTEXT("ESubtitleBackgroundOpacity_High", "High"));
					Setting->AddEnumOption(ESubtitleDisplayBackgroundOpacity::Solid, LOCTEXT("ESubtitleBackgroundOpacity_Solid", "Solid"));

					SubtitleCollection->AddSetting(Setting);
				}
				//----------------------------------------------------------------------------------
			}
		}
		//----------------------------------------------------------------------------------
	}

	// Graphics Quality
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* GraphicsQuality = NewObject<UGameSettingCollection>();
		GraphicsQuality->SetDevName(TEXT("GraphicsQuality"));
		GraphicsQuality->SetDisplayName(LOCTEXT("GraphicsQuality_Name", "Graphics Quality"));
		Screen->AddSetting(GraphicsQuality);

		UGameSetting* AutoSetQuality = nullptr;
		UGameSetting* GraphicsQualityPresets = nullptr;

		//----------------------------------------------------------------------------------
		{
			// Console-style device profile selection
			UGameSettingValueDiscreteDynamic* Setting = NewObject<UGameSettingValueDiscreteDynamic>();
			Setting->SetDevName(TEXT("DeviceProfileSuffix"));
			Setting->SetDisplayName(LOCTEXT("DeviceProfileSuffix_Name", "Quality Presets"));
			Setting->SetDescriptionRichText(LOCTEXT("DeviceProfileSuffix_Description", "DeviceProfileSuffix Tips"));
			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetDesiredDeviceProfileQualitySuffix));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetDesiredDeviceProfileQualitySuffix));

			const UGamePlatformSpecificRenderingSettings* PlatformSettings = UGamePlatformSpecificRenderingSettings::Get();

			Setting->SetDefaultValueFromString(PlatformSettings->DefaultDeviceProfileSuffix);
			for (const FGameQualityDeviceProfileVariant& Variant : PlatformSettings->UserFacingDeviceProfileOptions)
			{
				if (FPlatformMisc::GetMaxRefreshRate() >= Variant.MinRefreshRate)
				{
					Setting->AddDynamicOption(Variant.DeviceProfileSuffix, Variant.DisplayName);
				}
			}

			if (Setting->GetDynamicOptions().Num() > 1)
			{
				GraphicsQuality->AddSetting(Setting);
			}
		}
		//----------------------------------------------------------------------------------
		{
			// Mobile style frame rate selection
			UGameSettingValueDiscrete_MobileFPSType* Setting = NewObject<UGameSettingValueDiscrete_MobileFPSType>();
			MobileFPSType = Setting;

			Setting->SetDevName(TEXT("FrameRateLimit_Mobile"));
			Setting->SetDisplayName(LOCTEXT("FrameRateLimit_Mobile_Name", "Frame Rate Limit"));
			Setting->SetDescriptionRichText(LOCTEXT("FrameRateLimit_Mobile_Description", "FrameRateLimit Tips"));

			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_FramePacingMode>(EGameFramePacingMode::MobileStyle));

			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingAction* Setting = NewObject<UGameSettingAction>();
			Setting->SetDevName(TEXT("AutoSetQuality"));
			Setting->SetDisplayName(LOCTEXT("AutoSetQuality_Name", "Auto-Set Quality"));
			Setting->SetDescriptionRichText(LOCTEXT("AutoSetQuality_Description", "AutoSetQuality Tips"));

			Setting->SetDoesActionDirtySettings(true);
			Setting->SetActionText(LOCTEXT("AutoSetQuality_Action", "Auto-Set"));
			Setting->SetCustomAction([](ULocalPlayer* LocalPlayer)
			{
				const UGamePlatformSpecificRenderingSettings* PlatformSettings = UGamePlatformSpecificRenderingSettings::Get();
				if (PlatformSettings->FramePacingMode == EGameFramePacingMode::MobileStyle)
				{
					UOrionSettingsLocal::Get()->ResetToMobileDeviceDefaults();
				}
				else
				{
					const UOrionLocalPlayer* OrionLocalPlayer = CastChecked<UOrionLocalPlayer>(LocalPlayer);
					// We don't save state until users apply the settings.
					constexpr bool bImmediatelySaveState = false;
					OrionLocalPlayer->GetLocalSettings()->RunAutoBenchmark(bImmediatelySaveState);
				}
			});

			Setting->AddEditCondition(MakeShared<FWhenCondition>([](const ULocalPlayer* LocalPlayer, FGameSettingEditableState& InOutEditState)
			{
				const UGamePlatformSpecificRenderingSettings* PlatformSettings = UGamePlatformSpecificRenderingSettings::Get();
				const bool bCanUseDueToMobile = (PlatformSettings->FramePacingMode == EGameFramePacingMode::MobileStyle);

				const UOrionLocalPlayer* OrionLocalPlayer = CastChecked<UOrionLocalPlayer>(LocalPlayer);
				const bool bCanBenchmark = OrionLocalPlayer->GetLocalSettings()->CanRunAutoBenchmark();

				if (!bCanUseDueToMobile && !bCanBenchmark)
				{
					InOutEditState.Kill(TEXT("Auto quality not supported"));
				}
			}));

			if (MobileFPSType != nullptr)
			{
				MobileFPSType->AddEditDependency(Setting);
			}

			GraphicsQuality->AddSetting(Setting);

			AutoSetQuality = Setting;
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscrete_OverallQuality* Setting = NewObject<UGameSettingValueDiscrete_OverallQuality>();
			Setting->SetDevName(TEXT("GraphicsQualityPresets"));
			Setting->SetDisplayName(LOCTEXT("GraphicsQualityPresets_Name", "Quality Presets"));
			Setting->SetDescriptionRichText(LOCTEXT("GraphicsQualityPresets_Description", "GraphicsQualityPresets Tips"));

			Setting->AddEditDependency(AutoSetQuality);

			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_FramePacingMode>(EGameFramePacingMode::ConsoleStyle, EGameFramePacingEditCondition::DisableIf));

			if (MobileFPSType != nullptr)
			{
				Setting->AddEditDependency(MobileFPSType);
				MobileFPSType->AddEditDependency(Setting);
			}

			GraphicsQuality->AddSetting(Setting);

			GraphicsQualityPresets = Setting;
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
			Setting->SetDevName(TEXT("ResolutionScale"));
			Setting->SetDisplayName(LOCTEXT("ResolutionScale_Name", "3D Resolution"));
			Setting->SetDescriptionRichText(LOCTEXT("ResolutionScale_Description", "ResolutionScale Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetResolutionScaleNormalized_Lerp));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetResolutionScaleNormalized_Lerp));
			Setting->SetDisplayFormat(UGameSettingValueScalarDynamic::ZeroToOnePercent);

			Setting->AddEditDependency(AutoSetQuality);
			Setting->AddEditDependency(GraphicsQualityPresets);
			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_VideoQuality>(TEXT("Platform does not support 3D Resolution")));
			// TODO: Add support for 3d res on mobile

			// When this setting changes, it can GraphicsQualityPresets to be set to custom, or a particular preset.
			GraphicsQualityPresets->AddEditDependency(Setting);
			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("GlobalIlluminationQuality"));
			Setting->SetDisplayName(LOCTEXT("GlobalIlluminationQuality_Name", "Global Illumination"));
			Setting->SetDescriptionRichText(LOCTEXT("GlobalIlluminationQuality_Description", "GlobalIlluminationQuality Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetGlobalIlluminationQuality));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetGlobalIlluminationQuality));
			Setting->AddOption(0, LOCTEXT("VisualEffectQualityLow", "Low"));
			Setting->AddOption(1, LOCTEXT("VisualEffectQualityMedium", "Medium"));
			Setting->AddOption(2, LOCTEXT("VisualEffectQualityHigh", "High"));
			Setting->AddOption(3, LOCTEXT("VisualEffectQualityEpic", "Epic"));
			Setting->AddOption(4, LOCTEXT("VisualEffectQualityCinematic", "Cinematic"));

			Setting->AddEditDependency(AutoSetQuality);
			Setting->AddEditDependency(GraphicsQualityPresets);
			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_VideoQuality>(TEXT("Platform does not support GlobalIlluminationQuality")));

			// When this setting changes, it can GraphicsQualityPresets to be set to custom, or a particular preset.
			GraphicsQualityPresets->AddEditDependency(Setting);

			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("Shadows"));
			Setting->SetDisplayName(LOCTEXT("Shadows_Name", "Shadows"));
			Setting->SetDescriptionRichText(LOCTEXT("Shadows_Description", "Shadows Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetShadowQuality));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetShadowQuality));
			Setting->AddOption(0, LOCTEXT("ShadowLow", "Off"));
			Setting->AddOption(1, LOCTEXT("ShadowMedium", "Medium"));
			Setting->AddOption(2, LOCTEXT("ShadowHigh", "High"));
			Setting->AddOption(3, LOCTEXT("ShadowEpic", "Epic"));
			Setting->AddOption(4, LOCTEXT("ShadowCinematic", "Cinematic"));

			Setting->AddEditDependency(AutoSetQuality);
			Setting->AddEditDependency(GraphicsQualityPresets);
			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_VideoQuality>(TEXT("Platform does not support Shadows")));

			// When this setting changes, it can GraphicsQualityPresets to be set to custom, or a particular preset.
			GraphicsQualityPresets->AddEditDependency(Setting);

			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("AntiAliasing"));
			Setting->SetDisplayName(LOCTEXT("AntiAliasing_Name", "Anti-Aliasing"));
			Setting->SetDescriptionRichText(LOCTEXT("AntiAliasing_Description", "AntiAliasing Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetAntiAliasingQuality));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetAntiAliasingQuality));
			Setting->AddOption(0, LOCTEXT("AntiAliasingLow", "Off"));
			Setting->AddOption(1, LOCTEXT("AntiAliasingMedium", "Medium"));
			Setting->AddOption(2, LOCTEXT("AntiAliasingHigh", "High"));
			Setting->AddOption(3, LOCTEXT("AntiAliasingEpic", "Epic"));
			Setting->AddOption(4, LOCTEXT("AntiAliasingCinematic", "Cinematic"));

			Setting->AddEditDependency(AutoSetQuality);
			Setting->AddEditDependency(GraphicsQualityPresets);
			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_VideoQuality>(TEXT("Platform does not support Anti-Aliasing")));

			// When this setting changes, it can GraphicsQualityPresets to be set to custom, or a particular preset.
			GraphicsQualityPresets->AddEditDependency(Setting);

			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("ViewDistance"));
			Setting->SetDisplayName(LOCTEXT("ViewDistance_Name", "View Distance"));
			Setting->SetDescriptionRichText(LOCTEXT("ViewDistance_Description", "ViewDistance Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetViewDistanceQuality));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetViewDistanceQuality));
			Setting->AddOption(0, LOCTEXT("ViewDistanceNear", "Near"));
			Setting->AddOption(1, LOCTEXT("ViewDistanceMedium", "Medium"));
			Setting->AddOption(2, LOCTEXT("ViewDistanceFar", "Far"));
			Setting->AddOption(3, LOCTEXT("ViewDistanceEpic", "Epic"));
			Setting->AddOption(4, LOCTEXT("ViewDistanceCinematic", "Cinematic"));

			Setting->AddEditDependency(AutoSetQuality);
			Setting->AddEditDependency(GraphicsQualityPresets);
			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_VideoQuality>(TEXT("Platform does not support View Distance")));

			// When this setting changes, it can GraphicsQualityPresets to be set to custom, or a particular preset.
			GraphicsQualityPresets->AddEditDependency(Setting);

			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("TextureQuality"));
			Setting->SetDisplayName(LOCTEXT("TextureQuality_Name", "Textures"));

			Setting->SetDescriptionRichText(LOCTEXT("TextureQuality_Description", "TextureQuality Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetTextureQuality));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetTextureQuality));
			Setting->AddOption(0, LOCTEXT("TextureQualityLow", "Low"));
			Setting->AddOption(1, LOCTEXT("TextureQualityMedium", "Medium"));
			Setting->AddOption(2, LOCTEXT("TextureQualityHigh", "High"));
			Setting->AddOption(3, LOCTEXT("TextureQualityEpic", "Epic"));
			Setting->AddOption(4, LOCTEXT("TextureQualityCinematic", "Cinematic"));

			Setting->AddEditDependency(AutoSetQuality);
			Setting->AddEditDependency(GraphicsQualityPresets);
			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_VideoQuality>(TEXT("Platform does not support Texture quality")));

			// When this setting changes, it can GraphicsQualityPresets to be set to custom, or a particular preset.
			GraphicsQualityPresets->AddEditDependency(Setting);

			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("VisualEffectQuality"));
			Setting->SetDisplayName(LOCTEXT("VisualEffectQuality_Name", "Effects"));
			Setting->SetDescriptionRichText(LOCTEXT("VisualEffectQuality_Description", "VisualEffectQuality Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetVisualEffectQuality));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetVisualEffectQuality));
			Setting->AddOption(0, LOCTEXT("VisualEffectQualityLow", "Low"));
			Setting->AddOption(1, LOCTEXT("VisualEffectQualityMedium", "Medium"));
			Setting->AddOption(2, LOCTEXT("VisualEffectQualityHigh", "High"));
			Setting->AddOption(3, LOCTEXT("VisualEffectQualityEpic", "Epic"));
			Setting->AddOption(4, LOCTEXT("VisualEffectQualityCinematic", "Cinematic"));

			Setting->AddEditDependency(AutoSetQuality);
			Setting->AddEditDependency(GraphicsQualityPresets);
			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_VideoQuality>(TEXT("Platform does not support VisualEffectQuality")));

			// When this setting changes, it can GraphicsQualityPresets to be set to custom, or a particular preset.
			GraphicsQualityPresets->AddEditDependency(Setting);

			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("ReflectionQuality"));
			Setting->SetDisplayName(LOCTEXT("ReflectionQuality_Name", "Reflections"));
			Setting->SetDescriptionRichText(LOCTEXT("ReflectionQuality_Description", "ReflectionQuality Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetReflectionQuality));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetReflectionQuality));
			Setting->AddOption(0, LOCTEXT("ReflectionQualityLow", "Low"));
			Setting->AddOption(1, LOCTEXT("ReflectionQualityMedium", "Medium"));
			Setting->AddOption(2, LOCTEXT("ReflectionQualityHigh", "High"));
			Setting->AddOption(3, LOCTEXT("ReflectionQualityEpic", "Epic"));
			Setting->AddOption(4, LOCTEXT("ReflectionQualityCinematic", "Cinematic"));

			Setting->AddEditDependency(AutoSetQuality);
			Setting->AddEditDependency(GraphicsQualityPresets);
			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_VideoQuality>(TEXT("Platform does not support ReflectionQuality")));

			// When this setting changes, it can GraphicsQualityPresets to be set to custom, or a particular preset.
			GraphicsQualityPresets->AddEditDependency(Setting);

			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("PostProcessingQuality"));
			Setting->SetDisplayName(LOCTEXT("PostProcessingQuality_Name", "Post Processing"));
			Setting->SetDescriptionRichText(LOCTEXT("PostProcessingQuality_Description", "PostProcessingQuality Tips"));  

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetPostProcessingQuality));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetPostProcessingQuality));
			Setting->AddOption(0, LOCTEXT("PostProcessingQualityLow", "Low"));
			Setting->AddOption(1, LOCTEXT("PostProcessingQualityMedium", "Medium"));
			Setting->AddOption(2, LOCTEXT("PostProcessingQualityHigh", "High"));
			Setting->AddOption(3, LOCTEXT("PostProcessingQualityEpic", "Epic"));
			Setting->AddOption(4, LOCTEXT("PostProcessingQualityCinematic", "Cinematic"));

			Setting->AddEditDependency(AutoSetQuality);
			Setting->AddEditDependency(GraphicsQualityPresets);
			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_VideoQuality>(TEXT("Platform does not support PostProcessingQuality")));

			// When this setting changes, it can GraphicsQualityPresets to be set to custom, or a particular preset.
			GraphicsQualityPresets->AddEditDependency(Setting);

			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_AntiAliasingMethod* Setting = NewObject<UGameSettingValueDiscreteDynamic_AntiAliasingMethod>();
			Setting->SetDevName(TEXT("AntiAliasingMethod"));
			Setting->SetDisplayName(LOCTEXT("AntiAliasingMethod_Name", "Anti Aliasing Method"));
			Setting->SetDescriptionRichText(LOCTEXT("AntiAliasingMethod_Description", "Anti Aliasing Method"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetDesiredAntiAliasingMethod));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetAntiAliasingMethod));

			Setting->AddEditCondition(MakeShared<FWhenCondition>([](const ULocalPlayer* LocalPlayer, FGameSettingEditableState& InOutEditState)
			{
				if (UOrionGameRenderSubsystem* RenderSubsystem = LocalPlayer->GetWorld()->GetSubsystem<UOrionGameRenderSubsystem>())
				{
					if (!RenderSubsystem->CanChangeAntiAliasingMethod())
					{
						InOutEditState.Disable(LOCTEXT("AntiAliasingMethod_Disabled", "When DLSS Upscale is turned on, anti aliasing is a fixed value."));
					}
				}
				else
				{
					InOutEditState.Kill(TEXT("Game Render Subsystem is none"));
				}
			}));

			GraphicsQuality->AddSetting(Setting);

			AntiAliasingMethod = Setting;
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_RayTracing* Setting = NewObject<UGameSettingValueDiscreteDynamic_RayTracing>();
			Setting->SetDevName(TEXT("RTX"));
			Setting->SetDisplayName(LOCTEXT("RTX_Name", "RTX"));
			Setting->SetDescriptionRichText(LOCTEXT("RTX_Description", "RTX"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetRTXEnabled));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetRTXEnabled));
			Setting->SetDefaultValue(GetDefault<UOrionSettingsLocal>()->GetRTXEnabled());

			Setting->AddEditCondition(MakeShared<FWhenCondition>([](const ULocalPlayer* LocalPlayer, FGameSettingEditableState& InOutEditState)
			{
				UOrionGameRenderSubsystem* GameRenderSubsystem = LocalPlayer->GetWorld()->GetSubsystem<UOrionGameRenderSubsystem>();
				if (!(GameRenderSubsystem && GameRenderSubsystem->IsRayTracingSupported()))
				{
					InOutEditState.Kill(TEXT("RTX is not supported."));
				}
			}));

			GraphicsQuality->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
	}

	// DLSS
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* DLSSGraphics = NewObject<UGameSettingCollection>();
		DLSSGraphics->SetDevName(TEXT("DLSSGraphics"));
		DLSSGraphics->SetDisplayName(LOCTEXT("DLSSGraphics_Name", "DLSS"));
		Screen->AddSetting(DLSSGraphics);

		UGameSettingValueDiscreteDynamic_Bool* DLSSUpscale = nullptr;
		UGameSettingValueDiscreteDynamic_Bool* DLSSFG = nullptr;

		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("DLSSUpscale"));
			Setting->SetDisplayName(LOCTEXT("DLSSUpscale_Name", "DLSS"));
			Setting->SetDescriptionRichText(LOCTEXT("DLSSUpscale_Description", "DLSS"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetDLSSUpscaleEnabled));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetDLSSUpscaleEnabled));
			Setting->SetDefaultValue(GetDefault<UOrionSettingsLocal>()->GetDLSSUpscaleEnabled());

			Setting->AddEditCondition(MakeShared<FWhenCondition>([](const ULocalPlayer* LocalPlayer, FGameSettingEditableState& InOutEditState)
			{
				UGameDLSSSubsystem* DLSSSubsystem = LocalPlayer->GetGameInstance()->GetSubsystem<UGameDLSSSubsystem>();
				if (!(DLSSSubsystem && DLSSSubsystem->DLSSUpscaleMessage.bSupport))
				{
					InOutEditState.Disable(DLSSSubsystem->DLSSUpscaleMessage.SupportMessageText);
				}
			}));

			DLSSGraphics->AddSetting(Setting);

			DLSSUpscale = Setting;

			AntiAliasingMethod->AddEditDependency(DLSSUpscale);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_DLSSMode* Setting = NewObject<UGameSettingValueDiscreteDynamic_DLSSMode>();
			Setting->SetDevName(TEXT("DLSSMode"));
			Setting->SetDisplayName(LOCTEXT("DLSSMode_Name", "DLSS Mode"));
			Setting->SetDescriptionRichText(LOCTEXT("DLSSMode_Description", "DLSS Mode"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetDesiredDLSSMode));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetDLSSMode));

			Setting->AddEditCondition(MakeShared<FWhenCondition>([DLSSUpscale](const ULocalPlayer*, FGameSettingEditableState& InOutEditState)
			{
				if (!DLSSUpscale->GetEditState().IsEnabled() || !DLSSUpscale->GetValue())
				{
					InOutEditState.Disable(LOCTEXT("DLSSMode_Disabled", "The DLSSUpscale is disabled."));
				}
			}));
			Setting->AddEditDependency(DLSSUpscale);

			DLSSGraphics->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("DLSSFG"));
			Setting->SetDisplayName(LOCTEXT("DLSSFG_Name", "DLSS Frame Generation"));
			Setting->SetDescriptionRichText(LOCTEXT("DLSSFG_Description", "DLSS Frame Generation"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetDLSSFGEnabled));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetDLSSFGEnabled));
			Setting->SetDefaultValue(GetDefault<UOrionSettingsLocal>()->GetDLSSFGEnabled());

			Setting->AddEditCondition(MakeShared<FWhenCondition>([](const ULocalPlayer* LocalPlayer, FGameSettingEditableState& InOutEditState)
			{
				UGameDLSSSubsystem* DLSSSubsystem = LocalPlayer->GetGameInstance()->GetSubsystem<UGameDLSSSubsystem>();
				if (!(DLSSSubsystem && DLSSSubsystem->DLSSFGMessage.bSupport))
				{
					InOutEditState.Disable(DLSSSubsystem->DLSSFGMessage.SupportMessageText);
				}
			}));

			DLSSGraphics->AddSetting(Setting);

			DLSSFG = Setting;
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_DLSSFGMode* Setting = NewObject<UGameSettingValueDiscreteDynamic_DLSSFGMode>();
			Setting->SetDevName(TEXT("DLSS Frame Generation Mode"));
			Setting->SetDisplayName(LOCTEXT("DLSSFGMode_Name", "DLSS Frame Generation Mode"));
			Setting->SetDescriptionRichText(LOCTEXT("DLSSFG_Description", "DLSS Frame Generation Mode"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetDesiredDLSSFGMode));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetDLSSFGMode));

			Setting->AddEditCondition(MakeShared<FWhenCondition>([DLSSFG](const ULocalPlayer*, FGameSettingEditableState& InOutEditState)
			{
				if (!DLSSFG->GetEditState().IsEnabled() || !DLSSFG->GetValue())
				{
					InOutEditState.Disable(LOCTEXT("DLSSFGMode_Disabled", "The DLSS Frame Generation is disabled."));
				}
			}));
			Setting->AddEditDependency(DLSSFG);

			DLSSGraphics->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
	}

	// Advanced Graphics
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* AdvancedGraphics = NewObject<UGameSettingCollection>();
		AdvancedGraphics->SetDevName(TEXT("AdvancedGraphics"));
		AdvancedGraphics->SetDisplayName(LOCTEXT("AdvancedGraphics_Name", "Advanced Graphics"));
		Screen->AddSetting(AdvancedGraphics);

		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("VerticalSync"));
			Setting->SetDisplayName(LOCTEXT("VerticalSync_Name", "Vertical Sync"));
			Setting->SetDescriptionRichText(LOCTEXT("VerticalSync_Description", "VerticalSync Tips"));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(IsVSyncEnabled));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetVSyncEnabled));
			Setting->SetDefaultValue(false);

			Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_FramePacingMode>(EGameFramePacingMode::DesktopStyle));

			Setting->AddEditDependency(WindowModeSetting);
			Setting->AddEditCondition(MakeShared<FWhenCondition>([WindowModeSetting](const ULocalPlayer*, FGameSettingEditableState& InOutEditState) {
				if (WindowModeSetting->GetValue<EWindowMode::Type>() != EWindowMode::Fullscreen)
				{
					InOutEditState.Disable(LOCTEXT("FullscreenNeededForVSync", "This feature only works if 'Window Mode' is set to 'Fullscreen'."));
				}
			}));

			AdvancedGraphics->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
	}
	
	return Screen;
}

////////////////////////////////////////////////////////////////////////////////////

void AddFrameRateOptions(UGameSettingValueDiscreteDynamic_Number* Setting)
{
	const FText FPSFormat = LOCTEXT("FPSFormat", "{0} FPS");
	for (int32 Rate : GetDefault<UGamePerformanceSettings>()->DesktopFrameRateLimits)
	{
		Setting->AddOption((float)Rate, FText::Format(FPSFormat, Rate));
	}
	Setting->AddOption(0.0f, LOCTEXT("UnlimitedFPS", "Unlimited"));
}

////////////////////////////////////////////////////////////////////////////////////

void UOrionGameSettingRegistry::InitializeVideoSettings_FrameRates(UGameSettingCollection* Screen, UCoreLocalPlayer* InLocalPlayer)
{
	//----------------------------------------------------------------------------------
	{
		UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
		Setting->SetDevName(TEXT("FrameRateLimit_OnBattery"));
		Setting->SetDisplayName(LOCTEXT("FrameRateLimit_OnBattery_Name", "Frame Rate Limit (On Battery)"));
		Setting->SetDescriptionRichText(LOCTEXT("FrameRateLimit_OnBattery_Description", "FrameRateLimit_OnBattery Tips"));

		Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetFrameRateLimit_OnBattery));
		Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetFrameRateLimit_OnBattery));
		Setting->SetDefaultValue(GetDefault<UOrionSettingsLocal>()->GetFrameRateLimit_OnBattery());

		Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_FramePacingMode>(EGameFramePacingMode::DesktopStyle));
		// TODO: Hide if this device doesn't have a battery (no API for this right now)

		AddFrameRateOptions(Setting);

		Screen->AddSetting(Setting);
	}
	//----------------------------------------------------------------------------------
	{
		UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
		Setting->SetDevName(TEXT("FrameRateLimit_InMenu"));
		Setting->SetDisplayName(LOCTEXT("FrameRateLimit_InMenu_Name", "Frame Rate Limit (Menu)"));
		Setting->SetDescriptionRichText(LOCTEXT("FrameRateLimit_InMenu_Description", "FrameRateLimit_InMenu Tips"));

		Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetFrameRateLimit_InMenu));
		Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetFrameRateLimit_InMenu));
		Setting->SetDefaultValue(GetDefault<UOrionSettingsLocal>()->GetFrameRateLimit_InMenu());
		Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_FramePacingMode>(EGameFramePacingMode::DesktopStyle));

		AddFrameRateOptions(Setting);

		Screen->AddSetting(Setting);
	}
	//----------------------------------------------------------------------------------
	{
		UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
		Setting->SetDevName(TEXT("FrameRateLimit_WhenBackground"));
		Setting->SetDisplayName(LOCTEXT("FrameRateLimit_WhenBackground_Name", "Frame Rate Limit (Background)"));
		Setting->SetDescriptionRichText(LOCTEXT("FrameRateLimit_WhenBackground_Description", "FrameRateLimit_WhenBackground Tips"));

		Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetFrameRateLimit_WhenBackground));
		Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetFrameRateLimit_WhenBackground));
		Setting->SetDefaultValue(GetDefault<UOrionSettingsLocal>()->GetFrameRateLimit_WhenBackground());
		Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_FramePacingMode>(EGameFramePacingMode::DesktopStyle));

		AddFrameRateOptions(Setting);

		Screen->AddSetting(Setting);
	}
	//----------------------------------------------------------------------------------
	{
		UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
		Setting->SetDevName(TEXT("FrameRateLimit_Always"));
		Setting->SetDisplayName(LOCTEXT("FrameRateLimit_Always_Name", "Frame Rate Limit"));
		Setting->SetDescriptionRichText(LOCTEXT("FrameRateLimit_Always_Description", "FrameRateLimit_Always Tips"));

		Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetFrameRateLimit_Always));
		Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetFrameRateLimit_Always));
		Setting->SetDefaultValue(GetDefault<UOrionSettingsLocal>()->GetFrameRateLimit_Always());
		Setting->AddEditCondition(MakeShared<FGameSettingEditCondition_FramePacingMode>(EGameFramePacingMode::DesktopStyle));

		AddFrameRateOptions(Setting);

		Screen->AddSetting(Setting);
	}
	//----------------------------------------------------------------------------------
}

#undef LOCTEXT_NAMESPACE
