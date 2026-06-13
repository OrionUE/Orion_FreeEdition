/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionCharacterSpawnerManager.h"

#include "OrionCharacterSpawner.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionCharacterSpawnerManager)

void UOrionCharacterSpawnerManager::RegisterCharacterSpawner(AOrionCharacterSpawner* InCharacterSpawner)
{
	FOrionCharacterSpawnerGroup* CurrentGroup = GetOrCreateGroup(InCharacterSpawner->TeamID);
	CurrentGroup->AddNewSpawner(InCharacterSpawner);
}

void UOrionCharacterSpawnerManager::UnregisterCharacterSpawner(AOrionCharacterSpawner* InCharacterSpawner)
{
	FOrionCharacterSpawnerGroup* CurrentGroup = GetOrCreateGroup(InCharacterSpawner->TeamID);
	CurrentGroup->RemoveSpawner(InCharacterSpawner);
}

void UOrionCharacterSpawnerManager::PlayerLogin(APlayerController* InLoginPlayer)
{
	FOrionCharacterSpawnerContext* OptimalSpawner;
	FindOptimalEmptySpawnerByTeam(OptimalSpawner, FGenericTeamId(1));

	if (OptimalSpawner)
	{
		OptimalSpawner->SetOwnerPlayer(InLoginPlayer);

		AOrionCharacterSpawner* CharacterSpawner = OptimalSpawner->CharacterSpawner;
		CharacterSpawner->SpawnCharacter();
	}
	else
	{
		// TODO
	}
}

void UOrionCharacterSpawnerManager::PlayerLogout(APlayerController* InLogoutPlayer)
{
}

FOrionCharacterSpawnerGroup* UOrionCharacterSpawnerManager::GetOrCreateGroup(const FGenericTeamId& InTeamId)
{
	for (auto& GroupTemp : SpawnerGroups)
	{
		if (GroupTemp.GetTeamID() == InTeamId)
		{
			return &GroupTemp;
		}
	}

	FOrionCharacterSpawnerGroup NewGroup = FOrionCharacterSpawnerGroup(InTeamId);
	return &SpawnerGroups.Add_GetRef(NewGroup);
}

void UOrionCharacterSpawnerManager::FindOptimalEmptySpawnerByTeam(FOrionCharacterSpawnerContext*& OptimalSpawner, const FGenericTeamId& InTeamId)
{
	FOrionCharacterSpawnerGroup* GroupPtr = GetOrCreateGroup(InTeamId);
	if (GroupPtr)
	{
		GroupPtr->FindOptimalEmptySpawner(OptimalSpawner);
	}
	else
	{
		OptimalSpawner = nullptr;
	}
}
