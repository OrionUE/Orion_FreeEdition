/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionOnlineSubsystemSteamTypes.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineAsyncTaskManager.h"
#include "TaskManager/OrionOnlineAsyncTaskManagerSteam.h"
#include "OrionOnlineSubsystemSteam.h"
#include "OrionOnlineSubsystemSteamPackage.h"

#if WITH_ORIONSTEAM

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamCreateLobby : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamCreateLobby()
		: m_CallbackResults(),
		  m_bInit(false),
		  m_SessionName(NAME_None),
		  m_LobbyType(k_ELobbyTypePublic), m_MaxLobbyMembers(0)
	{
	}

public:
	FOrionOnlineAsyncTaskSteamCreateLobby(class FOrionOnlineSubsystemSteam* InSubsystem, FName InSessionName, ELobbyType InLobbyType, int32 InMaxLobbyMembers)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_CallbackResults(),
		  m_bInit(false),
		  m_SessionName(InSessionName),
		  m_LobbyType(InLobbyType), m_MaxLobbyMembers(InMaxLobbyMembers)
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;
	virtual void Finalize() override;
	virtual void TriggerDelegates() override;

PACKAGE_SCOPE:
	LobbyCreated_t m_CallbackResults;

private:
	bool m_bInit;
	FName m_SessionName;
	ELobbyType m_LobbyType;
	int32 m_MaxLobbyMembers;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamUpdateLobby : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamUpdateLobby()
		: m_SessionName(NAME_None),
		  m_bUpdateOnlineData(false)
	{
	}

public:
	FOrionOnlineAsyncTaskSteamUpdateLobby(class FOrionOnlineSubsystemSteam* InSubsystem, FName InSessionName, bool bInUpdateOnlineData, const FOnlineSessionSettings& InNewSessionSettings)
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

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamJoinLobby : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamJoinLobby() = delete;

	PACKAGE_SCOPE : LobbyEnter_t m_CallbackResults;

public:
	FOrionOnlineAsyncTaskSteamJoinLobby(class FOrionOnlineSubsystemSteam* InSubsystem, FName InSessionName, const FUniqueNetIdSteam& InLobbyId)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_CallbackResults(),
		  m_bInit(false),
		  m_SessionName(InSessionName), m_LobbyId(InLobbyId.AsShared())
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;
	virtual void Finalize() override;
	virtual void TriggerDelegates() override;

private:
	bool m_bInit;
	FName m_SessionName;
	FUniqueNetIdSteamRef m_LobbyId;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamLeaveLobby : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamLeaveLobby() = delete;

public:
	FOrionOnlineAsyncTaskSteamLeaveLobby(class FOrionOnlineSubsystemSteam* InSubsystem, FName InSessionName, const FUniqueNetIdSteam& InLobbyId)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_SessionName(InSessionName),
		  m_LobbyId(InLobbyId.AsShared())
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;

private:
	FName m_SessionName;
	FUniqueNetIdSteamRef m_LobbyId;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamFindLobbiesBase : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamFindLobbiesBase()
		: m_FindLobbiesState(EFindLobbiesState::Init), m_CallbackResults(), m_SteamMatchmakingPtr(nullptr)
	{
	}

	virtual void CreateQuery();

public:
	FOrionOnlineAsyncTaskSteamFindLobbiesBase(class FOrionOnlineSubsystemSteam* InSubsystem, const TSharedPtr<FOnlineSessionSearch>& InSearchSettings)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_SearchSettings(InSearchSettings),
		  m_FindLobbiesState(EFindLobbiesState::Init),
		  m_CallbackResults(), m_SteamMatchmakingPtr(SteamMatchmaking())
	{
	}

	PACKAGE_SCOPE : enum class EFindLobbiesState : uint8
	{
		Init,
		RequestLobbyList,
		RequestLobbyData,
		WaitForRequestLobbyData,
		Finished
	};

	TSharedPtr<class FOnlineSessionSearch> m_SearchSettings;
	EFindLobbiesState m_FindLobbiesState;
	LobbyMatchList_t m_CallbackResults;
	TArray<CSteamID> m_LobbyIDs;

	void ParseSearchResult(const FUniqueNetIdSteam& LobbyId) const;
	virtual void Tick() override;
	virtual void Finalize() override;

private:
	ISteamMatchmaking* m_SteamMatchmakingPtr;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamFindLobbies : public FOrionOnlineAsyncTaskSteamFindLobbiesBase
{
public:
	FOrionOnlineAsyncTaskSteamFindLobbies(class FOrionOnlineSubsystemSteam* InSubsystem, const TSharedPtr<FOnlineSessionSearch>& InSearchSettings)
		: FOrionOnlineAsyncTaskSteamFindLobbiesBase(InSubsystem, InSearchSettings)
	{
	}

	virtual FString ToString() const override;
	virtual void TriggerDelegates() override;
};

DECLARE_MULTICAST_DELEGATE_FourParams(FOnAsyncFindLobbyCompleteWithNetId, const bool, const int32, FUniqueNetIdPtr, const class FOnlineSessionSearchResult&);
typedef FOnAsyncFindLobbyCompleteWithNetId::FDelegate FOnAsyncFindLobbyCompleteDelegateWithNetId;

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamFindLobbiesForInviteSession : public FOrionOnlineAsyncTaskSteamFindLobbiesBase
{
public:
	FOrionOnlineAsyncTaskSteamFindLobbiesForInviteSession(class FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteamRef& FriendId, const FUniqueNetIdSteam& InLobbyId, const TSharedPtr<FOnlineSessionSearch>& InSearchSettings, int32 InLocalUserNum, const FOnAsyncFindLobbyCompleteWithNetId& InOnFindLobbyCompleteDelegates)
		: FOrionOnlineAsyncTaskSteamFindLobbiesBase(InSubsystem, InSearchSettings),
		  m_LocalUserNum(InLocalUserNum),
		  m_FriendId(FriendId),
		  m_OnFindLobbyCompleteWithNetIdDelegate(InOnFindLobbyCompleteDelegates)
	{
		m_LobbyIDs.Add(CSteamID(*(uint64*)InLobbyId.GetBytes()));
		m_FindLobbiesState = FOrionOnlineAsyncTaskSteamFindLobbiesBase::EFindLobbiesState::RequestLobbyData;
	}

	virtual FString ToString() const override;
	virtual void TriggerDelegates() override;

private:
	int32 m_LocalUserNum;
	FUniqueNetIdSteamRef m_FriendId;
	FOnAsyncFindLobbyCompleteWithNetId m_OnFindLobbyCompleteWithNetIdDelegate;
};

DECLARE_MULTICAST_DELEGATE_FourParams(FOnAsyncFindLobbyCompleteWithNetIdForInviteReceived, const FUniqueNetId& /*UserId*/, const FUniqueNetId& /*FromId*/, const FString& /*AppId*/, const FOnlineSessionSearchResult& /*InviteResult*/);
typedef FOnAsyncFindLobbyCompleteWithNetIdForInviteReceived::FDelegate FOnAsyncFindLobbyCompleteDelegateWithNetIdForInviteReceived;

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamFindLobbiesForInviteSessionReceived : public FOrionOnlineAsyncTaskSteamFindLobbiesBase
{
public:
	FOrionOnlineAsyncTaskSteamFindLobbiesForInviteSessionReceived(class FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteamRef& FriendId, const FUniqueNetIdSteam& InLobbyId, const TSharedPtr<FOnlineSessionSearch>& InSearchSettings, int32 InLocalUserNum, const FOnAsyncFindLobbyCompleteWithNetIdForInviteReceived& InOnFindLobbyCompleteDelegates)
		: FOrionOnlineAsyncTaskSteamFindLobbiesBase(InSubsystem, InSearchSettings),
		  m_LocalUserNum(InLocalUserNum),
		  m_FriendId(FriendId),
		  m_OnFindLobbyCompleteWithNetIdDelegate(InOnFindLobbyCompleteDelegates)
	{
		m_LobbyIDs.Add(CSteamID(*(uint64*)InLobbyId.GetBytes()));
		m_FindLobbiesState = FOrionOnlineAsyncTaskSteamFindLobbiesBase::EFindLobbiesState::RequestLobbyData;
	}

	virtual FString ToString() const override;
	virtual void TriggerDelegates() override;

private:
	int32 m_LocalUserNum;
	FUniqueNetIdSteamRef m_FriendId;
	FOnAsyncFindLobbyCompleteWithNetIdForInviteReceived m_OnFindLobbyCompleteWithNetIdDelegate;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamFindLobbiesForFriendSession : public FOrionOnlineAsyncTaskSteamFindLobbiesBase
{
public:
	FOrionOnlineAsyncTaskSteamFindLobbiesForFriendSession(class FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteam& InLobbyId, const TSharedPtr<FOnlineSessionSearch>& InSearchSettings, int32 InLocalUserNum, const FOnFindFriendSessionComplete& InOnFindFriendSessionCompleteDelegate)
		: FOrionOnlineAsyncTaskSteamFindLobbiesBase(InSubsystem, InSearchSettings),
		  m_LocalUserNum(InLocalUserNum),
		  m_OnFindFriendSessionCompleteDelegate(InOnFindFriendSessionCompleteDelegate)
	{
		m_LobbyIDs.Add(CSteamID(*(uint64*)InLobbyId.GetBytes()));
		m_FindLobbiesState = FOrionOnlineAsyncTaskSteamFindLobbiesBase::EFindLobbiesState::RequestLobbyData;
	}

	virtual FString ToString() const override;
	virtual void TriggerDelegates() override;

private:
	int32 m_LocalUserNum;
	FOnFindFriendSessionComplete m_OnFindFriendSessionCompleteDelegate;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncEventSteamLobbyInviteAccepted : public FOnlineAsyncEvent<FOrionOnlineSubsystemSteam>
{
	FOrionOnlineAsyncEventSteamLobbyInviteAccepted() = delete;

public:
	FOrionOnlineAsyncEventSteamLobbyInviteAccepted(FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteam& InFriendId, const FUniqueNetIdSteam& InLobbyId)
		: FOnlineAsyncEvent(InSubsystem),
		  m_FriendId(InFriendId.AsShared()),
		  m_LobbyId(InLobbyId.AsShared()),
		  m_LocalUserNum(0)
	{
	}

	virtual ~FOrionOnlineAsyncEventSteamLobbyInviteAccepted() override
	{
	}

	virtual FString ToString() const override;
	virtual void Finalize() override;

private:
	FUniqueNetIdSteamRef m_FriendId;
	FUniqueNetIdSteamRef m_LobbyId;
	int32 m_LocalUserNum;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncEventSteamLobbyInviteReceived : public FOnlineAsyncEvent<FOrionOnlineSubsystemSteam>
{
	FOrionOnlineAsyncEventSteamLobbyInviteReceived() = delete;

public:
	FOrionOnlineAsyncEventSteamLobbyInviteReceived(FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteam& InFriendId, const FUniqueNetIdSteam& InLobbyId)
		: FOnlineAsyncEvent(InSubsystem),
		  m_FriendId(InFriendId.AsShared()),
		  m_LobbyId(InLobbyId.AsShared()),
		  m_LocalUserNum(0)
	{
	}

	virtual ~FOrionOnlineAsyncEventSteamLobbyInviteReceived() override
	{
	}

	virtual FString ToString() const override;
	virtual void Finalize() override;

private:
	FUniqueNetIdSteamRef m_FriendId;
	FUniqueNetIdSteamRef m_LobbyId;
	int32 m_LocalUserNum;
};

namespace OrionSteam
{
	bool FillSessionFromLobbyData(const FOrionOnlineSubsystemSteam* SteamSubsystem, const FUniqueNetIdSteam& LobbyId, class FOnlineSession& Session, FOnlineSessionSearchResult* SearchData = nullptr);
	bool FillMembersFromLobbyData(const FUniqueNetIdSteam& LobbyId, class FNamedOnlineSession& Session);
} // namespace OrionSteam
#endif
