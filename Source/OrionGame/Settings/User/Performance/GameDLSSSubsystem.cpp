/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameDLSSSubsystem.h"

#include "GameDLSSSettings.h"
#include "DLSSLibrary.h"
#include "NISLibrary.h"
#include "StreamlineLibraryReflex.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Settings/User/OrionSettingsLocal.h"
#include "System/OrionGameRenderSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameDLSSSubsystem)

#define LOCTEXT_NAMESPACE "DLSSSettings"

FGameDLSSSupportMessage::FGameDLSSSupportMessage()
	: bShowMessage(false)
	, bSupport(true)
{
}

void UGameDLSSSubsystem::InitDLSS()
{
	if (bInit)
		return;

	SetupDLSSUpscaleMessage();
	SetupDefaultDLSSSRMode();
	SetupDLSSRayReconstructionMessage();
	SetupDLSSFGMessage();
	SetupDefaultDLSSFGMode();
	SetupDefaultReflexMode();

	RefreshDLSSUpscaleState();
	EnableDLSSRayReconstruction(GetDefault<UGameDLSSSettings>()->bUseDLSSRayReconstruction);
	EnableDLSSFG(UOrionSettingsLocal::Get()->GetDLSSFGEnabled());

	bInit = true;
}

void UGameDLSSSubsystem::EnableDLSSUpscale(bool bEnabled)
{
	if (bEnabled && DLSSUpscaleMessage.bSupport)
	{
		UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get();

		switch (SupportedDLSSUpscaleMode)
		{
		case EGameDLSSUpscaleMode::BuiltIn:
			SetUpscaleBuiltIn();
			break;
		case EGameDLSSUpscaleMode::DLSS:
			SetUpscaleDLSS(SettingsLocal->GetDesiredDLSSMode());
			break;
		case EGameDLSSUpscaleMode::NIS:
			SetUpscaleNIS(SettingsLocal->GetDesiredDLSSMode());
			break;
		}
	}
	else
	{
		SetUpscaleBuiltIn();
	}
}

void UGameDLSSSubsystem::EnableDLSSRayReconstruction(bool bEnabled)
{
	if (DLSSRRMessage.bSupport)
	{
		UDLSSLibrary::EnableDLSSRR(bEnabled);
	}
}

void UGameDLSSSubsystem::RefreshDLSSUpscaleState()
{
	UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get();
	if (GetDefault<UGameDLSSSettings>()->DLSSUpscaleMode != EGameDLSSUpscaleMode::BuiltIn && SettingsLocal->GetDLSSUpscaleEnabled())
	{
		EnableDLSSUpscale(true);
	}
	else
	{
		EnableDLSSUpscale(false);
	}
}

void UGameDLSSSubsystem::SetDLSSMode(EGameDLSSMode InDLSSMode)
{
	if (DLSSUpscaleMessage.bSupport)
	{
		switch (SupportedDLSSUpscaleMode)
		{
		case EGameDLSSUpscaleMode::BuiltIn:
			SetUpscaleBuiltIn();
			break;
		case EGameDLSSUpscaleMode::DLSS:
			SetUpscaleDLSS(InDLSSMode);
			break;
		case EGameDLSSUpscaleMode::NIS:
			SetUpscaleNIS(InDLSSMode);
			break;
		}
	}
}

bool UGameDLSSSubsystem::IsDLSSUpscaleEnable()
{
	return UOrionSettingsLocal::Get()->GetDLSSUpscaleEnabled();
}

void UGameDLSSSubsystem::EnableDLSSFG(bool bEnabled)
{
	if (bEnabled && DLSSFGMessage.bSupport)
	{
		UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get();
		SetDLSSFGMode(SettingsLocal->GetDesiredDLSSFGMode());
	}
	else
	{
		SetDLSSFGMode(EStreamlineDLSSGMode::Off);
	}
}

void UGameDLSSSubsystem::SetDLSSFGMode(EStreamlineDLSSGMode InDLSSFGMode)
{
	UStreamlineLibraryDLSSG::SetDLSSGMode(InDLSSFGMode);
}

UDLSSMode UGameDLSSSubsystem::GameDLSSUpscaleModeToDLSSSRMode(EGameDLSSMode InDLSSSRMode)
{
	switch (InDLSSSRMode)
	{
	case EGameDLSSMode::None:
		return UDLSSMode::Off;
	case EGameDLSSMode::Auto:
		return UDLSSMode::Auto;
	case EGameDLSSMode::DLAA:
		return UDLSSMode::DLAA;
	case EGameDLSSMode::UltraQuality:
		return UDLSSMode::UltraQuality;
	case EGameDLSSMode::Quality:
		return UDLSSMode::Quality;
	case EGameDLSSMode::Balanced:
		return UDLSSMode::Balanced;
	case EGameDLSSMode::Performance:
		return UDLSSMode::Performance;
	case EGameDLSSMode::UltraPerformance:
		return UDLSSMode::UltraPerformance;
	}

	return UDLSSMode::Off;
}

EGameDLSSMode UGameDLSSSubsystem::DLSSSRModeToGameDLSSUpscaleMode(UDLSSMode InDLSSSRMode)
{
	switch (InDLSSSRMode)
	{
	case UDLSSMode::Off:
		return EGameDLSSMode::None;
	case UDLSSMode::Auto:
		return EGameDLSSMode::Auto;
	case UDLSSMode::DLAA:
		return EGameDLSSMode::DLAA;
	case UDLSSMode::UltraQuality:
		return EGameDLSSMode::UltraQuality;
	case UDLSSMode::Quality:
		return EGameDLSSMode::Quality;
	case UDLSSMode::Balanced:
		return EGameDLSSMode::Balanced;
	case UDLSSMode::Performance:
		return EGameDLSSMode::Performance;
	case UDLSSMode::UltraPerformance:
		return EGameDLSSMode::UltraPerformance;
	}

	return EGameDLSSMode::None;
}

UNISMode UGameDLSSSubsystem::GameDLSSUpscaleModeToDLSSNISMode(EGameDLSSMode InDLSSNISMode)
{
	switch (InDLSSNISMode)
	{
	case EGameDLSSMode::None:
		return UNISMode::Off;
	case EGameDLSSMode::Auto:
		return UNISMode::UltraQuality;
	case EGameDLSSMode::DLAA:
		return UNISMode::UltraQuality;
	case EGameDLSSMode::UltraQuality:
		return UNISMode::UltraQuality;
	case EGameDLSSMode::Quality:
		return UNISMode::Quality;
	case EGameDLSSMode::Balanced:
		return UNISMode::Balanced;
	case EGameDLSSMode::Performance:
		return UNISMode::Performance;
	case EGameDLSSMode::UltraPerformance:
		return UNISMode::Performance;
	}

	return UNISMode::Off;
}

EGameDLSSMode UGameDLSSSubsystem::DLSSNISModeToGameDLSSUpscaleMode(UNISMode InDLSSNISMode)
{
	switch (InDLSSNISMode)
	{
	case UNISMode::Off:
		return EGameDLSSMode::None;
	case UNISMode::UltraQuality:
		return EGameDLSSMode::UltraQuality;
	case UNISMode::Quality:
		return EGameDLSSMode::Quality;
	case UNISMode::Balanced:
		return EGameDLSSMode::Balanced;
	case UNISMode::Performance:
		return EGameDLSSMode::Performance;
	case UNISMode::Custom:
		return EGameDLSSMode::UltraQuality;
	}

	return EGameDLSSMode::None;
}

void UGameDLSSSubsystem::SetupDLSSUpscaleMessage()
{
	const UGameDLSSSettings* DLSSSettings = GetDefault<UGameDLSSSettings>();
	if (DLSSSettings->bReassignDLSSUpscaleMode)
	{
		SupportedDLSSUpscaleMode = DLSSSettings->DLSSUpscaleMode;

		switch (SupportedDLSSUpscaleMode)
		{
		case EGameDLSSUpscaleMode::BuiltIn:
			DLSSUpscaleMessage.bSupport = false;
			DLSSUpscaleMessage.bShowMessage = false;
			break;

		case EGameDLSSUpscaleMode::DLSS:
			switch (UDLSSLibrary::QueryDLSSSupport())
			{
			case UDLSSSupport::Supported:
				DLSSUpscaleMessage.bSupport = true;
				DLSSUpscaleMessage.bShowMessage = false;
				break;
			case UDLSSSupport::NotSupported:
				DLSSUpscaleMessage.bSupport = false;
				DLSSUpscaleMessage.bShowMessage = true;
				DLSSUpscaleMessage.SupportMessageText = LOCTEXT("DLSSUpscaleMessage_NotSupported", "DLSS not supported");
				break;
			case UDLSSSupport::NotSupportedIncompatibleHardware:
				DLSSUpscaleMessage.bSupport = false;
				DLSSUpscaleMessage.bShowMessage = true;
				DLSSUpscaleMessage.SupportMessageText = LOCTEXT("DLSSUpscaleMessage_NotSupportedIncompatibleHardware", "DLSS requires an NVIDIA RTX GPU");
				break;
			case UDLSSSupport::NotSupportedDriverOutOfDate:
				DLSSUpscaleMessage.bSupport = false;
				DLSSUpscaleMessage.bShowMessage = true;
				int32 MinDriverVersionMajor;
				int32 MinDriverVersionMinor;
				UDLSSLibrary::GetDLSSMinimumDriverVersion(MinDriverVersionMajor, MinDriverVersionMinor);
				DLSSUpscaleMessage.SupportMessageText = FText::Format(LOCTEXT("DLSSUpscaleMessage_NotSupportedDriverOutOfDate", "The driver is outdated. The minimum driver version {0}.{1}"), MinDriverVersionMajor, MinDriverVersionMinor);
				break;
			case UDLSSSupport::NotSupportedOperatingSystemOutOfDate:
				DLSSUpscaleMessage.bSupport = false;
				DLSSUpscaleMessage.bShowMessage = true;
				DLSSUpscaleMessage.SupportMessageText = LOCTEXT("DLSSUpscaleMessage_NotSupportedOperatingSystemOutOfDate", "DLSS requires at least Windows 10 Fall 2017 Creators Update 64-bit, (v1709, build 16299)");
				break;
			case UDLSSSupport::NotSupportedByPlatformAtBuildTime:
				DLSSUpscaleMessage.bSupport = false;
				DLSSUpscaleMessage.bShowMessage = true;
				DLSSUpscaleMessage.SupportMessageText = LOCTEXT("DLSSUpscaleMessage_NotSupportedByPlatformAtBuildTime", "This platform doesn't not support DLSS at build time. Currently DLSS is only supported on Windows 64");
				break;
			case UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive:
				DLSSUpscaleMessage.bSupport = false;
				DLSSUpscaleMessage.bShowMessage = true;
				DLSSUpscaleMessage.SupportMessageText = LOCTEXT("DLSSUpscaleMessage_NotSupportedIncompatibleAPICaptureToolActive", "DLSS is not compatible with an active API capture tool such as RenderDoc");
				break;
			}
			break;

		case EGameDLSSUpscaleMode::NIS:
			if (UNISLibrary::IsNISSupported())
			{
				DLSSUpscaleMessage.bSupport = true;
				DLSSUpscaleMessage.bShowMessage = false;
			}
			else
			{
				DLSSUpscaleMessage.bSupport = false;
				DLSSUpscaleMessage.bShowMessage = true;
				DLSSUpscaleMessage.SupportMessageText = LOCTEXT("DLSSUpscaleMessage_NotSupported", "DLSS not supported");
			}
			break;
		}
	}
	else
	{
		if (UDLSSLibrary::IsDLSSSupported())
		{
			SupportedDLSSUpscaleMode = EGameDLSSUpscaleMode::DLSS;
			DLSSUpscaleMessage.bSupport = true;
			DLSSUpscaleMessage.bShowMessage = false;
		}
		else if (UNISLibrary::IsNISSupported())
		{
			SupportedDLSSUpscaleMode = EGameDLSSUpscaleMode::NIS;

			switch (UDLSSLibrary::QueryDLSSSupport())
			{
			case UDLSSSupport::NotSupportedDriverOutOfDate:
				DLSSUpscaleMessage.bSupport = true;
				DLSSUpscaleMessage.bShowMessage = true;
				{
					int32 MinDriverVersionMajor;
					int32 MinDriverVersionMinor;
					UDLSSLibrary::GetDLSSMinimumDriverVersion(MinDriverVersionMajor, MinDriverVersionMinor);
					DLSSUpscaleMessage.SupportMessageText = FText::Format(LOCTEXT("DLSSUpscaleMessage_NotSupportedDriverOutOfDate", "The driver is outdated. The minimum driver version {0}.{1}"), MinDriverVersionMajor, MinDriverVersionMinor);
				}
				break;
			case UDLSSSupport::NotSupportedOperatingSystemOutOfDate:
				DLSSUpscaleMessage.bSupport = true;
				DLSSUpscaleMessage.bShowMessage = true;
				DLSSUpscaleMessage.SupportMessageText = LOCTEXT("DLSSUpscaleMessage_NotSupportedOperatingSystemOutOfDate", "DLSS requires at least Windows 10 Fall 2017 Creators Update 64-bit, (v1709, build 16299)");
				break;
			case UDLSSSupport::NotSupportedByPlatformAtBuildTime:
				DLSSUpscaleMessage.bSupport = true;
				DLSSUpscaleMessage.bShowMessage = true;
				DLSSUpscaleMessage.SupportMessageText = LOCTEXT("DLSSUpscaleMessage_NotSupportedByPlatformAtBuildTime", "This platform doesn't not support DLSS at build time. Currently DLSS is only supported on Windows 64");
				break;
			case UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive:
				DLSSUpscaleMessage.bSupport = true;
				DLSSUpscaleMessage.bShowMessage = true;
				DLSSUpscaleMessage.SupportMessageText = LOCTEXT("DLSSUpscaleMessage_NotSupportedIncompatibleAPICaptureToolActive", "DLSS is not compatible with an active API capture tool such as RenderDoc");
				break;
			default:
				DLSSUpscaleMessage.bSupport = true;
				DLSSUpscaleMessage.bShowMessage = false;
			}
		}
		else
		{
			SupportedDLSSUpscaleMode = EGameDLSSUpscaleMode::BuiltIn;
			DLSSUpscaleMessage.bSupport = false;
			DLSSUpscaleMessage.bShowMessage = true;
			DLSSUpscaleMessage.SupportMessageText = LOCTEXT("DLSSUpscaleMessage_NotSupported", "DLSS not supported");
		}
	}
}

void UGameDLSSSubsystem::SetupDLSSRayReconstructionMessage()
{
	if (UDLSSLibrary::IsDLSSRRSupported())
	{
		DLSSRRMessage.bSupport = true;
		DLSSRRMessage.bShowMessage = false;
	}
	else
	{
		switch (UDLSSLibrary::QueryDLSSRRSupport())
		{
		case UDLSSSupport::NotSupported:
			DLSSRRMessage.bSupport = false;
			DLSSRRMessage.bShowMessage = true;
			DLSSRRMessage.SupportMessageText = LOCTEXT("DLSSRRMessage_NotSupported", "DLSS ray reconstruction not supported");
			break;
		case UDLSSSupport::NotSupportedIncompatibleHardware:
			DLSSRRMessage.bSupport = false;
			DLSSRRMessage.bShowMessage = true;
			DLSSRRMessage.SupportMessageText = LOCTEXT("DLSSRRMessage_NotSupportedIncompatibleHardware", "DLSS requires an NVIDIA RTX GPU");
			break;
		case UDLSSSupport::NotSupportedDriverOutOfDate:
			DLSSRRMessage.bSupport = false;
			DLSSRRMessage.bShowMessage = true;
			{
				int32 MinDriverVersionMajor;
				int32 MinDriverVersionMinor;
				UDLSSLibrary::GetDLSSRRMinimumDriverVersion(MinDriverVersionMajor, MinDriverVersionMinor);
				DLSSRRMessage.SupportMessageText = FText::Format(LOCTEXT("DLSSRRMessage_NotSupportedDriverOutOfDate", "The driver is outdated. The minimum driver version {0}.{1}"), MinDriverVersionMajor, MinDriverVersionMinor);
			}
			break;
		case UDLSSSupport::NotSupportedOperatingSystemOutOfDate:
			DLSSRRMessage.bSupport = false;
			DLSSRRMessage.bShowMessage = true;
			DLSSRRMessage.SupportMessageText = LOCTEXT("DLSSRRMessage_NotSupportedOperatingSystemOutOfDate", "DLSS requires at least Windows 10 Fall 2017 Creators Update 64-bit, (v1709, build 16299)");
			break;
		case UDLSSSupport::NotSupportedByPlatformAtBuildTime:
			DLSSRRMessage.bSupport = false;
			DLSSRRMessage.bShowMessage = true;
			DLSSRRMessage.SupportMessageText = LOCTEXT("DLSSRRMessage_NotSupportedByPlatformAtBuildTime", "This platform doesn't not support DLSS at build time. Currently DLSS is only supported on Windows 64");
			break;
		case UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive:
			DLSSRRMessage.bSupport = false;
			DLSSRRMessage.bShowMessage = true;
			DLSSRRMessage.SupportMessageText = LOCTEXT("DLSSRRMessage_NotSupportedIncompatibleAPICaptureToolActive", "DLSS is not compatible with an active API capture tool such as RenderDoc");
			break;
		default:
			DLSSRRMessage.bSupport = false;
			DLSSRRMessage.bShowMessage = true;
			DLSSRRMessage.SupportMessageText = LOCTEXT("DLSSRRMessage_NotSupported", "DLSS ray reconstruction not supported");
		}
	}
}

void UGameDLSSSubsystem::SetupDefaultDLSSSRMode()
{
	UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get();
	SettingsLocal->SetDesiredDLSSMode(SettingsLocal->GetDLSSMode());

	switch (SupportedDLSSUpscaleMode)
	{
	case EGameDLSSUpscaleMode::BuiltIn:
		SettingsLocal->SetDesiredDLSSMode(EGameDLSSMode::None);
		break;
	case EGameDLSSUpscaleMode::DLSS:
		if (!DLSSUpscaleMessage.bSupport)
		{
			SettingsLocal->SetDesiredDLSSMode(EGameDLSSMode::None);
		}
		else
		{
			SupportedDLSSSRModes = UDLSSLibrary::GetSupportedDLSSModes();
			if (!SupportedDLSSSRModes.Contains(GameDLSSUpscaleModeToDLSSSRMode(SettingsLocal->GetDesiredDLSSMode())))
			{
				SettingsLocal->SetDesiredDLSSMode(EGameDLSSMode::Auto);
			}
		}
		break;
	case EGameDLSSUpscaleMode::NIS:
		if (DLSSUpscaleMessage.bSupport)
		{
			SupportedNISModes = UNISLibrary::GetSupportedNISModes();
			if (!SupportedNISModes.Contains(GameDLSSUpscaleModeToDLSSNISMode(SettingsLocal->GetDesiredDLSSMode())))
			{
				SettingsLocal->SetDesiredDLSSMode(EGameDLSSMode::UltraQuality);
			}
		}
		else
		{
			SettingsLocal->SetDesiredDLSSMode(EGameDLSSMode::None);
		}
		break;
	}
}

void UGameDLSSSubsystem::SetupDLSSFGMessage()
{
	if (UStreamlineLibraryDLSSG::IsDLSSGSupported())
	{
		DLSSFGMessage.bSupport = true;
		DLSSFGMessage.bShowMessage = false;
	}
	else
	{
		switch (UStreamlineLibraryDLSSG::QueryDLSSGSupport())
		{
		case EStreamlineFeatureSupport::NotSupported:
			DLSSFGMessage.bSupport = false;
			DLSSFGMessage.bShowMessage = true;
			DLSSFGMessage.SupportMessageText = LOCTEXT("DLSSFGMessage_NotSupported", "DLSS frame generation not supported");
			break;
		case EStreamlineFeatureSupport::NotSupportedIncompatibleHardware:
			DLSSFGMessage.bSupport = false;
			DLSSFGMessage.bShowMessage = true;
			DLSSFGMessage.SupportMessageText = LOCTEXT("DLSSFGMessage_NotSupportedIncompatibleHardware", "This feature requires an NVIDIA RTX GPU");
			break;
		case EStreamlineFeatureSupport::NotSupportedDriverOutOfDate:
			DLSSFGMessage.bSupport = false;
			DLSSFGMessage.bShowMessage = true;
			{
				FStreamlineFeatureRequirements DriverStreamlineFeatureRequirements = UStreamlineLibrary::GetStreamlineFeatureInformation(EStreamlineFeature::DLSSG);
				int32 MinDriverVersionMajor = DriverStreamlineFeatureRequirements.RequiredDriverVersion.Major;
				int32 MinDriverVersionMinor = DriverStreamlineFeatureRequirements.RequiredDriverVersion.Minor;
				DLSSFGMessage.SupportMessageText = FText::Format(LOCTEXT("DLSSUpscaleMessage_NotSupportedDriverOutOfDate", "The driver is outdated. The minimum driver version {0}.{1}"), MinDriverVersionMajor, MinDriverVersionMinor);
			}
			break;
		case EStreamlineFeatureSupport::NotSupportedOperatingSystemOutOfDate:
			DLSSFGMessage.bSupport = false;
			DLSSFGMessage.bShowMessage = true;
			{
				FStreamlineFeatureRequirements OperatingSystemStreamlineFeatureRequirements = UStreamlineLibrary::GetStreamlineFeatureInformation(EStreamlineFeature::DLSSG);
				int32 MinOperatingSystemVersionMajor = OperatingSystemStreamlineFeatureRequirements.RequiredOperatingSystemVersion.Major;
				int32 MinOperatingSystemVersionBuild = OperatingSystemStreamlineFeatureRequirements.RequiredOperatingSystemVersion.Build;
				DLSSFGMessage.SupportMessageText = FText::Format(LOCTEXT("DLSSFGMessage_NotSupportedOperatingSystemOutOfDate", "DLSS frame generation requires at least Windows 10 Fall 2017 Creators Update 64-bit, (v{0}, build {1})"), MinOperatingSystemVersionMajor, MinOperatingSystemVersionBuild);
			}
			break;
		case EStreamlineFeatureSupport::NotSupportedHardewareSchedulingDisabled:
			DLSSFGMessage.bSupport = false;
			DLSSFGMessage.bShowMessage = true;
			DLSSFGMessage.SupportMessageText = LOCTEXT("DLSSFGMessage_NotSupportedHardewareSchedulingDisabled", "This feature requires Windows Hardware Scheduling to be enabled");
			break;
		case EStreamlineFeatureSupport::NotSupportedByRHI:
			DLSSFGMessage.bSupport = false;
			DLSSFGMessage.bShowMessage = true;
			DLSSFGMessage.SupportMessageText = LOCTEXT("DLSSFGMessage_NotSupportedByRHI", "This RHI doesn't not support this feature run time");
			break;
		case EStreamlineFeatureSupport::NotSupportedByPlatformAtBuildTime:
			DLSSFGMessage.bSupport = false;
			DLSSFGMessage.bShowMessage = true;
			DLSSFGMessage.SupportMessageText = LOCTEXT("DLSSFGMessage_NotSupportedByPlatformAtBuildTime", "This platform doesn't not support this feature at build time. Currently this feature is only supported on Windows 64");
			break;
		case EStreamlineFeatureSupport::NotSupportedIncompatibleAPICaptureToolActive:
			DLSSFGMessage.bSupport = false;
			DLSSFGMessage.bShowMessage = true;
			DLSSFGMessage.SupportMessageText = LOCTEXT("DLSSFGMessage_NotSupportedIncompatibleAPICaptureToolActive", "This feature is not compatible with an active API capture tool such as RenderDoc");
			break;
		default:
			DLSSFGMessage.bSupport = false;
			DLSSFGMessage.bShowMessage = true;
			DLSSFGMessage.SupportMessageText = LOCTEXT("DLSSFGMessage_NotSupported", "DLSS frame generation not supported");
		}
	}
}

void UGameDLSSSubsystem::SetupDefaultDLSSFGMode()
{
	UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get();
	SettingsLocal->SetDesiredDLSSFGMode(SettingsLocal->GetDLSSFGMode());

	SupportedDLSSFGModes = UStreamlineLibraryDLSSG::GetSupportedDLSSGModes();
	if (DLSSFGMessage.bSupport)
	{
		if (!SupportedDLSSFGModes.Contains(SettingsLocal->GetDesiredDLSSFGMode()))
		{
			SettingsLocal->SetDesiredDLSSFGMode(EStreamlineDLSSGMode::Auto);
		}
	}
	else
	{
		SettingsLocal->SetDesiredDLSSFGMode(EStreamlineDLSSGMode::Off);
	}
}

void UGameDLSSSubsystem::SetupDefaultReflexMode()
{
	UStreamlineLibraryReflex::SetReflexMode(UStreamlineLibraryReflex::GetDefaultReflexMode());
}

void UGameDLSSSubsystem::SetUpscaleBuiltIn()
{
	switch (SupportedDLSSUpscaleMode)
	{
	case EGameDLSSUpscaleMode::BuiltIn:
		SetScreenPercentageToUserSetting();
		break;

	case EGameDLSSUpscaleMode::DLSS:
		UDLSSLibrary::EnableDLSS(false);
		SetScreenPercentageToUserSetting();
		break;

	case EGameDLSSUpscaleMode::NIS:
		UNISLibrary::SetNISMode(UNISMode::Off);
		SetScreenPercentageToUserSetting();
		break;
	}

	SetAntiAliasingMethodUserSetting();
}

void UGameDLSSSubsystem::SetUpscaleDLSS(EGameDLSSMode InDLSSMode)
{
	const UGameDLSSSettings* DLSSSettings = GetDefault<UGameDLSSSettings>();
	UWorld* World = GetGameInstance()->GetWorld();

	switch (InDLSSMode)
	{
	case EGameDLSSMode::None:
		EnableDLSSUpscale(false);
		break;

	case EGameDLSSMode::Auto:
		FVector2D ScreenSize = UWidgetLayoutLibrary::GetViewportSize(World);
		if (ScreenSize == FVector2D::ZeroVector)
		{
			FIntPoint ScreenResolution = UOrionSettingsLocal::Get()->GetScreenResolution();
			ScreenSize.X = ScreenResolution.X;
			ScreenSize.Y = ScreenResolution.Y;
		}
		SetDLSSSRMode(UDLSSMode::Auto, ScreenSize);
		EnableDLSSRayReconstruction(DLSSSettings->bUseDLSSRayReconstruction);
		break;

	case EGameDLSSMode::DLAA:
	case EGameDLSSMode::UltraQuality:
	case EGameDLSSMode::Quality:
	case EGameDLSSMode::Balanced:
	case EGameDLSSMode::Performance:
	case EGameDLSSMode::UltraPerformance:
		SetDLSSSRMode(GameDLSSUpscaleModeToDLSSSRMode(InDLSSMode));
		EnableDLSSRayReconstruction(DLSSSettings->bUseDLSSRayReconstruction);
		break;
	}
}

void UGameDLSSSubsystem::SetUpscaleNIS(EGameDLSSMode InDLSSMode)
{
	switch (InDLSSMode)
	{
	case EGameDLSSMode::None:
		EnableDLSSUpscale(false);
		break;

	default:
		UNISLibrary::SetNISMode(GameDLSSUpscaleModeToDLSSNISMode(InDLSSMode));
	}

	SetAntiAliasingMethodTSR();
}

void UGameDLSSSubsystem::SetDLSSSRMode(UDLSSMode DLSSMode, FVector2D ScreenResolution)
{
	UDLSSLibrary::EnableDLSS(true);

	if (DLSSMode == UDLSSMode::DLAA)
	{
		SetScreenPercentage(100.f);
	}
	else
	{
		bool bIsSupported;
		float OptimalScreenPercentage;
		bool bIsFixedScreenPercentage;
		float MinScreenPercentage;
		float MaxScreenPercentage;
		float OptimalSharpness;
		UDLSSLibrary::GetDLSSModeInformation(DLSSMode, ScreenResolution, bIsSupported, OptimalScreenPercentage, bIsFixedScreenPercentage, MinScreenPercentage, MaxScreenPercentage, OptimalSharpness);
		if (OptimalScreenPercentage > 0.f)
		{
			SetScreenPercentage(OptimalScreenPercentage);
		}
		else
		{
			SetScreenPercentage(100.f);
		}
	}

	SetAntiAliasingMethodTSR();
}

void UGameDLSSSubsystem::SetScreenPercentage(float Percentage) { UOrionSettingsLocal::SetScreenPercentageCVar(Percentage); }

void UGameDLSSSubsystem::SetScreenPercentageToUserSetting()
{
	if (UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get())
	{
		SettingsLocal->ApplyScalabilitySettings();
	}
	else
	{
		SetScreenPercentage(100.0f);
	}
}

void UGameDLSSSubsystem::SetAntiAliasingMethodUserSetting()
{
	UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get();
	SettingsLocal->SetDesiredAntiAliasingMethod(SettingsLocal->GetAntiAliasingMethod());
	SetAntiAliasingMethod(SettingsLocal->GetAntiAliasingMethod());
}

void UGameDLSSSubsystem::SetAntiAliasingMethodTSR()
{
	UOrionSettingsLocal::Get()->SetDesiredAntiAliasingMethod(AAM_TSR);
	SetAntiAliasingMethod(AAM_TSR);
}

void UGameDLSSSubsystem::SetAntiAliasingMethod(EAntiAliasingMethod InAntiAliasingMethod)
{
	if (UWorld* World = GetGameInstance()->GetWorld())
	{
		if (UOrionGameRenderSubsystem* RenderSubsystem = World->GetSubsystem<UOrionGameRenderSubsystem>())
		{
			RenderSubsystem->SetAntiAliasingMethod(InAntiAliasingMethod);
		}
	}
}

#undef LOCTEXT_NAMESPACE
