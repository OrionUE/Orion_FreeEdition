/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionFriendManagerSubsystemBase.h"

#include "OrionFriendItemBase.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionFriendManagerSubsystemBase)

UOrionFriendManagerSubsystemBase::UOrionFriendManagerSubsystemBase()
{
}

bool UOrionFriendManagerSubsystemBase::ShouldCreateSubsystem(UObject* Outer) const
{
	if (IsRunningDedicatedServer())
	{
		return false;
	}

	return Super::ShouldCreateSubsystem(Outer);
}

UOrionFriendItemBase* UOrionFriendManagerSubsystemBase::CreateFriendItem(const FOrionPlayerID& InPlayerID, int32 InFriendIndex)
{
	UOrionFriendItemBase* NewFriendItem = NewObject<UOrionFriendItemBase>(this);
	NewFriendItem->SetupFriendItem(InPlayerID, InFriendIndex);

	return NewFriendItem;
}

void UOrionFriendManagerSubsystemBase::GetAndRefreshAllFriendItem(TArray<UOrionFriendItemBase*>& InOutFriendItems)
{
	RefreshFriendItems();

	InOutFriendItems.Reset();
	for (const auto& FriendItemTmp : FriendItemsList)
	{
		InOutFriendItems.Add(FriendItemTmp.Value);
	}
}

UOrionFriendItemBase* UOrionFriendManagerSubsystemBase::GetFriendItem(const FOrionPlayerID& InPlayerID) const
{
	return FriendItemsList.FindRef(InPlayerID);
}

UTexture2D* UOrionFriendManagerSubsystemBase::GetPlayerSmallAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList)
{
	if (bRefreshFriendList)
	{
		RefreshFriendItems();
	}

	if (UOrionFriendItemBase* FriendItem = GetFriendItem(InPlayerID))
	{
		return FriendItem->GetSmallAvatar();
	}

	return nullptr;
}

UTexture2D* UOrionFriendManagerSubsystemBase::GetPlayerMediumAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList)
{
	if (bRefreshFriendList)
	{
		RefreshFriendItems();
	}

	if (UOrionFriendItemBase* FriendItem = GetFriendItem(InPlayerID))
	{
		return FriendItem->GetMediumAvatar();
	}

	return nullptr;
}

UTexture2D* UOrionFriendManagerSubsystemBase::GetPlayerLargeAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList)
{
	if (bRefreshFriendList)
	{
		RefreshFriendItems();
	}

	if (UOrionFriendItemBase* FriendItem = GetFriendItem(InPlayerID))
	{
		return FriendItem->GetLargeAvatar();
	}

	return nullptr;
}

FString UOrionFriendManagerSubsystemBase::GetPlayerName(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList)
{
	if (bRefreshFriendList)
	{
		RefreshFriendItems();
	}

	if (UOrionFriendItemBase* FriendItem = GetFriendItem(InPlayerID))
	{
		return FriendItem->GetNickname();
	}

	return TEXT("");
}
