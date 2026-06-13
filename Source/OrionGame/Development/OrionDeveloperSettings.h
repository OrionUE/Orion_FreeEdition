/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "OrionDeveloperSettings.generated.h"

/**
 * Developer settings / editor cheats
 */
UCLASS(Config=EditorPerProjectUserSettings, MinimalAPI)
class UOrionDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
	GENERATED_BODY()

public:
	UOrionDeveloperSettings();

	//~UDeveloperSettings interface
	virtual FName GetCategoryName() const override;
	//~End of UDeveloperSettings interface

public:
	// The experience override to use for Play in Editor (if not set, the default for the world settings of the open map will be used)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Config, Category=Orion, meta=(AllowedTypes="OrionExperienceDefinition"))
	FPrimaryAssetId ExperienceOverride;
};
