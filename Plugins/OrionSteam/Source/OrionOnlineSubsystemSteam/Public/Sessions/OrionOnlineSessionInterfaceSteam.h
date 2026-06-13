/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#if UE_VERSION_OLDER_THAN(5, 0, 0)
#include "UObject/CoreOnline.h"
#else
#include "Online/CoreOnline.h"
#endif
#include "OrionOnlineSubsystemSteamTypes.h"
#include "Misc/ScopeLock.h"
#include "OnlineKeyValuePair.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OrionOnlineSubsystemSteamPackage.h"
#include "OrionOnlineSessionInterfaceSteam.generated.h"

class FLANSession;
class FOrionOnlineSubsystemSteam;

#define ASYNC_TASK_TIMEOUT 15.0f
typedef FOnlineKeyValuePairs<FString, FString> FSteamSessionKeyValuePairs;

UCLASS()
class ORIONONLINESUBSYSTEMSTEAM_API UOrionOnlineSessionInterfaceSteamUtils : public UObject
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam|Utilities")
	static FString GetLastJoinedLobbyId();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam|Utilities")
	static TArray<FString> GetJoinedLobbyIds();
};

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineSessionSteam : public IOnlineSession
{
private:
	FOrionOnlineSubsystemSteam* m_SteamSubsystem;
	FLANSession* m_LANSession;

	FOrionOnlineSessionSteam()
		: m_SteamSubsystem(nullptr),
		  m_LANSession(nullptr),
		  m_bSteamworksGameServerConnected(false),
		  m_GameServerSteamId(nullptr),
		  m_bPolicyResponseReceived(false),
		  m_CurrentSessionSearch(nullptr)
	{
	}

	void TickLanTasks(float DeltaTime) const;
	void TickPendingInvites(float DeltaTime);

	uint32 CreateLobbySession(int32 HostingPlayerNum, class FNamedOnlineSession* Session) const;
	uint32 CreateInternetSession(int32 HostingPlayerNum, class FNamedOnlineSession* Session);

	uint32 JoinLobbySession(int32 PlayerNum, class FNamedOnlineSession* Session, const FOnlineSession* SearchSession) const;
	uint32 JoinInternetSession(int32 PlayerNum, FNamedOnlineSession* Session, const FOnlineSession* SearchSession);

	uint32 EndInternetSession(class FNamedOnlineSession* Session) const;
	uint32 DestroyLobbySession(class FNamedOnlineSession* Session, const FOnDestroySessionCompleteDelegate& CompletionDelegate) const;
	uint32 DestroyInternetSession(class FNamedOnlineSession* Session, const FOnDestroySessionCompleteDelegate& CompletionDelegate) const;

	uint32 CreateLANSession(int32 HostingPlayerNum, class FNamedOnlineSession* Session);
	static uint32 JoinLANSession(int32 PlayerNum, class FNamedOnlineSession* Session, const class FOnlineSession* SearchSession);

	uint32 FindInternetSession(const TSharedRef<FOnlineSessionSearch>& SearchSettings);
	uint32 FindLANSession(const TSharedRef<FOnlineSessionSearch>& SearchSettings);

	void AppendSessionToPacket(class FOrionNboSerializeToBufferSteam& Packet, class FOnlineSession* Session) const;
	static void AppendSessionSettingsToPacket(class FOrionNboSerializeToBufferSteam& Packet, FOnlineSessionSettings* SessionSettings);

	void ReadSessionFromPacket(class FOrionNboSerializeFromBufferSteam& Packet, class FOnlineSession* Session) const;
	static void ReadSettingsFromPacket(class FOrionNboSerializeFromBufferSteam& Packet, FOnlineSessionSettings& SessionSettings);

	void OnValidQueryPacketReceived(uint8* PacketData, int32 PacketLength, uint64 ClientNonce);
	void OnValidResponsePacketReceived(uint8* PacketData, int32 PacketLength);
	void OnLANSearchTimeout();

	void RegisterVoice(const FUniqueNetId& PlayerId) const;
	void UnregisterVoice(const FUniqueNetId& PlayerId) const;

	PACKAGE_SCOPE : FOrionOnlineSessionSteam(FOrionOnlineSubsystemSteam* InSubsystem)
		: m_SteamSubsystem(InSubsystem),
		  m_LANSession(nullptr),
		  m_bSteamworksGameServerConnected(false),
		  m_GameServerSteamId(nullptr),
		  m_bPolicyResponseReceived(false),
		  m_CurrentSessionSearch(nullptr)
	{
	}

	struct FPendingInviteData
	{
		ESteamSession::Type m_PendingInviteType;
		FUniqueNetIdSteamRef m_LobbyId;
		FString m_ServerIp;

		FPendingInviteData()
			: m_PendingInviteType(ESteamSession::None),
			  m_LobbyId(FUniqueNetIdSteam::EmptyId())
		{
		}
	};

	void Tick(float DeltaTime);

	virtual FNamedOnlineSession* AddNamedSession(FName SessionName, const FOnlineSessionSettings& SessionSettings) override
	{
		FScopeLock ScopeLock(&m_SessionLock);
		return new (m_Sessions) FNamedOnlineSession(SessionName, SessionSettings);
	}

	virtual FNamedOnlineSession* AddNamedSession(FName SessionName, const FOnlineSession& Session) override
	{
		FScopeLock ScopeLock(&m_SessionLock);
		return new (m_Sessions) FNamedOnlineSession(SessionName, Session);
	}

	inline FNamedOnlineSession* GetNamedSessionFromLobbyId(const FUniqueNetIdSteam& LobbyId)
	{
		FScopeLock ScopeLock(&m_SessionLock);
		for (int32 SearchIndex = 0; SearchIndex < m_Sessions.Num(); SearchIndex++)
		{
			FNamedOnlineSession& Session = m_Sessions[SearchIndex];
			if (Session.SessionInfo.IsValid())
			{
				const FOrionOnlineSessionInfoSteam* SessionInfo = static_cast<FOrionOnlineSessionInfoSteam*>(Session.SessionInfo.Get());
				if (SessionInfo->m_SessionType == ESteamSession::LobbySession && *SessionInfo->m_SessionId == LobbyId)
				{
					return &m_Sessions[SearchIndex];
				}
			}
		}
		return nullptr;
	}

	inline FNamedOnlineSession* GetGameServerSession()
	{
		FScopeLock ScopeLock(&m_SessionLock);
		for (int32 SearchIndex = 0; SearchIndex < m_Sessions.Num(); SearchIndex++)
		{
			FNamedOnlineSession& Session = m_Sessions[SearchIndex];
			if (Session.SessionInfo.IsValid())
			{
				const FOrionOnlineSessionInfoSteam* SessionInfo = static_cast<FOrionOnlineSessionInfoSteam*>(Session.SessionInfo.Get());
				if (SessionInfo->m_SessionType == ESteamSession::AdvertisedSessionHost)
				{
					return &m_Sessions[SearchIndex];
				}
			}
		}
		return nullptr;
	}

	void SyncLobbies();

	void JoinedLobby(const FUniqueNetIdSteam& LobbyId)
	{
		FScopeLock ScopeLock(&m_JoinedLobbyLock);
		m_JoinedLobbyList.Add(LobbyId.AsShared());
	}

	void LeftLobby(const FUniqueNetIdSteam& LobbyId)
	{
		FScopeLock ScopeLock(&m_JoinedLobbyLock);
		m_JoinedLobbyList.RemoveSingleSwap(LobbyId.AsShared());
	}

	bool IsMemberOfLobby(const FUniqueNetIdSteam& LobbyId)
	{
		FScopeLock ScopeLock(&m_JoinedLobbyLock);
		return m_JoinedLobbyList.Find(LobbyId.AsShared()) != INDEX_NONE;
	}

	FString GetSteamConnectionString(FName SessionName);
	void CheckPendingSessionInvite();
	void RegisterLocalPlayers(class FNamedOnlineSession* Session) const;
	FString GetCustomDedicatedServerName() const;

	TArray<FUniqueNetIdSteamRef> GetJoinedLobbyList() const
	{
		return m_JoinedLobbyList;
	}

	PACKAGE_SCOPE : mutable FCriticalSection m_SessionLock;
	TArray<FNamedOnlineSession> m_Sessions;
	bool m_bSteamworksGameServerConnected;
	FUniqueNetIdSteamPtr m_GameServerSteamId;
	bool m_bPolicyResponseReceived;
	TSharedPtr<FOnlineSessionSearch> m_CurrentSessionSearch;
	FPendingInviteData m_PendingInvite;
	TArray<FUniqueNetIdSteamRef> m_PendingSearchLobbyIds;
	FCriticalSection m_JoinedLobbyLock;
	TArray<FUniqueNetIdSteamRef> m_JoinedLobbyList;

public:
	virtual ~FOrionOnlineSessionSteam() override
	{
	}

	virtual FUniqueNetIdPtr CreateSessionIdFromString(const FString& SessionIdStr) override;

	virtual FNamedOnlineSession* GetNamedSession(FName SessionName) override
	{
		FScopeLock ScopeLock(&m_SessionLock);
		for (int32 SearchIndex = 0; SearchIndex < m_Sessions.Num(); SearchIndex++)
		{
			if (m_Sessions[SearchIndex].SessionName == SessionName)
			{
				return &m_Sessions[SearchIndex];
			}
		}
		return nullptr;
	}

	virtual void RemoveNamedSession(FName SessionName) override
	{
		FScopeLock ScopeLock(&m_SessionLock);
		for (int32 SearchIndex = 0; SearchIndex < m_Sessions.Num(); SearchIndex++)
		{
			if (m_Sessions[SearchIndex].SessionName == SessionName)
			{
				m_Sessions.RemoveAtSwap(SearchIndex);
				return;
			}
		}
	}

	virtual EOnlineSessionState::Type GetSessionState(FName SessionName) const override
	{
		FScopeLock ScopeLock(&m_SessionLock);
		for (int32 SearchIndex = 0; SearchIndex < m_Sessions.Num(); SearchIndex++)
		{
			if (m_Sessions[SearchIndex].SessionName == SessionName)
			{
				return m_Sessions[SearchIndex].SessionState;
			}
		}

		return EOnlineSessionState::NoSession;
	}

	virtual bool HasPresenceSession() override
	{
		FScopeLock ScopeLock(&m_SessionLock);
		for (int32 SearchIndex = 0; SearchIndex < m_Sessions.Num(); SearchIndex++)
		{
			if (m_Sessions[SearchIndex].SessionSettings.bUsesPresence)
			{
				return true;
			}
		}

		return false;
	}

	// IOnlineSession
	virtual bool CreateSession(int32 HostingPlayerNum, FName SessionName, const FOnlineSessionSettings& NewSessionSettings) override;
	virtual bool CreateSession(const FUniqueNetId& HostingPlayerId, FName SessionName, const FOnlineSessionSettings& NewSessionSettings) override;
	virtual bool StartSession(FName SessionName) override;
	virtual bool UpdateSession(FName SessionName, FOnlineSessionSettings& UpdatedSessionSettings, bool bShouldRefreshOnlineData = true) override;
	virtual bool EndSession(FName SessionName) override;
	virtual bool DestroySession(FName SessionName, const FOnDestroySessionCompleteDelegate& CompletionDelegate = FOnDestroySessionCompleteDelegate()) override;
	virtual bool IsPlayerInSession(FName SessionName, const FUniqueNetId& UniqueId) override;
	virtual bool StartMatchmaking(const TArray<FUniqueNetIdRef>& LocalPlayers, FName SessionName, const FOnlineSessionSettings& NewSessionSettings, TSharedRef<FOnlineSessionSearch>& SearchSettings) override;
	virtual bool CancelMatchmaking(int32 SearchingPlayerNum, FName SessionName) override;
	virtual bool CancelMatchmaking(const FUniqueNetId& SearchingPlayerId, FName SessionName) override;
	virtual bool FindSessions(int32 SearchingPlayerNum, const TSharedRef<FOnlineSessionSearch>& SearchSettings) override;
	virtual bool FindSessions(const FUniqueNetId& SearchingPlayerId, const TSharedRef<FOnlineSessionSearch>& SearchSettings) override;
	virtual bool FindSessionById(const FUniqueNetId& SearchingUserId, const FUniqueNetId& SessionId, const FUniqueNetId& FriendId, const FOnSingleSessionResultCompleteDelegate& CompletionDelegate) override;
	virtual bool CancelFindSessions() override;
	virtual bool PingSearchResults(const FOnlineSessionSearchResult& SearchResult) override;
	virtual bool JoinSession(int32 PlayerNum, FName SessionName, const FOnlineSessionSearchResult& DesiredSession) override;
	virtual bool JoinSession(const FUniqueNetId& PlayerId, FName SessionName, const FOnlineSessionSearchResult& DesiredSession) override;
	virtual bool FindFriendSession(int32 LocalUserNum, const FUniqueNetId& Friend) override;
	virtual bool FindFriendSession(const FUniqueNetId& LocalUserId, const FUniqueNetId& Friend) override;
	virtual bool FindFriendSession(const FUniqueNetId& LocalUserId, const TArray<FUniqueNetIdRef>& FriendList) override;
	virtual bool SendSessionInviteToFriend(int32 LocalUserNum, FName SessionName, const FUniqueNetId& Friend) override;
	virtual bool SendSessionInviteToFriend(const FUniqueNetId& LocalUserId, FName SessionName, const FUniqueNetId& Friend) override;
	virtual bool SendSessionInviteToFriends(int32 LocalUserNum, FName SessionName, const TArray<FUniqueNetIdRef>& Friends) override;
	virtual bool SendSessionInviteToFriends(const FUniqueNetId& LocalUserId, FName SessionName, const TArray<FUniqueNetIdRef>& Friends) override;
	virtual bool GetResolvedConnectString(FName SessionName, FString& ConnectInfo, FName PortType) override;
	virtual bool GetResolvedConnectString(const FOnlineSessionSearchResult& SearchResult, FName PortType, FString& ConnectInfo) override;
	virtual FOnlineSessionSettings* GetSessionSettings(FName SessionName) override;
	virtual bool RegisterPlayer(FName SessionName, const FUniqueNetId& PlayerId, bool bWasInvited) override;
	virtual bool RegisterPlayers(FName SessionName, const TArray<FUniqueNetIdRef>& Players, bool bWasInvited = false) override;
	virtual bool UnregisterPlayer(FName SessionName, const FUniqueNetId& PlayerId) override;
	virtual bool UnregisterPlayers(FName SessionName, const TArray<FUniqueNetIdRef>& Players) override;
	virtual void RegisterLocalPlayer(const FUniqueNetId& PlayerId, FName SessionName, const FOnRegisterLocalPlayerCompleteDelegate& Delegate) override;
	virtual void UnregisterLocalPlayer(const FUniqueNetId& PlayerId, FName SessionName, const FOnUnregisterLocalPlayerCompleteDelegate& Delegate) override;
	virtual int32 GetNumSessions() override;
	virtual void DumpSessionState() override;
};

typedef TSharedPtr<FOrionOnlineSessionSteam, ESPMode::ThreadSafe> FOrionOnlineSessionSteamPtr;
#endif
