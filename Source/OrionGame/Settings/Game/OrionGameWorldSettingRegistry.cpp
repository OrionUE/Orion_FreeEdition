/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameWorldSettingRegistry.h"

#include "GameSettingCollection.h"
#include "GameSettingValueEditable.h"
#include "OrionSettingsWorldOption.h"
#include "DataSource/GameSettingDataSourceDynamic.h"
#include "Player/CoreLocalPlayer.h"
#include "Player/OrionLocalPlayer.h"
#include "SaveGame/OrionArchiveLevelMeta.h"
#include "SaveGame/OrionArchiveManagerSubsystem.h"
#include "SaveGame/Handler/OrionArchiveType.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameWorldSettingRegistry)

UOrionGameWorldSettingRegistry::UOrionGameWorldSettingRegistry()
{
}

UOrionGameWorldSettingRegistry* UOrionGameWorldSettingRegistry::Get(UCoreLocalPlayer* InLocalPlayer)
{
	UOrionGameWorldSettingRegistry* Registry = FindObject<UOrionGameWorldSettingRegistry>(InLocalPlayer, TEXT("GameWorldSettingRegistry"), true);
	if (Registry == nullptr)
	{
		Registry = NewObject<UOrionGameWorldSettingRegistry>(InLocalPlayer, TEXT("GameWorldSettingRegistry"));
		Registry->Initialize(InLocalPlayer);
	}
	else
	{
		Registry->RefreshSettings(InLocalPlayer);
	}
	
	return Registry;
}

void UOrionGameWorldSettingRegistry::SaveChanges()
{
	Super::SaveChanges();

	UOrionArchiveManagerSubsystem* ArchiveManager = OwningLocalPlayer->GetGameInstance()->GetSubsystem<UOrionArchiveManagerSubsystem>();

	if (ArchiveManager)
	{
		ArchiveManager->SaveCurrentArchiveByTypes({EOrionArchiveType::WorldOption, EOrionArchiveType::LevelMeta});
	}
}

void UOrionGameWorldSettingRegistry::RefreshSettings(ULocalPlayer* InLocalPlayer)
{
	UOrionLocalPlayer* LocalPlayer = Cast<UOrionLocalPlayer>(InLocalPlayer);
	
	GameWorldSetting = InitializeGameWorldSetting(LocalPlayer);
}

void UOrionGameWorldSettingRegistry::OnInitialize(ULocalPlayer* InLocalPlayer)
{
	UOrionLocalPlayer* LocalPlayer = Cast<UOrionLocalPlayer>(InLocalPlayer);
	
	GameWorldSetting = InitializeGameWorldSetting(LocalPlayer);
	RegisterSetting(GameWorldSetting);
}

bool UOrionGameWorldSettingRegistry::IsFinishedInitializing() const
{
	if (Super::IsFinishedInitializing())
	{
		if (UOrionLocalPlayer* LocalPlayer = Cast<UOrionLocalPlayer>(OwningLocalPlayer))
		{
			if (LocalPlayer->GetCurrentWorldOptionSettings() == nullptr)
			{
				return false;
			}
		}

		return true;
	}

	return false;
}

#define LOCTEXT_NAMESPACE "Orion"

UGameSettingCollection* UOrionGameWorldSettingRegistry::InitializeGameWorldSetting(UCoreLocalPlayer* InLocalPlayer)
{
	UGameSettingCollection* Screen = NewObject<UGameSettingCollection>();
	Screen->SetDevName(TEXT("WorldOptionCollection"));
	Screen->SetDisplayName(LOCTEXT("WorldOptionCollection_Name", "WorldOption"));
	Screen->Initialize(InLocalPlayer);

	//----------------------------------------------------------------------------------
	{
		UGameSettingValueEditable_String* Setting = NewObject<UGameSettingValueEditable_String>();
		Setting->SetDevName(TEXT("WorldName"));
		Setting->SetDisplayName(LOCTEXT("WorldName_Name", "World Name"));
		Setting->SetDescriptionRichText(LOCTEXT("WorldName_Description", "WorldName Tips"));

		Setting->SetDynamicGetter(GET_LEVELMETA_SETTINGS_FUNCTION_PATH(GetWorldName));
		Setting->SetDynamicSetter(GET_LEVELMETA_SETTINGS_FUNCTION_PATH(SetWorldName));
		Setting->SetDefaultValue(GetDefault<UOrionArchiveLevelMeta>()->GetWorldName());

		Screen->AddSetting(Setting);
	}
	//----------------------------------------------------------------------------------

	return Screen;
}

#undef LOCTEXT_NAMESPACE
