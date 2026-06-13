/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Game/OrionGameTemplatePal.h"

#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/StaticMesh.h"
#include "Game/OrionGameTemplateEnemy.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameTemplatePal)

AOrionGameTemplatePal::AOrionGameTemplatePal(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	SetReplicateMovement(true);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	SetRootComponent(MeshComponent);
	MeshComponent->SetCollisionProfileName(TEXT("Pawn"));
	MeshComponent->SetRelativeScale3D(FVector(0.55f, 0.55f, 0.55f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
	if (SphereMesh.Succeeded())
	{
		MeshComponent->SetStaticMesh(SphereMesh.Object);
	}

	LabelComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LabelComponent"));
	LabelComponent->SetupAttachment(RootComponent);
	LabelComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 80.0f));
	LabelComponent->SetHorizontalAlignment(EHorizTextAligment::EHTA_Center);
	LabelComponent->SetWorldSize(24.0f);
}

void AOrionGameTemplatePal::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!HasAuthority())
	{
		return;
	}

	if (AssistTarget && AssistTarget->IsAlive())
	{
		PalState = EOrionGameTemplatePalState::Assisting;
		MoveToward(AssistTarget->GetActorLocation(), DeltaSeconds, AttackRange);

		const float DistanceSq = FVector::DistSquared(GetActorLocation(), AssistTarget->GetActorLocation());
		if (DistanceSq <= FMath::Square(AttackRange))
		{
			AssistTarget->ApplyTemplateDamage(Cast<AController>(GetOwner()), PendingAssistDamage);
			AssistTarget = nullptr;
			PendingAssistDamage = 0.0f;
		}
	}
	else if (APawn* OwnerPawn = GetOwnerPawn())
	{
		PalState = EOrionGameTemplatePalState::Following;
		const FVector FollowLocation = OwnerPawn->GetActorLocation() - OwnerPawn->GetActorForwardVector() * 140.0f + OwnerPawn->GetActorRightVector() * 100.0f;
		MoveToward(FollowLocation, DeltaSeconds, 80.0f);
	}
	else
	{
		PalState = EOrionGameTemplatePalState::Idle;
	}

	UpdateVisualState();
}

void AOrionGameTemplatePal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, PalState);
	DOREPLIFETIME(ThisClass, OwnerPlayerState);
	DOREPLIFETIME(ThisClass, Health);
}

void AOrionGameTemplatePal::InitializePal(AController* InOwningController)
{
	if (!HasAuthority() || !InOwningController)
	{
		return;
	}

	SetOwner(InOwningController);
	OwnerPlayerState = InOwningController->PlayerState;
	UpdateVisualState();
	ForceNetUpdate();
}

void AOrionGameTemplatePal::AssistAttack(AOrionGameTemplateEnemy* Enemy, float DamageAmount)
{
	if (!HasAuthority() || !Enemy || !Enemy->IsAlive())
	{
		return;
	}

	AssistTarget = Enemy;
	PendingAssistDamage = FMath::Max(0.0f, DamageAmount);
	PalState = EOrionGameTemplatePalState::Assisting;
	UpdateVisualState();
	ForceNetUpdate();
}

void AOrionGameTemplatePal::OnRep_PalState()
{
	UpdateVisualState();
}

APawn* AOrionGameTemplatePal::GetOwnerPawn() const
{
	const AController* OwnerController = Cast<AController>(GetOwner());
	return OwnerController ? OwnerController->GetPawn() : nullptr;
}

void AOrionGameTemplatePal::UpdateVisualState()
{
	if (!LabelComponent)
	{
		return;
	}

	switch (PalState)
	{
	case EOrionGameTemplatePalState::Assisting:
		LabelComponent->SetText(NSLOCTEXT("OrionGameTemplate", "PalAssisting", "PAL: ATTACK"));
		break;

	case EOrionGameTemplatePalState::Collecting:
		LabelComponent->SetText(NSLOCTEXT("OrionGameTemplate", "PalCollecting", "PAL: GATHER"));
		break;

	case EOrionGameTemplatePalState::Following:
		LabelComponent->SetText(NSLOCTEXT("OrionGameTemplate", "PalFollowing", "PAL: FOLLOW"));
		break;

	default:
		LabelComponent->SetText(NSLOCTEXT("OrionGameTemplate", "PalIdle", "PAL"));
		break;
	}
}

void AOrionGameTemplatePal::MoveToward(const FVector& TargetLocation, float DeltaSeconds, float AcceptanceRadius)
{
	const FVector CurrentLocation = GetActorLocation();
	if (FVector::DistSquared(CurrentLocation, TargetLocation) <= FMath::Square(AcceptanceRadius))
	{
		return;
	}

	const FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaSeconds, FollowSpeed);
	SetActorLocation(NewLocation, true);
}
