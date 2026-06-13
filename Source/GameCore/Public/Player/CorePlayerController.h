/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonPlayerController.h"

#include "CorePlayerController.generated.h"

class ACorePlayerState;
class UCoreAbilitySystemComponent;

enum class EPlayerInitState : uint8
{
	Uninitialized,
	Initializing,
	Initialized
};

/**
 * ACorePlayerController
 * 
 * 玩家控制器核心基类
 */
UCLASS(Config=Game, Meta=(ShortTooltip="The base player controller class used by this project."))
class GAMECORE_API ACorePlayerController : public ACommonPlayerController
{
	GENERATED_BODY()

public:
	ACorePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~AActor interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	//~End of AActor interface

	//~AController interface
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	virtual void InitPlayerState() override;
	virtual void CleanupPlayerState() override;
	virtual void OnRep_PlayerState() override;
	//~End of AController interface

	//~APlayerController interface
	virtual void ReceivedPlayer() override;
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetPlayer(UPlayer* InPlayer) override;
	virtual void UpdateForceFeedback(IInputInterface* InputInterface, const int32 ControllerId) override;
	virtual void UpdateHiddenComponents(const FVector& ViewLocation, TSet<FPrimitiveComponentId>& OutHiddenComponents) override;
	virtual void PreProcessInput(const float DeltaTime, const bool bGamePaused) override;
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
	//~End of APlayerController interface

	virtual bool ShouldRecordClientReplay();

public:
	UFUNCTION(BlueprintCallable, Category="GameCore|PlayerController")
	ACorePlayerState* GetCorePlayerState() const;

	UFUNCTION(BlueprintCallable, Category="GameCore|PlayerController")
	UCoreAbilitySystemComponent* GetCoreAbilitySystemComponent() const;

	UFUNCTION(BlueprintCallable, Category="GameCore|PlayerController")
	void RestartPlayer();

	UFUNCTION(Client, Reliable)
	void ClientOnPlayerInitialized();

	bool IsPlayerInitialized() const;

protected:
	/** Called when the player state is set or cleared */
	virtual void OnPlayerStateChanged();

	void CheckGameStateInitState() const;

private:
	void BroadcastOnPlayerStateChanged();

protected:
	bool bHideViewTargetPawnNextFrame = false;

	EPlayerInitState PlayerInitState = EPlayerInitState::Uninitialized;

private:
	UPROPERTY()
	TObjectPtr<APlayerState> LastSeenPlayerState;
};
