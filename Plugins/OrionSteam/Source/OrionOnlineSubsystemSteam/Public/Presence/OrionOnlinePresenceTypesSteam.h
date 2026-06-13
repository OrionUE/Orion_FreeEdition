/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Interfaces/OnlinePresenceInterface.h"
#include "OrionOnlineSubsystemSteamTypes.h"

const FString DefaultSteamConnectionKey = TEXT("connect");
const FString DefaultSteamPresenceKey = TEXT("status");

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineUserPresenceSteam : public FOnlineUserPresence
{
public:
	uint32 m_bIsAFriend : 1;

	FOrionOnlineUserPresenceSteam()
	{
		Reset();
		m_bIsAFriend = false;
	}

	void Update(const FUniqueNetIdSteam& FriendId);
};
#endif
