/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "SocketSubsystem.h"
#include "OrionOnlineSubsystemSteamTypes.h"
#include "Sockets.h"
#include "OrionOnlineSubsystemSteamPackage.h"

class FOrionSocketSubsystemSteam;

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionSocketSteam : public FSocket
{
public:
	FOrionSocketSteam(ISteamNetworking* InSteamNetworkingPtr, const FUniqueNetIdSteam& InLocalSteamId, const FString& InSocketDescription, const FName& InSocketProtocol)
		: FSocket(SOCKTYPE_Datagram, InSocketDescription, InSocketProtocol),
		  m_LocalSteamId(InLocalSteamId.AsShared()),
		  m_SteamChannel(0),
		  m_SteamSendMode(k_EP2PSendUnreliable),
		  m_SteamNetworkingPtr(InSteamNetworkingPtr)
	{
		m_SocketSubsystem = static_cast<FOrionSocketSubsystemSteam*>(ISocketSubsystem::Get(ORIONSTEAM_SUBSYSTEM));
	}

	virtual ~FOrionSocketSteam() override
	{
		Close();
	}

PACKAGE_SCOPE:
	void SetSteamSendMode(EP2PSend NewSendMode)
	{
		m_SteamSendMode = NewSendMode;
	}

	virtual bool Shutdown(ESocketShutdownMode Mode) override;
	virtual bool Close() override final;
	virtual bool Bind(const FInternetAddr& Addr) override;
	virtual bool Connect(const FInternetAddr& Addr) override;
	virtual bool Listen(int32 MaxBacklog) override;
	virtual bool WaitForPendingConnection(bool& bHasPendingConnection, const FTimespan& WaitTime) override;
	virtual bool HasPendingData(uint32& PendingDataSize) override;
	virtual FSocket* Accept(const FString& SocketDescription) override;
	virtual FSocket* Accept(FInternetAddr& OutAddr, const FString& SocketDescription) override;
	virtual bool SendTo(const uint8* Data, int32 Count, int32& BytesSent, const FInternetAddr& Destination) override;
	virtual bool Send(const uint8* Data, int32 Count, int32& BytesSent) override;
	virtual bool RecvFrom(uint8* Data, int32 BufferSize, int32& BytesRead, FInternetAddr& Source, ESocketReceiveFlags::Type Flags = ESocketReceiveFlags::None) override;
	virtual bool Recv(uint8* Data, int32 BufferSize, int32& BytesRead, ESocketReceiveFlags::Type Flags = ESocketReceiveFlags::None) override;
	virtual bool Wait(ESocketWaitConditions::Type Condition, FTimespan WaitTime) override;
	virtual ESocketConnectionState GetConnectionState() override;
	virtual void GetAddress(FInternetAddr& OutAddr) override;
	virtual bool GetPeerAddress(FInternetAddr& OutAddr) override;
	virtual bool SetNonBlocking(bool bIsNonBlocking = true) override;
	virtual bool SetBroadcast(bool bAllowBroadcast = true) override;
	virtual bool SetNoDelay(bool bIsNoDelay = true) override
	{
		return true;
	}
	virtual bool JoinMulticastGroup(const FInternetAddr& GroupAddress) override;
	virtual bool LeaveMulticastGroup(const FInternetAddr& GroupAddress) override;
	virtual bool JoinMulticastGroup(const FInternetAddr& GroupAddress, const FInternetAddr& InterfaceAddress) override;
	virtual bool LeaveMulticastGroup(const FInternetAddr& GroupAddress, const FInternetAddr& InterfaceAddress) override;
	virtual bool SetMulticastLoopback(bool bLoopback) override;
	virtual bool SetMulticastTtl(uint8 TimeToLive) override;
	virtual bool SetMulticastInterface(const FInternetAddr& InterfaceAddress) override;
	virtual bool SetReuseAddr(bool bAllowReuse = true) override;
	virtual bool SetLinger(bool bShouldLinger = true, int32 Timeout = 0) override;
	virtual bool SetRecvErr(bool bUseErrorQueue = true) override;
	virtual bool SetSendBufferSize(int32 Size, int32& NewSize) override;
	virtual bool SetReceiveBufferSize(int32 Size, int32& NewSize) override;
	virtual int32 GetPortNo() override;

	PACKAGE_SCOPE : FUniqueNetIdSteamRef m_LocalSteamId;
	int32 m_SteamChannel;
	EP2PSend m_SteamSendMode;
	ISteamNetworking* m_SteamNetworkingPtr;

private:
	FOrionSocketSubsystemSteam* m_SocketSubsystem;
};
#endif
