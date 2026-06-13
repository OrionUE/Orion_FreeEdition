/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/GameFrameworkInitStateInterface.h"
#include "Components/PawnComponent.h"

#include "CorePawnExtensionComponent.generated.h"

class UCoreAbilitySystemComponent;
class UCorePawnData;

/**
 * UCorePawnExtensionComponent
 * 
 * Component that adds functionality to all Pawn classes, so it can be used for characters/vehicles/etc.
 * This coordinates the initialization of other components.
 * 负责协调其他组件初始化
 *
 * @note 需在Character类中创建并初始化该组件
 */
UCLASS()
class GAMECORE_API UCorePawnExtensionComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()

public:
	UCorePawnExtensionComponent(const FObjectInitializer& ObjectInitializer);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** The name of this overall feature, this one depends on the other named component features */
	static const FName NAME_ActorFeatureName;
	
	//~ Begin IGameFrameworkInitStateInterface interface
	virtual FName GetFeatureName() const override { return NAME_ActorFeatureName; }

	/**
	 * 检查当前初始化是否完成，完成后过渡到下一个状态
	 * 
	 * @param CurrentState		当前状态
	 * @param DesiredState		即将转换的状态
	 * @return					初始化完成返回true，未完成返回false
	 */
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const override;
	
	virtual void HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) override;

	/** 响应所有状态变化 */
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) override;
	
	/** 检查当前状态的初始化是否完成，是否可以进入下一个状态 */
	virtual void CheckDefaultInitialization() override;
	//~ End IGameFrameworkInitStateInterface interface

protected:
	//~ Begin UActorComponent interface
	virtual void OnRegister() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~ End UActorComponent interface

public:
	/** Should be called by the owning pawn to become the avatar of the ability system. */
	void InitializeAbilitySystem(UCoreAbilitySystemComponent* InASC, AActor* InOwnerActor);

	/** Should be called by the owning pawn to remove itself as the avatar of the ability system. */
	void UninitializeAbilitySystem();

	/** Should be called by the owning pawn when the pawn's controller changes. */
	void HandleControllerChanged();

	/** Should be called by the owning pawn when the player state has been replicated. */
	void HandlePlayerStateReplicated();

	/** Should be called by the owning pawn when the input component is setup. */
	void SetupPlayerInputComponent();

	/** Register with the OnAbilitySystemInitialized delegate and broadcast if our pawn has been registered with the ability system component */
	void OnAbilitySystemInitialized_RegisterAndCall(FSimpleMulticastDelegate::FDelegate Delegate);

	/** Register with the OnAbilitySystemUninitialized delegate fired when our pawn is removed as the ability system's avatar actor */
	void OnAbilitySystemUninitialized_Register(FSimpleMulticastDelegate::FDelegate Delegate);

public:
	/** Sets the current pawn data */
	void SetPawnData(const UCorePawnData* InPawnData);

	/** Gets the pawn data, which is used to specify pawn properties in data */
	template <class T>
	const T* GetPawnData() const { return Cast<T>(PawnData); }

	/** Returns the pawn extension component if one exists on the specified actor. */
	UFUNCTION(BlueprintPure, Category = "GameCore|Pawn")
	static UCorePawnExtensionComponent* FindPawnExtensionComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UCorePawnExtensionComponent>() : nullptr); }
	
	UFUNCTION(BlueprintPure, Category = "GameCore|Pawn")
	FORCEINLINE UCoreAbilitySystemComponent* GetCoreAbilitySystemComponent() const { return AbilitySystemComponent; }

protected:
	/** Pawn data used to create the pawn. Specified from a spawn function or on a placed instance. */
	UPROPERTY(EditInstanceOnly, ReplicatedUsing = OnRep_PawnData, Category = "GameCore|Pawn")
	TObjectPtr<const UCorePawnData> PawnData;

	UFUNCTION()
	void OnRep_PawnData();

	/** Pointer to the ability system component that is cached for convenience. */
	UPROPERTY(Transient)
	TObjectPtr<UCoreAbilitySystemComponent> AbilitySystemComponent;

	/** Delegate fired when our pawn becomes the ability system's avatar actor */
	FSimpleMulticastDelegate OnAbilitySystemInitialized;

	/** Delegate fired when our pawn is removed as the ability system's avatar actor */
	FSimpleMulticastDelegate OnAbilitySystemUninitialized;
};
