/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionTeamAgentInterface.h"

#include "CoreLogChannels.h"
#include "OrionLogChannels.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionTeamAgentInterface)

void IOrionTeamAgentInterface::ConditionalBroadcastTeamChanged(TScriptInterface<IOrionTeamAgentInterface> This, FGenericTeamId OldTeamID, FGenericTeamId NewTeamID)
{
	if (OldTeamID != NewTeamID)
	{
		const int32 OldTeamIndex = OrionTeams::GenericTeamIdToInteger(OldTeamID); 
		const int32 NewTeamIndex = OrionTeams::GenericTeamIdToInteger(NewTeamID);

		UObject* ThisObj = This.GetObject();
		UE_LOG(LogOrionTeams, Verbose, TEXT("[%s] %s assigned team %d"), *GetClientServerContextString(ThisObj), *GetPathNameSafe(ThisObj), NewTeamIndex);

		This.GetInterface()->GetTeamChangedDelegateChecked().Broadcast(ThisObj, OldTeamIndex, NewTeamIndex);
	}
}
