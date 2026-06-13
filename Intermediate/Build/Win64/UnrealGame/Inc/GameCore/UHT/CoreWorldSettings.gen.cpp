// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/CoreWorldSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreWorldSettings() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
GAMECORE_API UClass* Z_Construct_UClass_ACoreWorldSettings();
GAMECORE_API UClass* Z_Construct_UClass_ACoreWorldSettings_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreExperienceDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACoreWorldSettings *******************************************************
void ACoreWorldSettings::StaticRegisterNativesACoreWorldSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACoreWorldSettings;
UClass* ACoreWorldSettings::GetPrivateStaticClass()
{
	using TClass = ACoreWorldSettings;
	if (!Z_Registration_Info_UClass_ACoreWorldSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreWorldSettings"),
			Z_Registration_Info_UClass_ACoreWorldSettings.InnerSingleton,
			StaticRegisterNativesACoreWorldSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACoreWorldSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_ACoreWorldSettings_NoRegister()
{
	return ACoreWorldSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACoreWorldSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The default world settings object, used primarily to set the default gameplay experience to use when playing on this map.\n * \xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\x96\xe7\x95\x8c\xe8\xae\xbe\xe7\xbd\xae\n * \xe8\xae\xbe\xe7\xbd\xae\xe5\xbd\x93\xe5\x89\x8d\xe5\x85\xb3\xe5\x8d\xa1\xe7\x9a\x84""Experience\n *\n * @note\n * \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8""DefaultEngine.ini\xe6\xb7\xbb\xe5\x8a\xa0\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\xe5\x92\x8c\xe8\xb7\xaf\xe5\xbe\x84\n * [/Script/Engine.Engine]\n * WorldSettingsClassName=/Script/ModuleName.WorldSettingsClassName\n */" },
#endif
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication LevelInstance Input Movement Collision Transformation HLOD DataLayers" },
		{ "IncludePath", "GameModes/CoreWorldSettings.h" },
		{ "ModuleRelativePath", "Public/GameModes/CoreWorldSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default world settings object, used primarily to set the default gameplay experience to use when playing on this map.\n\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\x96\xe7\x95\x8c\xe8\xae\xbe\xe7\xbd\xae\n\xe8\xae\xbe\xe7\xbd\xae\xe5\xbd\x93\xe5\x89\x8d\xe5\x85\xb3\xe5\x8d\xa1\xe7\x9a\x84""Experience\n\n@note\n\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8""DefaultEngine.ini\xe6\xb7\xbb\xe5\x8a\xa0\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\xe5\x92\x8c\xe8\xb7\xaf\xe5\xbe\x84\n[/Script/Engine.Engine]\nWorldSettingsClassName=/Script/ModuleName.WorldSettingsClassName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameplayExperience_MetaData[] = {
		{ "Category", "GameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default experience to use when a server opens this map if it is not overridden by the user-facing experience\n" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreWorldSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default experience to use when a server opens this map if it is not overridden by the user-facing experience" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceStandaloneNetMode_MetaData[] = {
		{ "Category", "PIE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When set, the net mode will be forced to Standalone when you hit Play in the editor\n" },
#endif
		{ "ModuleRelativePath", "Public/GameModes/CoreWorldSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When set, the net mode will be forced to Standalone when you hit Play in the editor" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultGameplayExperience;
#if WITH_EDITORONLY_DATA
	static void NewProp_ForceStandaloneNetMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceStandaloneNetMode;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoreWorldSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ACoreWorldSettings_Statics::NewProp_DefaultGameplayExperience = { "DefaultGameplayExperience", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreWorldSettings, DefaultGameplayExperience), Z_Construct_UClass_UCoreExperienceDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameplayExperience_MetaData), NewProp_DefaultGameplayExperience_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_ACoreWorldSettings_Statics::NewProp_ForceStandaloneNetMode_SetBit(void* Obj)
{
	((ACoreWorldSettings*)Obj)->ForceStandaloneNetMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACoreWorldSettings_Statics::NewProp_ForceStandaloneNetMode = { "ForceStandaloneNetMode", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACoreWorldSettings), &Z_Construct_UClass_ACoreWorldSettings_Statics::NewProp_ForceStandaloneNetMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceStandaloneNetMode_MetaData), NewProp_ForceStandaloneNetMode_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoreWorldSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreWorldSettings_Statics::NewProp_DefaultGameplayExperience,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreWorldSettings_Statics::NewProp_ForceStandaloneNetMode,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreWorldSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoreWorldSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWorldSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreWorldSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoreWorldSettings_Statics::ClassParams = {
	&ACoreWorldSettings::StaticClass,
	"game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACoreWorldSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoreWorldSettings_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreWorldSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoreWorldSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoreWorldSettings()
{
	if (!Z_Registration_Info_UClass_ACoreWorldSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoreWorldSettings.OuterSingleton, Z_Construct_UClass_ACoreWorldSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoreWorldSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoreWorldSettings);
ACoreWorldSettings::~ACoreWorldSettings() {}
// ********** End Class ACoreWorldSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoreWorldSettings, ACoreWorldSettings::StaticClass, TEXT("ACoreWorldSettings"), &Z_Registration_Info_UClass_ACoreWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoreWorldSettings), 2282760493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h__Script_GameCore_3248231842(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_CoreWorldSettings_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
