/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameSettingValueDiscreteDynamic_DLSSFGMode.h"

#include "StreamlineLibraryDLSSG.h"
#include "Settings/User/OrionSettingsLocal.h"
#include "Settings/User/Performance/GameDLSSSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameSettingValueDiscreteDynamic_DLSSFGMode)

#define LOCTEXT_NAMESPACE "GameSettings"

void UGameSettingValueDiscreteDynamic_DLSSFGMode::SetDiscreteOptionByIndex(int32 Index)
{
	Super::SetDiscreteOptionByIndex(Index);
}

void UGameSettingValueDiscreteDynamic_DLSSFGMode::OnInitialized()
{
	SetDLSSFGModeEnum();

	Super::OnInitialized();
}

void UGameSettingValueDiscreteDynamic_DLSSFGMode::OnApply()
{
	Super::OnApply();

	if (UOrionSettingsLocal* SettingsLocal = UOrionSettingsLocal::Get())
	{
		if (SettingsLocal->GetDLSSFGEnabled())
		{
			if (UGameDLSSSubsystem* DLSSSubsystem = LocalPlayer->GetGameInstance()->GetSubsystem<UGameDLSSSubsystem>())
			{
				DLSSSubsystem->SetDLSSFGMode(GetValue<EStreamlineDLSSGMode>());
			}
		}
	}
}

void UGameSettingValueDiscreteDynamic_DLSSFGMode::SetDLSSFGModeEnum()
{
	if (UGameDLSSSubsystem* DLSSSubsystem = LocalPlayer->GetGameInstance()->GetSubsystem<UGameDLSSSubsystem>())
	{
		if (DLSSSubsystem->DLSSFGMessage.bSupport)
		{
			for (EStreamlineDLSSGMode Mode : DLSSSubsystem->GetSupportedDLSSFGModes())
			{
				if (Mode == EStreamlineDLSSGMode::Off)
					continue;

				AddEnumOption(Mode, GameDLSSFGModeEnumToText(Mode));
			}
		}
		else
		{
			AddEnumOption(EStreamlineDLSSGMode::Off, GameDLSSFGModeEnumToText(EStreamlineDLSSGMode::Off));
		}
	}

	RefreshEditableState();
}

FText UGameSettingValueDiscreteDynamic_DLSSFGMode::GameDLSSFGModeEnumToText(EStreamlineDLSSGMode DLSSFGMode) const
{
	if (const FText* Found = GetDLSSFGModeToTextMap().Find(DLSSFGMode))
	{
		return *Found;
	}
	return LOCTEXT("DLSSFGMode_None", "None");
}

const TMap<EStreamlineDLSSGMode, FText>& UGameSettingValueDiscreteDynamic_DLSSFGMode::GetDLSSFGModeToTextMap()
{
	static const TMap<EStreamlineDLSSGMode, FText> DLSSFGModeToTextMap =
	{
		{ EStreamlineDLSSGMode::Auto,		LOCTEXT("DLSSFGMode_Auto", "Auto") },
		{ EStreamlineDLSSGMode::On2X,		LOCTEXT("DLSSFGMode_On2X", "2X") },
		{ EStreamlineDLSSGMode::On3X,		LOCTEXT("DLSSFGMode_On3X", "3X") },
		{ EStreamlineDLSSGMode::On4X,		LOCTEXT("DLSSFGMode_On4X", "4X") }
	};
	return DLSSFGModeToTextMap;
}

#undef LOCTEXT_NAMESPACE
