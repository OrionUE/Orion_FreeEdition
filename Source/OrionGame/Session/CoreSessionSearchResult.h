/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "FindSessionsCallbackProxy.h"

#include "CoreSessionSearchResult.generated.h"

USTRUCT(BlueprintType)
struct ORIONGAME_API FCoreSessionResult
{
	GENERATED_BODY()

public:
	FBlueprintSessionResult GetBlueprintSessionResult() const;
	FOnlineSessionSearchResult GetOnlineSessionSearchResult() const;

	FCoreSessionResult() { }

	FCoreSessionResult(const FBlueprintSessionResult& InSessionResult)
		: SessionResult(InSessionResult)
	{
	}

	FBlueprintSessionResult SessionResult;
};
