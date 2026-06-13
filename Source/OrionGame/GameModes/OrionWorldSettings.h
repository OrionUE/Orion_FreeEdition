/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameModes/CoreWorldSettings.h"

#include "OrionWorldSettings.generated.h"

/**
 * The default world settings object, used primarily to set the default gameplay experience to use when playing on this map.
 * 游戏世界设置
 * 设置当前关卡的Experience
 *
 * @note
 * DefaultEngine.ini中配置此类的名称和路径
 * [/Script/Engine.Engine]
 * WorldSettingsClassName=/Script/OrionGame.OrionWorldSettings
 */
UCLASS()
class ORIONGAME_API AOrionWorldSettings : public ACoreWorldSettings
{
	GENERATED_BODY()

public:
	AOrionWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
