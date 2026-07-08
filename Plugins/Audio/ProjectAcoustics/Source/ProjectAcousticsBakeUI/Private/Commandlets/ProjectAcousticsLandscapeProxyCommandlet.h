/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Commandlets/Commandlet.h"

#include "ProjectAcousticsLandscapeProxyCommandlet.generated.h"

UCLASS()
class UProjectAcousticsLandscapeProxyCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UProjectAcousticsLandscapeProxyCommandlet(const FObjectInitializer& ObjectInitializer);

	virtual int32 Main(const FString& Params) override;
};
