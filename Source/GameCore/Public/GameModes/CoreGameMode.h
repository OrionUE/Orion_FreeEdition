/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "ModularGameMode.h"

#include "CoreGameMode.generated.h"

enum class ECommonUserPrivilege : uint8;
enum class ECommonSessionOnlineMode : uint8;
enum class ECommonUserOnlineContext : uint8;
class UCoreExperienceDefinition;
class UCommonUserInfo;
class UCorePawnData;

/**
 * Post login event, triggered when a player or bot joins the game as well as after seamless and non-seamless travel
 * This is called after the player has finished initialization
 */
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnCoreGameModePlayerInitialized, AGameModeBase* /*GameMode*/, AController* /*NewPlayer*/);

/**
 * ACoreGameMode
 * 
 * 游戏模式核心基类
 *
 * @see https://idealitycentury.yuque.com/bt1dl9/project_doc/tyraebi7rh8t9us8
 */
UCLASS(Config=Game, Meta=(ShortTooltip="The base game mode class used by this project."))
class GAMECORE_API ACoreGameMode : public AModularGameModeBase
{
	GENERATED_BODY()

public:
	ACoreGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * 从玩家控制器中获取到PawnData
	 * @param InController			PlayerController
	 * @return						PawnData
	 */
	UFUNCTION(BlueprintCallable, Category = "GameCore|Pawn")
	const UCorePawnData* GetPawnDataForController(const AController* InController) const;

	//~AGameModeBase interface
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController) override;
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) override;
	virtual bool ShouldSpawnAtStartSpot(AController* Player) override;
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) override;
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	virtual void FinishRestartPlayer(AController* NewPlayer, const FRotator& StartRotation) override;
	virtual bool PlayerCanRestart_Implementation(APlayerController* Player) override;
	virtual void InitGameState() override;
	virtual bool UpdatePlayerStartSpot(AController* Player, const FString& Portal, FString& OutErrorMessage) override;
	virtual void GenericPlayerInitialization(AController* NewPlayer) override;
	virtual void FailedToRestartPlayer(AController* NewPlayer) override;
	//~End of AGameModeBase interface

	/**
	 * Restart (respawn) the specified player or bot next frame
	 * 
	 * @param bForceReset If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)
	 */
	UFUNCTION(BlueprintCallable)
	void RequestPlayerRestartNextFrame(AController* Controller, bool bForceReset = false);

	/** Agnostic version of PlayerCanRestart that can be used for both player bots and players */
	virtual bool ControllerCanRestart(AController* Controller);

protected:
	void OnExperienceLoaded(const UCoreExperienceDefinition* CurrentExperience);
	bool IsExperienceLoaded() const;

	void OnMatchAssignmentGiven(const FPrimaryAssetId& ExperienceId, const FString& ExperienceIdSource) const;

	bool TryDedicatedServerLogin();
	void HostDedicatedServerMatch(ECommonSessionOnlineMode OnlineMode);

	UFUNCTION()
	void OnUserInitializedForDedicatedServer(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);

public:
	// Delegate called on player initialization, described above 
	FOnCoreGameModePlayerInitialized OnGameModePlayerInitialized;
};
