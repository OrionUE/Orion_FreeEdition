/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Game/OrionGameTemplateBuildable.h"

#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplateBuildable)

AOrionGameTemplateBuildable::AOrionGameTemplateBuildable(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bReplicates = true;
	SetReplicateMovement(true);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	SetRootComponent(MeshComponent);
	MeshComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	MeshComponent->SetRelativeScale3D(FVector(1.1f, 1.1f, 0.55f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMesh(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
	if (CylinderMesh.Succeeded())
	{
		MeshComponent->SetStaticMesh(CylinderMesh.Object);
	}

	LabelComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LabelComponent"));
	LabelComponent->SetupAttachment(RootComponent);
	LabelComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 95.0f));
	LabelComponent->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
	LabelComponent->SetWorldSize(24.0f);
	UpdateVisualState();
}

void AOrionGameTemplateBuildable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, StructureType);
	DOREPLIFETIME(ThisClass, Health);
	DOREPLIFETIME(ThisClass, OwnerPlayerState);
}

void AOrionGameTemplateBuildable::InitializeBuildable(EOrionGameTemplateStructureType InStructureType, APlayerState* InOwnerPlayerState)
{
	if (!HasAuthority())
	{
		return;
	}

	StructureType = InStructureType;
	OwnerPlayerState = InOwnerPlayerState;
	Health = StructureType == EOrionGameTemplateStructureType::Campfire ? 100.0f : 150.0f;
	UpdateVisualState();
	ForceNetUpdate();
}

void AOrionGameTemplateBuildable::OnRep_BuildableState()
{
	UpdateVisualState();
}

void AOrionGameTemplateBuildable::UpdateVisualState()
{
	if (!LabelComponent)
	{
		return;
	}

	if (StructureType == EOrionGameTemplateStructureType::Campfire)
	{
		LabelComponent->SetText(NSLOCTEXT("OrionGameTemplate", "BuildableCampfire", "CAMPFIRE"));
	}
	else
	{
		LabelComponent->SetText(NSLOCTEXT("OrionGameTemplate", "BuildableStorageCrate", "STORAGE"));
	}
}
