// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/CoreAssetManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreAssetManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAssetManager();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAssetManager_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameData_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnData_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreAssetManager ********************************************************
void UCoreAssetManager::StaticRegisterNativesUCoreAssetManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreAssetManager;
UClass* UCoreAssetManager::GetPrivateStaticClass()
{
	using TClass = UCoreAssetManager;
	if (!Z_Registration_Info_UClass_UCoreAssetManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreAssetManager"),
			Z_Registration_Info_UClass_UCoreAssetManager.InnerSingleton,
			StaticRegisterNativesUCoreAssetManager,
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
	return Z_Registration_Info_UClass_UCoreAssetManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreAssetManager_NoRegister()
{
	return UCoreAssetManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UCoreAssetManager\n * \n * \xe6\xb8\xb8\xe6\x88\x8f\xe8\xb5\x84\xe4\xba\xa7\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe5\x9f\xba\xe7\xb1\xbb\n * \xe8\xa6\x86\xe7\x9b\x96\xe5\x8a\x9f\xe8\x83\xbd\xe5\x92\x8c\xe5\xad\x98\xe5\x82\xa8\xe6\xb8\xb8\xe6\x88\x8f\xe7\x89\xb9\xe5\xae\x9a\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe5\xae\x9e\xe7\x8e\xb0\n * \n * @note\n * \xe9\x9c\x80\xe5\x9c\xa8""DefaultGame.ini\xe4\xb8\xad\xe9\x85\x8d\xe7\xbd\xae""CoreGameDataPath\xe3\x80\x81""DefaultPawnData\n * \xe9\x9c\x80\xe5\x9c\xa8""DefaultEngine.ini\xe6\xb7\xbb\xe5\x8a\xa0\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\xe5\x92\x8c\xe8\xb7\xaf\xe5\xbe\x84\n * [/Script/Engine.Engine]\n * AssetManagerClassName=/Script/ModuleName.AssetManagerClassName\n */" },
#endif
		{ "IncludePath", "System/CoreAssetManager.h" },
		{ "ModuleRelativePath", "Public/System/CoreAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCoreAssetManager\n\n\xe6\xb8\xb8\xe6\x88\x8f\xe8\xb5\x84\xe4\xba\xa7\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe5\x9f\xba\xe7\xb1\xbb\n\xe8\xa6\x86\xe7\x9b\x96\xe5\x8a\x9f\xe8\x83\xbd\xe5\x92\x8c\xe5\xad\x98\xe5\x82\xa8\xe6\xb8\xb8\xe6\x88\x8f\xe7\x89\xb9\xe5\xae\x9a\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe5\xae\x9e\xe7\x8e\xb0\n\n@note\n\xe9\x9c\x80\xe5\x9c\xa8""DefaultGame.ini\xe4\xb8\xad\xe9\x85\x8d\xe7\xbd\xae""CoreGameDataPath\xe3\x80\x81""DefaultPawnData\n\xe9\x9c\x80\xe5\x9c\xa8""DefaultEngine.ini\xe6\xb7\xbb\xe5\x8a\xa0\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\xe5\x92\x8c\xe8\xb7\xaf\xe5\xbe\x84\n[/Script/Engine.Engine]\nAssetManagerClassName=/Script/ModuleName.AssetManagerClassName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoreGameDataPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global game data asset to use.\n" },
#endif
		{ "ModuleRelativePath", "Public/System/CoreAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global game data asset to use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDataMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Loaded version of the game data\n" },
#endif
		{ "ModuleRelativePath", "Public/System/CoreAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loaded version of the game data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pawn data used when spawning player pawns if there isn't one set on the player state.\n" },
#endif
		{ "ModuleRelativePath", "Public/System/CoreAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn data used when spawning player pawns if there isn't one set on the player state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedAssets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Assets loaded and tracked by the asset manager.\n// \xe8\xb5\x84\xe4\xba\xa7\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x92\x8c\xe8\xb7\x9f\xe8\xb8\xaa\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/System/CoreAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assets loaded and tracked by the asset manager.\n\xe8\xb5\x84\xe4\xba\xa7\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x92\x8c\xe8\xb7\x9f\xe8\xb8\xaa\xe7\x9a\x84\xe8\xb5\x84\xe4\xba\xa7" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CoreGameDataPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameDataMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameDataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GameDataMap;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultPawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedAssets_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LoadedAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_CoreGameDataPath = { "CoreGameDataPath", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAssetManager, CoreGameDataPath), Z_Construct_UClass_UCoreGameData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoreGameDataPath_MetaData), NewProp_CoreGameDataPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_GameDataMap_ValueProp = { "GameDataMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_GameDataMap_Key_KeyProp = { "GameDataMap_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_GameDataMap = { "GameDataMap", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAssetManager, GameDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDataMap_MetaData), NewProp_GameDataMap_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAssetManager, DefaultPawnData), Z_Construct_UClass_UCorePawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPawnData_MetaData), NewProp_DefaultPawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_LoadedAssets_ElementProp = { "LoadedAssets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_LoadedAssets = { "LoadedAssets", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAssetManager, LoadedAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedAssets_MetaData), NewProp_LoadedAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAssetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_CoreGameDataPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_GameDataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_GameDataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_GameDataMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_DefaultPawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_LoadedAssets_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAssetManager_Statics::NewProp_LoadedAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAssetManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreAssetManager_Statics::ClassParams = {
	&UCoreAssetManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCoreAssetManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAssetManager_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreAssetManager()
{
	if (!Z_Registration_Info_UClass_UCoreAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreAssetManager.OuterSingleton, Z_Construct_UClass_UCoreAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreAssetManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAssetManager);
UCoreAssetManager::~UCoreAssetManager() {}
// ********** End Class UCoreAssetManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreAssetManager, UCoreAssetManager::StaticClass, TEXT("UCoreAssetManager"), &Z_Registration_Info_UClass_UCoreAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreAssetManager), 1071772740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h__Script_GameCore_2404469338(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreAssetManager_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
