/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebUserAuth.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebUserAuth : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebUserAuth()
	{
		SubsystemType = ESubsystemWeb::UserAuth;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Authenticate User
	 *
	 * @param	SteamId					Should be the users steamid, unencrypted.
	 * @param	SessionKey				Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.
	 * @param	EncryptedLoginKey		Should be the users hashed loginkey, AES encrypted with the sessionkey.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|UserAuth")
	void AuthenticateUser(const FOnOrionSteamWebAPICallback& Callback, FString SteamId, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);

	/**
	 * Authenticate User Ticket
	 *
	 * @param	Key			Steamworks Web API publisher authentication key.
	 * @param	AppId		The App ID to get the betas of.
	 * @param	Ticket		Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|UserAuth")
	void AuthenticateUserTicket(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Ticket);
};
