/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionOnlineSubsystemSteamTypes.h"

enum class ORIONONLINESUBSYSTEMSTEAM_API ESteamAuthResponseCode : uint8
{
	OK = 0,
	NotConnectedToSteam = 1,
	NoOwnership = 2,
	VACBanned = 3,
	LoggedInElsewhere = 4,
	VACCheckTimeout = 5,
	TicketCancelled = 6,
	TicketAlreadyUsed = 7,
	TicketInvalid = 8,
	PublisherBanned = 9,
	FailedToCreateUser = 20,
	Count
};

enum class ESteamAuthMsgType : uint8
{
	None = 0,
	Auth,
	Result,
	ResendKey,
	ResendResult,
	Max
};

enum class ESteamAuthStatus : uint8
{
	None = 0,
	AuthSuccess = 1 << 0,
	AuthFail = 1 << 1,
	ValidationStarted = 1 << 2,
	KickUser = 1 << 3,
	FailKick = AuthFail | KickUser,
	HasOrIsPendingAuth = AuthSuccess | ValidationStarted
};

ENUM_CLASS_FLAGS(ESteamAuthStatus);

enum class ESteamAuthHandlerState : uint8
{
	Uninitialized,
	WaitingForServerSteamId,
	WaitingForKey,
	SentAuthKey,
	Initialized
};

struct ORIONONLINESUBSYSTEMSTEAM_API FServerSteamIdData
{
	FServerSteamIdData()
		: m_ServerSteamId(0)
	{
	}

	FServerSteamIdData(uint64 Id)
		: m_ServerSteamId(Id)
	{
	}

	virtual ~FServerSteamIdData()
	{
	}

	virtual void SerializeData(FArchive& Ar)
	{
		Ar << m_ServerSteamId;
	}

	friend FArchive& operator<<(FArchive& Ar, FServerSteamIdData& AuthData)
	{
		AuthData.SerializeData(Ar);
		return Ar;
	}

public:
	uint64 m_ServerSteamId;
};

struct ORIONONLINESUBSYSTEMSTEAM_API FSteamAuthInfoData
{
	FSteamAuthInfoData()
		: m_Type(ESteamAuthMsgType::None)
	{
	}

	FSteamAuthInfoData(ESteamAuthMsgType InType)
		: m_Type(InType)
	{
	}

	virtual ~FSteamAuthInfoData()
	{
	}

	virtual void SerializeData(FArchive& Ar)
	{
		Ar << m_Type;
	}

	friend FArchive& operator<<(FArchive& Ar, FSteamAuthInfoData& AuthData)
	{
		AuthData.SerializeData(Ar);
		return Ar;
	}

public:
	ESteamAuthMsgType m_Type;
};

#if WITH_ORIONSTEAM
struct ORIONONLINESUBSYSTEMSTEAM_API FSteamAuthResult : public FSteamAuthInfoData
{
	FSteamAuthResult()
		: FSteamAuthInfoData(ESteamAuthMsgType::Result), bWasSuccess(false)
	{
	}

	virtual ~FSteamAuthResult() override
	{
	}

	bool bWasSuccess;

	virtual void SerializeData(FArchive& Ar) override
	{
		FSteamAuthInfoData::SerializeData(Ar);
		Ar << bWasSuccess;
	}

	friend FArchive& operator<<(FArchive& Ar, FSteamAuthResult& AuthData)
	{
		AuthData.SerializeData(Ar);
		return Ar;
	}
};

struct ORIONONLINESUBSYSTEMSTEAM_API FSteamAuthUserData : public FSteamAuthInfoData
{
	FSteamAuthUserData()
		: FSteamAuthInfoData(ESteamAuthMsgType::Auth), m_SteamId(FUniqueNetIdSteam::EmptyId())
	{
	}

	virtual ~FSteamAuthUserData() override
	{
	}

	virtual void SerializeData(FArchive& Ar) override
	{
		FSteamAuthInfoData::SerializeData(Ar);
		if (Ar.IsLoading())
		{
			m_SteamId = FUniqueNetIdSteam::Create();
		}
		Ar << m_AuthKey << ConstCastSharedRef<FUniqueNetIdSteam>(m_SteamId)->m_UniqueNetId;
	}

	friend FArchive& operator<<(FArchive& Ar, FSteamAuthUserData& AuthData)
	{
		AuthData.SerializeData(Ar);
		return Ar;
	}

public:
	FString m_AuthKey;
	FUniqueNetIdSteamRef m_SteamId;
};
#endif
