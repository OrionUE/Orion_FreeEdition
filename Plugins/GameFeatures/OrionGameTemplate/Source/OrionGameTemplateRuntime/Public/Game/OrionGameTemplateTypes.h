/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"

#include "OrionGameTemplateTypes.generated.h"

UENUM(BlueprintType)
enum class EOrionGameTemplateResourceType : uint8
{
	Wood,
	Ore
};

UENUM(BlueprintType)
enum class EOrionGameTemplateItemType : uint8
{
	Wood,
	Ore,
	WildCrystal,
	Ration,
	BeaconCore
};

UENUM(BlueprintType)
enum class EOrionGameTemplatePalState : uint8
{
	Idle,
	Following,
	Assisting,
	Collecting
};

UENUM(BlueprintType)
enum class EOrionGameTemplateStructureType : uint8
{
	Campfire,
	StorageCrate
};

UENUM(BlueprintType)
enum class EOrionGameTemplateTradeOfferType : uint8
{
	SellWood,
	SellOre,
	BuyRation,
	BuyBeaconCore
};

USTRUCT(BlueprintType)
struct FOrionGameTemplateItemStack
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	EOrionGameTemplateItemType ItemType = EOrionGameTemplateItemType::Wood;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate", meta=(ClampMin="0"))
	int32 Quantity = 0;
};

USTRUCT(BlueprintType)
struct FOrionGameTemplatePlayerProgressState
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 Level = 1;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 Experience = 0;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 ExperienceToNextLevel = 100;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 Credits = 0;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 StructuresBuilt = 0;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 TradesCompleted = 0;
};

USTRUCT(BlueprintType)
struct FOrionGameTemplatePlayerState
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	TArray<FOrionGameTemplateItemStack> Inventory;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	FOrionGameTemplatePlayerProgressState Progress;
};

USTRUCT(BlueprintType)
struct FOrionGameTemplateTeamState
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 Wood = 0;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 Ore = 0;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 EnemiesDefeated = 0;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 ActivePals = 0;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 StructuresBuilt = 0;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	int32 TradesCompleted = 0;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	bool bBeaconReady = false;

	UPROPERTY(BlueprintReadOnly, Category="OrionGameTemplate")
	bool bObjectiveComplete = false;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOrionGameTemplateTeamStateChanged, const FOrionGameTemplateTeamState&, TeamState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOrionGameTemplatePlayerStateChanged, const FOrionGameTemplatePlayerState&, PlayerState);
