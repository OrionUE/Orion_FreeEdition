/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionAssetManager.h"

#include "OrionLogChannels.h"
#include "AbilitySystem/OrionGameplayCueManager.h"
#include "System/CoreAssetManagerStartupJob.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionAssetManager)

UOrionAssetManager::UOrionAssetManager()
	: Super()
{
}

UOrionAssetManager& UOrionAssetManager::Get()
{
	check(GEngine);

	if (UOrionAssetManager* Singleton = Cast<UOrionAssetManager>(GEngine->AssetManager))
	{
		return *Singleton;
	}

	UE_LOG(LogOrion, Fatal, TEXT("Invalid AssetManagerClassName in DefaultEngine.ini."));

	// Fatal error above prevents this from being called.
	return *NewObject<UOrionAssetManager>();
}

void UOrionAssetManager::StartInitialLoading()
{
	SCOPED_BOOT_TIMING("UCoreAssetManager::StartInitialLoading");

	// This does all the scanning, need to do this now even if loads are deferred
	UAssetManager::StartInitialLoading();

	STARTUP_JOB(InitializeGameplayCueManager());
	
	{
		// 将加载默认的GameData，请确保已在DefaultGame.ini中已经配置了默认GameData
		STARTUP_JOB_WEIGHTED(GetGameData<UCoreGameData>(), 25.f);
	}

	// Run all the queued up startup jobs
	DoAllStartupJobs();
}

#if WITH_EDITOR
void UOrionAssetManager::PreBeginPIE(bool bStartSimulate)
{
	UAssetManager::PreBeginPIE(bStartSimulate);

	FScopedSlowTask SlowTask(0, NSLOCTEXT("OrionEditor", "BeginLoadingPIEData", "Loading PIE Data"));
	const bool bShowCancelButton = false;
	const bool bAllowInPIE = true;
	SlowTask.MakeDialog(bShowCancelButton, bAllowInPIE);

	// 加载默认GameData
	const UCoreGameData& LocalGameDataCommon = GetGameData<UCoreGameData>();

	// Intentionally after GetGameData to avoid counting GameData time in this timer
	SCOPE_LOG_TIME_IN_SECONDS(TEXT("PreBeginPIE asset preloading complete"), nullptr);

	// You could add preloading of anything else needed for the experience we'll be using here
	// (e.g., by grabbing the default experience from the world settings + the experience override in developer settings)
}
#endif
