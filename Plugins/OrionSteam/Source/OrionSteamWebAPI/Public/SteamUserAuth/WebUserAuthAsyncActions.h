/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebUserAuthAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionAuthenticateUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionAuthenticateUser : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Authenticate User
	 *
	 * @param	SteamId					Should be the users steamid, unencrypted.
	 * @param	SessionKey				Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.
	 * @param	EncryptedLoginKey		Should be the users hashed loginkey, AES encrypted with the sessionkey.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Authenticate User", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|PlayerService|Async")
	static UOrionSteamWebAPIAsyncActionAuthenticateUser* AuthenticateUserAsync(UObject* WorldContextObject, FString SteamId, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionAuthenticateUserTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionAuthenticateUserTicket : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Authenticate User Ticket
	 *
	 * @param	Key			Steamworks Web API publisher authentication key.
	 * @param	AppId		The App ID to get the betas of.
	 * @param	Ticket		Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Authenticate User Ticket", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|PlayerService|Async")
	static UOrionSteamWebAPIAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Ticket);
};
