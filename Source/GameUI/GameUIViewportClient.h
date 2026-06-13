/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonGameViewportClient.h"

#include "GameUIViewportClient.generated.h"

UCLASS(BlueprintType)
class UGameUIViewportClient : public UCommonGameViewportClient
{
	GENERATED_BODY()

public:
	UGameUIViewportClient();

	virtual void Init(FWorldContext& WorldContext, UGameInstance* OwningGameInstance, bool bCreateNewAudioDevice) override;
};
