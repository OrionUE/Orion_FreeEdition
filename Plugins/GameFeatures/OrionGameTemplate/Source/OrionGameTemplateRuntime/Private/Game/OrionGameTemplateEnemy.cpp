/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Game/OrionGameTemplateEnemy.h"

#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/StaticMesh.h"
#include "Game/OrionGameTemplateGameplayComponent.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplateEnemy)

AOrionGameTemplateEnemy::AOrionGameTemplateEnemy(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bReplicates = true;
	SetReplicateMovement(true);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	SetRootComponent(MeshComponent);
	MeshComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	MeshComponent->SetRelativeScale3D(FVector(0.9f, 0.9f, 0.9f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMesh.Succeeded())
	{
		MeshComponent->SetStaticMesh(CubeMesh.Object);
	}

	LabelComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LabelComponent"));
	LabelComponent->SetupAttachment(RootComponent);
	LabelComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 105.0f));
	LabelComponent->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
	LabelComponent->SetWorldSize(28.0f);

	Health = MaxHealth;
}

void AOrionGameTemplateEnemy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, Health);
	DOREPLIFETIME(ThisClass, bDefeated);
}

bool AOrionGameTemplateEnemy::ApplyTemplateDamage(AController* InstigatorController, float DamageAmount)
{
	if (!HasAuthority() || bDefeated || DamageAmount <= 0.0f)
	{
		return false;
	}

	Health = FMath::Max(0.0f, Health - DamageAmount);

	if (Health <= 0.0f)
	{
		HandleDefeated(InstigatorController);
	}

	UpdateVisualState();
	ForceNetUpdate();
	return true;
}

void AOrionGameTemplateEnemy::OnRep_Health()
{
	UpdateVisualState();
}

void AOrionGameTemplateEnemy::HandleDefeated(AController* InstigatorController)
{
	if (bDefeated)
	{
		return;
	}

	bDefeated = true;
	SetLifeSpan(4.0f);

	if (AGameStateBase* GameState = GetWorld()->GetGameState())
	{
		if (UOrionGameTemplateGameplayComponent* TemplateGame = GameState->FindComponentByClass<UOrionGameTemplateGameplayComponent>())
		{
			TemplateGame->NotifyEnemyDefeated(this, InstigatorController);
		}
	}
}

void AOrionGameTemplateEnemy::UpdateVisualState()
{
	if (LabelComponent)
	{
		LabelComponent->SetText(FText::FromString(FString::Printf(TEXT("WILD %d"), FMath::RoundToInt(Health))));
	}

	if (MeshComponent)
	{
		MeshComponent->SetCollisionEnabled(bDefeated ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);
		MeshComponent->SetVisibility(!bDefeated);
	}
}
