/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionExperienceDefinition.h"

#include "Misc/DataValidation.h"
#include "Player/OrionPlayerAccount.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionExperienceDefinition)

#define LOCTEXT_NAMESPACE "Orion"

UOrionExperienceDefinition::UOrionExperienceDefinition()
{
}

#if WITH_EDITOR
EDataValidationResult UOrionExperienceDefinition::IsDataValid(FDataValidationContext& Context) const
{
	EDataValidationResult Result = Super::IsDataValid(Context);

	if (!PlayerAccountClass)
	{
		Result = EDataValidationResult::Invalid;
		Context.AddError(LOCTEXT("PlayerAccountClassIsNull", "PlayerAccountClass is null"));
	}

	return Result;
}
#endif

#undef LOCTEXT_NAMESPACE
