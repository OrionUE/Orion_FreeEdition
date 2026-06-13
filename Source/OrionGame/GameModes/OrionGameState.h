/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameModes/CoreGameState.h"

#include "OrionGameState.generated.h"

struct FCoreVerbMessage;

/**
 * AOrionGameState
 * 
 * GameState基类
 */
UCLASS()
class AOrionGameState : public ACoreGameState
{
	GENERATED_BODY()

public:
	AOrionGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	/**
	 * Send a message that all clients will (probably) get
	 * (use only for client notifications like eliminations, server join messages, etc... that can handle being lost)
	 */
	UFUNCTION(NetMulticast, Unreliable, BlueprintCallable, Category="Orion|GameState")
	void MulticastMessageToClients(const FCoreVerbMessage Message);

	/**
	 * Send a message that all clients will be guaranteed to get
	 * (use only for client notifications that cannot handle being lost)
	 */
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category="Orion|GameState")
	void MulticastReliableMessageToClients(const FCoreVerbMessage Message);
};
