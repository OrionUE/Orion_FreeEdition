/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFramework/CheatManager.h"
#include "OrionCheatManager.generated.h"

#ifndef USING_CHEAT_MANAGER
#define USING_CHEAT_MANAGER (1 && !UE_BUILD_SHIPPING)
#endif

/**
 * UOrionCheatManager
 * Base cheat manager class used by this project.
 */
UCLASS(config=Game, Within=PlayerController, MinimalAPI)
class UOrionCheatManager : public UCheatManager
{
	GENERATED_BODY()
};
