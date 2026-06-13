/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/GameStateComponent.h"

#include "OrionTeamCreationComponent.generated.h"

UCLASS(Abstract)
class UOrionTeamCreationComponent : public UGameStateComponent
{
	GENERATED_BODY()

public:
	UOrionTeamCreationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
