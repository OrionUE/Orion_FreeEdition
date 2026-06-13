/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Game/OrionGameTemplateWorkbench.h"

#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/StaticMesh.h"
#include "Game/OrionGameTemplateGameplayComponent.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplateWorkbench)

AOrionGameTemplateWorkbench::AOrionGameTemplateWorkbench(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bReplicates = true;
	SetReplicateMovement(true);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	SetRootComponent(MeshComponent);
	MeshComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	MeshComponent->SetRelativeScale3D(FVector(1.2f, 1.2f, 0.35f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMesh(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
	if (CylinderMesh.Succeeded())
	{
		MeshComponent->SetStaticMesh(CylinderMesh.Object);
	}

	LabelComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LabelComponent"));
	LabelComponent->SetupAttachment(RootComponent);
	LabelComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 110.0f));
	LabelComponent->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
	LabelComponent->SetWorldSize(28.0f);
	UpdateVisualState();
}

void AOrionGameTemplateWorkbench::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, bSubmitted);
}

bool AOrionGameTemplateWorkbench::TrySubmitObjective(AController* SubmittingController)
{
	if (!HasAuthority() || bSubmitted || !SubmittingController)
	{
		return false;
	}

	if (AGameStateBase* GameState = GetWorld()->GetGameState())
	{
		if (UOrionGameTemplateGameplayComponent* TemplateGame = GameState->FindComponentByClass<UOrionGameTemplateGameplayComponent>())
		{
			if (TemplateGame->TrySubmitBeacon(this, SubmittingController))
			{
				bSubmitted = true;
				UpdateVisualState();
				ForceNetUpdate();
				return true;
			}
		}
	}

	return false;
}

void AOrionGameTemplateWorkbench::OnRep_Submitted()
{
	UpdateVisualState();
}

void AOrionGameTemplateWorkbench::UpdateVisualState()
{
	if (LabelComponent)
	{
		LabelComponent->SetText(bSubmitted ? NSLOCTEXT("OrionGameTemplate", "WorkbenchComplete", "BEACON ONLINE") : NSLOCTEXT("OrionGameTemplate", "WorkbenchReady", "WORKBENCH"));
	}
}
