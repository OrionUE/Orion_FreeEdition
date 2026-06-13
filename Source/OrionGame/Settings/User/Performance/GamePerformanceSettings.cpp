/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GamePerformanceSettings.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GamePerformanceSettings)

UGamePlatformSpecificRenderingSettings::UGamePlatformSpecificRenderingSettings()
{
	MobileFrameRateLimits.Append({ 20, 30, 45, 60, 90, 120 });
}

const UGamePlatformSpecificRenderingSettings* UGamePlatformSpecificRenderingSettings::Get()
{
	UGamePlatformSpecificRenderingSettings* Result = UPlatformSettingsManager::Get().GetSettingsForPlatform<ThisClass>();
	check(Result);
	return Result;
}

UGamePerformanceSettings::UGamePerformanceSettings()
{
	PerPlatformSettings.Initialize(UGamePlatformSpecificRenderingSettings::StaticClass());

	CategoryName = TEXT("Game");

	DesktopFrameRateLimits.Append({ 30, 60, 120, 144, 160, 165, 180, 200, 240, 360 });

	// Default to all stats are allowed
	FGamePerformanceStatGroup& StatGroup = UserFacingPerformanceStats.AddDefaulted_GetRef();
	for (EGameDisplayablePerformanceStat PerfStat : TEnumRange<EGameDisplayablePerformanceStat>())
	{
		StatGroup.AllowedStats.Add(PerfStat);
	}
}
