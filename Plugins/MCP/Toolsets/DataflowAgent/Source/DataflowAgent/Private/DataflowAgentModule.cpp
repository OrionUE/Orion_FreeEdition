// Copyright Epic Games, Inc. All Rights Reserved.

#include "DataflowAgentModule.h"

#include "DataflowAgentToolset.h"
#include "Misc/CoreDelegates.h"
#include "ToolsetRegistry/UToolsetRegistry.h"

DEFINE_LOG_CATEGORY(LogDataflowAgent);

#define LOCTEXT_NAMESPACE "FDataflowAgentModule"

void FDataflowAgentModule::StartupModule()
{
	UToolsetRegistry::RegisterToolsetClass(UDataflowAgentToolset::StaticClass());
}

void FDataflowAgentModule::ShutdownModule()
{
	UToolsetRegistry::UnregisterToolsetClass(UDataflowAgentToolset::StaticClass());
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDataflowAgentModule, DataflowAgent)
