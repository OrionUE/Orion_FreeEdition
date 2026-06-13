/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPICanTrade
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPICanTrade : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPICanTrade(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FString TargetId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamEconomy", "CanTrade", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("targetid", TargetId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPICanTrade() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIFinalizeAssetTransaction
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIFinalizeAssetTransaction : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIFinalizeAssetTransaction(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FString TxnId, FString Language)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamEconomy", "FinalizeAssetTransaction", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("txnid", TxnId);
		m_RequestString.Add("language", Language);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIFinalizeAssetTransaction() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetAssetClassInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetAssetClassInfo : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetAssetClassInfo(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Language, int32 ClassCount, FString ClassId, FString InstanceId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamEconomy", "GetAssetClassInfo", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("language", Language);
		m_RequestString.Add("class_count", ClassCount);
		m_RequestString.Add("classid0", ClassId);
		m_RequestString.Add("instanceid0", InstanceId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetAssetClassInfo() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetAssetPrices
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetAssetPrices : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetAssetPrices(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Currency, FString Language)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamEconomy", "GetAssetPrices", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("currency", Currency);
		m_RequestString.Add("language", Language);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetAssetPrices() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetExportedAssetsForUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetExportedAssetsForUser : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetExportedAssetsForUser(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString ContextId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamEconomy", "GetExportedAssetsForUser", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("contextid", ContextId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetExportedAssetsForUser() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetMarketPrices
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetMarketPrices : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetMarketPrices(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamEconomy", "GetMarketPrices", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetMarketPrices() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIStartAssetTransaction
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIStartAssetTransaction : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIStartAssetTransaction(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FString AssetId, int32 AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamEconomy", "StartAssetTransaction", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("assetid0", AssetId);
		m_RequestString.Add("assetquantity0", AssetQuantity);
		m_RequestString.Add("currency", Currency);
		m_RequestString.Add("language", Language);
		m_RequestString.Add("ipaddress", Ipaddress);
		m_RequestString.Add("referrer", Referer);
		m_RequestString.Add("clientauth", bClientAuth);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIStartAssetTransaction() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIStartTrade
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIStartTrade : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIStartTrade(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId1, FString SteamId2)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamEconomy", "StartTrade", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("partya", SteamId1);
		m_RequestString.Add("partya", SteamId2);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIStartTrade() = delete;
};
