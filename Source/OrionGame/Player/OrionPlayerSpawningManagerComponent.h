/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionPlayerStart.h"
#include "Components/GameStateComponent.h"

#include "OrionPlayerSpawningManagerComponent.generated.h"

class AOrionPlayerStart;
class AOrionGameMode;

/**
 * UOrionPlayersSpawningManagerComponent
 * 玩家生成管理器组件
 */
UCLASS()
class ORIONGAME_API UOrionPlayerSpawningManagerComponent : public UGameStateComponent
{
	GENERATED_BODY()

public:
	UOrionPlayerSpawningManagerComponent(const FObjectInitializer& ObjectInitializer);

	/** UActorComponent */
	virtual void InitializeComponent() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	/** ~UActorComponent */
	
	////////////////////////////////////////////////////////
	// 将以下这些调用从GameMode代理到这个组件，这样每个体验都可以更容易地自定义重生系统
private:
	friend AOrionGameMode;
	AActor* ChoosePlayerStart(AController* Player);
	bool ControllerCanRestart(AController* Player);
	void FinishRestartPlayer(AController* NewPlayer, const FRotator& StartRotation);

	////////////////////////////////////////////////////////
protected:
	APlayerStart* GetFirstRandomUnoccupiedPlayerStart(AController* Controller, const TArray<AOrionPlayerStart*>& StartPoints) const;
	
	virtual AActor* OnChoosePlayerStart(AController* Player, TArray<AOrionPlayerStart*>& PlayerStarts) { return nullptr; }

	virtual void OnFinishRestartPlayer(AController* Player, const FRotator& StartRotation) { }

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName=OnFinishRestartPlayer))
	void K2_OnFinishRestartPlayer(AController* Player, const FRotator& StartRotation);

private:
	void OnLevelAdded(ULevel* InLevel, UWorld* InWorld);
	void HandleOnActorSpawned(AActor* SpawnedActor);

private:
#if WITH_EDITOR
	APlayerStart* FindPlayFromHereStart(const AController* Player) const;
#endif

	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<AOrionPlayerStart>> CachedPlayerStarts;
};
