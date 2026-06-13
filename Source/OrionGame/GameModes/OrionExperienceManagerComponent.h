/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameModes/CoreExperienceManagerComponent.h"

#include "OrionExperienceManagerComponent.generated.h"

UCLASS()
class ORIONGAME_API UOrionExperienceManagerComponent final : public UCoreExperienceManagerComponent
{
	GENERATED_BODY()

public:
	UOrionExperienceManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	virtual void OnExperienceFullLoadCompleted() override;
};
