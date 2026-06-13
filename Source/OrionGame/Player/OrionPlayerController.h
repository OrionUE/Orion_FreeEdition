/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Player/CorePlayerController.h"

#include "OrionPlayerController.generated.h"

class UOrionPlayerInfoComponent;
class UOrionSettingsShared;

/**
 * AOrionPlayerController
 * 
 * 玩家控制器基类
 */
UCLASS()
class ORIONGAME_API AOrionPlayerController : public ACorePlayerController
{
	GENERATED_BODY()

public:
	AOrionPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~APlayerController interface
	virtual void SetPlayer(UPlayer* InPlayer) override;
	virtual void AddCheats(bool bForce) override;
	//~End of APlayerController interface

	//~ACorePlayerController interface
	virtual bool ShouldRecordClientReplay() override;
	//~End of ACorePlayerController interface

protected:
	void OnSettingsChanged(const UOrionSettingsShared* InSettings);

protected:
	UPROPERTY()
	TObjectPtr<UOrionPlayerInfoComponent> PlayerInfoComponent;
};

/**
 * AOrionReplayPlayerController
 * A player controller used for replay capture and playback
 */
UCLASS()
class AOrionReplayPlayerController : public AOrionPlayerController
{
	GENERATED_BODY()

	virtual void Tick(float DeltaSeconds) override;
	virtual void SmoothTargetViewRotation(APawn* TargetPawn, float DeltaSeconds) override;
	virtual bool ShouldRecordClientReplay() override;

	/** Callback for when the game state's RecorderPlayerState gets replicated during replay playback */
	void RecorderPlayerStateUpdated(APlayerState* NewRecorderPlayerState);

	/** Callback for when the followed player state changes pawn */
	UFUNCTION()
	void OnPlayerStatePawnSet(APlayerState* ChangedPlayerState, APawn* NewPlayerPawn, APawn* OldPlayerPawn);

	// The player state we are currently following
	UPROPERTY(Transient)
	TObjectPtr<APlayerState> FollowedPlayerState;
};
