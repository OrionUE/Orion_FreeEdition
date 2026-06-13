// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/CoreGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreGameInstance() {}

// ********** Begin Cross Module References ********************************************************
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameInstance();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreGameInstance ********************************************************
void UCoreGameInstance::StaticRegisterNativesUCoreGameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreGameInstance;
UClass* UCoreGameInstance::GetPrivateStaticClass()
{
	using TClass = UCoreGameInstance;
	if (!Z_Registration_Info_UClass_UCoreGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGameInstance"),
			Z_Registration_Info_UClass_UCoreGameInstance.InnerSingleton,
			StaticRegisterNativesUCoreGameInstance,
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
	return Z_Registration_Info_UClass_UCoreGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreGameInstance_NoRegister()
{
	return UCoreGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UCoreGameInstance\n * \n * \xe6\xb8\xb8\xe6\x88\x8f\xe5\xae\x9e\xe4\xbe\x8b\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n *\n * @note\n * \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8""DefaultEngine\xe9\x85\x8d\xe7\xbd\xae\xe4\xb8\xad\xef\xbc\x8c[/Script/EngineSettings.GameMapsSettings]\xe7\x9a\x84GameInstanceClass\xef\xbc\x8c\xe6\x8c\x87\xe5\xae\x9a\xe6\xad\xa4\xe7\xb1\xbb\xe6\x88\x96\xe5\x85\xb6\xe6\xb4\xbe\xe7\x94\x9f\xe7\xb1\xbb\n */" },
#endif
		{ "IncludePath", "System/CoreGameInstance.h" },
		{ "ModuleRelativePath", "Public/System/CoreGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCoreGameInstance\n\n\xe6\xb8\xb8\xe6\x88\x8f\xe5\xae\x9e\xe4\xbe\x8b\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n\n@note\n\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8""DefaultEngine\xe9\x85\x8d\xe7\xbd\xae\xe4\xb8\xad\xef\xbc\x8c[/Script/EngineSettings.GameMapsSettings]\xe7\x9a\x84GameInstanceClass\xef\xbc\x8c\xe6\x8c\x87\xe5\xae\x9a\xe6\xad\xa4\xe7\xb1\xbb\xe6\x88\x96\xe5\x85\xb6\xe6\xb4\xbe\xe7\x94\x9f\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreGameInstance_Statics::ClassParams = {
	&UCoreGameInstance::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreGameInstance()
{
	if (!Z_Registration_Info_UClass_UCoreGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreGameInstance.OuterSingleton, Z_Construct_UClass_UCoreGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreGameInstance.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGameInstance);
UCoreGameInstance::~UCoreGameInstance() {}
// ********** End Class UCoreGameInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreGameInstance, UCoreGameInstance::StaticClass, TEXT("UCoreGameInstance"), &Z_Registration_Info_UClass_UCoreGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreGameInstance), 1885101833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h__Script_GameCore_775530763(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
