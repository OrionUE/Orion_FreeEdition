/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameplayAbility_Friend.h"

#include "Player/Friend/OrionFriendManagerSubsystemBase.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameplayAbility_Friend)

void UOrionGameplayAbility_Friend::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	if (UOrionFriendManagerSubsystemBase* FriendManager = GetWorld()->GetGameInstance()->GetSubsystem<UOrionFriendManagerSubsystemBase>())
	{
		FriendManager->RefreshFriendItems();
	}
}
