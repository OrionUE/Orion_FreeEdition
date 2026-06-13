// Copyright Epic Games, Inc. All Rights Reserved.

#include "NiagaraToolsetsModule.h"
#include "Misc/CoreDelegates.h"

#include "NiagaraToolset_Info.h"
#include "NiagaraToolset_Component.h"
#include "NiagaraToolset_Blueprint.h"
#include "NiagaraToolset_System.h"
#include "NiagaraToolset_Assets.h"
#include "NiagaraToolsetJsonConverters.h"

#include "ToolsetRegistry/ToolsetRegistrySubsystem.h"

#include "ToolsetRegistry/ToolsetRegistry.h"
#include "ToolsetRegistry/UToolsetRegistry.h"

#define LOCTEXT_NAMESPACE "FNiagaraToolsetsModule"

void FNiagaraToolsetsModule::StartupModule()
{
 	FCoreDelegates::OnAllModuleLoadingPhasesComplete.AddRaw(this, &FNiagaraToolsetsModule::OnAllModuleLoadingPhasesComplete);
 	FCoreDelegates::OnPreExit.AddRaw(this, &FNiagaraToolsetsModule::OnPreExit);

	RegisterToolsets();
}

void FNiagaraToolsetsModule::ShutdownModule()
{
 	FCoreDelegates::OnAllModuleLoadingPhasesComplete.RemoveAll(this);
 	FCoreDelegates::OnPreExit.RemoveAll(this);

	UnregisterToolsets();
}

void FNiagaraToolsetsModule::OnAllModuleLoadingPhasesComplete()
{
	RegisterToolsets();
}

void FNiagaraToolsetsModule::OnPreExit()
{
	UnregisterToolsets();
}

void FNiagaraToolsetsModule::RegisterToolsets()
{
	if(!bToolsetsRegistered)
	{
		auto ToolsetRegistrySubsystem = UToolsetRegistrySubsystem::Get();
		if (ToolsetRegistrySubsystem.HasError())
		{
			return;
		}

		bToolsetsRegistered = true;
		UToolsetRegistry::RegisterToolsetClass(UNiagaraToolset_Info::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(UNiagaraToolset_Component::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(UNiagaraToolset_Blueprint::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(UNiagaraToolset_System::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(UNiagaraToolset_Assets::StaticClass());

		InstancedValueConverter = MakeShared<FToolsetNiagaraInstancedValueConverter>();
		ToolsetRegistrySubsystem.GetValue()->ToolsetRegistry.RegisterConverter(InstancedValueConverter);

		TypeDefConverter = MakeShared<FToolsetNiagaraTypeDefinitionConverter>();
		ToolsetRegistrySubsystem.GetValue()->ToolsetRegistry.RegisterConverter(TypeDefConverter);
	}
}

void FNiagaraToolsetsModule::UnregisterToolsets()
{
	if(bToolsetsRegistered)
	{
		bToolsetsRegistered = false;
		UToolsetRegistry::UnregisterToolsetClass(UNiagaraToolset_Info::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UNiagaraToolset_Component::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UNiagaraToolset_Blueprint::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UNiagaraToolset_System::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UNiagaraToolset_Assets::StaticClass());

		auto ToolsetRegistrySubsystem = UToolsetRegistrySubsystem::Get();
		if (ToolsetRegistrySubsystem.HasError())
		{
			//Exit. We can unregister our converters if the subsystem no longer exists.
			return;
		}

		if (InstancedValueConverter)
		{
			ToolsetRegistrySubsystem.GetValue()->ToolsetRegistry.UnregisterConverter(InstancedValueConverter);
		}
		InstancedValueConverter = nullptr;

		if (TypeDefConverter)
		{
			ToolsetRegistrySubsystem.GetValue()->ToolsetRegistry.UnregisterConverter(TypeDefConverter);
		}
		TypeDefConverter = nullptr;
	}
}

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNiagaraToolsetsModule, NiagaraToolsets)
