// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayMessageHelpers.generated.h"

struct FGameplayCueParameters;
struct FGameplayVerbMessage;

UCLASS()
class GAMEPLAYMESSAGERUNTIME_API UGameplayMessageHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GameplayMessage")
	static APlayerState* GetPlayerStateFromObject(UObject* Object);

	UFUNCTION(BlueprintCallable, Category = "GameplayMessage")
	static APlayerController* GetPlayerControllerFromObject(UObject* Object);

	UFUNCTION(BlueprintCallable, Category = "GameplayMessage")
	static FGameplayCueParameters VerbMessageToCueParameters(const FGameplayVerbMessage& Message);

	UFUNCTION(BlueprintCallable, Category = "GameplayMessage")
	static FGameplayVerbMessage CueParametersToVerbMessage(const FGameplayCueParameters& Params);
};
