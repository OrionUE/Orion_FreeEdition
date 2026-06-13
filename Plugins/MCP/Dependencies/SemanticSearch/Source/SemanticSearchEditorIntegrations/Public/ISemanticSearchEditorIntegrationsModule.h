// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

namespace UE::SemanticSearch
{
	class ISemanticSearchEditorIntegrationsModule : public IModuleInterface
	{
	public:
		static ISemanticSearchEditorIntegrationsModule& Get()
		{
			static const FName ModuleName = "SemanticSearchEditorIntegrations";
			return FModuleManager::LoadModuleChecked<ISemanticSearchEditorIntegrationsModule>(ModuleName);
		}
	};
}
