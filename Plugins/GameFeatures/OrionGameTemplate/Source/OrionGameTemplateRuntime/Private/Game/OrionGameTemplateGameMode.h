/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameModes/OrionGameMode.h"

#include "OrionGameTemplateGameMode.generated.h"

UCLASS()
class AOrionGameTemplateGameMode : public AOrionGameMode
{
	GENERATED_BODY()

public:
	AOrionGameTemplateGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
