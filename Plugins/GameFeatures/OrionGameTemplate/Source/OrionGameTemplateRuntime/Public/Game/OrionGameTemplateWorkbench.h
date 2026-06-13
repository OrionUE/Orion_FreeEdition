/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "OrionGameTemplateWorkbench.generated.h"

class UStaticMeshComponent;
class UTextRenderComponent;
class AController;

UCLASS(Blueprintable)
class AOrionGameTemplateWorkbench : public AActor
{
	GENERATED_BODY()

public:
	AOrionGameTemplateWorkbench(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Objective")
	bool TrySubmitObjective(AController* SubmittingController);

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|Objective")
	bool IsSubmitted() const { return bSubmitted; }

protected:
	UFUNCTION()
	void OnRep_Submitted();

	void UpdateVisualState();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<UStaticMeshComponent> MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<UTextRenderComponent> LabelComponent;

	UPROPERTY(ReplicatedUsing=OnRep_Submitted, BlueprintReadOnly, Category="OrionGameTemplate")
	bool bSubmitted = false;
};
