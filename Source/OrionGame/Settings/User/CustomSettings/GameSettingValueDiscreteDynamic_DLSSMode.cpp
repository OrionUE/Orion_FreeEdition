/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameSettingValueDiscreteDynamic_DLSSMode.h"

#include "DLSSLibrary.h"
#include "NISLibrary.h"
#include "Settings/User/OrionSettingsLocal.h"
#include "Settings/User/Performance/GameDLSSSettings.h"
#include "Settings/User/Performance/GameDLSSSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameSettingValueDiscreteDynamic_DLSSMode)

#define LOCTEXT_NAMESPACE "GameSettings"

void UGameSettingValueDiscreteDynamic_DLSSMode::SetDiscreteOptionByIndex(int32 Index)
{
	Super::SetDiscreteOptionByIndex(Index);
}

void UGameSettingValueDiscreteDynamic_DLSSMode::OnInitialized()
{
	SetDLSSModeEnum();

	Super::OnInitialized();
}

void UGameSettingValueDiscreteDynamic_DLSSMode::OnApply()
{
	Super::OnApply();

	if (UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get())
	{
		if (SettingsLocal->GetDLSSUpscaleEnabled())
		{
			if (UGameDLSSSubsystem* DLSSSubsystem = LocalPlayer->GetGameInstance()->GetSubsystem<UGameDLSSSubsystem>())
			{
				DLSSSubsystem->SetDLSSMode(GetValue<EGameDLSSMode>());
			}
		}
	}
}

void UGameSettingValueDiscreteDynamic_DLSSMode::SetDLSSModeEnum()
{
	if (UGameDLSSSubsystem* DLSSSubsystem = LocalPlayer->GetGameInstance()->GetSubsystem<UGameDLSSSubsystem>())
	{
		switch (DLSSSubsystem->GetSupportedDLSSUpscaleMode())
		{
		case EGameDLSSUpscaleMode::BuiltIn:
			AddEnumOption(EGameDLSSMode::None, GameDLSSModeEnumToText(EGameDLSSMode::None));
			SetDefaultValue(EGameDLSSMode::None);
			break;

		case EGameDLSSUpscaleMode::DLSS:
			{
				for (UDLSSMode Mode : DLSSSubsystem->GetSupportedDLSSSRModes())
				{
					if (Mode == UDLSSMode::Off)
						continue;

					EGameDLSSMode DLSSSRMode = UGameDLSSSubsystem::DLSSSRModeToGameDLSSUpscaleMode(Mode);
					AddEnumOption(DLSSSRMode, GameDLSSModeEnumToText(DLSSSRMode));
				}
			}
			break;

		case EGameDLSSUpscaleMode::NIS:
			{
				for (UNISMode Mode : DLSSSubsystem->GetSupportedNISModes())
				{
					if (Mode == UNISMode::Off || Mode == UNISMode::Custom)
						continue;

					EGameDLSSMode DLSSNISMode = UGameDLSSSubsystem::DLSSNISModeToGameDLSSUpscaleMode(Mode);
					AddEnumOption(DLSSNISMode, GameDLSSModeEnumToText(DLSSNISMode));
				}
			}
			break;
		}
	}

	RefreshEditableState();
}

FText UGameSettingValueDiscreteDynamic_DLSSMode::GameDLSSModeEnumToText(EGameDLSSMode DLSSMode) const
{
	if (const FText* Found = GetDLSSModeToTextMap().Find(DLSSMode))
	{
		return *Found;
	}
	return LOCTEXT("DLSSMode_None", "None");
}

const TMap<EGameDLSSMode, FText>& UGameSettingValueDiscreteDynamic_DLSSMode::GetDLSSModeToTextMap()
{
	static const TMap<EGameDLSSMode, FText> DLSSModeToTextMap =
	{
		{ EGameDLSSMode::None,             LOCTEXT("DLSSMode_None", "None") },
		{ EGameDLSSMode::Auto,             LOCTEXT("DLSSMode_Auto", "Auto") },
		{ EGameDLSSMode::DLAA,             LOCTEXT("DLSSMode_DLAA", "DLAA") },
		{ EGameDLSSMode::UltraQuality,     LOCTEXT("DLSSMode_UltraQuality", "UltraQuality") },
		{ EGameDLSSMode::Quality,          LOCTEXT("DLSSMode_Quality", "Quality") },
		{ EGameDLSSMode::Balanced,         LOCTEXT("DLSSMode_Balanced", "Balanced") },
		{ EGameDLSSMode::Performance,      LOCTEXT("DLSSMode_Performance", "Performance") },
		{ EGameDLSSMode::UltraPerformance, LOCTEXT("DLSSMode_UltraPerformance", "UltraPerformance") }	
	};
	return DLSSModeToTextMap;
}

#undef LOCTEXT_NAMESPACE
