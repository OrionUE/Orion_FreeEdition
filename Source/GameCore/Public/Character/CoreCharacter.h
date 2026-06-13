/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystemInterface.h"
#include "ModularCharacter.h"

#include "CoreCharacter.generated.h"

class UAbilitySystemComponent;
class UCoreAbilitySystemComponent;
class UCorePawnExtensionComponent;

/**
 * ACoreCharacter
 * 
 * The base character pawn class used by this project.
 * Responsible for sending events to pawn components.
 * New behavior should be added via pawn components when possible
 * 负责向Pawn组件发送事件消息
 *
 * @note 子类需初始化PawnExtComponent组件
 */
UCLASS(Config=Game, Meta=(ShortTooltip="The base character pawn class used by this project."))
class GAMECORE_API ACoreCharacter : public AModularCharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ACoreCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void PawnClientRestart() override;

public:
	static const FName NAME_CoreCharacterInit;

	UCoreAbilitySystemComponent* GetCoreAbilitySystemComponent() const;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void CheckPawnControlInitState();

protected:
	virtual void OnAbilitySystemInitialized();
	virtual void OnAbilitySystemUninitialized();

	virtual void PossessedBy(AController* NewController) override;
	virtual void UnPossessed() override;

	virtual void OnRep_Controller() override;
	virtual void OnRep_PlayerState() override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	void InitializeGameplayTags();

	void UnInitAndDestroy();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GameCore|Character", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCorePawnExtensionComponent> PawnExtComponent;
};
