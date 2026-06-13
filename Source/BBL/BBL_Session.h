/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Session/OrionGameSessionComponent.h"

#include "BBL_Session.generated.h"

UCLASS(MinimalAPI, meta=(BlueprintSpawnableComponent, DisplayName="Game Session Component"))
class UBBL_GameSessionComponent : public UOrionGameSessionComponent
{
	GENERATED_BODY()
};
