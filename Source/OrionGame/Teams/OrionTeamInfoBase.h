/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFramework/Info.h"
#include "System/GameplayTagStack.h"

#include "OrionTeamInfoBase.generated.h"

class UOrionTeamSubsystem;
class UOrionTeamCreationComponent;

UCLASS(Abstract)
class AOrionTeamInfoBase : public AInfo
{
	GENERATED_BODY()

	friend UOrionTeamSubsystem;
	friend UOrionTeamCreationComponent;

public:
	AOrionTeamInfoBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
	virtual void RegisterWithTeamSubsystem(UOrionTeamSubsystem* Subsystem);
	void TryRegisterWithTeamSubsystem();

public:
	int32 GetTeamId() const { return TeamId; }

private:
	void SetTeamId(int32 NewTeamId);

	UFUNCTION()
	void OnRep_TeamId();

protected:
	UPROPERTY(Replicated)
	FGameplayTagStackContainer TeamTags;

private:
	UPROPERTY(ReplicatedUsing=OnRep_TeamId)
	int32 TeamId;
};
