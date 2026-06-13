/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameModes/OrionExperienceActionSet.h"
#include "GameModes/OrionExperienceDefinition.h"
#include "GameModes/OrionExperienceUserFacingDefinition.h"
#include "GameModes/OrionGameMode.h"
#include "GameModes/OrionWorldSettings.h"
#include "GameModes/Phases/OrionGamePhaseSubsystem_Gameplay.h"
#include "GameModes/Phases/OrionGamePhaseSubsystem_Init.h"

#include "BBL_GameModes.generated.h"

/**
 * 游戏体验动作集合
 */
UCLASS(MinimalAPI, BlueprintType, meta=(DisplayName="Experience Action Set"))
class UBBL_ExperienceActionSet : public UOrionExperienceActionSet
{
	GENERATED_BODY()
};

/**
 * 游戏体验 - 数据定义
 */
UCLASS(MinimalAPI, BlueprintType, meta=(DisplayName="Experience Definition"))
class UBBL_ExperienceDefinition : public UOrionExperienceDefinition
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, BlueprintType, meta=(DisplayName="Experience User Facing Definition"))
class UBBL_ExperienceUserFacingDefinition : public UOrionExperienceUserFacingDefinition
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, meta=(DisplayName="Game Mode Base"))
class ABBL_GameMode : public AOrionGameMode
{
	GENERATED_BODY()

public:
	ABBL_GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get())
		: Super(ObjectInitializer)
	{
		ExperienceDefinitionType = TEXT("BBL_ExperienceDefinition");
	}
};

/**
 * 游戏世界设置
 */
UCLASS(MinimalAPI)
class ABBL_WorldSettings : public AOrionWorldSettings
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI)
class UGamePhaseSubsystem_Init : public UOrionGamePhaseSubsystem_Init
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI)
class UGamePhaseSubsystem_Gameplay : public UOrionGamePhaseSubsystem_Gameplay
{
	GENERATED_BODY()
};
