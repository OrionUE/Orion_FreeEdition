/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/NetConnection.h"
#include "OrionSteamSocketsNetConnection.generated.h"

class FSocket;
class UNetDriver;
class FInternetAddr;
class FOrionSteamSocket;

UCLASS(transient, config = Engine)
class ORIONSTEAMSOCKETS_API UOrionSteamSocketsNetConnection : public UNetConnection
{
	GENERATED_BODY()

public:
	UOrionSteamSocketsNetConnection()
		: m_ConnectionSocket(nullptr),
		  m_bInConnectionlessHandshake(false)
	{
	}

	//~ Begin NetConnection Interface
	virtual void CleanUp() override;
	virtual void InitBase(UNetDriver* InDriver, FSocket* InSocket, const FURL& InURL, EConnectionState InState, int32 InMaxPacket = 0, int32 InPacketOverhead = 0) override;
	virtual void InitRemoteConnection(UNetDriver* InDriver, FSocket* InSocket, const FURL& InURL, const FInternetAddr& InRemoteAddr,
									  EConnectionState InState, int32 InMaxPacket = 0, int32 InPacketOverhead = 0) override;
	virtual void InitLocalConnection(UNetDriver* InDriver, FSocket* InSocket, const FURL& InURL, EConnectionState InState, int32 InMaxPacket = 0, int32 InPacketOverhead = 0) override;
	virtual void LowLevelSend(void* Data, int32 CountBits, FOutPacketTraits& Traits) override;
	FString LowLevelGetRemoteAddress(bool bAppendPort = false) override;
	FString LowLevelDescribe() override;
	//~ End NetConnection Interface

private:
	const FOrionSteamSocket* GetRawSocket() const
	{
		return m_ConnectionSocket;
	}
	void HandleRecvMessage(void* InData, int32 SizeOfData, const FInternetAddr* InFormattedAddress);
	void FlagForHandshake()
	{
		m_bInConnectionlessHandshake = true;
	}
	void ClearSocket()
	{
		m_ConnectionSocket = nullptr;
	}

	FOrionSteamSocket* m_ConnectionSocket;
	bool m_bInConnectionlessHandshake;

	friend class UOrionSteamSocketsNetDriver;
};
