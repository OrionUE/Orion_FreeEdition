/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameSettingRegistry.h"

#include "GameSettingCollection.h"
#include "CustomSettings/GameSettingValueDiscrete_Language.h"
#include "EditCondition/WhenPlayingAsPrimaryPlayer.h"
#include "Player/OrionLocalPlayer.h"

#define LOCTEXT_NAMESPACE "Orion"

UGameSettingCollection* UOrionGameSettingRegistry::InitializeGameSettings(UCoreLocalPlayer* InLocalPlayer)
{
	UGameSettingCollection* Screen = NewObject<UGameSettingCollection>();
	Screen->SetDevName(TEXT("GameCollection"));
	Screen->SetDisplayName(LOCTEXT("GameCollection_Name", "Game"));
	Screen->Initialize(InLocalPlayer);

	// Language
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* LanguageSubsection = NewObject<UGameSettingCollection>();
		LanguageSubsection->SetDevName(TEXT("LanguageCollection"));
		LanguageSubsection->SetDisplayName(LOCTEXT("LanguageCollection_Name", "Language"));
		Screen->AddSetting(LanguageSubsection);

		//----------------------------------------------------------------------------------
		{
			UGameSettingValueDiscrete_Language* Setting = NewObject<UGameSettingValueDiscrete_Language>();
			Setting->SetDevName(TEXT("Language"));
			Setting->SetDisplayName(LOCTEXT("LanguageSetting_Name", "Language"));
			Setting->SetDescriptionRichText(LOCTEXT("LanguageSetting_Description", "Language Tips"));

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			LanguageSubsection->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
	}
	
	return Screen;
}

#undef LOCTEXT_NAMESPACE
