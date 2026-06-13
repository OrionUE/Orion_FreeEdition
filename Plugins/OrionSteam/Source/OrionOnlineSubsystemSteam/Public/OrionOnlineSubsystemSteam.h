/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OnlineDelegateMacros.h"
#include "OnlineSubsystemImpl.h"
#include "OrionOnlineSubsystemSteamPackage.h"

#ifndef ORIONSTEAM_SUBSYSTEM
#define ORIONSTEAM_SUBSYSTEM FName(TEXT("OrionSteam"))
#endif

#if WITH_ORIONSTEAM

class FOrionOnlineAchievementsSteam;
class FOrionOnlineExternalUISteam;
class FOrionOnlineFriendsSteam;
class FOrionOnlineIdentitySteam;
class FOrionOnlineLeaderboardsSteam;
class FOrionOnlineSessionSteam;
class FOrionOnlineSharedCloudSteam;
class FOrionOnlineUserCloudSteam;
class FOrionOnlineVoiceSteam;
class FOrionOnlinePresenceSteam;
class FOrionOnlineAuthSteam;
class FOrionOnlineAuthUtilsSteam;
class FOrionOnlinePingInterfaceSteam;
class FOrionOnlineEncryptedAppTicketSteam;
class FOrionOnlineSteamServerInstanceHandler;
class FOrionOnlineSteamClientInstanceHandler;
class FOrionOnlineAsyncTaskManagerSteam;
struct FSteamUserCloudData;

typedef TSharedPtr<FOrionOnlineSessionSteam, ESPMode::ThreadSafe> FOrionOnlineSessionSteamPtr;
typedef TSharedPtr<FOrionOnlineIdentitySteam, ESPMode::ThreadSafe> FOrionOnlineIdentitySteamPtr;
typedef TSharedPtr<FOrionOnlineFriendsSteam, ESPMode::ThreadSafe> FOrionOnlineFriendsSteamPtr;
typedef TSharedPtr<FOrionOnlineSharedCloudSteam, ESPMode::ThreadSafe> FOrionOnlineSharedCloudSteamPtr;
typedef TSharedPtr<FOrionOnlineUserCloudSteam, ESPMode::ThreadSafe> FOrionOnlineUserCloudSteamPtr;
typedef TSharedPtr<FOrionOnlineLeaderboardsSteam, ESPMode::ThreadSafe> FOrionOnlineLeaderboardsSteamPtr;
typedef TSharedPtr<FOrionOnlineVoiceSteam, ESPMode::ThreadSafe> FOrionOnlineVoiceSteamPtr;
typedef TSharedPtr<FOrionOnlineExternalUISteam, ESPMode::ThreadSafe> FOrionOnlineExternalUISteamPtr;
typedef TSharedPtr<FOrionOnlineAchievementsSteam, ESPMode::ThreadSafe> FOrionOnlineAchievementsSteamPtr;
typedef TSharedPtr<FOrionOnlinePresenceSteam, ESPMode::ThreadSafe> FOrionOnlinePresenceSteamPtr;
typedef TSharedPtr<FOrionOnlineAuthSteam, ESPMode::ThreadSafe> FOrionOnlineAuthSteamPtr;
typedef TSharedPtr<FOrionOnlineAuthUtilsSteam, ESPMode::ThreadSafe> FOrionOnlineAuthSteamUtilsPtr;
typedef TSharedPtr<FOrionOnlinePingInterfaceSteam, ESPMode::ThreadSafe> FOrionOnlinePingSteamPtr;
typedef TSharedPtr<FOrionOnlineEncryptedAppTicketSteam, ESPMode::ThreadSafe> FOrionOnlineEncryptedAppTicketSteamPtr;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnSteamServerLoginCompleted, bool /* bWasSuccessful */);
typedef FOnSteamServerLoginCompleted::FDelegate FOnSteamServerLoginCompletedDelegate;

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineSubsystemSteam : public FOnlineSubsystemImpl
{
PACKAGE_SCOPE:
	FOrionOnlineSubsystemSteam() = delete;

	FOrionOnlineSubsystemSteam(FName InInstanceName)
		: FOnlineSubsystemImpl(ORIONSTEAM_SUBSYSTEM, InInstanceName),
		  m_bSteamworksClientInitialized(false),
		  m_bSteamworksGameServerInitialized(false),
		  m_SteamAppID(0),
		  m_GameServerGamePort(7777),
		  m_GameServerQueryPort(27015),
		  m_SessionInterface(nullptr),
		  m_IdentityInterface(nullptr),
		  m_FriendInterface(nullptr),
		  m_SharedCloudInterface(nullptr),
		  m_UserCloudInterface(nullptr),
		  m_LeaderboardsInterface(nullptr),
		  m_VoiceInterface(nullptr),
		  m_bVoiceInterfaceInitialized(false),
		  m_ExternalUIInterface(nullptr),
		  m_PresenceInterface(nullptr),
		  m_AuthInterface(nullptr),
		  m_AuthInterfaceUtils(nullptr),
		  m_PingInterface(nullptr),
		  m_EncryptedAppTicketInterface(nullptr),
		  m_OnlineAsyncTaskThreadRunnable(nullptr),
		  m_OnlineAsyncTaskThread(nullptr),
		  m_SteamAPIClientHandle(nullptr),
		  m_SteamAPIServerHandle(nullptr)
	{
	}

	bool InitSteamworksClient(bool bRelaunchInSteam, int32 SteamAppId);
	bool InitSteamworksServer();
	void ShutdownSteamworks();
	void QueueAsyncTask(class FOnlineAsyncTask* AsyncTask);
	void QueueAsyncOutgoingItem(class FOnlineAsyncItem* AsyncItem);
	FSteamUserCloudData* GetUserCloudEntry(const FUniqueNetId& UserId);

	bool ClearUserCloudMetadata(const FUniqueNetId& UserId, const FString& Filename);
	void ClearUserCloudFiles();

	FOrionOnlineLeaderboardsSteam* GetInternalLeaderboardsInterface();

public:
	virtual ~FOrionOnlineSubsystemSteam() override
	{
	}
	virtual FOrionOnlineEncryptedAppTicketSteamPtr GetEncryptedAppTicketInterface() const;
	virtual FOrionOnlineAuthSteamPtr GetAuthInterface() const;
	virtual FOrionOnlineAuthSteamUtilsPtr GetAuthInterfaceUtils() const;
	virtual FOrionOnlinePingSteamPtr GetPingInterface() const;
	virtual void SetPingInterface(FOrionOnlinePingSteamPtr InPingInterface);

	// IOnlineSubsystem

	virtual IOnlineSessionPtr GetSessionInterface() const override;
	virtual IOnlineFriendsPtr GetFriendsInterface() const override;
	virtual IOnlinePartyPtr GetPartyInterface() const override;
	virtual IOnlineGroupsPtr GetGroupsInterface() const override;
	virtual IOnlineSharedCloudPtr GetSharedCloudInterface() const override;
	virtual IOnlineUserCloudPtr GetUserCloudInterface() const override;
	virtual IOnlineLeaderboardsPtr GetLeaderboardsInterface() const override;
	virtual IOnlineVoicePtr GetVoiceInterface() const override;
	virtual IOnlineExternalUIPtr GetExternalUIInterface() const override;
	virtual IOnlineTimePtr GetTimeInterface() const override;
	virtual IOnlineIdentityPtr GetIdentityInterface() const override;
	virtual IOnlineTitleFilePtr GetTitleFileInterface() const override;
	virtual IOnlineEntitlementsPtr GetEntitlementsInterface() const override;
	virtual IOnlineStoreV2Ptr GetStoreV2Interface() const override
	{
		return nullptr;
	}
	virtual IOnlinePurchasePtr GetPurchaseInterface() const override
	{
		return nullptr;
	}
	virtual IOnlineEventsPtr GetEventsInterface() const override;
	virtual IOnlineAchievementsPtr GetAchievementsInterface() const override;
	virtual IOnlineSharingPtr GetSharingInterface() const override;
	virtual IOnlineUserPtr GetUserInterface() const override;
	virtual IOnlineMessagePtr GetMessageInterface() const override;
	virtual IOnlinePresencePtr GetPresenceInterface() const override;
	virtual IOnlineChatPtr GetChatInterface() const override;
	virtual IOnlineStatsPtr GetStatsInterface() const override;
	virtual IOnlineTurnBasedPtr GetTurnBasedInterface() const override;
	virtual IOnlineTournamentPtr GetTournamentInterface() const override;
	virtual bool IsLocalPlayer(const FUniqueNetId& UniqueId) const override;
	virtual bool Init() override;
	virtual bool Shutdown() override;
	virtual bool Exec(class UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;
	virtual bool IsEnabled() const override;
	virtual FString GetAppId() const override;
	virtual FText GetOnlineServiceName() const override;

	virtual bool Tick(float DeltaTime) override;

	inline bool IsSteamClientAvailable()
	{
		return m_bSteamworksClientInitialized;
	}

	inline bool IsSteamServerAvailable()
	{
		return m_bSteamworksGameServerInitialized;
	}

	inline uint32 GetSteamAppId() const
	{
		return m_SteamAppID;
	}

	inline int32 GetGameServerGamePort() const
	{
		return m_GameServerGamePort;
	}

	inline int32 GetGameServerQueryPort() const
	{
		return m_GameServerQueryPort;
	}

	inline bool IsUsingSteamNetworking() const
	{
		return false;
	}

	DEFINE_ONLINE_DELEGATE_ONE_PARAM(OnSteamServerLoginCompleted, bool);

PACKAGE_SCOPE:
	FCriticalSection m_UserCloudDataLock;

protected:
	bool m_bSteamworksClientInitialized;
	bool m_bSteamworksGameServerInitialized;
	uint32 m_SteamAppID;
	int32 m_GameServerGamePort;
	int32 m_GameServerQueryPort;
	TArray<FSteamUserCloudData*> m_UserCloudData;
	FOrionOnlineSessionSteamPtr m_SessionInterface;
	FOrionOnlineIdentitySteamPtr m_IdentityInterface;
	FOrionOnlineFriendsSteamPtr m_FriendInterface;
	FOrionOnlineSharedCloudSteamPtr m_SharedCloudInterface;
	FOrionOnlineUserCloudSteamPtr m_UserCloudInterface;
	FOrionOnlineLeaderboardsSteamPtr m_LeaderboardsInterface;
	mutable IOnlineVoicePtr m_VoiceInterface;
	mutable bool m_bVoiceInterfaceInitialized;
	FOrionOnlineExternalUISteamPtr m_ExternalUIInterface;
	FOrionOnlineAchievementsSteamPtr m_AchievementsInterface;
	FOrionOnlinePresenceSteamPtr m_PresenceInterface;
	FOrionOnlineAuthSteamPtr m_AuthInterface;
	FOrionOnlineAuthSteamUtilsPtr m_AuthInterfaceUtils;
	FOrionOnlinePingSteamPtr m_PingInterface;
	FOrionOnlineEncryptedAppTicketSteamPtr m_EncryptedAppTicketInterface;
	FOrionOnlineAsyncTaskManagerSteam* m_OnlineAsyncTaskThreadRunnable;
	FRunnableThread* m_OnlineAsyncTaskThread;
	TSharedPtr<FOrionOnlineSteamClientInstanceHandler> m_SteamAPIClientHandle;
	TSharedPtr<FOrionOnlineSteamServerInstanceHandler> m_SteamAPIServerHandle;
};

typedef TSharedPtr<FOrionOnlineSubsystemSteam, ESPMode::ThreadSafe> FOrionOnlineSubsystemSteamPtr;
#endif
