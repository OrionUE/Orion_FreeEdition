/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetTradeHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetTradeHistory : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetTradeHistory(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IEconService", "GetTradeHistory", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("max_trades", MaxTrades);
		m_RequestString.AddNumberField("start_after_time", StartAfterTime);
		m_RequestString.AddNumberField("start_after_tradeid", FCString::Atoi64(*StartAfterTradeID));
		m_RequestString.AddBoolField("navigating_back", bNavigatingBack);
		m_RequestString.AddBoolField("get_descriptions", bGetDescriptions);
		m_RequestString.AddStringField("language", Language);
		m_RequestString.AddBoolField("include_failed", bIncludeFailed);
		m_RequestString.AddBoolField("include_total", bIncludeTotal);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetTradeHistory() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetTradeHistory"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIFlushInventoryCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIFlushInventoryCache : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIFlushInventoryCache(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString ContextId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IEconService", "FlushInventoryCache", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("contextid", FCString::Atoi64(*ContextId));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIFlushInventoryCache() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIFlushInventoryCache"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIFlushAssetAppearanceCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIFlushAssetAppearanceCache : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIFlushAssetAppearanceCache(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IEconService", "FlushAssetAppearanceCache", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIFlushAssetAppearanceCache() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIFlushAssetAppearanceCache"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIFlushContextCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIFlushContextCache : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIFlushContextCache(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IEconService", "FlushContextCache", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIFlushContextCache() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIFlushContextCache"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffers : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffers(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IEconService", "GetTradeOffers", Key, 1, EVerb::GET)
	{
		m_RequestString.AddBoolField("get_sent_offers", bGetSentOffers);
		m_RequestString.AddBoolField("get_received_offers", bGetReceivedOffers);
		m_RequestString.AddBoolField("get_descriptions", bGetDescriptions);
		m_RequestString.AddStringField("language", Language);
		m_RequestString.AddBoolField("active_only", bActiveOnly);
		m_RequestString.AddBoolField("historical_only", bHistoricalOnly);
		m_RequestString.AddNumberField("time_historical_cutoff", TimeHistoricalCutoff);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffers() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffers"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffer : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffer(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString TradeOfferId, FString Language)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IEconService", "GetTradeOffer", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("tradeofferid", FCString::Atoi64(*TradeOfferId));
		m_RequestString.AddStringField("language", Language);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffer() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffer"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffersSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffersSummary : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffersSummary(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 TimeLastVisit)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IEconService", "GetTradeOffersSummary", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("time_last_visit", TimeLastVisit);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffersSummary() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetTradeOffersSummary"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIDeclineTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIDeclineTradeOffer : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIDeclineTradeOffer(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString TradeOfferId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IEconService", "DeclineTradeOffer", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("tradeofferid", FCString::Atoi64(*TradeOfferId));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIDeclineTradeOffer() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIDeclineTradeOffer"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPICancelTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPICancelTradeOffer : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPICancelTradeOffer(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString TradeOfferId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IEconService", "CancelTradeOffer", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("tradeofferid", FCString::Atoi64(*TradeOfferId));
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPICancelTradeOffer() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPICancelTradeOffer"));
	}
};
