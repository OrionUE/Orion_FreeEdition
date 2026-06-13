/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIAdjustAgreement
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIAdjustAgreement : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIAdjustAgreement(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, FString AgreementId, int32 AppId, FString NextProcessDate)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, OrionSteamWebAPIMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "AdjustAgreement", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("agreementid", AgreementId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("nextprocessdate", NextProcessDate);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIAdjustAgreement() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIAdjustAgreement"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPICancelAgreement
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPICancelAgreement : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPICancelAgreement(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, FString AgreementId, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, OrionSteamWebAPIMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "CancelAgreement", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("agreementid", AgreementId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPICancelAgreement() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPICancelAgreement"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIFinalizeTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIFinalizeTxn : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIFinalizeTxn(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString OrderId, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, OrionSteamWebAPIMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "FinalizeTxn", Key, 2, EVerb::POST)
	{
		m_RequestString.Add("orderid", OrderId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIFinalizeTxn() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIFinalizeTxn"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetReport
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetReport : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetReport(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString time, FString type, int32 MaxResults)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, OrionSteamWebAPIMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "GetReport", Key, 4, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("type", type);
		m_RequestString.Add("time", time);
		m_RequestString.Add("MaxResults", MaxResults);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetReport() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetReport"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetUserAgreementInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetUserAgreementInfo : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetUserAgreementInfo(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, OrionSteamWebAPIMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "GetUserAgreementInfo", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetUserAgreementInfo() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetUserAgreementInfo"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetUserInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetUserInfo : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetUserInfo(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, FString Ipaddress)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, OrionSteamWebAPIMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "GetUserInfo", Key, 2, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("ipaddress", Ipaddress);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetUserInfo() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetUserInfo"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIInitTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIInitTxn : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIInitTxn(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString OrderId, FString SteamId, int32 AppId, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32> ItemID, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> description, TArray<FString> Category, TArray<int32> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> RecurringAmt, TArray<int32> BundleCount, TArray<int32> BundleId, TArray<int32> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, OrionSteamWebAPIMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "InitTxn", Key, 3, EVerb::POST)
	{
		m_RequestString.Add("orderid", OrderId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("itemcount", ItemID.Num());
		m_RequestString.Add("language", Language);
		m_RequestString.Add("currency", Currency);
		m_RequestString.Add("usersession", UserSession);
		m_RequestString.Add("ipaddress", Ipaddress);
		m_RequestString.Add("itemid", ItemID);
		m_RequestString.Add("qty", Quantity);
		m_RequestString.Add("amount", Amount);
		m_RequestString.Add("description", description);
		m_RequestString.Add("category", Category);
		m_RequestString.Add("associated_bundle", AssociatedBundle);
		m_RequestString.Add("billingtype", BillingType);
		m_RequestString.Add("startdate", StartDate);
		m_RequestString.Add("enddate", EndDate);
		m_RequestString.Add("period", Period);
		m_RequestString.Add("frequency", Frequency);
		m_RequestString.Add("recurringamt", RecurringAmt);
		m_RequestString.Add("bundlecount", BundleCount);
		m_RequestString.Add("bundleid", BundleId);
		m_RequestString.Add("bundle_qty", BundleQty);
		m_RequestString.Add("bundle_desc", BundleDesc);
		m_RequestString.Add("bundle_category", BundleCategory);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIInitTxn() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIInitTxn"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIProcessAgreement
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIProcessAgreement : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIProcessAgreement(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString OrderId, FString SteamId, FString AgreementId, int32 AppId, int32 Amount, FString Currency)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, OrionSteamWebAPIMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "ProcessAgreement", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("orderid", OrderId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("agreementid", AgreementId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("amount", Amount);
		m_RequestString.Add("currency", Currency);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIProcessAgreement() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIProcessAgreement"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIQueryTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIQueryTxn : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIQueryTxn(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString OrderId, FString TransId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, OrionSteamWebAPIMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "QueryTxn", Key, 2, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("orderid", OrderId);
		m_RequestString.Add("transid", TransId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIQueryTxn() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIQueryTxn"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIRefundTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIRefundTxn : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIRefundTxn(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString OrderId, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, OrionSteamWebAPIMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "RefundTxn", Key, 2, EVerb::POST)
	{
		m_RequestString.Add("orderid", OrderId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIRefundTxn() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIRefundTxn"));
	}
};
