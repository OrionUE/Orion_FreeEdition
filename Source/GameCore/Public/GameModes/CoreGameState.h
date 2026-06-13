/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystemInterface.h"
#include "ModularGameState.h"

#include "CoreGameState.generated.h"

class UCoreAbilitySystemComponent;
class UCoreExperienceManagerComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnRecorderPlayerStateChanged, APlayerState*)

/**
 * ACoreGameState
 * 
 * GameState核心基类
 * 
 * @note 子类需初始化ExperienceManagerComponent、AbilitySystemComponent组件
 */
UCLASS(Config=Game, Abstract)
class GAMECORE_API ACoreGameState : public AModularGameStateBase, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ACoreGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//~AActor interface
	virtual void PreInitializeComponents() override;
	virtual void PostInitializeComponents() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaSeconds) override;
	//~End of AActor interface

	//~IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~End of IAbilitySystemInterface

public:
	FORCEINLINE float GetServerFPS() const { return ServerFPS; }
	FORCEINLINE APlayerState* GetRecorderPlayerState() const { return RecorderPlayerState; }

	UFUNCTION(BlueprintCallable, Category="GameCore|GameState")
	FORCEINLINE UCoreAbilitySystemComponent* GetCoreAbilitySystemComponent() const { return AbilitySystemComponent; }

public:
	// Delegate called when the replay player state changes
	FOnRecorderPlayerStateChanged OnRecorderPlayerStateChangedEvent;

protected:
	// Handles loading and managing the current gameplay experience
	UPROPERTY()
	TObjectPtr<UCoreExperienceManagerComponent> ExperienceManagerComponent;

	// The ability system component sub object for game-wide things (primarily gameplay cues)
	UPROPERTY(VisibleAnywhere, Category="GameCore|GameState")
	TObjectPtr<UCoreAbilitySystemComponent> AbilitySystemComponent;

protected:
	UPROPERTY(Replicated)
	float ServerFPS;

	// The player state that recorded a replay, it is used to select the right pawn to follow
	// This is only set in replay streams and is not replicated normally
	UPROPERTY(Transient, ReplicatedUsing=OnRep_RecorderPlayerState)
	TObjectPtr<APlayerState> RecorderPlayerState;

	UFUNCTION()
	void OnRep_RecorderPlayerState();
};
