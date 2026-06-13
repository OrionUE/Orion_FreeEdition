/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Components/GameStateComponent.h"
#include "Game/OrionGameTemplateTypes.h"

#include "OrionGameTemplateGameplayComponent.generated.h"

class AOrionGameTemplateEnemy;
class AOrionGameTemplateBuildable;
class AOrionGameTemplatePal;
class AOrionGameTemplateResourceNode;
class AOrionGameTemplateWorkbench;
class AController;
class UOrionGameTemplatePlayerGameplayComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOrionGameTemplateGameplayComponent : public UGameStateComponent
{
	GENERATED_BODY()

public:
	UOrionGameTemplateGameplayComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate")
	void HandlePlayerReady(AController* PlayerController);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate")
	bool TryCollectNearestResource(AController* PlayerController, float InteractionRange, EOrionGameTemplateResourceType& OutResourceType, int32& OutCollectedAmount);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate")
	bool TryAttackNearestEnemy(AController* PlayerController, float AttackRange, float DamageAmount);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate")
	bool TryInteractNearestWorkbench(AController* PlayerController, float InteractionRange);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate")
	bool TryBuildStructure(AController* PlayerController, EOrionGameTemplateStructureType StructureType, float BuildRange);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate")
	bool TryTradeNearestWorkbench(AController* PlayerController, EOrionGameTemplateTradeOfferType TradeOfferType, float InteractionRange);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate")
	bool TrySubmitBeacon(AOrionGameTemplateWorkbench* Workbench, AController* PlayerController);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate")
	void NotifyEnemyDefeated(AOrionGameTemplateEnemy* Enemy, AController* InstigatorController);

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate")
	const FOrionGameTemplateTeamState& GetTeamState() const { return TeamState; }

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate")
	int32 GetWoodGoal() const { return WoodGoal; }

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate")
	int32 GetOreGoal() const { return OreGoal; }

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate")
	int32 GetEnemyGoal() const { return EnemyGoal; }

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate")
	int32 GetStructureGoal() const { return StructureGoal; }

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate")
	int32 GetTradeGoal() const { return TradeGoal; }

	UPROPERTY(BlueprintAssignable, Category="OrionGameTemplate")
	FOrionGameTemplateTeamStateChanged OnTeamStateChanged;

protected:
	UFUNCTION()
	void OnRep_TeamState();

	void UpdateObjectiveReadiness();
	void BroadcastTeamStateChanged();

	AOrionGameTemplateResourceNode* FindNearestResource(AController* PlayerController, float InteractionRange) const;
	AOrionGameTemplateEnemy* FindNearestEnemy(AController* PlayerController, float AttackRange) const;
	AOrionGameTemplateWorkbench* FindNearestWorkbench(AController* PlayerController, float InteractionRange) const;
	AOrionGameTemplatePal* FindPalForController(AController* PlayerController) const;
	AOrionGameTemplatePal* EnsurePalForController(AController* PlayerController);
	UOrionGameTemplatePlayerGameplayComponent* FindPlayerGameplayComponent(AController* PlayerController) const;

	FVector GetControllerLocation(AController* PlayerController) const;
	FVector GetBuildLocation(AController* PlayerController) const;

protected:
	UPROPERTY(EditDefaultsOnly, Category="OrionGameTemplate|Spawning")
	TSubclassOf<AOrionGameTemplatePal> PalClass;

	UPROPERTY(EditDefaultsOnly, Category="OrionGameTemplate|Spawning")
	TSubclassOf<AOrionGameTemplateBuildable> BuildableClass;

	UPROPERTY(EditDefaultsOnly, Category="OrionGameTemplate|Objective", meta=(ClampMin="1"))
	int32 WoodGoal = 10;

	UPROPERTY(EditDefaultsOnly, Category="OrionGameTemplate|Objective", meta=(ClampMin="1"))
	int32 OreGoal = 6;

	UPROPERTY(EditDefaultsOnly, Category="OrionGameTemplate|Objective", meta=(ClampMin="1"))
	int32 EnemyGoal = 3;

	UPROPERTY(EditDefaultsOnly, Category="OrionGameTemplate|Objective", meta=(ClampMin="1"))
	int32 StructureGoal = 1;

	UPROPERTY(EditDefaultsOnly, Category="OrionGameTemplate|Objective", meta=(ClampMin="1"))
	int32 TradeGoal = 1;

	UPROPERTY(EditDefaultsOnly, Category="OrionGameTemplate|Objective", meta=(ClampMin="1.0"))
	float PalAssistDamage = 12.0f;

	UPROPERTY(ReplicatedUsing=OnRep_TeamState, BlueprintReadOnly, Category="OrionGameTemplate")
	FOrionGameTemplateTeamState TeamState;

	UPROPERTY()
	TArray<TObjectPtr<AOrionGameTemplatePal>> SpawnedPals;
};
