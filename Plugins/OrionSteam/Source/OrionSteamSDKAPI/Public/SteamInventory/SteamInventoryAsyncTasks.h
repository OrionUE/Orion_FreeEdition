/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamInventoryTypes.h"

#if WITH_ORIONSTEAM
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamInventoryRequestEligiblePromoItemDefinitionsIDs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamInventoryRequestEligiblePromoItemDefinitionsIDs : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRequestEligiblePromoItemDefinitionsIDs m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamInventoryRequestEligiblePromoItemDefinitionsIDs(const FOnRequestEligiblePromoItemDefinitionsIDs Callback, const FSteamID SteamId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamID(SteamId)
	{
	}

	FOnlineAsyncTaskOrionSteamInventoryRequestEligiblePromoItemDefinitionsIDs(UOrionSteamAsyncAction* AsyncObject, const FSteamID SteamId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_SteamID(SteamId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamInventoryRequestEligiblePromoItemDefinitionsIDs() = delete;

protected:
	SteamInventoryEligiblePromoItemDefIDs_t m_CallbackResults;
	FSteamID m_SteamID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamInventoryRequestEligiblePromoItemDefinitionsIDs"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamInventoryRequestPricesResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamInventoryRequestPricesResult : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnSteamInventoryRequestPricesResult m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamInventoryRequestPricesResult(const FOnSteamInventoryRequestPricesResult Callback, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults()
	{
	}

	FOnlineAsyncTaskOrionSteamInventoryRequestPricesResult(UOrionSteamAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamInventoryRequestPricesResult() = delete;

protected:
	SteamInventoryRequestPricesResult_t m_CallbackResults;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamInventoryRequestPricesResult"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamInventoryStartPurchaseResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamInventoryStartPurchaseResult : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnSteamInventoryStartPurchaseResult m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamInventoryStartPurchaseResult(const FOnSteamInventoryStartPurchaseResult Callback, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_ItemDefs(ItemDefs), m_Quantity(Quantity)
	{
	}

	FOnlineAsyncTaskOrionSteamInventoryStartPurchaseResult(UOrionSteamAsyncAction* AsyncObject, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_ItemDefs(ItemDefs), m_Quantity(Quantity)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamInventoryStartPurchaseResult() = delete;

protected:
	SteamInventoryStartPurchaseResult_t m_CallbackResults;
	TArray<FSteamItemDef> m_ItemDefs;
	TArray<int32> m_Quantity;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamInventoryStartPurchaseResult"));
	}
};
#endif
