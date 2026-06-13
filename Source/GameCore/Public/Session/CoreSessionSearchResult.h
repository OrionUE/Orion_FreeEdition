/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#if WITH_STEAM
#include "OrionSteamSharedTypes.h"
#include "OrionSteamSDKAPI/SteamTypes.h"
#endif

#include "CoreSessionSearchResult.generated.h"

struct FBlueprintSessionResult;

USTRUCT(BlueprintType)
struct GAMECORE_API FCoreSessionResult
{
	GENERATED_BODY()

public:
	FBlueprintSessionResult GetBlueprintSessionResult() const;
	FOnlineSessionSearchResult GetOnlineSessionSearchResult() const;

	FCoreSessionResult() { }

#if WITH_STEAM
	FCoreSessionResult(FSteamSessionResult InSteamSessionResult)
		: SteamSessionResult(InSteamSessionResult)
	{
	}

	FSteamSessionResult SteamSessionResult;
#endif
};
