/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Player/OrionLocalPlayer.h"
#include "Player/OrionPlayerStart.h"

#include "BBL_Player.generated.h"

UCLASS(MinimalAPI, meta=(DisplayName="Local Player Base"))
class UBBL_LocalPlayer : public UOrionLocalPlayer
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, meta=(DisplayName="Game Player Start"))
class ABBL_PlayerStart : public AOrionPlayerStart
{
	GENERATED_BODY()
};
