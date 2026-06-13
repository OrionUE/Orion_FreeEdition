/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionTeamCreationComponent.h"

#include "OrionTeamCreationComponent_UnlimitedAmount.generated.h"

/**
 * 队伍创建组件
 * 不限队伍数量
 */
UCLASS(Abstract)
class ORIONGAME_API UOrionTeamCreationComponent_UnlimitedAmount : public UOrionTeamCreationComponent
{
	GENERATED_BODY()

public:
	UOrionTeamCreationComponent_UnlimitedAmount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
