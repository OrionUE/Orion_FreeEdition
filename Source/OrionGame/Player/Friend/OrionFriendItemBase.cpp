/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionFriendItemBase.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionFriendItemBase)

UOrionFriendItemBase::UOrionFriendItemBase()
{
}

void UOrionFriendItemBase::SetupFriendItem(const FOrionPlayerID& InPlayerID, int32 InFriendIndex)
{
	PlayerID = InPlayerID;
	FriendIndex = InFriendIndex;
}
