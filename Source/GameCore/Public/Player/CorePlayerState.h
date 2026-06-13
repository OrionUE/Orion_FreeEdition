/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystemInterface.h"
#include "ModularPlayerState.h"

#include "CorePlayerState.generated.h"

class UAbilitySystemComponent;
class UCoreExperienceDefinition;
class UCoreAbilitySystemComponent;
class UCorePawnData;

/**
 * ACorePlayerState
 * 
 * PlayerState核心基类
 * 
 * @note 子类需初始化AbilitySystemComponent组件
 */
UCLASS(Config=Game, Abstract)
class GAMECORE_API ACorePlayerState : public AModularPlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ACorePlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~AActor interface
	virtual void PreInitializeComponents() override;
	virtual void PostInitializeComponents() override;
	//~End of AActor interface

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	static const FName NAME_CoreAbilityReady;

public:
	void SetPawnData(const UCorePawnData* InPawnData);

	template<class T>
	const T* GetPawnData() const { return Cast<T>(PawnData); }

	UFUNCTION(BlueprintCallable, Category = "GameCore|PlayerState")
	FORCEINLINE UCoreAbilitySystemComponent* GetCoreAbilitySystemComponent() const { return AbilitySystemComponent; }
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	/** Sets the replicated view rotation, only valid on the server */
	void SetReplicatedViewRotation(const FRotator& NewRotation);

	/** Gets the replicated view rotation of this player, used for spectating */
	FORCEINLINE FRotator GetReplicatedViewRotation() const { return ReplicatedViewRotation; }

private:
	void OnExperienceLoaded(const UCoreExperienceDefinition* CurrentExperience);

protected:
	UPROPERTY(ReplicatedUsing=OnRep_PawnData)
	TObjectPtr<const UCorePawnData> PawnData;

	UFUNCTION()
	void OnRep_PawnData();

protected:
	// The ability system component sub-object used by player characters.
	UPROPERTY(VisibleAnywhere, Category = "GameCore|PlayerState")
	TObjectPtr<UCoreAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY(Replicated)
	FRotator ReplicatedViewRotation;
};
