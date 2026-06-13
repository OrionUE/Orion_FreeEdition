/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GenericTeamAgentInterface.h"

#include "OrionTeamAgentInterface.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnOrionTeamIndexChangedDelegate, UObject*, ObjectChangingTeam, int32, OldTeamID, int32, NewTeamID);

namespace OrionTeams
{
	inline int32 GenericTeamIdToInteger(FGenericTeamId ID)
	{
		return (ID == FGenericTeamId::NoTeam) ? INDEX_NONE : (int32)ID;
	}

	inline FGenericTeamId IntegerToGenericTeamId(int32 ID)
	{
		return (ID == INDEX_NONE) ? FGenericTeamId::NoTeam : FGenericTeamId((uint8)ID);
	}
}

/**
 * Interface for actors which can be associated with teams
 */
UINTERFACE(meta=(CannotImplementInterfaceInBlueprint))
class UOrionTeamAgentInterface : public UGenericTeamAgentInterface
{
	GENERATED_BODY()
};

class IOrionTeamAgentInterface : public IGenericTeamAgentInterface
{
	GENERATED_BODY()

protected:
	virtual FOnOrionTeamIndexChangedDelegate* GetOnTeamIndexChangedDelegate() { return nullptr; }

public:
	static void ConditionalBroadcastTeamChanged(TScriptInterface<IOrionTeamAgentInterface> This, FGenericTeamId OldTeamID, FGenericTeamId NewTeamID);
	
	FOnOrionTeamIndexChangedDelegate& GetTeamChangedDelegateChecked()
	{
		FOnOrionTeamIndexChangedDelegate* Result = GetOnTeamIndexChangedDelegate();
		check(Result);
		return *Result;
	}
};
