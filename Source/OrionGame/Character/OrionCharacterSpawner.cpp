/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionCharacterSpawner.h"

#if WITH_EDITORONLY_DATA
#include "Components/ArrowComponent.h"
#endif

#include "OrionCharacter.h"
#include "OrionCharacterSpawnerManager.h"
#include "GameModes/OrionExperienceManagerComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionCharacterSpawner)

////////////////////////////////////////////////////////
// FOrionCharacterSpawnerContext

FOrionCharacterSpawnerContext::FOrionCharacterSpawnerContext(AOrionCharacterSpawner* InCharacterSpawner)
{
	CharacterSpawner = InCharacterSpawner;
}

void FOrionCharacterSpawnerContext::SetOwnerPlayer(AController* InController)
{
	OwnerController = InController;
}

void FOrionCharacterSpawnerContext::ClearOwnerPlayer()
{
	OwnerController = nullptr;
}

////////////////////////////////////////////////////////
// FOrionCharacterSpawnerGroup

FOrionCharacterSpawnerGroup::FOrionCharacterSpawnerGroup(const FGenericTeamId& InTeamID)
{
	TeamID = InTeamID;
}

void FOrionCharacterSpawnerGroup::AddNewSpawner(AOrionCharacterSpawner* InSpawner)
{
	for (const auto SpawnerTmp : Spawners)
	{
		if (SpawnerTmp.CharacterSpawner->GetIndex() == InSpawner->GetIndex())
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("The spawner %s index is duplicate"), *GetNameSafe(InSpawner)));
			}

			return;
		}
	}

	Spawners.AddUnique(FOrionCharacterSpawnerContext(InSpawner));
	Spawners.Sort([](const FOrionCharacterSpawnerContext& SpawnerContextA, const FOrionCharacterSpawnerContext& SpawnerContextB)
	{
		return SpawnerContextA.CharacterSpawner->GetIndex() < SpawnerContextB.CharacterSpawner->GetIndex();
	});
}

void FOrionCharacterSpawnerGroup::RemoveSpawner(AOrionCharacterSpawner* InSpawner)
{
	Spawners.Remove(FOrionCharacterSpawnerContext(InSpawner));
}

void FOrionCharacterSpawnerGroup::FindOptimalEmptySpawner(FOrionCharacterSpawnerContext*& OptimalSpawner)
{
	for (auto& SpawnerTmp : Spawners)
	{
		if (SpawnerTmp.OwnerController == nullptr)
		{
			OptimalSpawner = &SpawnerTmp;
			return;
		}
	}

	OptimalSpawner = nullptr;
}

////////////////////////////////////////////////////////
// AOrionCharacterSpawner

AOrionCharacterSpawner::AOrionCharacterSpawner(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

#if WITH_EDITORONLY_DATA
	SpawnArrow = CreateEditorOnlyDefaultSubobject<UArrowComponent>(TEXT("SpawnArrow"));

	if (SpawnArrow)
	{
		SpawnArrow->ArrowColor = FColor(150, 200, 255);

		SpawnArrow->ArrowSize = 1.0f;
		SpawnArrow->bTreatAsASprite = true;
		SpawnArrow->bIsScreenSizeScaled = true;
		SpawnArrow->SetupAttachment(RootComponent);
	}
#endif
}

void AOrionCharacterSpawner::BeginPlay()
{
	Super::BeginPlay();

	// Only register spawner on the server.
	if (HasAuthority())
	{
		AGameStateBase* GameState = GetWorld()->GetGameState();
		check(GameState);

		UOrionExperienceManagerComponent* ExperienceManager = GameState->FindComponentByClass<UOrionExperienceManagerComponent>();
		check(ExperienceManager);

		ExperienceManager->CallOrRegister_OnExperienceLoaded_LowPriority(FOnCoreExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
	}
}

void AOrionCharacterSpawner::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (HasAuthority())
	{
		AGameStateBase* GameState = GetWorld()->GetGameState();
		UOrionCharacterSpawnerManager* SpawnerManager = GameState->FindComponentByClass<UOrionCharacterSpawnerManager>();
		if (SpawnerManager)
		{
			SpawnerManager->UnregisterCharacterSpawner(this);
		}
	}
}

void AOrionCharacterSpawner::OnExperienceLoaded(const UCoreExperienceDefinition* Experience)
{
	RegisterSpawner();
}

void AOrionCharacterSpawner::RegisterSpawner()
{
	AGameStateBase* GameState = GetWorld()->GetGameState();
	UOrionCharacterSpawnerManager* SpawnerManager = GameState->FindComponentByClass<UOrionCharacterSpawnerManager>();
	if (SpawnerManager)
	{
		SpawnerManager->RegisterCharacterSpawner(this);
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("SpawnerManager not found!")));
		}
	}
}

void AOrionCharacterSpawner::SpawnCharacter()
{
	GetWorld()->SpawnActor<AOrionCharacter>(InCharacterClass, GetActorLocation(), GetActorRotation());
}
