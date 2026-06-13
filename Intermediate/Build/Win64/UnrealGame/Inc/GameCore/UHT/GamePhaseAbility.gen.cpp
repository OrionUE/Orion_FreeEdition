// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameModes/Phases/GamePhaseAbility.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGamePhaseAbility() {}

// ********** Begin Cross Module References ********************************************************
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameplayAbility();
GAMECORE_API UClass* Z_Construct_UClass_UGamePhaseAbility();
GAMECORE_API UClass* Z_Construct_UClass_UGamePhaseAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGamePhaseAbility ********************************************************
void UGamePhaseAbility::StaticRegisterNativesUGamePhaseAbility()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGamePhaseAbility;
UClass* UGamePhaseAbility::GetPrivateStaticClass()
{
	using TClass = UGamePhaseAbility;
	if (!Z_Registration_Info_UClass_UGamePhaseAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GamePhaseAbility"),
			Z_Registration_Info_UClass_UGamePhaseAbility.InnerSingleton,
			StaticRegisterNativesUGamePhaseAbility,
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
	return Z_Registration_Info_UClass_UGamePhaseAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UGamePhaseAbility_NoRegister()
{
	return UGamePhaseAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGamePhaseAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Input" },
		{ "IncludePath", "GameModes/Phases/GamePhaseAbility.h" },
		{ "ModuleRelativePath", "Public/GameModes/Phases/GamePhaseAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamePhaseTag_MetaData[] = {
		{ "Category", "Game Phase" },
		{ "ModuleRelativePath", "Public/GameModes/Phases/GamePhaseAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamePhaseTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamePhaseAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGamePhaseAbility_Statics::NewProp_GamePhaseTag = { "GamePhaseTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGamePhaseAbility, GamePhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamePhaseTag_MetaData), NewProp_GamePhaseTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGamePhaseAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamePhaseAbility_Statics::NewProp_GamePhaseTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGamePhaseAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGamePhaseAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCoreGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGamePhaseAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGamePhaseAbility_Statics::ClassParams = {
	&UGamePhaseAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGamePhaseAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGamePhaseAbility_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGamePhaseAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGamePhaseAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGamePhaseAbility()
{
	if (!Z_Registration_Info_UClass_UGamePhaseAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGamePhaseAbility.OuterSingleton, Z_Construct_UClass_UGamePhaseAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGamePhaseAbility.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGamePhaseAbility);
UGamePhaseAbility::~UGamePhaseAbility() {}
// ********** End Class UGamePhaseAbility **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGamePhaseAbility, UGamePhaseAbility::StaticClass, TEXT("UGamePhaseAbility"), &Z_Registration_Info_UClass_UGamePhaseAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGamePhaseAbility), 1101681258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h__Script_GameCore_4224502491(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_Phases_GamePhaseAbility_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
