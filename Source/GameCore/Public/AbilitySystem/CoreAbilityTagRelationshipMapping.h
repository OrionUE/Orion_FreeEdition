/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"

#include "CoreAbilityTagRelationshipMapping.generated.h"

/**
 * Struct that defines the relationship between different ability tags
 * 定义不同AbilityTag之间的关系
 */
USTRUCT()
struct FCoreAbilityTagRelationship
{
	GENERATED_BODY()

	// The tag that this container relationship is about. Single tag, but abilities can have multiple of these
	// 技能对应的标签，标签和技能是一一对应的关系
	UPROPERTY(EditAnywhere, Category = Ability, meta = (Categories = "Gameplay.Action"))
	FGameplayTag AbilityTag;

	// The other ability tags that will be blocked by any ability using this tag
	// 此技能会屏蔽其它技能
	UPROPERTY(EditAnywhere, Category = Ability)
	FGameplayTagContainer AbilityTagsToBlock;

	// The other ability tags that will be canceled by any ability using this tag
	// 此技能会取消之前施放的技能
	UPROPERTY(EditAnywhere, Category = Ability)
	FGameplayTagContainer AbilityTagsToCancel;

	// If an ability has the tag, this is implicitly added to the activation required tags of the ability
	// 技能施放所必须的标签，如前置技能
	UPROPERTY(EditAnywhere, Category = Ability)
	FGameplayTagContainer ActivationRequiredTags;

	// If an ability has the tag, this is implicitly added to the activation blocked tags of the ability
	// 拥有此标签，技能就无法施放
	UPROPERTY(EditAnywhere, Category = Ability)
	FGameplayTagContainer ActivationBlockedTags;
};

/**
 * Mapping of how ability tags block or cancel other abilities
 * 一个能力如何阻碍或取消另一个能力的映射
 */
UCLASS()
class UCoreAbilityTagRelationshipMapping : public UDataAsset
{
	GENERATED_BODY()

private:
	/** The list of relationships between different gameplay tags (which ones block or cancel others) */
	UPROPERTY(EditAnywhere, Category = Ability, meta=(TitleProperty="AbilityTag"))
	TArray<FCoreAbilityTagRelationship> AbilityTagRelationships;

public:
	/** Given a set of ability tags, parse the tag relationship and fill out tags to block and cancel */
	void GetAbilityTagsToBlockAndCancel(const FGameplayTagContainer& AbilityTags, FGameplayTagContainer* OutTagsToBlock, FGameplayTagContainer* OutTagsToCancel) const;

	/** Given a set of ability tags, add additional required and blocking tags */
	void GetRequiredAndBlockedActivationTags(const FGameplayTagContainer& AbilityTags, FGameplayTagContainer* OutActivationRequired, FGameplayTagContainer* OutActivationBlocked) const;

	/** Returns true if the specified ability tags are canceled by the passed in action tag */
	bool IsAbilityCancelledByTag(const FGameplayTagContainer& AbilityTags, const FGameplayTag& ActionTag) const;
};
