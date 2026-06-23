/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Session/CoreSessionSearchResult.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(CoreSessionSearchResult)

FBlueprintSessionResult FCoreSessionResult::GetBlueprintSessionResult() const
{
	return SessionResult;
}

FOnlineSessionSearchResult FCoreSessionResult::GetOnlineSessionSearchResult() const
{
	return GetBlueprintSessionResult().OnlineResult;
}
