/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Player/CorePlayerState.h"

#include "OrionPlayerState.generated.h"

/**
 * AOrionPlayerState
 * 
 * PlayerState基类
 */
UCLASS()
class ORIONGAME_API AOrionPlayerState : public ACorePlayerState
{
	GENERATED_BODY()

public:
	AOrionPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
