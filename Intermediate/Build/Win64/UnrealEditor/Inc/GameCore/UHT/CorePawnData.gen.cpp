// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/CorePawnData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCorePawnData() {}

// ********** Begin Cross Module References ********************************************************
COMMONINPUTSYSTEM_API UClass* Z_Construct_UClass_UInputSystemConfig_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySet_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnData();
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnData_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCorePawnData ************************************************************
void UCorePawnData::StaticRegisterNativesUCorePawnData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCorePawnData;
UClass* UCorePawnData::GetPrivateStaticClass()
{
	using TClass = UCorePawnData;
	if (!Z_Registration_Info_UClass_UCorePawnData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CorePawnData"),
			Z_Registration_Info_UClass_UCorePawnData.InnerSingleton,
			StaticRegisterNativesUCorePawnData,
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
	return Z_Registration_Info_UClass_UCorePawnData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCorePawnData_NoRegister()
{
	return UCorePawnData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCorePawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UCorePawnData\n * \n * \xe7\x94\xa8\xe4\xba\x8e\xe5\xae\x9a\xe4\xb9\x89Pawn\xe5\xb1\x9e\xe6\x80\xa7\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84\xe4\xb8\x8d\xe5\x8f\xaf\xe5\x8f\x98\xe8\xb5\x84\xe4\xba\xa7\n */" },
#endif
		{ "IncludePath", "Character/CorePawnData.h" },
		{ "ModuleRelativePath", "Public/Character/CorePawnData.h" },
		{ "ShortTooltip", "Data asset used to define a Pawn." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCorePawnData\n\n\xe7\x94\xa8\xe4\xba\x8e\xe5\xae\x9a\xe4\xb9\x89Pawn\xe5\xb1\x9e\xe6\x80\xa7\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84\xe4\xb8\x8d\xe5\x8f\xaf\xe5\x8f\x98\xe8\xb5\x84\xe4\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[] = {
		{ "Category", "Data|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pawn\xe7\xb1\xbb\xe7\x9a\x84\xe5\xae\x9e\xe4\xbe\x8b\xe5\x8c\x96\xef\xbc\x88\xe4\xbd\xbf\xe7\x94\xa8Pawn\xe6\x88\x96""Character\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/CorePawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn\xe7\xb1\xbb\xe7\x9a\x84\xe5\xae\x9e\xe4\xbe\x8b\xe5\x8c\x96\xef\xbc\x88\xe4\xbd\xbf\xe7\x94\xa8Pawn\xe6\x88\x96""Character\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySets_MetaData[] = {
		{ "Category", "Data|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb5\x8b\xe4\xba\x88Pawn\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\xe9\x9b\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/CorePawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x8b\xe4\xba\x88Pawn\xe7\x9a\x84\xe8\x83\xbd\xe5\x8a\x9b\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[] = {
		{ "Category", "Data|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pawn\xe8\xa1\x8c\xe4\xb8\xba\xe4\xb8\x8e\xe8\x83\xbd\xe5\x8a\x9b\xe6\xa0\x87\xe7\xad\xbeTag\xe7\x9a\x84\xe6\x98\xa0\xe5\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/CorePawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn\xe8\xa1\x8c\xe4\xb8\xba\xe4\xb8\x8e\xe8\x83\xbd\xe5\x8a\x9b\xe6\xa0\x87\xe7\xad\xbeTag\xe7\x9a\x84\xe6\x98\xa0\xe5\xb0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Data|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input configuration used by player controlled pawns to create input mappings and bind input actions.\n// \xe8\xbe\x93\xe5\x85\xa5\xe9\x85\x8d\xe7\xbd\xae\xef\xbc\x9a\xe5\xaf\xb9Pawn\xe5\x88\x9b\xe5\xbb\xba\xe6\x8e\xa7\xe5\x88\xb6\xe8\xbe\x93\xe5\x85\xa5\xe5\x92\x8c\xe6\x93\x8d\xe4\xbd\x9c\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/CorePawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input configuration used by player controlled pawns to create input mappings and bind input actions.\n\xe8\xbe\x93\xe5\x85\xa5\xe9\x85\x8d\xe7\xbd\xae\xef\xbc\x9a\xe5\xaf\xb9Pawn\xe5\x88\x9b\xe5\xbb\xba\xe6\x8e\xa7\xe5\x88\xb6\xe8\xbe\x93\xe5\x85\xa5\xe5\x92\x8c\xe6\x93\x8d\xe4\xbd\x9c\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePawnData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCorePawnData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCorePawnData, PawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnClass_MetaData), NewProp_PawnClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePawnData_Statics::NewProp_AbilitySets_Inner = { "AbilitySets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCorePawnData_Statics::NewProp_AbilitySets = { "AbilitySets", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCorePawnData, AbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySets_MetaData), NewProp_AbilitySets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePawnData_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCorePawnData, TagRelationshipMapping), Z_Construct_UClass_UCoreAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRelationshipMapping_MetaData), NewProp_TagRelationshipMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePawnData_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCorePawnData, InputConfig), Z_Construct_UClass_UInputSystemConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePawnData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePawnData_Statics::NewProp_PawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePawnData_Statics::NewProp_AbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePawnData_Statics::NewProp_AbilitySets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePawnData_Statics::NewProp_TagRelationshipMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePawnData_Statics::NewProp_InputConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCorePawnData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCorePawnData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCorePawnData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCorePawnData_Statics::ClassParams = {
	&UCorePawnData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCorePawnData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCorePawnData_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCorePawnData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCorePawnData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCorePawnData()
{
	if (!Z_Registration_Info_UClass_UCorePawnData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCorePawnData.OuterSingleton, Z_Construct_UClass_UCorePawnData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCorePawnData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePawnData);
UCorePawnData::~UCorePawnData() {}
// ********** End Class UCorePawnData **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnData_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCorePawnData, UCorePawnData::StaticClass, TEXT("UCorePawnData"), &Z_Registration_Info_UClass_UCorePawnData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCorePawnData), 3977658629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnData_h__Script_GameCore_393775054(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnData_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnData_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
