/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/GameStateComponent.h"

#include "CoreSessionComponent.generated.h"

class UCoreExperienceUserFacingDefinition;
class UCommonSession_SearchResult;
class USessionScreeningCondition;

UCLASS()
class GAMECORE_API UCoreSessionComponent : public UGameStateComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CreateSession(UCoreExperienceUserFacingDefinition* InGameExperience);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void JoinSession(UCommonSession_SearchResult* InSessionSearchResult);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void JoinInvitedSession(UCommonSession_SearchResult* InSessionSearchResult);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void QuickStart(const TArray<USessionScreeningCondition*>& InSessionScreeningConditions);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void QuitSession();
};
