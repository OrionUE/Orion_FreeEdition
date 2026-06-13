/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "UObject/WeakObjectPtr.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "Net/OrionIPAddressSteam.h"
#include "OrionOnlineSubsystemSteamTypes.h"
#include "Containers/Ticker.h"
#include "OrionOnlineSubsystemSteamPackage.h"

class Error;

#if UE_VERSION_OLDER_THAN(5, 0, 0)
typedef FTickerObjectBase FTSTickerObjectBase;
#endif

#if WITH_ORIONSTEAM

class ORIONONLINESUBSYSTEMSTEAM_API FOrionSocketSubsystemSteam : public ISocketSubsystem, public FTSTickerObjectBase, public FSelfRegisteringExec
{
	friend class FOrionSocketSteam;

PACKAGE_SCOPE:
	void AddSocket(class FOrionSocketSteam* InSocket)
	{
		m_SteamSockets.Add(InSocket);
	}

	void RemoveSocket(FOrionSocketSteam* InSocket)
	{
		m_SteamSockets.RemoveSingleSwap(InSocket);
	}

	static FOrionSocketSubsystemSteam* Create();
	static void Destroy();
	void CleanupDeadConnections(bool bSkipLinger);
	void FixupSockets(const FUniqueNetIdSteam& GameServerId);
	void RegisterConnection(class UOrionOnlineSteamNetConnection* Connection);
	void UnregisterConnection(class UOrionOnlineSteamNetConnection* Connection);
	void ConnectFailure(const FUniqueNetIdSteam& RemoteId);
	bool AcceptP2PConnection(ISteamNetworking* SteamNetworkingPtr, const FUniqueNetIdSteam& RemoteId);
	bool P2PTouch(ISteamNetworking* SteamNetworkingPtr, const FUniqueNetIdSteam& SessionId, int32 ChannelId = -1);
	void P2PRemove(const FUniqueNetIdSteam& SessionId, int32 Channel = -1);
	bool IsConnectionPendingRemoval(const FUniqueNetIdSteam& SteamId, int32 Channel);
	bool ShouldOverrideDefaultSubsystem() const;
	void DumpSteamP2PSessionInfo(P2PSessionState_t& SessionInfo);
	void DumpAllOpenSteamSessions();

public:
	FOrionSocketSubsystemSteam()
		: m_LastSocketError(0),
		  m_bAllowP2PPacketRelay(false),
		  m_P2PConnectionTimeout(45.0f),
		  m_P2PDumpCounter(0.0),
		  m_P2PDumpInterval(10.0),
		  m_P2PCleanupTimeout(1.5)
	{
	}

	virtual bool Init(FString& Error) override;
	virtual void Shutdown() override;
	virtual FSocket* CreateSocket(const FName& SocketType, const FString& SocketDescription, const FName& ProtocolType) override;
	virtual void DestroySocket(class FSocket* Socket) override;
	virtual FAddressInfoResult GetAddressInfo(const TCHAR* HostName, const TCHAR* ServiceName = nullptr, EAddressInfoFlags QueryFlags = EAddressInfoFlags::Default, const FName ProtocolTypeName = NAME_None, ESocketType SocketType = ESocketType::SOCKTYPE_Unknown) override;
	virtual TSharedPtr<FInternetAddr> GetAddressFromString(const FString& IPAddress) override;
	virtual bool RequiresChatDataBeSeparate() override
	{
		return false;
	}
	virtual bool RequiresEncryptedPackets() override
	{
		return false;
	}
	virtual bool GetHostName(FString& HostName) override;
	virtual TSharedRef<FInternetAddr> CreateInternetAddr() override;
	virtual bool HasNetworkDevice() override;
	virtual const TCHAR* GetSocketAPIName() const override;
	virtual ESocketErrors GetLastErrorCode() override;
	virtual ESocketErrors TranslateErrorCode(int32 Code) override;
	virtual bool GetLocalAdapterAddresses(TArray<TSharedPtr<FInternetAddr>>& OutAddresses) override;
	virtual TArray<TSharedRef<FInternetAddr>> GetLocalBindAddresses() override;
	virtual bool Tick(float DeltaTime) override;
	virtual bool IsSocketWaitSupported() const override
	{
		return false;
	}

	// FSelfRegisteringExec
	virtual bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;

protected:
	struct FSteamP2PConnectionInfo
	{
		ISteamNetworking* m_SteamNetworkingPtr;
		double m_LastReceivedTime;
		TArray<int32> m_ConnectedChannels;

		FSteamP2PConnectionInfo(ISteamNetworking* InNetworkPtr = nullptr)
			: m_SteamNetworkingPtr(InNetworkPtr),
			  m_LastReceivedTime(FPlatformTime::Seconds())
		{
		}

		void AddOrUpdateChannel(int32 InChannel, double InTime)
		{
			m_ConnectedChannels.AddUnique(InChannel);
			m_LastReceivedTime = FMath::Max(m_LastReceivedTime, InTime);
		}
	};

	int32 m_LastSocketError;
	static FOrionSocketSubsystemSteam* m_SocketSingleton;
	TArray<FOrionSocketSteam*> m_SteamSockets;
	TArray<FWeakObjectPtr> m_SteamConnections;
	TUniqueNetIdMap<FSteamP2PConnectionInfo> m_AcceptedConnections;
	TMap<FOrionInternetAddrSteam, double> m_DeadConnections;
	bool m_bAllowP2PPacketRelay;
	float m_P2PConnectionTimeout;
	double m_P2PDumpCounter;
	double m_P2PDumpInterval;
	double m_P2PCleanupTimeout;
};
#endif
