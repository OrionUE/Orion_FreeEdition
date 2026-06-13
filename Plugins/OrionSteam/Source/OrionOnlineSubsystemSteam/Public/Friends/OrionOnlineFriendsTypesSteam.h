/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Interfaces/OnlinePresenceInterface.h"

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineFriendSteam : public FOnlineFriend
{
public:
	FOrionOnlineFriendSteam(const CSteamID& InUserId = CSteamID());

	virtual ~FOrionOnlineFriendSteam() override { };

	virtual FUniqueNetIdRef GetUserId() const override;
	virtual FString GetRealName() const override;
	virtual FString GetDisplayName(const FString& Platform = FString()) const override;
	virtual bool GetUserAttribute(const FString& AttrName, FString& OutAttrValue) const override;

	virtual EInviteStatus::Type GetInviteStatus() const override;
	virtual const FOnlineUserPresence& GetPresence() const override;

	inline bool GetAccountData(const FString& Key, FString& OutVal) const
	{
		const FString* FoundVal = m_AccountData.Find(Key);
		if (FoundVal != nullptr)
		{
			OutVal = *FoundVal;
			return true;
		}
		return false;
	}

	FUniqueNetIdRef m_UserId;
	TMap<FString, FString> m_AccountData;
	FOnlineUserPresence m_Presence;
};
#endif
