/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFramework/PlayerStart.h"
#include "OrionPlayerStart.generated.h"

enum class EOrionPlayerStartLocationOccupancy
{
	Empty,
	Partial,
	Full
};

UCLASS(Abstract, Config=Game)
class ORIONGAME_API AOrionPlayerStart : public APlayerStart
{
	GENERATED_BODY()
	
public:
	AOrionPlayerStart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	EOrionPlayerStartLocationOccupancy GetLocationOccupancy(AController* const ControllerPawnToFit) const;

	/** If this PlayerStart was not claimed, claim it for ClaimingController */
	bool TryClaim(AController* OccupyingController);
};
