/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionOnlineSubsystemSteam.h"
#include "OrionOnlineSubsystemSteamTypes.h"
#include "PacketHandler.h"
#include "HandlerComponentFactory.h"
#include "OrionOnlineAuthHandlerTypesSteam.h"

#include "OrionOnlineAuthHandlerSteam.generated.h"

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineSteamAuthHandlerComponent : public HandlerComponent
{
public:
	FOrionOnlineSteamAuthHandlerComponent();
	virtual ~FOrionOnlineSteamAuthHandlerComponent() override;
	virtual void CountBytes(FArchive& Ar) const override;
	virtual void Initialize() override;
	virtual void NotifyHandshakeBegin() override;

	virtual bool IsValid() const override;

	virtual void Incoming(FBitReader& Packet) override;
	virtual void Outgoing(FBitWriter& Packet, FOutPacketTraits& Traits) override;

	virtual void Tick(float DeltaTime) override;

	virtual int32 GetReservedPacketBits() const override;

protected:
	void SetState(ESteamAuthHandlerState NewState);
	void SetComponentReady();
	void SendAuthKey(bool bGenerateNewKey);
	void SendServerSteamId();
	bool SendAuthResult();
	void SendPacket(FBitWriter& OutboundPacket);
	void RequestResend();

protected:
	FOrionOnlineAuthSteamPtr m_AuthInterface;
	ISteamUser* m_SteamUserPtr;
	ESteamAuthHandlerState m_State;
	bool m_bIsEnabled;
	float m_LastTimestamp;
	FString m_UserTicket;
	uint32 m_TicketHandle;
	FUniqueNetIdSteamRef m_SteamId;
	uint64 m_ServerSteamId;
};
#endif

UCLASS()
class UOrionOnlineSteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
	GENERATED_BODY()
public:
	UOrionOnlineSteamAuthComponentModuleInterface(const FObjectInitializer& ObjectInitializer);

	virtual TSharedPtr<HandlerComponent> CreateComponentInstance(FString& Options) override;
};
