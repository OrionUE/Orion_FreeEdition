/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "OrionGameTemplateEnemy.generated.h"

class UStaticMeshComponent;
class UTextRenderComponent;
class AController;

UCLASS(Blueprintable)
class AOrionGameTemplateEnemy : public AActor
{
	GENERATED_BODY()

public:
	AOrionGameTemplateEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Combat")
	bool ApplyTemplateDamage(AController* InstigatorController, float DamageAmount);

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|Combat")
	bool IsAlive() const { return Health > 0.0f; }

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|Combat")
	float GetHealth() const { return Health; }

protected:
	UFUNCTION()
	void OnRep_Health();

	void HandleDefeated(AController* InstigatorController);
	void UpdateVisualState();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<UStaticMeshComponent> MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<UTextRenderComponent> LabelComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="OrionGameTemplate", meta=(ClampMin="1.0"))
	float MaxHealth = 60.0f;

	UPROPERTY(ReplicatedUsing=OnRep_Health, BlueprintReadOnly, Category="OrionGameTemplate")
	float Health = 60.0f;

	UPROPERTY(Replicated, BlueprintReadOnly, Category="OrionGameTemplate")
	bool bDefeated = false;
};
