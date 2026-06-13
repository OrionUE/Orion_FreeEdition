/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Game/OrionGameTemplateResourceNode.h"

#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/StaticMesh.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplateResourceNode)

AOrionGameTemplateResourceNode::AOrionGameTemplateResourceNode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bReplicates = true;
	SetReplicateMovement(true);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	SetRootComponent(MeshComponent);
	MeshComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	MeshComponent->SetRelativeScale3D(FVector(0.75f, 0.75f, 0.75f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMesh.Succeeded())
	{
		MeshComponent->SetStaticMesh(CubeMesh.Object);
	}

	LabelComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LabelComponent"));
	LabelComponent->SetupAttachment(RootComponent);
	LabelComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 90.0f));
	LabelComponent->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
	LabelComponent->SetWorldSize(28.0f);
}

void AOrionGameTemplateResourceNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, ResourceType);
	DOREPLIFETIME(ThisClass, bDepleted);
	DOREPLIFETIME(ThisClass, AvailableAmount);
}

void AOrionGameTemplateResourceNode::InitializeResource(EOrionGameTemplateResourceType InResourceType, int32 InResourceAmount)
{
	if (!HasAuthority())
	{
		return;
	}

	ResourceType = InResourceType;
	ResourceAmount = FMath::Max(1, InResourceAmount);
	AvailableAmount = ResourceAmount;
	bDepleted = false;
	UpdateVisualState();
	ForceNetUpdate();
}

bool AOrionGameTemplateResourceNode::TryCollect(AController* CollectingController, int32& OutCollectedAmount)
{
	OutCollectedAmount = 0;

	if (!HasAuthority() || !CollectingController || !IsAvailable())
	{
		return false;
	}

	OutCollectedAmount = AvailableAmount;
	AvailableAmount = 0;
	bDepleted = true;
	UpdateVisualState();

	if (RespawnDelay > 0.0f)
	{
		GetWorldTimerManager().SetTimer(RespawnTimerHandle, this, &ThisClass::ResetResource, RespawnDelay, false);
	}

	ForceNetUpdate();
	return true;
}

void AOrionGameTemplateResourceNode::OnRep_ResourceState()
{
	UpdateVisualState();
}

void AOrionGameTemplateResourceNode::ResetResource()
{
	if (!HasAuthority())
	{
		return;
	}

	AvailableAmount = ResourceAmount;
	bDepleted = false;
	UpdateVisualState();
	ForceNetUpdate();
}

void AOrionGameTemplateResourceNode::UpdateVisualState()
{
	const FString ResourceName = (ResourceType == EOrionGameTemplateResourceType::Wood) ? TEXT("WOOD") : TEXT("ORE");
	const FString StateName = bDepleted ? TEXT("EMPTY") : ResourceName;

	if (LabelComponent)
	{
		LabelComponent->SetText(FText::FromString(StateName));
	}

	if (MeshComponent)
	{
		MeshComponent->SetVisibility(!bDepleted);
		MeshComponent->SetCollisionEnabled(bDepleted ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);
	}
}
