/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "Containers/IndirectArray.h"
#include "OrionOnlineSubsystemSteamTypes.h"
#include "OnlineSessionSettings.h"
#include "OrionOnlineSessionInterfaceSteam.h"
#include "OnlineAsyncTaskManager.h"
#include "TaskManager/OrionOnlineAsyncTaskManagerSteam.h"
#include "OrionOnlineSubsystemSteam.h"
#include "OrionOnlineSubsystemSteamPackage.h"

#define SEARCH_STEAM_HOSTIP TEXT("SteamHostIp")

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamCreateServer : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamCreateServer() = delete;

public:
	FOrionOnlineAsyncTaskSteamCreateServer(class FOrionOnlineSubsystemSteam* InSubsystem, FName InSessionName)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_SessionName(InSessionName)
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;
	virtual void Finalize() override;
	virtual void TriggerDelegates() override;

private:
	bool m_bInit;
	FName m_SessionName;
};

class FOrionOnlineAsyncTaskSteamUpdateServer : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamUpdateServer()
		: m_SessionName(NAME_None),
		  m_bUpdateOnlineData(false)
	{
	}

public:
	FOrionOnlineAsyncTaskSteamUpdateServer(class FOrionOnlineSubsystemSteam* InSubsystem, FName InSessionName, bool bInUpdateOnlineData, const FOnlineSessionSettings& InNewSessionSettings)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_SessionName(InSessionName),
		  m_NewSessionSettings(InNewSessionSettings),
		  m_bUpdateOnlineData(bInUpdateOnlineData)
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;
	virtual void TriggerDelegates() override;

private:
	FName m_SessionName;
	FOnlineSessionSettings m_NewSessionSettings;
	bool m_bUpdateOnlineData;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamLogoffServer : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamLogoffServer()
		: m_bInit(false),
		  m_SessionName(NAME_None)
	{
	}

public:
	FOrionOnlineAsyncTaskSteamLogoffServer(class FOrionOnlineSubsystemSteam* InSubsystem, FName InSessionName)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_bInit(false),
		  m_SessionName(InSessionName)
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;

private:
	bool m_bInit;
	FName m_SessionName;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionPendingSearchResultSteam final : public ISteamMatchmakingRulesResponse
{
	FOrionPendingSearchResultSteam() = delete;

	PACKAGE_SCOPE : bool FillSessionFromServerRules();
	void RemoveSelf() const;

public:
	FOrionPendingSearchResultSteam(class FOrionOnlineAsyncTaskSteamFindServerBase* InParentQuery)
		: m_ParentQuery(InParentQuery),
		  m_ServerQueryHandle(HSERVERQUERY_INVALID),
		  m_ServerId(FUniqueNetIdSteam::EmptyId())
	{
	}

	~FOrionPendingSearchResultSteam()
	{
		CancelQuery();
	}

	virtual void RulesResponded(const char* pchRule, const char* pchValue) override;
	virtual void RulesFailedToRespond() override;
	virtual void RulesRefreshComplete() override;
	void CancelQuery();

	PACKAGE_SCOPE : FOrionOnlineAsyncTaskSteamFindServerBase* m_ParentQuery;
	HServerQuery m_ServerQueryHandle;
	FUniqueNetIdSteamRef m_ServerId;
	TSharedPtr<FInternetAddr> m_HostAddr;
	FSteamSessionKeyValuePairs m_ServerRules;
	FOnlineSessionSearchResult m_PendingSearchResult;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamFindServerBase : public FOrionOnlineAsyncTaskSteam, public ISteamMatchmakingServerListResponse
{
	FOrionOnlineAsyncTaskSteamFindServerBase()
		: m_ElapsedTime(0.0f),
		  m_SearchSettings(nullptr),
		  m_ServerListRequestHandle(nullptr),
		  m_bInit(false),
		  m_bServerRefreshComplete(false),
		  m_SteamMatchmakingServersPtr(nullptr)
	{
	}

public:
	FOrionOnlineAsyncTaskSteamFindServerBase(class FOrionOnlineSubsystemSteam* InSubsystem, const TSharedPtr<class FOnlineSessionSearch>& InSearchSettings)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_ElapsedTime(0.0f),
		  m_SearchSettings(InSearchSettings),
		  m_ServerListRequestHandle(nullptr),
		  m_bInit(false),
		  m_bServerRefreshComplete(false),
		  m_SteamMatchmakingServersPtr(nullptr)
	{
	}

	virtual void CreateQuery(MatchMakingKeyValuePair_t** OutFilter, int32& NumFilters);
	void ParseSearchResult(class gameserveritem_t* ServerDetails);
	virtual void Tick() override;
	virtual void Finalize() override;

	virtual void ServerResponded(HServerListRequest Request, int iServer) override;
	virtual void ServerFailedToRespond(HServerListRequest Request, int iServer) override;
	virtual void RefreshComplete(HServerListRequest Request, EMatchMakingServerResponse Response) override;

	PACKAGE_SCOPE : float m_ElapsedTime;
	TIndirectArray<FOrionPendingSearchResultSteam> m_PendingSearchResults;
	TSharedPtr<FOnlineSessionSearch> m_SearchSettings;
	HServerListRequest m_ServerListRequestHandle;

private:
	bool m_bInit;
	bool m_bServerRefreshComplete;
	ISteamMatchmakingServers* m_SteamMatchmakingServersPtr;
};

DECLARE_MULTICAST_DELEGATE_FourParams(FOnAsyncFindServerInviteCompleteWithNetId, const bool, const int32, FUniqueNetIdPtr, const class FOnlineSessionSearchResult&);
typedef FOnAsyncFindServerInviteCompleteWithNetId::FDelegate FOnAsyncFindServerInviteCompleteWithNetIdDelegate;

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamFindServerForInviteSession : public FOrionOnlineAsyncTaskSteamFindServerBase
{
public:
	FOrionOnlineAsyncTaskSteamFindServerForInviteSession(class FOrionOnlineSubsystemSteam* InSubsystem, const TSharedPtr<class FOnlineSessionSearch>& InSearchSettings, int32 InLocalUserNum, FOnAsyncFindServerInviteCompleteWithNetId& InDelegates)
		: FOrionOnlineAsyncTaskSteamFindServerBase(InSubsystem, InSearchSettings), m_LocalUserNum(InLocalUserNum), m_FindServerInviteCompleteWithUserIdDelegates(InDelegates)
	{
	}

	virtual FString ToString() const override;
	virtual void TriggerDelegates() override;

protected:
	int32 m_LocalUserNum;
	FOnAsyncFindServerInviteCompleteWithNetId m_FindServerInviteCompleteWithUserIdDelegates;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamFindServerForFriendSession : public FOrionOnlineAsyncTaskSteamFindServerBase
{
public:
	FOrionOnlineAsyncTaskSteamFindServerForFriendSession(class FOrionOnlineSubsystemSteam* InSubsystem, const TSharedPtr<class FOnlineSessionSearch>& InSearchSettings, int32 InLocalUserNum, FOnFindFriendSessionComplete& InDelegates)
		: FOrionOnlineAsyncTaskSteamFindServerBase(InSubsystem, InSearchSettings), m_LocalUserNum(InLocalUserNum), m_FindServerInviteCompleteDelegates(InDelegates)
	{
	}

	virtual FString ToString() const override;
	virtual void TriggerDelegates() override;

protected:
	int32 m_LocalUserNum;
	FOnFindFriendSessionComplete m_FindServerInviteCompleteDelegates;
};

DECLARE_MULTICAST_DELEGATE_OneParam(FOnAsyncFindServersComplete, bool);
typedef FOnAsyncFindServersComplete::FDelegate FOnAsyncFindServersCompleteDelegate;

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamFindServers : public FOrionOnlineAsyncTaskSteamFindServerBase
{
public:
	FOrionOnlineAsyncTaskSteamFindServers(class FOrionOnlineSubsystemSteam* InSubsystem, const TSharedPtr<class FOnlineSessionSearch>& InSearchSettings, FOnAsyncFindServersComplete& InDelegates)
		: FOrionOnlineAsyncTaskSteamFindServerBase(InSubsystem, InSearchSettings),
		  m_FindServersCompleteDelegates(InDelegates)
	{
	}

	virtual FString ToString() const override;
	virtual void TriggerDelegates() override;

protected:
	FOnAsyncFindServersComplete m_FindServersCompleteDelegates;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncEventSteamInviteAccepted : public FOnlineAsyncEvent<FOrionOnlineSubsystemSteam>
{
	FOrionOnlineAsyncEventSteamInviteAccepted() = delete;

public:
	FOrionOnlineAsyncEventSteamInviteAccepted(FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteam& InFriendId, const FString& InConnectionURL)
		: FOnlineAsyncEvent(InSubsystem),
		  m_FriendId(FUniqueNetIdSteam::EmptyId()),
		  m_ConnectionURL(InConnectionURL),
		  m_LocalUserNum(0)
	{
	}

	virtual ~FOrionOnlineAsyncEventSteamInviteAccepted() override
	{
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncEventSteamInviteAccepted Friend: %s URL: %s"), *m_FriendId->ToDebugString(), *m_ConnectionURL);
	}

	virtual void Finalize() override;

private:
	FUniqueNetIdSteamRef m_FriendId;
	FString m_ConnectionURL;
	int32 m_LocalUserNum;
};
#endif
