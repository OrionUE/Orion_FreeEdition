/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionPlayerAccount.h"

#include "OrionPlayerInfoComponent.h"
#include "SaveGame/OrionArchiveManagerSubsystem.h"
#include "SaveGame/OrionArchivePlayer.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionPlayerAccount)

void UOrionPlayerAccount::Initialize(const FOrionPlayerID& InPlayerID)
{
	PlayerID = InPlayerID;

	ArchiveManager = GetWorld()->GetGameInstance()->GetSubsystem<UOrionArchiveManagerSubsystem>();
	check(ArchiveManager);

	LoadPlayerArchive();
}

class UWorld* UOrionPlayerAccount::GetWorld() const
{
	return GetOuter()->GetWorld();
}

void UOrionPlayerAccount::LoadPlayerArchive()
{
	ArchiveManager->GetOrLoadPlayerArchive(PlayerID, FOnGetPlayerArchive::CreateUObject(this, &ThisClass::OnGetPlayerArchive));
}

void UOrionPlayerAccount::OnGetPlayerArchive(UOrionArchivePlayer* OutPlayerArchive)
{
	// 没有该玩家的存档
	if (OutPlayerArchive == nullptr)
	{
		CreateNewPlayer();
		LoadPlayerArchive();
	}
}

void UOrionPlayerAccount::CreateNewPlayer()
{
	check(PlayerArchiveClass);
	ArchiveManager->CreatePlayerArchive(PlayerID, PlayerArchiveClass);
}
