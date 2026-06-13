// Copyright (c) Ideality Century, Inc. All Rights Reserved.

#pragma once

#include "Engine/DeveloperSettingsBackedByCVars.h"

#include "CommonEditorDeveloperSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings, MinimalAPI)
class UCommonEditorDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
	GENERATED_BODY()

public:
	UCommonEditorDeveloperSettings();
	
public:
#if WITH_EDITORONLY_DATA
	/** A list of common maps that will be accessible via the editor toolbar */
	UPROPERTY(config, EditAnywhere, BlueprintReadOnly, Category=Maps, meta=(AllowedClasses="/Script/Engine.World"))
	TArray<FSoftObjectPath> CommonEditorMaps;
#endif
};
