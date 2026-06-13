/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "Game/OrionGameTemplateTypes.h"
#include "GameFramework/Actor.h"

#include "OrionGameTemplateResourceNode.generated.h"

class UStaticMeshComponent;
class UTextRenderComponent;
class AController;

UCLASS(Blueprintable)
class AOrionGameTemplateResourceNode : public AActor
{
	GENERATED_BODY()

public:
	AOrionGameTemplateResourceNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Resource")
	void InitializeResource(EOrionGameTemplateResourceType InResourceType, int32 InResourceAmount);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Resource")
	bool TryCollect(AController* CollectingController, int32& OutCollectedAmount);

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|Resource")
	bool IsAvailable() const { return !bDepleted && AvailableAmount > 0; }

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|Resource")
	EOrionGameTemplateResourceType GetResourceType() const { return ResourceType; }

protected:
	UFUNCTION()
	void OnRep_ResourceState();

	void ResetResource();
	void UpdateVisualState();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<UStaticMeshComponent> MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<UTextRenderComponent> LabelComponent;

	UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly, Category="OrionGameTemplate")
	EOrionGameTemplateResourceType ResourceType = EOrionGameTemplateResourceType::Wood;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="OrionGameTemplate", meta=(ClampMin="1"))
	int32 ResourceAmount = 2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="OrionGameTemplate", meta=(ClampMin="0.0"))
	float RespawnDelay = 12.0f;

	UPROPERTY(ReplicatedUsing=OnRep_ResourceState, BlueprintReadOnly, Category="OrionGameTemplate")
	bool bDepleted = false;

	UPROPERTY(ReplicatedUsing=OnRep_ResourceState, BlueprintReadOnly, Category="OrionGameTemplate")
	int32 AvailableAmount = 2;

	FTimerHandle RespawnTimerHandle;
};
