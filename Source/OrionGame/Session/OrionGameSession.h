/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "System/CoreGameSession.h"

#include "OrionGameSession.generated.h"

UCLASS()
class AOrionGameSession : public ACoreGameSession
{
	GENERATED_BODY()

public:
	AOrionGameSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
