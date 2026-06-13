/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionTeamCreationComponent.h"

#include "OrionTeamCreationComponent_SpecifiedAmount.generated.h"

/**
 * 队伍创建组件
 * 指定队伍数量
 */
UCLASS(Abstract)
class ORIONGAME_API UOrionTeamCreationComponent_SpecifiedAmount : public UOrionTeamCreationComponent
{
	GENERATED_BODY()

public:
	UOrionTeamCreationComponent_SpecifiedAmount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
