/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionOnlinePresenceTypesSteam.h"
#include "OrionOnlineSubsystemSteamTypes.h"
#include "Interfaces/OnlinePresenceInterface.h"
#include "OrionOnlineSubsystemSteamPackage.h"

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlinePresenceSteam : public IOnlinePresence
{
private:
	FOrionOnlinePresenceSteam();

	PACKAGE_SCOPE : FOrionOnlinePresenceSteam(class FOrionOnlineSubsystemSteam* InSubsystem);
	void UpdatePresenceForUser(const FUniqueNetId& User);

public:
	//~ Begin IOnlinePresence Interface
	virtual void SetPresence(const FUniqueNetId& User, const FOnlineUserPresenceStatus& Status, const FOnPresenceTaskCompleteDelegate& Delegate = FOnPresenceTaskCompleteDelegate()) override;
	virtual void QueryPresence(const FUniqueNetId& User, const FOnPresenceTaskCompleteDelegate& Delegate = FOnPresenceTaskCompleteDelegate()) override;
	virtual EOnlineCachedResult::Type GetCachedPresence(const FUniqueNetId& User, TSharedPtr<FOnlineUserPresence>& OutPresence) override;
	virtual EOnlineCachedResult::Type GetCachedPresenceForApp(const FUniqueNetId& LocalUserId, const FUniqueNetId& User, const FString& AppId, TSharedPtr<FOnlineUserPresence>& OutPresence) override;
	//~ End IOnlinePresence Interface

	virtual ~FOrionOnlinePresenceSteam() override
	{
	}

private:
	ISteamFriends* m_SteamFriendsPtr;
	FOrionOnlineSubsystemSteam* m_SteamSubsystem;
	TUniqueNetIdMap<TSharedRef<FOrionOnlineUserPresenceSteam>> m_CachedPresence;
	TUniqueNetIdMap<TSharedRef<const FOnPresenceTaskCompleteDelegate>> m_DelayedPresenceDelegates;
};

typedef TSharedPtr<FOrionOnlinePresenceSteam, ESPMode::ThreadSafe> FOrionOnlinePresenceSteamPtr;
#endif
