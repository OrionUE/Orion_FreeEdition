/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DeveloperSettingsBackedByCVars.h"

#include "OrionPlatformEmulationSettings.generated.h"

/**
 * 开发者平台设置
 */
UCLASS(config=EditorPerProjectUserSettings, MinimalAPI)
class UOrionPlatformEmulationSettings : public UDeveloperSettingsBackedByCVars
{
	GENERATED_BODY()

public:
	UOrionPlatformEmulationSettings();

	//~UDeveloperSettings interface
	virtual FName GetCategoryName() const override;
	//~End of UDeveloperSettings interface

	FName GetPretendBaseDeviceProfile() const;
	FName GetPretendPlatformName() const;

private:
	UPROPERTY(EditAnywhere, Config, Category="PlatformEmulation", meta=(GetOptions=GetKnownPlatformIds))
	FName PretendPlatform;

	// The base device profile to pretend we are using when emulating device-specific device profiles applied from UOrionSettingsLocal
	UPROPERTY(EditAnywhere, Config, Category="PlatformEmulation", meta=(GetOptions=GetKnownDeviceProfiles, EditCondition=bApplyDeviceProfilesInPIE))
	FName PretendBaseDeviceProfile;
	
	// Do we apply front-end specific performance options in PIE?
	// Most engine performance/scalability settings they drive are global, so if one PIE window
	// is in the front-end and the other is in-game one will win and the other gets stuck with those settings
	UPROPERTY(EditAnywhere, Config, Category="PlatformEmulation", meta=(ConsoleVariable="Game.Settings.ApplyFrontEndPerformanceOptionsInPIE"))
	bool bApplyFrontEndPerformanceOptionsInPIE = false;
};
