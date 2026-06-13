// Copyright Epic Games, Inc. All Rights Reserved.

using System.Collections.Generic;
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class NiagaraToolsets : ModuleRules
	{
		public NiagaraToolsets(ReadOnlyTargetRules Target) : base(Target)
		{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PrivateIncludePaths.AddRange(
				new[]
				{
					Path.Combine(EngineDirectory, "Plugins/FX/Niagara/Source/NiagaraEditor/Private"),
					Path.Combine(EngineDirectory, "Plugins/FX/Niagara/Source/NiagaraEditor/Internal"),
					Path.Combine(EngineDirectory, "Plugins/FX/Niagara/Source/NiagaraEditor/Private/ViewModels"),
					Path.Combine(EngineDirectory, "Plugins/FX/Niagara/Source/NiagaraEditor/Private/ViewModels/Stack"),
					Path.Combine(EngineDirectory, "Plugins/FX/Niagara/Source/NiagaraBlueprintNodes/Internal"),
				}
			);

			PrivateDependencyModuleNames.AddRange(
				new[]
				{
					"NiagaraEditor",
					"Core",
					"RHI",
					"RenderCore",
					"CoreUObject",
					"Engine",
					"Niagara",
					"NiagaraCore",
					"ToolsetRegistry",
					"NiagaraBlueprintNodes",
					"Kismet",
					"BlueprintGraph",
					"Json",
					"JsonUtilities",
					"JsonUtilitiesEditor",
					"DeveloperSettings",
					"StructUtils",
				}
			);

			if (Target.bBuildEditor == true)
			{
				
				PrivateDependencyModuleNames.AddRange(
					new[]
					{
						"UnrealEd",
						"StructUtilsEditor",
					}
				);
			}
		}
	}
}
