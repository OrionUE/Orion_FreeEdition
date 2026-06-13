/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#if UE_VERSION_OLDER_THAN(5, 0, 0)
#include "UObject/CoreOnline.h"
#else
#include "Online/CoreOnline.h"
#endif
#include "OnlineSubsystemTypes.h"
#include "OrionOnlineSubsystemSteamPrivate.h"
#include "IPAddress.h"
#include "OrionOnlineSubsystemSteamPackage.h"
#include "OrionSteamSharedTypes.h"
#include "Misc/EngineVersionComparison.h"

namespace ESteamSession
{
	enum Type
	{
		/** Session is undefined */
		None,
		/** Session managed as a lobby on backend */
		LobbySession,
		/** Session managed by master server publishing */
		AdvertisedSessionHost,
		/** Session client of a game server session */
		AdvertisedSessionClient,
		/** Session managed by LAN beacon */
		LANSession,
	};

	inline const TCHAR* ToString(ESteamSession::Type SessionType)
	{
		switch (SessionType)
		{
		case None:
		{
			return TEXT("Session undefined");
		}
		case LobbySession:
		{
			return TEXT("Lobby session");
		}
		case AdvertisedSessionHost:
		{
			return TEXT("Advertised Session Host");
		}
		case AdvertisedSessionClient:
		{
			return TEXT("Advertised Session Client");
		}
		case LANSession:
		{
			return TEXT("LAN Session");
		}
		}
		return TEXT("");
	}
} // namespace ESteamSession

#if WITH_ORIONSTEAM
using FUniqueNetIdSteamRef = TSharedRef<const class FUniqueNetIdSteam>;
using FUniqueNetIdSteamPtr = TSharedPtr<const class FUniqueNetIdSteam>;

class ORIONONLINESUBSYSTEMSTEAM_API FUniqueNetIdSteam : public FUniqueNetId
{
	PACKAGE_SCOPE : uint64 m_UniqueNetId;

public:
	template <typename... TArgs>
	static FUniqueNetIdSteamRef Create(TArgs&&... Args)
	{
		return MakeShareable(new FUniqueNetIdSteam(Forward<TArgs>(Args)...));
	}

	static const FUniqueNetIdSteam& Cast(const FUniqueNetId& NetId)
	{
		return *static_cast<const FUniqueNetIdSteam*>(&NetId);
	}

	FUniqueNetIdSteamRef AsShared() const
	{
		return StaticCastSharedRef<const FUniqueNetIdSteam>(FUniqueNetId::AsShared());
	}

	virtual FName GetType() const override
	{
		return ORIONSTEAM_SUBSYSTEM;
	}

	virtual const uint8* GetBytes() const override
	{
		return (uint8*)&m_UniqueNetId;
	}

	virtual int32 GetSize() const override
	{
		return sizeof(uint64);
	}

	virtual bool IsValid() const override
	{
		return m_UniqueNetId != 0 && CSteamID(m_UniqueNetId).IsValid();
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("%llu"), m_UniqueNetId);
	}

	virtual FString ToDebugString() const override
	{
		const CSteamID SteamID(m_UniqueNetId);

		const FString HexStr = FString::Printf(TEXT("[0x%llX]"), m_UniqueNetId);
		if (SteamID.IsLobby())
		{
			return TEXT("Lobby") + OSS_UNIQUEID_REDACT(*this, HexStr);
		}
		else if (SteamID.BAnonGameServerAccount())
		{
			return TEXT("Server") + OSS_UNIQUEID_REDACT(*this, HexStr);
		}
		else if (SteamID.IsValid())
		{
			const FString NickName(SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetFriendPersonaName(m_UniqueNetId)) : TEXT("UNKNOWN"));
			return FString::Printf(TEXT("%s %s"), *NickName, *OSS_UNIQUEID_REDACT(*this, HexStr));
		}
		else
		{
			return TEXT("INVALID") + OSS_UNIQUEID_REDACT(*this, HexStr);
		}
	}

	static FString ToDebugString(CSteamID SteamID)
	{
		return FUniqueNetIdSteam(SteamID).ToDebugString();
	}

#if UE_VERSION_NEWER_THAN(5, 0, 3)
	virtual uint32 GetTypeHash() const override
	{
		return ::GetTypeHash(m_UniqueNetId);
	}
#else
	friend uint32 GetTypeHash(const FUniqueNetIdSteam& A)
	{
		return GetTypeHash(A.m_UniqueNetId);
	}
#endif

	static const FUniqueNetIdSteamRef& EmptyId()
	{
		static const FUniqueNetIdSteamRef EmptyId(Create());
		return EmptyId;
	}

	operator CSteamID()
	{
		return m_UniqueNetId;
	}

	operator const CSteamID() const
	{
		return m_UniqueNetId;
	}

	operator CSteamID*()
	{
		return reinterpret_cast<CSteamID*>(&m_UniqueNetId);
	}

	operator const CSteamID*() const
	{
		return reinterpret_cast<const CSteamID*>(&m_UniqueNetId);
	}

private:
	FUniqueNetIdSteam()
		: m_UniqueNetId(0)
	{
	}

	explicit FUniqueNetIdSteam(const FUniqueNetIdSteam& Src)
		: m_UniqueNetId(Src.m_UniqueNetId)
	{
	}

	explicit FUniqueNetIdSteam(uint64 InUniqueNetId)
		: m_UniqueNetId(InUniqueNetId)
	{
	}

	explicit FUniqueNetIdSteam(CSteamID InSteamId)
		: m_UniqueNetId(InSteamId.ConvertToUint64())
	{
	}

	explicit FUniqueNetIdSteam(const FString& Str)
		: m_UniqueNetId(FCString::Atoi64(*Str))
	{
	}

	explicit FUniqueNetIdSteam(const FUniqueNetId& InUniqueNetId)
		: m_UniqueNetId(*(uint64*)InUniqueNetId.GetBytes())
	{
	}
};
#endif

enum class FSteamConnectionMethod : int8
{
	None = 0,
	Direct,
	P2P,
	PartnerHosted
};

namespace OrionSteam
{
	FString LexToString(const FSteamConnectionMethod Method);
	FSteamConnectionMethod ToConnectionMethod(const FString& InString);
} // namespace OrionSteam

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineSessionInfoSteam : public FOnlineSessionInfo
{
protected:
	FOrionOnlineSessionInfoSteam(const FOrionOnlineSessionInfoSteam& Src) = delete;
	FOrionOnlineSessionInfoSteam& operator=(const FOrionOnlineSessionInfoSteam& Src) = delete;

	PACKAGE_SCOPE : FOrionOnlineSessionInfoSteam(ESteamSession::Type SessionType = ESteamSession::None);
	FOrionOnlineSessionInfoSteam(ESteamSession::Type SessionType, const FUniqueNetIdSteam& InSessionId);

	void Init();
	void InitLAN();

	ESteamSession::Type m_SessionType;
	TSharedPtr<class FInternetAddr> m_HostAddr;
	TSharedPtr<class FInternetAddr> m_SteamP2PAddr;
	FString m_SteamPingHostData;
	FUniqueNetIdSteamRef m_SessionId;
	FSteamConnectionMethod m_ConnectionMethod;

public:
	virtual ~FOrionOnlineSessionInfoSteam() override
	{
	}

	bool operator==(const FOrionOnlineSessionInfoSteam& Other) const
	{
		return false;
	}

	virtual const uint8* GetBytes() const override
	{
		return nullptr;
	}

	virtual int32 GetSize() const override
	{
		return sizeof(uint64) +
			   sizeof(ESteamSession::Type) +
			   sizeof(TSharedPtr<class FInternetAddr>) +
			   sizeof(TSharedPtr<class FInternetAddr>) +
			   sizeof(FUniqueNetIdSteam) +
			   sizeof(FSteamConnectionMethod);
	}

	virtual bool IsValid() const override
	{
		switch (m_SessionType)
		{
		case ESteamSession::LobbySession:
			return m_SteamP2PAddr.IsValid() && m_SteamP2PAddr->IsValid() && m_SessionId->IsValid();
		case ESteamSession::AdvertisedSessionHost:
		case ESteamSession::AdvertisedSessionClient:
			return ((m_SteamP2PAddr.IsValid() && m_SteamP2PAddr->IsValid()) || (m_HostAddr.IsValid() && m_HostAddr->IsValid())) && m_SessionId->IsValid();
		case ESteamSession::LANSession:
		default:
			return m_HostAddr.IsValid() && m_HostAddr->IsValid();
		}
	}

	virtual FString ToString() const override
	{
		return m_SessionId->ToString();
	}

	virtual FString ToDebugString() const override
	{
		return FString::Printf(TEXT("HostIP: %s SteamP2P: %s Type: %s SessionId: %s"), m_HostAddr.IsValid() ? *m_HostAddr->ToString(true) : TEXT("INVALID"), m_SteamP2PAddr.IsValid() ? *m_SteamP2PAddr->ToString(true) : TEXT("INVALID"), ESteamSession::ToString(m_SessionType), *m_SessionId->ToDebugString());
	}

	virtual const FUniqueNetId& GetSessionId() const override
	{
		return *m_SessionId;
	}
};
#endif

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FSharedContentHandleSteam : public FSharedContentHandle
{
	const UGCHandle_t m_SharedContentHandle;

	FSharedContentHandleSteam() = delete;

public:
	FSharedContentHandleSteam(UGCHandle_t InSharedContentHandle)
		: m_SharedContentHandle(InSharedContentHandle)
	{
	}

	bool operator==(const FSharedContentHandleSteam& Other) const
	{
		return (m_SharedContentHandle == Other.m_SharedContentHandle);
	}

	virtual const uint8* GetBytes() const override
	{
		return (uint8*)&m_SharedContentHandle;
	}

	virtual int32 GetSize() const override
	{
		return sizeof(UGCHandle_t);
	}

	virtual bool IsValid() const override
	{
		return m_SharedContentHandle != k_UGCHandleInvalid;
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("%lld"), m_SharedContentHandle);
	}

	virtual FString ToDebugString() const override
	{
		return FString::Printf(TEXT("0x%llX"), m_SharedContentHandle);
	}
};
#endif
