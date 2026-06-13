// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/CoreGameData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreGameData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameData();
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameData_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreGameData ************************************************************
void UCoreGameData::StaticRegisterNativesUCoreGameData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreGameData;
UClass* UCoreGameData::GetPrivateStaticClass()
{
	using TClass = UCoreGameData;
	if (!Z_Registration_Info_UClass_UCoreGameData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGameData"),
			Z_Registration_Info_UClass_UCoreGameData.InnerSingleton,
			StaticRegisterNativesUCoreGameData,
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
	return Z_Registration_Info_UClass_UCoreGameData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreGameData_NoRegister()
{
	return UCoreGameData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UCoreGameData\n * \n * \xe5\x85\xa8\xe5\xb1\x80\xe6\xb8\xb8\xe6\x88\x8f\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84\xe4\xb8\x8d\xe5\x8f\xaf\xe5\x8f\x98\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xe5\x9f\xba\xe7\xb1\xbb\n */" },
#endif
		{ "IncludePath", "System/CoreGameData.h" },
		{ "ModuleRelativePath", "Public/System/CoreGameData.h" },
		{ "ShortTooltip", "Data asset containing global game data." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCoreGameData\n\n\xe5\x85\xa8\xe5\xb1\x80\xe6\xb8\xb8\xe6\x88\x8f\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84\xe4\xb8\x8d\xe5\x8f\xaf\xe5\x8f\x98\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGameData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreGameData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreGameData_Statics::ClassParams = {
	&UCoreGameData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreGameData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreGameData()
{
	if (!Z_Registration_Info_UClass_UCoreGameData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreGameData.OuterSingleton, Z_Construct_UClass_UCoreGameData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreGameData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGameData);
UCoreGameData::~UCoreGameData() {}
// ********** End Class UCoreGameData **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreGameData, UCoreGameData::StaticClass, TEXT("UCoreGameData"), &Z_Registration_Info_UClass_UCoreGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreGameData), 3832016802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h__Script_GameCore_2553005151(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameData_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
