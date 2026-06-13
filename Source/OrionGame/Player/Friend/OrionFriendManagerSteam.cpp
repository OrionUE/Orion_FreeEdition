/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionFriendManagerSteam.h"

#include "OrionFriendItemSteam.h"

#if WITH_STEAM
#include "OrionSteamSDKAPI/OrionSteamFriendsLibrary.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionFriendManagerSteam)

UOrionFriendManagerSteam::UOrionFriendManagerSteam()
{
}

void UOrionFriendManagerSteam::RefreshFriendItems()
{
	TArray<FOrionPlayerID> FriendsIDList;
	int32 FriendsNum = 0;

#if WITH_STEAM
	FriendsNum = UOrionSteamFriendsLibrary::GetFriendCount();
	for (int32 FriendIndex = 0; FriendIndex < FriendsNum; ++FriendIndex)
	{
		FriendsIDList.Add(FOrionPlayerID(UOrionSteamFriendsLibrary::GetFriendByIndex(FriendIndex)));
	}
#endif

	TArray<int32> InitializeFriendList;
	TArray<FOrionPlayerID> FriendItemsToRemove;
	for (auto FriendItemTmp = FriendItemsList.CreateConstIterator(); FriendItemTmp; ++FriendItemTmp)
	{
		const FOrionPlayerID& FriendItemTmpKey = FriendItemTmp.Key();
		const TObjectPtr<UOrionFriendItemBase>& FriendItemTmpValue = FriendItemTmp.Value();

		if (!FriendItemTmpValue)
		{
			FriendItemsToRemove.Add(FriendItemTmpKey);
			continue;
		}

		bool bFoundItem = false;
		for (int32 FriendIndex = 0; FriendIndex < FriendsNum; ++FriendIndex)
		{
			if (FriendItemTmpKey == FriendsIDList[FriendIndex])
			{
				FriendItemTmpValue->SetFriendIndex(FriendIndex);
				InitializeFriendList.Add(FriendIndex);
				bFoundItem = true;
				break;
			}
		}

		if (!bFoundItem)
		{
			FriendItemsToRemove.Add(FriendItemTmpKey);
		}
	}

	for (const auto& FriendItemTmp : FriendItemsToRemove)
	{
		FriendItemsList.Remove(FriendItemTmp);
	}

	for (int32 FriendIndex = 0; FriendIndex < FriendsNum; ++FriendIndex)
	{
		if (!InitializeFriendList.Contains(FriendIndex))
		{
			FOrionPlayerID NewFriendID = FriendsIDList[FriendIndex];

			if (!FriendItemsList.Contains(NewFriendID))
			{
				if (TObjectPtr<UOrionFriendItemBase> NewFriendItemItem = CreateFriendItem(NewFriendID, FriendIndex))
				{
					FriendItemsList.Add(NewFriendID, NewFriendItemItem);
				}
			}
		}
	}

	SortFriendItemsList();
}

void UOrionFriendManagerSteam::SortFriendItemsList()
{
	FriendItemsList.KeySort([this](const FOrionPlayerID& PlayerIDA, const FOrionPlayerID& PlayerIDB)->bool
	{
		auto FriendItemAPtr = FriendItemsList.Find(PlayerIDA);
		auto FriendItemBPtr = FriendItemsList.Find(PlayerIDB);

		if (!FriendItemAPtr && !FriendItemBPtr) return false;
		if (!FriendItemAPtr) return false;
		if (!FriendItemBPtr) return true;

		UOrionFriendItemBase* FriendItemA = FriendItemAPtr->Get();
		UOrionFriendItemBase* FriendItemB = FriendItemBPtr->Get();

		return FriendItemA->GetFriendIndex() < FriendItemB->GetFriendIndex();
	});
}

UOrionFriendItemBase* UOrionFriendManagerSteam::CreateFriendItem(const FOrionPlayerID& InPlayerID, int32 InFriendIndex)
{
	UOrionFriendItemSteam* NewFriendItem = NewObject<UOrionFriendItemSteam>(this);
	NewFriendItem->SetupFriendItem(InPlayerID, InFriendIndex);

	return NewFriendItem;
}

UTexture2D* UOrionFriendManagerSteam::GetPlayerSmallAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList)
{
	UTexture2D* PlayerAvatar = Super::GetPlayerSmallAvatar(InPlayerID, bRefreshFriendList);

	if (!PlayerAvatar)
	{
#if WITH_STEAM
		PlayerAvatar = UOrionSteamFriendsLibrary::GetSmallFriendAvatar(InPlayerID.GetOrionSteamID());
#endif
	}

	return PlayerAvatar;
}

UTexture2D* UOrionFriendManagerSteam::GetPlayerMediumAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList)
{
	UTexture2D* PlayerAvatar = Super::GetPlayerMediumAvatar(InPlayerID, bRefreshFriendList);

	if (!PlayerAvatar)
	{
#if WITH_STEAM
		PlayerAvatar = UOrionSteamFriendsLibrary::GetMediumFriendAvatar(InPlayerID.GetOrionSteamID());
#endif
	}

	return PlayerAvatar;
}

UTexture2D* UOrionFriendManagerSteam::GetPlayerLargeAvatar(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList)
{
	UTexture2D* PlayerAvatar = Super::GetPlayerLargeAvatar(InPlayerID, bRefreshFriendList);

	if (!PlayerAvatar)
	{
#if WITH_STEAM
		PlayerAvatar = UOrionSteamFriendsLibrary::GetLargeFriendAvatar(InPlayerID.GetOrionSteamID());
#endif
	}

	return PlayerAvatar;
}

FString UOrionFriendManagerSteam::GetPlayerName(const FOrionPlayerID& InPlayerID, bool bRefreshFriendList)
{
	FString PlayerName = Super::GetPlayerName(InPlayerID, bRefreshFriendList);

	if (PlayerName.IsEmpty())
	{
#if WITH_STEAM
		PlayerName = UOrionSteamFriendsLibrary::GetFriendPersonaName(InPlayerID.GetOrionSteamID());
#endif
	}

	return PlayerName;
}

#if WITH_STEAM
void UOrionFriendManagerSteam::GetAndRefreshFriendItemByState(TArray<UOrionFriendItemBase*>& InOutFriendItems, EOrionSteamPersonaState InFriendState)
{
	RefreshFriendItems();

	InOutFriendItems.Reset();
	for (const auto& FriendItemTmp : FriendItemsList)
	{
		if (UOrionFriendItemSteam* FriendItemSteamTmp = Cast<UOrionFriendItemSteam>(FriendItemTmp.Value))
		{
			if (FriendItemSteamTmp->GetPersonaState() == InFriendState)
			{
				InOutFriendItems.Add(FriendItemTmp.Value);
			}
		}
		
	}
}
#endif
