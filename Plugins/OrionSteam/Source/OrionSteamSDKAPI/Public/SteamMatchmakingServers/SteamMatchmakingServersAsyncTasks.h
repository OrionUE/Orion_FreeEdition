/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamMatchmakingServersTypes.h"

class UServerFilter;

#if WITH_ORIONSTEAM

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamMatchmakingServersServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamMatchmakingServersServerList : public FOrionOnlineAsyncTaskSteam, public ISteamMatchmakingServerListResponse
{
public:
	FOnServerUpdated m_OnSteamCallback;
	FOnServerRefreshCompleted m_OnServerRefreshCompleted;
	friend class UOrionSteamMatchmakingServersAsyncActionRequestServerList;

public:
	static HServerListRequest m_CallbackResults;

public:
	FOnlineAsyncTaskOrionSteamMatchmakingServersServerList(FOnServerUpdated ServerUpdateCallback, int32 AppID, float Timeout, int32 MaxResults, ESteamServerListRequestType RequestType, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);

	FOnlineAsyncTaskOrionSteamMatchmakingServersServerList(UOrionSteamAsyncAction* AsyncObject, int32 AppID, float Timeout, int32 MaxResults, ESteamServerListRequestType RequestType, bool bIgnoreNonResponsive, UServerFilter* ServerFilter)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_FoundServers(0), m_AppID(AppID), m_MaxResults(MaxResults), m_RequestType(RequestType), m_bServerRefreshComplete(false), m_bIgnoreNonResponsive(bIgnoreNonResponsive), m_ElapsedTime(0), m_ServerFilter(ServerFilter)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
		m_OnServerRefreshCompleted.BindUFunction(AsyncObject, "HandleServerListFinished");

		if (Subsystem)
		{
			if (Subsystem->CurrentMatchmakingServersServerList != nullptr)
			{
				Subsystem->CurrentMatchmakingServersServerList->CancelServerQuery();
			}
			Subsystem->CurrentMatchmakingServersServerList = this;
		}
	}

	virtual ~FOnlineAsyncTaskOrionSteamMatchmakingServersServerList() override;

private:
	FOnlineAsyncTaskOrionSteamMatchmakingServersServerList() = delete;

protected:
	int32 m_FoundServers;
	int32 m_AppID;
	int32 m_MaxResults;
	ESteamServerListRequestType m_RequestType;
	bool m_bServerRefreshComplete;
	bool m_bIgnoreNonResponsive;
	float m_ElapsedTime;
	TWeakObjectPtr<UServerFilter> m_ServerFilter;

protected:
	virtual void Tick() override;
	virtual void Finalize() override;
	void CancelServerQuery();

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamMatchmakingServersServerList"));
	}

	virtual void ServerResponded(HServerListRequest Request, int iServer) override;
	virtual void ServerFailedToRespond(HServerListRequest Request, int iServer) override;
	virtual void RefreshComplete(HServerListRequest Request, EMatchMakingServerResponse Response) override;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamMatchmakingServersPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamMatchmakingServersPingServer : public FOrionOnlineAsyncTaskSteam, public ISteamMatchmakingPingResponse
{
public:
	FOnServerPing m_OnSteamCallback;
	friend class UOrionSteamMatchmakingServersAsyncActionPingServer;

public:
	HServerQuery m_CallbackResults;

public:
	FOnlineAsyncTaskOrionSteamMatchmakingServersPingServer(FOnServerPing Callback, FString IP, int32 Port, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_IP(IP), m_Port(Port)
	{
		if (Subsystem)
		{
			if (Subsystem->CurrentMatchmakingServersPingServer != nullptr)
			{
				Subsystem->CurrentMatchmakingServersPingServer->CancelServerQuery();
			}

			Subsystem->CurrentMatchmakingServersPingServer = this;
		}
	}

	FOnlineAsyncTaskOrionSteamMatchmakingServersPingServer(UOrionSteamAsyncAction* AsyncObject, FString IP, int32 Port, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_IP(IP), m_Port(Port)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");

		if (Subsystem)
		{
			if (Subsystem->CurrentMatchmakingServersPingServer != nullptr)
			{
				Subsystem->CurrentMatchmakingServersPingServer->CancelServerQuery();
			}
			Subsystem->CurrentMatchmakingServersPingServer = this;
		}
	}

private:
	virtual ~FOnlineAsyncTaskOrionSteamMatchmakingServersPingServer() override;
	FOnlineAsyncTaskOrionSteamMatchmakingServersPingServer() = delete;

protected:
	FString m_IP;
	int32 m_Port;

protected:
	virtual void Tick() override;
	void CancelServerQuery();

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamMatchmakingServersPingServer"));
	}

	virtual void ServerResponded(gameserveritem_t& server) override;
	virtual void ServerFailedToRespond() override;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamMatchmakingServersServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamMatchmakingServersServerRules : public FOrionOnlineAsyncTaskSteam, public ISteamMatchmakingRulesResponse
{
public:
	FOnServerRules m_OnSteamCallback;
	friend class UOrionSteamMatchmakingServersAsyncActionServerRules;

public:
	static HServerQuery m_CallbackResults;

public:
	FOnlineAsyncTaskOrionSteamMatchmakingServersServerRules(FOnServerRules Callback, FString IP, int32 Port, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_IP(IP), m_Port(Port)
	{
		if (Subsystem)
		{
			if (Subsystem->CurrentMatchmakingServersServerRules != nullptr)
			{
				Subsystem->CurrentMatchmakingServersServerRules->CancelServerQuery();
			}
			Subsystem->CurrentMatchmakingServersServerRules = this;
		}
	}

	FOnlineAsyncTaskOrionSteamMatchmakingServersServerRules(UOrionSteamAsyncAction* AsyncObject, FString IP, int32 Port, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_IP(IP), m_Port(Port)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");

		if (Subsystem)
		{
			if (Subsystem->CurrentMatchmakingServersServerRules != nullptr)
			{
				Subsystem->CurrentMatchmakingServersServerRules->CancelServerQuery();
			}
			Subsystem->CurrentMatchmakingServersServerRules = this;
		}
	}

private:
	virtual ~FOnlineAsyncTaskOrionSteamMatchmakingServersServerRules() override;
	FOnlineAsyncTaskOrionSteamMatchmakingServersServerRules() = delete;

protected:
	FString m_IP;
	int32 m_Port;
	TArray<FGameServerRule> m_Rules;

protected:
	virtual void Tick() override;
	void CancelServerQuery();

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamMatchmakingServersServerRules"));
	}

	virtual void RulesResponded(const char* pchRule, const char* pchValue) override;
	virtual void RulesFailedToRespond() override;
	virtual void RulesRefreshComplete() override;
};
#endif
