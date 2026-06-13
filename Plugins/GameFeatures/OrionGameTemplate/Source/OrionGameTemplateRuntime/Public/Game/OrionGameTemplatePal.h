/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "Game/OrionGameTemplateTypes.h"
#include "GameFramework/Actor.h"

#include "OrionGameTemplatePal.generated.h"

class AOrionGameTemplateEnemy;
class AController;
class APawn;
class APlayerState;
class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class AOrionGameTemplatePal : public AActor
{
	GENERATED_BODY()

public:
	AOrionGameTemplatePal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void Tick(float DeltaSeconds) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Pal")
	void InitializePal(AController* InOwningController);

	UFUNCTION(BlueprintCallable, Category="OrionGameTemplate|Pal")
	void AssistAttack(AOrionGameTemplateEnemy* Enemy, float DamageAmount);

	UFUNCTION(BlueprintPure, Category="OrionGameTemplate|Pal")
	APlayerState* GetOwnerPlayerState() const { return OwnerPlayerState; }

protected:
	UFUNCTION()
	void OnRep_PalState();

	APawn* GetOwnerPawn() const;
	void UpdateVisualState();
	void MoveToward(const FVector& TargetLocation, float DeltaSeconds, float AcceptanceRadius);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<UStaticMeshComponent> MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<UTextRenderComponent> LabelComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="OrionGameTemplate", meta=(ClampMin="1.0"))
	float FollowSpeed = 420.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="OrionGameTemplate", meta=(ClampMin="1.0"))
	float AttackRange = 180.0f;

	UPROPERTY(ReplicatedUsing=OnRep_PalState, BlueprintReadOnly, Category="OrionGameTemplate")
	EOrionGameTemplatePalState PalState = EOrionGameTemplatePalState::Idle;

	UPROPERTY(Replicated, BlueprintReadOnly, Category="OrionGameTemplate")
	TObjectPtr<APlayerState> OwnerPlayerState;

	UPROPERTY(Replicated, BlueprintReadOnly, Category="OrionGameTemplate")
	float Health = 100.0f;

	UPROPERTY()
	TObjectPtr<AOrionGameTemplateEnemy> AssistTarget;

	float PendingAssistDamage = 0.0f;
};
