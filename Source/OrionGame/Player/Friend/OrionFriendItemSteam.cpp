/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionFriendItemSteam.h"

#if WITH_STEAM
#include "OrionSteamSDKAPI/OrionSteamFriendsLibrary.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionFriendItemSteam)

UTexture2D* UOrionFriendItemSteam::GetSmallAvatar() const
{
	UTexture2D* Avatar = nullptr;

#if WITH_STEAM
	Avatar = UOrionSteamFriendsLibrary::GetSmallFriendAvatar(PlayerID.GetOrionSteamID());
#endif

	return Avatar;
}

UTexture2D* UOrionFriendItemSteam::GetMediumAvatar() const
{
	UTexture2D* Avatar = nullptr;

#if WITH_STEAM
	Avatar = UOrionSteamFriendsLibrary::GetMediumFriendAvatar(PlayerID.GetOrionSteamID());
#endif

	return Avatar;
}

UTexture2D* UOrionFriendItemSteam::GetLargeAvatar() const
{
	UTexture2D* Avatar = nullptr;

#if WITH_STEAM
	Avatar = UOrionSteamFriendsLibrary::GetLargeFriendAvatar(PlayerID.GetOrionSteamID());
#endif

	return Avatar;
}

FString UOrionFriendItemSteam::GetNickname() const
{
	FString Nickname;

#if WITH_STEAM
	Nickname = UOrionSteamFriendsLibrary::GetFriendPersonaName(PlayerID.GetOrionSteamID());
#endif

	return Nickname;
}

#if WITH_STEAM
EOrionSteamPersonaState UOrionFriendItemSteam::GetPersonaState() const
{
	return UOrionSteamFriendsLibrary::GetFriendPersonaState(PlayerID.GetOrionSteamID());
}

EOrionSteamPersonaState UOrionFriendItemSteam::GetFriendPersonaState() const
{
	return UOrionSteamFriendsLibrary::GetFriendPersonaState(PlayerID.GetOrionSteamID());
}
#endif
