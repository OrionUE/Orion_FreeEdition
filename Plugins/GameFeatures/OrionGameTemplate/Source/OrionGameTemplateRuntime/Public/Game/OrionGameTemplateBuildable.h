/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "Game/OrionGameTemplateTypes.h"
#include "GameFramework/Actor.h"

#include "OrionGameTemplateBuildable.generated.h"

class APlayerState;
class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class AOrionGameTemplateBuildable : public AActor
{
	GENERATED_BODY()

public:
	AOrionGameTemplateBuildable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Building")
	void InitializeBuildable(EOrionGameTemplateStructureType InStructureType, APlayerState* InOwnerPlayerState);

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|Building")
	EOrionGameTemplateStructureType GetStructureType() const { return StructureType; }

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|Building")
	APlayerState* GetOwnerPlayerState() const { return OwnerPlayerState; }

protected:
	UFUNCTION()
	void OnRep_BuildableState();

	void UpdateVisualState();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<UStaticMeshComponent> MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<UTextRenderComponent> LabelComponent;

	UPROPERTY(ReplicatedUsing=OnRep_BuildableState, BlueprintReadOnly, Category="OrionGameTemplate")
	EOrionGameTemplateStructureType StructureType = EOrionGameTemplateStructureType::Campfire;

	UPROPERTY(ReplicatedUsing=OnRep_BuildableState, BlueprintReadOnly, Category="OrionGameTemplate")
	float Health = 100.0f;

	UPROPERTY(Replicated, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<APlayerState> OwnerPlayerState;
};
