/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFramework/Actor.h"
#include "Teams/OrionTeamAgentInterface.h"

#include "OrionCharacterSpawner.generated.h"

class AOrionCharacter;
class UOrionCharacterSpawnerManager;
class UCoreExperienceDefinition;
class AOrionCharacterSpawner;

struct FOrionCharacterSpawnerGroup;

USTRUCT()
struct FOrionCharacterSpawnerIndex
{
	GENERATED_BODY()

public:
	inline bool operator==(const FOrionCharacterSpawnerIndex& InCharacterSpawnerIndex) const
	{
		return Index == InCharacterSpawnerIndex.Index;
	}

	inline auto operator<=>(const FOrionCharacterSpawnerIndex& InCharacterSpawnerIndex) const
	{
		return Index <=> InCharacterSpawnerIndex.Index;
	}

private:
	UPROPERTY(EditInstanceOnly)
	uint8 Index = 0;
};

USTRUCT()
struct FOrionCharacterSpawnerContext
{
	GENERATED_BODY()

	friend FOrionCharacterSpawnerGroup;
	friend UOrionCharacterSpawnerManager;

public:
	FOrionCharacterSpawnerContext(AOrionCharacterSpawner* InCharacterSpawner = nullptr);

protected:
	void SetOwnerPlayer(AController* InController);

	void ClearOwnerPlayer();

public:
	inline bool operator==(const FOrionCharacterSpawnerContext& InCharacterSpawnerContext) const
	{
		return CharacterSpawner == InCharacterSpawnerContext.CharacterSpawner;
	}

private:
	UPROPERTY()
	TObjectPtr<AOrionCharacterSpawner> CharacterSpawner;

	UPROPERTY()
	TObjectPtr<AController> OwnerController;
};

USTRUCT()
struct FOrionCharacterSpawnerGroup
{
	GENERATED_BODY()

public:
	FOrionCharacterSpawnerGroup(const FGenericTeamId& InTeamID = FGenericTeamId());

public:
	void AddNewSpawner(AOrionCharacterSpawner* InSpawner);
	void RemoveSpawner(AOrionCharacterSpawner* InSpawner);

	inline bool operator==(const FOrionCharacterSpawnerGroup& InCharacterSpawnerGroup) const
	{
		return TeamID == InCharacterSpawnerGroup.TeamID;
	}

	FGenericTeamId GetTeamID() const { return TeamID; }

	void FindOptimalEmptySpawner(FOrionCharacterSpawnerContext*& OptimalSpawner);

private:
	FGenericTeamId TeamID;

	TArray<FOrionCharacterSpawnerContext> Spawners;
};

UCLASS()
class ORIONGAME_API AOrionCharacterSpawner : public AActor, public IOrionTeamAgentInterface
{
	GENERATED_BODY()

	friend UOrionCharacterSpawnerManager;

public:
	AOrionCharacterSpawner(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
	void OnExperienceLoaded(const UCoreExperienceDefinition* Experience);

	void RegisterSpawner();

public:
	/**
	 * 生成角色
	 */
	virtual void SpawnCharacter();

	FORCEINLINE FOrionCharacterSpawnerIndex GetIndex() const { return SpawnerIndex; }

private:
#if WITH_EDITORONLY_DATA
	UPROPERTY()
	TObjectPtr<class UArrowComponent> SpawnArrow;
#endif

protected:
	UPROPERTY(EditInstanceOnly, Category="Spwner")
	FGenericTeamId TeamID;

	UPROPERTY(EditInstanceOnly, Category="Spwner")
	FOrionCharacterSpawnerIndex SpawnerIndex;

	UPROPERTY(EditInstanceOnly, Category="Spwner")
	TSubclassOf<AOrionCharacter> InCharacterClass;
};
