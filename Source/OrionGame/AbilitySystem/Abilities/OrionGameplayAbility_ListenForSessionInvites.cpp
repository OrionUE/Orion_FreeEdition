/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameplayAbility_ListenForSessionInvites.h"

#include "GameFramework/GameStateBase.h"
#include "Session/SessionSearchResultSteam.h"
#include "Session/CoreSessionComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameplayAbility_ListenForSessionInvites)

void UOrionGameplayAbility_ListenForSessionInvites::JoinSession(FBlueprintSessionResult InSessionResult)
{
	FCoreSessionResult CoreSessionResult(InSessionResult);

	if (USessionSearchResultSteam* SessionResultObj = NewObject<USessionSearchResultSteam>(this))
	{
		SessionResultObj->SetSessionResult(CoreSessionResult);

		UCoreSessionComponent* GameSessionComponent = GetWorld()->GetGameState()->FindComponentByClass<UCoreSessionComponent>();
		check(GameSessionComponent);

		GameSessionComponent->JoinInvitedSession(SessionResultObj);
	}
}
