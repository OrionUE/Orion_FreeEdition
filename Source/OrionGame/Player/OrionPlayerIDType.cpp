/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionPlayerIDType.h"

#if WITH_STEAM
#include "OrionSteamSDKAPI/OrionSteamUserLibrary.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionPlayerIDType)

FOrionPlayerID::FOrionPlayerID()
{
}

#if WITH_EDITOR
FOrionPlayerID::FOrionPlayerID(const FString& InPlayerEditorID)
{
	PlayerEditorID = InPlayerEditorID;
	PlayerID = PlayerEditorID;
}
#endif

#if WITH_STEAM
FOrionPlayerID::FOrionPlayerID(const FOrionSteamId& InPlayerSteamID)
{
	PlayerOrionSteamID = InPlayerSteamID;
	PlayerID = PlayerOrionSteamID.ToString();
}

FOrionSteamId FOrionPlayerID::GetOrionSteamID() const
{
	return PlayerOrionSteamID;
}
#endif

bool FOrionPlayerID::IsEmpty() const
{
	return PlayerID.IsEmpty();
}

FString FOrionPlayerID::ToString() const
{
	return PlayerID;
}

bool FOrionPlayerID::operator==(const FOrionPlayerID& InPlayerID) const
{
	return PlayerID.Equals(InPlayerID.PlayerID);
}

FOrionPlayerID UOrionPlayerIDUtilities::GetPlayerIDFromSteamID(const FString& InPlayerSteamID)
{
	FOrionPlayerID PlayerID = FOrionPlayerID();

#if WITH_STEAM
	PlayerID = FOrionPlayerID(UOrionSteamUserLibrary::MakeUserIdFromString(InPlayerSteamID));
#endif

	return PlayerID;
}
