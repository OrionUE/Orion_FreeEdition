/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamMatchmakingTypes.h"

#if WITH_ORIONSTEAM
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamMatchmakingCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamMatchmakingCreateLobby : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnCreateLobby m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamMatchmakingCreateLobby(FOnCreateLobby Callback, const ELobbyType LobbyType, const int32 MaxLobbyMembers, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_LobbyType(LobbyType), m_MaxLobbyMembers(MaxLobbyMembers)
	{
	}

	FOnlineAsyncTaskOrionSteamMatchmakingCreateLobby(UOrionSteamAsyncAction* AsyncObject, const ELobbyType LobbyType, const int32 MaxLobbyMembers, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_LobbyType(LobbyType), m_MaxLobbyMembers(MaxLobbyMembers)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamMatchmakingCreateLobby() = delete;

protected:
	LobbyCreated_t m_CallbackResults;
	ELobbyType m_LobbyType;
	int32 m_MaxLobbyMembers;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamMatchmakingCreateLobby"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamRequestLobbyList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamRequestLobbyList : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRequestLobbyList m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamRequestLobbyList(FOnRequestLobbyList Callback, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults()
	{
	}

	FOnlineAsyncTaskOrionSteamRequestLobbyList(UOrionSteamAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamRequestLobbyList() = delete;

protected:
	LobbyMatchList_t m_CallbackResults;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamRequestLobbyList"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOrionOnlineAsyncTaskSteamJoinLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOrionOnlineAsyncTaskSteamJoinLobby : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnJoinLobby m_OnSteamCallback;

public:
	FOrionOnlineAsyncTaskSteamJoinLobby(class FOnJoinLobby Callback, FSteamID SteamIDLobby, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamIDLobby(SteamIDLobby)
	{
	}

	FOrionOnlineAsyncTaskSteamJoinLobby(UOrionSteamAsyncAction* AsyncObject, FSteamID SteamIDLobby, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_SteamIDLobby(SteamIDLobby)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOrionOnlineAsyncTaskSteamJoinLobby() = delete;

protected:
	LobbyEnter_t m_CallbackResults;
	FSteamID m_SteamIDLobby;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamJoinLobby"));
	}
};
#endif
