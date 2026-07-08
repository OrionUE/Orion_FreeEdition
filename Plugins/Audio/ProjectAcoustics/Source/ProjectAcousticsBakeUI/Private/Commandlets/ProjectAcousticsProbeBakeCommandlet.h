/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Commandlets/Commandlet.h"

#include "ProjectAcousticsProbeBakeCommandlet.generated.h"

UCLASS()
class UProjectAcousticsProbeBakeCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UProjectAcousticsProbeBakeCommandlet(const FObjectInitializer& ObjectInitializer);

	virtual int32 Main(const FString& Params) override;
};
