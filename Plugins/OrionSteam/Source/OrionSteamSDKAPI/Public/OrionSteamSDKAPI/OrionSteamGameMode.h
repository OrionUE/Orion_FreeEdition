/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "OrionSteamGameMode.generated.h"

UCLASS()
class ORIONSTEAMSDKAPI_API AOrionSteamGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
};
