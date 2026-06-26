/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Commandlets/Commandlet.h"

#include "OrionPSOFilterCommandlet.generated.h"

UCLASS()
class UOrionPSOFilterCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UOrionPSOFilterCommandlet(const FObjectInitializer& ObjectInitializer);

	virtual int32 Main(const FString& Params) override;
};
