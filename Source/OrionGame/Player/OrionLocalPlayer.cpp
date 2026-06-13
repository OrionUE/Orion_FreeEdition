/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionLocalPlayer.h"

#include "SaveGame/OrionArchiveManagerSubsystem.h"
#include "Settings/User/OrionSettingsLocal.h"
#include "Settings/User/OrionSettingsShared.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionLocalPlayer)

UOrionLocalPlayer::UOrionLocalPlayer()
{
	if (UOrionSettingsLocal* SettingsLocal = GetLocalSettings())
	{
		SettingsLocal->Initialize(this);
	}
}

UOrionSettingsLocal* UOrionLocalPlayer::GetLocalSettings() const
{
	return UOrionSettingsLocal::Get();
}

UOrionSettingsShared* UOrionLocalPlayer::GetSharedSettings() const
{
	if (!SharedSettings)
	{
		// On PC, it's okay to use the sync load because it only checks the disk
		// This could use a platform tag to check for proper save support instead
		bool bCanLoadBeforeLogin = PLATFORM_DESKTOP;
		
		if (bCanLoadBeforeLogin)
		{
			SharedSettings = UOrionSettingsShared::LoadOrCreateSettings(this);
		}
		else
		{
			// We need to wait for user login to get the real settings so return temp ones
			SharedSettings = UOrionSettingsShared::CreateTemporarySettings(this);
		}
	}

	return SharedSettings;
}

UOrionArchiveLevelMeta* UOrionLocalPlayer::GetCurrentLevelMeta() const
{
	UOrionArchiveManagerSubsystem* ArchiveManager = GetGameInstance()->GetSubsystem<UOrionArchiveManagerSubsystem>();
	check(ArchiveManager)
	return ArchiveManager->GetCurrentLevelMeta();
}

UOrionSettingsWorldOption* UOrionLocalPlayer::GetCurrentWorldOptionSettings() const
{
	UOrionArchiveManagerSubsystem* ArchiveManager = GetGameInstance()->GetSubsystem<UOrionArchiveManagerSubsystem>();
	check(ArchiveManager)
	return ArchiveManager->GetCurrentWorldOptionSettings();
}

void UOrionLocalPlayer::LoadSharedSettingsFromDisk(bool bForceLoad)
{
	FUniqueNetIdRepl CurrentNetId = GetCachedUniqueNetId();
	if (!bForceLoad && SharedSettings && CurrentNetId == NetIdForSharedSettings)
	{
		// Already loaded once, don't reload
		return;
	}

	ensure(UOrionSettingsShared::AsyncLoadOrCreateSettings(this, UOrionSettingsShared::FOnSettingsLoadedEvent::CreateUObject(this, &UOrionLocalPlayer::OnSharedSettingsLoaded)));
}

void UOrionLocalPlayer::OnSharedSettingsLoaded(UOrionSettingsShared* LoadedOrCreatedSettings)
{
	// The settings are applied before it gets here
	if (ensure(LoadedOrCreatedSettings))
	{
		// This will replace the temporary or previously loaded object which will GC out normally
		SharedSettings = LoadedOrCreatedSettings;

		NetIdForSharedSettings = GetCachedUniqueNetId();
	}
}
