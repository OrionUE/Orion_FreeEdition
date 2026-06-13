/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_FriendsScreen.h"

#include "UI_FriendsListView.h"
#include "Player/Friend/OrionFriendItemBase.h"
#include "Player/Friend/OrionFriendManagerSubsystemBase.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_FriendsScreen)

void UUI_FriendsScreen::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	RefreshFriendsList();
}

void UUI_FriendsScreen::NativeConstruct()
{
	Super::NativeConstruct();

	SetIsFocusable(false);
}

void UUI_FriendsScreen::RefreshFriendsList()
{
	FriendItemsList.Reset();

	if (UOrionFriendManagerSubsystemBase* FriendManager = GetGameInstance()->GetSubsystem<UOrionFriendManagerSubsystemBase>())
	{
		FriendManager->GetAndRefreshAllFriendItem(MutableView(FriendItemsList));
	}

	ListView_Friends->SetListItems(FriendItemsList);
}
