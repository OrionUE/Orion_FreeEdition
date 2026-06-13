/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/GameFrameworkInitStateInterface.h"
#include "Components/PawnComponent.h"

#include "CorePawnControlComponent.generated.h"

struct FInputActionValue;
struct FInputMappingContextAndPriority;

class UInputSystemConfig;
class UInputSystemComponent;

/**
 * UCorePawnControlComponent
 * 
 * Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).
 * This depends on a PawnExtensionComponent to coordinate initialization.
 * 为玩家的Controller（玩家或AI）设置输入和镜头处理等组件
 */
UCLASS(Blueprintable)
class GAMECORE_API UCorePawnControlComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()

public:
	UCorePawnControlComponent(const FObjectInitializer& ObjectInitializer);

	//~ Begin IGameFrameworkInitStateInterface interface
	virtual FName GetFeatureName() const override { return NAME_ActorFeatureName; }
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const override;
	virtual void HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) override;
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) override;
	virtual void CheckDefaultInitialization() override;
	//~ End IGameFrameworkInitStateInterface interface

protected:
	//~ Begin UActorComponent interface
	virtual void OnRegister() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~ End UActorComponent interface

public:
	/** The name of the extension event sent via UGameFrameworkComponentManager when ability inputs are ready to bind */
	static const FName NAME_BindInputsNow;

	/** The name of this component-implemented feature */
	static const FName NAME_ActorFeatureName;

public:
	/** Returns the PawnControlComponent if one exists on the specified actor. */
	UFUNCTION(BlueprintPure, Category="GameCore|Pawn")
	static UCorePawnControlComponent* FindControlComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UCorePawnControlComponent>() : nullptr); }

	/** True if this is controlled by a real player and has progressed far enough in initialization where additional input bindings can be added */
	FORCEINLINE bool IsReadyToBindInputs() const { return bReadyToBindInputs; }

	////////////////////////////////////////////////////////
	// Input
public:
	/** Adds mode-specific input config */
	void AddAdditionalInputConfig(const UInputSystemConfig* InputConfig);

	/** Removes a mode-specific input config if it has been added */
	void RemoveAdditionalInputConfig(const UInputSystemConfig* InputConfig);

protected:
	virtual void InitializePlayerInput(UInputComponent* PlayerInputComponent);

	virtual void AddNativeActionInput(UInputSystemComponent* InputComponent, const UInputSystemConfig* InputConfig) { };

	void Input_AbilityInputTagPressed(FGameplayTag InputTag);
	void Input_AbilityInputTagReleased(FGameplayTag InputTag);
	void Input_AbilityInputTagStarted(FGameplayTag InputTag);

protected:
	/** True when player input bindings have been applied, will never be true for non - players */
	bool bReadyToBindInputs;

	UPROPERTY(EditAnywhere)
	TArray<FInputMappingContextAndPriority> DefaultInputMappings;
};
