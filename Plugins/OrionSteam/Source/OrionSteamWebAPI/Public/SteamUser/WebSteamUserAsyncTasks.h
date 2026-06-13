/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "SteamUser/WebSteamUserTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPICheckAppOwnership
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPICheckAppOwnership : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPICheckAppOwnership(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUser", "CheckAppOwnership", Key, 2, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPICheckAppOwnership() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetAppPriceInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetAppPriceInfo : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetAppPriceInfo(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, TArray<int32> AppIds)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUser", "GetAppPriceInfo", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);

		FString AppIDs;
		for (int32 i = 0; i < AppIds.Num(); i++)
		{
			AppIDs.Append(FString::Printf(TEXT(",%d"), AppIds[i]));
		}

		m_RequestString.Add("appids", AppIDs);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetAppPriceInfo() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetFriendList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetFriendList : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetFriendList(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, FString Relationship)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUser", "GetFriendList", Key, 1, EVerb::GET, true)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("relationship", Relationship);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetFriendList() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetPlayerBans
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetPlayerBans : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetPlayerBans(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, TArray<FString> SteamIDd)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUser", "GetPlayerBans", Key, 1, EVerb::GET)
	{
		FString m_SteamIDs;
		for (int32 i = 0; i < SteamIDd.Num(); i++)
		{
			m_SteamIDs.Append(FString::Printf(TEXT(",%s"), *LexToString(SteamIDd[i])));
		}
		m_RequestString.Add("steamids", m_SteamIDs);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetPlayerBans() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetPlayerSummaries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetPlayerSummaries : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetPlayerSummaries(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, TArray<FString> SteamIDd)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUser", "GetPlayerSummaries", Key, 2, EVerb::GET)
	{
		FString m_SteamIDs;
		for (int32 i = 0; i < SteamIDd.Num(); i++)
		{
			m_SteamIDs.Append(FString::Printf(TEXT(",%s"), *LexToString(SteamIDd[i])));
		}
		m_RequestString.Add("steamids", m_SteamIDs);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetPlayerSummaries() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetPublisherAppOwnership
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetPublisherAppOwnership : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetPublisherAppOwnership(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUser", "GetPublisherAppOwnership", Key, 3, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetPublisherAppOwnership() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetPublisherAppOwnershipChanges
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetPublisherAppOwnershipChanges : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetPublisherAppOwnershipChanges(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString PackageRowVersion, FString CDKeyRowVersion)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUser", "GetPublisherAppOwnershipChanges", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("packagerowversion", PackageRowVersion);
		m_RequestString.Add("cdKeyrowversion", CDKeyRowVersion);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetPublisherAppOwnershipChanges() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetUserGroupList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetUserGroupList : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetUserGroupList(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUser", "GetUserGroupList", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetUserGroupList() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGrantPackage
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGrantPackage : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGrantPackage(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 PackageId, FString Ipaddress, FString ThirdPartyKey, int32 ThirdPartyAppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUser", "GrantPackage", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("packageid", PackageId);
		m_RequestString.Add("ipaddress", Ipaddress);
		m_RequestString.Add("thirdpartyKey", ThirdPartyKey);
		m_RequestString.Add("thirdpartyappid", ThirdPartyAppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGrantPackage() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIResolveVanityURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIResolveVanityURL : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIResolveVanityURL(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString VanityURL, EVanityUrlType URLType)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUser", "ResolveVanityURL", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("vanityurl", VanityURL);
		m_RequestString.Add("url_type", static_cast<int32>(URLType));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIResolveVanityURL() = delete;
};
