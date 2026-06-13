/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebLobbyMatchmakingServiceTypes.h"
#include "WebLobbyMatchmakingService.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebLobbyMatchmakingService : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebLobbyMatchmakingService()
	{
		SubsystemType = ESubsystemWeb::LobbyMatchmaking;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * When using the CreateLobby WebAPI, you'll probably want to set lobby_type to 4 (k_ELobbyTypePrivateUnique).
	 * This lobby type is a private, unique lobby that does not get deleted when emptied, and only one will exist per unique appid/lobby_name.
	 * A private unique lobby can only be created by this WebAPI call. But you can also use CreateLobby to generate the more traditional and ephemeral lobbies when no lobby_name is used.
	 *
	 * Steamid_invited_members will be a json array of all the steamIDs that should be currently allowed into the lobby.
	 * You can update the list of members by calling CreateLobby with the same lobby_name and new complete set of steamIDs.
	 * Any steamIDs that were previously in the lobby and not included in the new call will be removed from the lobby.
	 * Lobby_metadata is completely optional, but can be used to send general lobby data that needs to be communicated to users in the client.
	 *
	 * @param	Key						Steamworks Web API user authentication Key.
	 * @param	AppId					The ID of the application associated with the lobby.
	 * @param	MaxMembers				Maximum number of members for this lobby.
	 * @param	LobbyType				EOrionSteamWebAPILobbyType - The type and visibility of this lobby.
	 * @param	LobbyName				Unique lobby name if lobby_type = 4. Find lobby with this name if it exists.
	 * @param	InputJson				Json data. Required for data that cannot be posted parameters, but can also be used for the other parameters
	 * @param	SteamIdInvitedMembers	Array of steamIDs to add slots for. Must be specified in the input_json parameter.
	 * @param	LobbyMetaData			Optional lobby data. Must be specified in the input_json parameter.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|LobbyMatchmakingService")
	void CreateLobby(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 MaxMembers, EOrionSteamWebAPILobbyType LobbyType, FString LobbyName, FString InputJson, TArray<FString> SteamIdInvitedMembers, FString LobbyMetaData);

	/**
	 * Remove user from lobby
	 *
	 * @param	Key						Steamworks Web API user authentication Key.
	 * @param	AppId					The ID of the application associated with the lobby.
	 * @param	SteamIdToRemove			SteamID of the user to remove. If the user is not online when called, this will remove their reserved slot in the lobby.
	 * @param	SteamIdLobby			Lobby ID
	 * @param	InputJson				Json data. Required for data that cannot be posted parameters, but can also be used for the other parameters
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|LobbyMatchmakingService")
	void RemoveUserFromLobby(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamIdToRemove, FString SteamIdLobby, FString InputJson);
};
