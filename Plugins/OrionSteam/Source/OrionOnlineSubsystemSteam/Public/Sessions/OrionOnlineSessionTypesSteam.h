/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionOnlineSubsystemSteamPrivate.h"
#include "OnlineSessionSettings.h"

#define STEAMKEY_NUMPUBLICCONNECTIONS "NUMPUBCONN"
#define STEAMKEY_NUMPRIVATECONNECTIONS "NUMPRIVCONN"
#define STEAMKEY_SESSIONFLAGS "SESSIONFLAGS"
#define STEAMKEY_OWNINGUSERID "OWNINGID"
#define STEAMKEY_OWNINGUSERNAME "OWNINGNAME"
#define STEAMKEY_NUMOPENPRIVATECONNECTIONS "NUMOPENPRIVCONN"
#define STEAMKEY_NUMOPENPUBLICCONNECTIONS "NUMOPENPUBCONN"
#define STEAMKEY_BUILDUNIQUEID "BUILDID"

#define STEAMKEY_NUMREQUIREDLOBBYKEYS 9
#define STEAMKEY_NUMREQUIREDSERVERKEYS 4

#define STEAMKEY_HOSTIP "HOSTIP"
#define STEAMKEY_HOSTPORT "HOSTPORT"
#define STEAMKEY_P2PADDR "P2PADDR"
#define STEAMKEY_P2PPORT "P2PPORT"
#define STEAMKEY_P2PPING "P2PPING"
#define STEAMKEY_CONNECTIONMETHOD "CONMETHOD"

#if WITH_ORIONSTEAM
inline bool SessionKeyToSteamKey(const FName Key, const FVariantData& Data, FString& KeyStr)
{
	switch (Data.GetType())
	{
	case EOnlineKeyValuePairDataType::Int32:
		KeyStr = FString::Printf(TEXT("%s_i"), *Key.ToString());
		break;
	case EOnlineKeyValuePairDataType::Int64:
		KeyStr = FString::Printf(TEXT("%s_l"), *Key.ToString());
		break;
	case EOnlineKeyValuePairDataType::Double:
		KeyStr = FString::Printf(TEXT("%s_d"), *Key.ToString());
		break;
	case EOnlineKeyValuePairDataType::String:
		KeyStr = FString::Printf(TEXT("%s_s"), *Key.ToString());
		break;
	case EOnlineKeyValuePairDataType::Float:
		KeyStr = FString::Printf(TEXT("%s_f"), *Key.ToString());
		break;
	case EOnlineKeyValuePairDataType::Bool:
		KeyStr = FString::Printf(TEXT("%s_b"), *Key.ToString());
		break;
	case EOnlineKeyValuePairDataType::Empty:
	case EOnlineKeyValuePairDataType::Blob:
	default:
		return false;
	}

	return true;
}

inline bool SteamKeyToSessionSetting(const TCHAR* SteamKey, const ANSICHAR* SteamValue, FName& Key, FOnlineSessionSetting& Setting)
{
	bool bSuccess = false;

	TCHAR SteamKeyCopy[1024];

	FCString::Strncpy(SteamKeyCopy, SteamKey, UE_ARRAY_COUNT(SteamKeyCopy));

	if (TCHAR* DataType = FCString::Strrchr(SteamKeyCopy, '_'))
	{
		bSuccess = true;

		*DataType = '\0';
		Key = FName(SteamKeyCopy);

		DataType += 1;

		switch (DataType[0])
		{
		case 'i':
			Setting.Data.SetValue((int32)0);
			Setting.Data.FromString(UTF8_TO_TCHAR(SteamValue));
			break;
		case 'l':
			Setting.Data.SetValue(static_cast<uint64>(0));
			Setting.Data.FromString(UTF8_TO_TCHAR(SteamValue));
			break;
		case 'd':
			Setting.Data.SetValue(static_cast<double>(0));
			Setting.Data.FromString(UTF8_TO_TCHAR(SteamValue));
			break;
		case 's':
			Setting.Data.SetValue(UTF8_TO_TCHAR(SteamValue));
			break;
		case 'f':
			Setting.Data.SetValue(static_cast<float>(0));
			Setting.Data.FromString(UTF8_TO_TCHAR(SteamValue));
			break;
		case 'b':
			Setting.Data.SetValue(false);
			Setting.Data.FromString(UTF8_TO_TCHAR(SteamValue));
			break;
		default:
			bSuccess = false;
		}
	}

	if (!bSuccess)
	{
		UE_LOG_ONLINE_SESSION(Warning, TEXT("Unknown or unsupported data type from Steam key data %s %s"), SteamKey, UTF8_TO_TCHAR(SteamValue));
	}

	return bSuccess;
}

inline ELobbyComparison ToSteamLobbyCompareOp(EOnlineComparisonOp::Type InComparisonOp)
{
	switch (InComparisonOp)
	{
	case EOnlineComparisonOp::NotEquals:
		return k_ELobbyComparisonNotEqual;
	case EOnlineComparisonOp::GreaterThan:
		return k_ELobbyComparisonGreaterThan;
	case EOnlineComparisonOp::GreaterThanEquals:
		return k_ELobbyComparisonEqualToOrGreaterThan;
	case EOnlineComparisonOp::LessThan:
		return k_ELobbyComparisonLessThan;
	case EOnlineComparisonOp::LessThanEquals:
		return k_ELobbyComparisonEqualToOrLessThan;
	case EOnlineComparisonOp::Near:
	case EOnlineComparisonOp::Equals:
	default:
		return k_ELobbyComparisonEqual;
	}
}

inline EOnlineComparisonOp::Type FromSteamLobbyCompareOp(ELobbyComparison InComparisonOp)
{
	switch (InComparisonOp)
	{
	case k_ELobbyComparisonNotEqual:
		return EOnlineComparisonOp::NotEquals;
	case k_ELobbyComparisonGreaterThan:
		return EOnlineComparisonOp::GreaterThan;
	case k_ELobbyComparisonEqualToOrGreaterThan:
		return EOnlineComparisonOp::GreaterThanEquals;
	case k_ELobbyComparisonLessThan:
		return EOnlineComparisonOp::LessThan;
	case k_ELobbyComparisonEqualToOrLessThan:
		return EOnlineComparisonOp::LessThanEquals;
	case k_ELobbyComparisonEqual:
	default:
		return EOnlineComparisonOp::Equals;
	}
}

inline ELobbyType BuildLobbyTypeOrionOnlineSteam(FOnlineSessionSettings* SessionSettings)
{
	if (!SessionSettings->bIsLANMatch)
	{
		if (SessionSettings->bShouldAdvertise)
		{
			if (SessionSettings->bAllowJoinViaPresenceFriendsOnly)
			{
				return k_ELobbyTypeFriendsOnly;
			}
			else if (SessionSettings->bAllowInvites && !SessionSettings->bAllowJoinViaPresence)
			{
				return k_ELobbyTypePrivate;
			}
			else
			{
				return k_ELobbyTypePublic;
			}
		}
	}

	return k_ELobbyTypePrivate;
}

static void GetLobbyKeyValuePairsFromSessionInfo(const FOrionOnlineSessionInfoSteam& SessionInfo, FSteamSessionKeyValuePairs& KeyValuePairs)
{
	if (SessionInfo.m_HostAddr.IsValid())
	{
		uint32 HostAddr;
		SessionInfo.m_HostAddr->GetIp(HostAddr);
		KeyValuePairs.Add(STEAMKEY_HOSTIP, FString::FromInt(HostAddr));
		KeyValuePairs.Add(STEAMKEY_HOSTPORT, FString::FromInt(SessionInfo.m_HostAddr->GetPort()));
	}

	KeyValuePairs.Add(STEAMKEY_CONNECTIONMETHOD, FString::Printf(TEXT("%s"), *OrionSteam::LexToString(FSteamConnectionMethod::P2P)));

	if (SessionInfo.m_SteamP2PAddr.IsValid())
	{
		KeyValuePairs.Add(STEAMKEY_P2PADDR, SessionInfo.m_SteamP2PAddr->ToString(false));
		KeyValuePairs.Add(STEAMKEY_P2PPORT, FString::FromInt(SessionInfo.m_SteamP2PAddr->GetPort()));
	}
}

static void GetLobbyKeyValuePairsFromSessionSettings(const FOnlineSessionSettings& SessionSettings, FSteamSessionKeyValuePairs& KeyValuePairs)
{
	int32 BitShift = 0;
	int32 SessionFlags = 0;
	SessionFlags |= (SessionSettings.bShouldAdvertise ? 1 : 0) << BitShift++;
	SessionFlags |= (SessionSettings.bAllowJoinInProgress ? 1 : 0) << BitShift++;
	SessionFlags |= (SessionSettings.bIsLANMatch ? 1 : 0) << BitShift++;
	SessionFlags |= (SessionSettings.bIsDedicated ? 1 : 0) << BitShift++;
	SessionFlags |= (SessionSettings.bUsesStats ? 1 : 0) << BitShift++;
	SessionFlags |= (SessionSettings.bAllowInvites ? 1 : 0) << BitShift++;
	SessionFlags |= (SessionSettings.bUsesPresence ? 1 : 0) << BitShift++;
	SessionFlags |= (SessionSettings.bAllowJoinViaPresence ? 1 : 0) << BitShift++;
	SessionFlags |= (SessionSettings.bAllowJoinViaPresenceFriendsOnly ? 1 : 0) << BitShift++;
	SessionFlags |= (SessionSettings.bAntiCheatProtected ? 1 : 0) << BitShift++;

	KeyValuePairs.Add(STEAMKEY_NUMPUBLICCONNECTIONS, FString::FromInt(SessionSettings.NumPublicConnections));
	KeyValuePairs.Add(STEAMKEY_NUMPRIVATECONNECTIONS, FString::FromInt(SessionSettings.NumPrivateConnections));
	KeyValuePairs.Add(STEAMKEY_SESSIONFLAGS, FString::FromInt(SessionFlags));
	KeyValuePairs.Add(STEAMKEY_BUILDUNIQUEID, FString::FromInt(SessionSettings.BuildUniqueId));

	FString KeyStr;
	for (FSessionSettings::TConstIterator It(SessionSettings.Settings); It; ++It)
	{
		FName Key = It.Key();
		const FOnlineSessionSetting& Setting = It.Value();
		if (Setting.AdvertisementType >= EOnlineDataAdvertisementType::ViaOnlineService)
		{
			if (SessionKeyToSteamKey(Key, Setting.Data, KeyStr))
			{
				FString SettingStr = Setting.Data.ToString();
				if (!SettingStr.IsEmpty())
				{
					KeyValuePairs.Add(KeyStr, SettingStr);
				}
				else
				{
					UE_LOG_ONLINE_SESSION(Warning, TEXT("Empty session setting %s %s of type %s"), *Key.ToString(), *Setting.ToString(), EOnlineKeyValuePairDataType::ToString(Setting.Data.GetType()));
				}
			}
			else
			{
				UE_LOG_ONLINE_SESSION(Warning, TEXT("Unsupported session setting %s %s of type %s"), *Key.ToString(), *Setting.ToString(), EOnlineKeyValuePairDataType::ToString(Setting.Data.GetType()));
			}
		}
	}
}

static void GetLobbyKeyValuePairsFromSession(const FOnlineSession* Session, FSteamSessionKeyValuePairs& KeyValuePairs)
{
	const FUniqueNetIdSteamPtr SteamId = StaticCastSharedPtr<const FUniqueNetIdSteam>(Session->OwningUserId);
	if (SteamId.IsValid())
	{
		KeyValuePairs.Add(STEAMKEY_OWNINGUSERID, SteamId->ToString());
	}
	KeyValuePairs.Add(STEAMKEY_OWNINGUSERNAME, Session->OwningUserName);
	KeyValuePairs.Add(STEAMKEY_NUMOPENPRIVATECONNECTIONS, FString::FromInt(Session->NumOpenPrivateConnections));
	KeyValuePairs.Add(STEAMKEY_NUMOPENPUBLICCONNECTIONS, FString::FromInt(Session->NumOpenPublicConnections));

	if (Session->SessionInfo.IsValid())
	{
		const TSharedPtr<FOrionOnlineSessionInfoSteam> SessionInfo = StaticCastSharedPtr<FOrionOnlineSessionInfoSteam>(Session->SessionInfo);
		GetLobbyKeyValuePairsFromSessionInfo(*SessionInfo, KeyValuePairs);
	}

	const FOrionOnlineSubsystemSteam* SteamSubsystem = static_cast<FOrionOnlineSubsystemSteam*>(IOnlineSubsystem::Get(ORIONSTEAM_SUBSYSTEM));
	if (SteamSubsystem && SteamSubsystem->GetPingInterface().IsValid() && SteamSubsystem->GetPingInterface()->IsUsingP2PRelays())
	{
		const FString PingData = SteamSubsystem->GetPingInterface()->GetHostPingData();
		if (!PingData.IsEmpty())
		{
			KeyValuePairs.Add(STEAMKEY_P2PPING, PingData);
		}
	}

	GetLobbyKeyValuePairsFromSessionSettings(Session->SessionSettings, KeyValuePairs);
}

class FOrionOnlineAsyncTaskSteamEndSession : public FOrionOnlineAsyncTaskSteam
{
private:
	FName SessionName;

public:
	FOrionOnlineAsyncTaskSteamEndSession(FOrionOnlineSubsystemSteam* InSubsystem, FName InSessionName)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  SessionName(InSessionName)
	{
	}

	virtual ~FOrionOnlineAsyncTaskSteamEndSession() override
	{
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamEndSession bWasSuccessful: %d SessionName: %s"), WasSuccessful(), *SessionName.ToString());
	}

	virtual void Tick() override
	{
		bIsComplete = true;
		bWasSuccessful = true;
	}

	virtual void Finalize() override
	{
		const IOnlineSessionPtr SessionInt = Subsystem->GetSessionInterface();
		if (FNamedOnlineSession* Session = SessionInt->GetNamedSession(SessionName))
		{
			Session->SessionState = EOnlineSessionState::Ended;
		}
	}

	virtual void TriggerDelegates() override
	{
		const IOnlineSessionPtr SessionInt = Subsystem->GetSessionInterface();
		if (SessionInt.IsValid())
		{
			SessionInt->TriggerOnEndSessionCompleteDelegates(SessionName, bWasSuccessful);
		}
	}
};

class FOrionOnlineAsyncTaskSteamDestroySession : public FOrionOnlineAsyncTaskSteam
{
private:
	FName SessionName;
	FOnDestroySessionCompleteDelegate CompletionDelegate;

public:
	FOrionOnlineAsyncTaskSteamDestroySession(FOrionOnlineSubsystemSteam* InSubsystem, FName InSessionName, const FOnDestroySessionCompleteDelegate& InCompletionDelegate)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  SessionName(InSessionName),
		  CompletionDelegate(InCompletionDelegate)
	{
	}

	virtual ~FOrionOnlineAsyncTaskSteamDestroySession() override
	{
	}

	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOrionOnlineAsyncTaskSteamDestroySession bWasSuccessful: %d SessionName: %s"), WasSuccessful(), *SessionName.ToString());
	}

	virtual void Tick() override
	{
		bIsComplete = true;
		bWasSuccessful = true;
	}

	virtual void Finalize() override
	{
		const IOnlineSessionPtr SessionInt = Subsystem->GetSessionInterface();
		if (SessionInt.IsValid())
		{
			if (FNamedOnlineSession* Session = SessionInt->GetNamedSession(SessionName))
			{
				SessionInt->RemoveNamedSession(SessionName);
				if (SessionInt->GetNumSessions() == 0)
				{
					const IOnlineVoicePtr VoiceInt = Subsystem->GetVoiceInterface();
					if (VoiceInt.IsValid())
					{
						if (!Subsystem->IsDedicated())
						{
							VoiceInt->UnregisterLocalTalkers();
						}

						VoiceInt->RemoveAllRemoteTalkers();
					}

					const FOrionOnlineAuthSteamPtr AuthInt = Subsystem->GetAuthInterface();

					if (AuthInt.IsValid())
					{
						AuthInt->RevokeAllTickets();
					}
				}
			}
		}
	}

	virtual void TriggerDelegates() override
	{
		const IOnlineSessionPtr SessionInt = Subsystem->GetSessionInterface();
		if (SessionInt.IsValid())
		{
			CompletionDelegate.ExecuteIfBound(SessionName, bWasSuccessful);
			SessionInt->TriggerOnDestroySessionCompleteDelegates(SessionName, bWasSuccessful);
		}
	}
};
#endif
