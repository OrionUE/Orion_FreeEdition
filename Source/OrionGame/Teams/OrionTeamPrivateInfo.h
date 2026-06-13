/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionTeamInfoBase.h"

#include "OrionTeamPrivateInfo.generated.h"

UCLASS(Abstract)
class AOrionTeamPrivateInfo : public AOrionTeamInfoBase
{
	GENERATED_BODY()

public:
	AOrionTeamPrivateInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
