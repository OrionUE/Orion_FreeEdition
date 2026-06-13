// Copyright Epic Games, Inc. All Rights Reserved.

#include "SemanticSearchToolset.h"

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "ToolsetRegistry/UToolsetRegistry.h"

class FSemanticSearchToolsetModule : public IModuleInterface
{
public:
	virtual void StartupModule() override
	{
		UToolsetRegistry::RegisterToolsetClass(USemanticSearchToolset::StaticClass());
	}

	virtual void ShutdownModule() override
	{
		UToolsetRegistry::UnregisterToolsetClass(USemanticSearchToolset::StaticClass());
	}
};

IMPLEMENT_MODULE(FSemanticSearchToolsetModule, SemanticSearchToolset);
