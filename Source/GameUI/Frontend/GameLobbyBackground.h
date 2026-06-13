/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DataAsset.h"

#include "GameLobbyBackground.generated.h"

/**
 * UI菜单背景地图资产
 */
UCLASS(config=EditorPerProjectUserSettings, MinimalAPI)
class UGameLobbyBackground : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UWorld> BackgroundLevel;
};
