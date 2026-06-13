/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_FriendsListEntry.h"

#include "CommonTextBlock.h"
#include "Components/Image.h"
#include "Foundation/UI_ButtonBase.h"
#include "Player/Friend/OrionFriendItemBase.h"

#if WITH_STEAM
#include "OrionSteamSDKAPI/OrionSteamSessionLibrary.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_FriendsListEntry)

void UUI_FriendsListEntryBase::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	if (const UOrionFriendItemBase* InFriendItem = Cast<UOrionFriendItemBase>(ListItemObject))
	{
		PlayerID = InFriendItem->GetPlayerID();

		if (Avatar)
			Avatar->SetBrushFromTexture(InFriendItem->GetMediumAvatar());

		if (FriendName)
			FriendName->SetText(FText::FromString(InFriendItem->GetNickname()));
	}
}

void UUI_FriendsListEntry_Invite::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (InviteButton)
		InviteButton->OnClicked().AddUObject(this, &ThisClass::InviteFriends);
}

void UUI_FriendsListEntry_Invite::InviteFriends()
{
#if WITH_STEAM
	UOrionSteamSessionLibrary::SendGameSessionInviteToFriend(0, PlayerID.ToString());
#endif
}
