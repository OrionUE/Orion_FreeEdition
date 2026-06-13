// Copyright Epic Games, Inc. All Rights Reserved.

#include "Modules/ModuleManager.h"
#include "ToolsetRegistry/UToolsetRegistry.h"

#include "EditorAppToolset.h"
#include "LogsToolset.h"

#define LOCTEXT_NAMESPACE "FEditorToolsetModule"

class FEditorToolsetModule : public IModuleInterface
{
	void StartupModule()
	{
		UToolsetRegistry::RegisterToolsetClass(UEditorAppToolset::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(ULogsToolset::StaticClass());
	}

	void ShutdownModule()
	{
		UToolsetRegistry::UnregisterToolsetClass(ULogsToolset::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UEditorAppToolset::StaticClass());
	}
};

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEditorToolsetModule, EditorToolset)
