/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Auth/OrionOnlineAuthHandlerTypesSteam.h"
#include "OrionOnlineSubsystemSteam.h"
#include "OrionOnlineSubsystemSteamPackage.h"

/**
 * Delegate executed when we complete a GetAuthTicketForWebApi call
 *
 * @param AuthTokenHandle The handle for the auth ticket
 * @param AuthTicket the auth ticket returned by the api
 */
DECLARE_DELEGATE_TwoParams(FOnGetAuthTicketForWebApiCompleteDelegate, uint32 /*AuthTokenHandle*/, const FString& /*AuthTicket*/);

#if WITH_ORIONSTEAM
class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAuthSteam
{
PACKAGE_SCOPE:
	FOrionOnlineAuthSteam(FOrionOnlineSubsystemSteam* InSubsystem, FOrionOnlineAuthSteamUtilsPtr InAuthUtils);

	struct FSteamAuthUser
	{
		FSteamAuthUser()
			: m_Status(ESteamAuthStatus::None)
		{
		}

		void SetKey(const FString& NewKey);

		FString m_RecvTicket;
		ESteamAuthStatus m_Status;
	};

	typedef TSharedPtr<FSteamAuthUser, ESPMode::NotThreadSafe> SharedAuthUserSteamPtr;

	SharedAuthUserSteamPtr GetUser(const FUniqueNetId& InUserId);
	SharedAuthUserSteamPtr GetOrCreateUser(const FUniqueNetId& InUserId);

	bool AuthenticateUser(const FUniqueNetId& InUserId);
	void EndAuthentication(const FUniqueNetId& InUserId) const;
	void MarkPlayerForKick(const FUniqueNetId& InUserId);
	void RevokeTicket(const uint32& Handle);
	void RevokeAllTickets();
	void RemoveUser(const FUniqueNetId& TargetUser);

	FString GetAuthTicket(uint32& AuthTokenHandle);
	void GetAuthTicketForWebApi(const FString& RemoteServiceIdentity, FOnGetAuthTicketForWebApiCompleteDelegate CompletionDelegate);

	bool Tick(float DeltaTime);
	bool Exec(const TCHAR* Cmd);

	void OnGetTicketForWebResponse(uint32 AuthTicketHandle, const FString& ResultToken);
	void OnAuthResult(const FUniqueNetId& TargetId, int32 Response);
	void ExecuteResultDelegate(const FUniqueNetId& TargetId, bool bWasSuccessful, ESteamAuthResponseCode ResponseCode) const;

	void SetServerSteamId(uint64 Data);

private:
	typedef TUniqueNetIdMap<SharedAuthUserSteamPtr> m_SteamAuthentications;
	m_SteamAuthentications m_AuthUsers;
	TArray<uint32> m_SteamTicketHandles;
	TMap<uint32, FOnGetAuthTicketForWebApiCompleteDelegate> m_ActiveAuthTicketForWebApiRequests;

	FORCEINLINE bool IsServer() const
	{
		return m_SteamSubsystem != nullptr && m_SteamSubsystem->IsServer();
	}

	bool KickPlayer(const FUniqueNetId& InUserId, bool bSuppressFailure);

	FOrionOnlineAuthSteam();

	ISteamUser* m_SteamUserPtr;
	ISteamGameServer* m_SteamServerPtr;
	CSteamID m_ServerSteamId;
	FOrionOnlineSubsystemSteam* m_SteamSubsystem;
	FOrionOnlineAuthSteamUtilsPtr m_AuthUtils;
	bool m_bEnabled;

PACKAGE_SCOPE:
		// Send out invalid keys
		bool m_bBadKey;
	// Always send out the same key
	bool m_bReuseKey;
	// Always make the bit writers have errors
	bool m_bBadWrite;
	// Drop all packets
	bool m_bDropAll;
	// Randomly drop packets.
	bool m_bRandomDrop;
	// Client never sends their key.
	bool m_bNeverSendKey;
	// Always send invalid steam ids.
	bool m_bSendBadId;

	bool IsSessionAuthEnabled() const
	{
		return m_bEnabled;
	}

public:
	virtual ~FOrionOnlineAuthSteam();
	static uint32 GetMaxTicketSizeInBytes();
};
#endif
