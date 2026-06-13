/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/GameStateComponent.h"

#include "OrionCharacterSpawnerManager.generated.h"

class AOrionCharacterSpawner;

struct FGenericTeamId;
struct FOrionCharacterSpawnerGroup;
struct FOrionCharacterSpawnerContext;

UCLASS(Abstract)
class ORIONGAME_API UOrionCharacterSpawnerManager : public UGameStateComponent
{
	GENERATED_BODY()

public:
	virtual void RegisterCharacterSpawner(AOrionCharacterSpawner* InCharacterSpawner);
	virtual void UnregisterCharacterSpawner(AOrionCharacterSpawner* InCharacterSpawner);

public:
	virtual void PlayerLogin(APlayerController* InLoginPlayer);
	virtual void PlayerLogout(APlayerController* InLogoutPlayer);

protected:
	FOrionCharacterSpawnerGroup* GetOrCreateGroup(const FGenericTeamId& InTeamId);

protected:
	void FindOptimalEmptySpawnerByTeam(FOrionCharacterSpawnerContext*& OptimalSpawner, const FGenericTeamId& InTeamId);

protected:
	UPROPERTY()
	TArray<FOrionCharacterSpawnerGroup> SpawnerGroups;
};
