// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/CoreCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreCharacter() {}

// ********** Begin Cross Module References ********************************************************
GAMECORE_API UClass* Z_Construct_UClass_ACoreCharacter();
GAMECORE_API UClass* Z_Construct_UClass_ACoreCharacter_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnExtensionComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACoreCharacter ***********************************************************
void ACoreCharacter::StaticRegisterNativesACoreCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACoreCharacter;
UClass* ACoreCharacter::GetPrivateStaticClass()
{
	using TClass = ACoreCharacter;
	if (!Z_Registration_Info_UClass_ACoreCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreCharacter"),
			Z_Registration_Info_UClass_ACoreCharacter.InnerSingleton,
			StaticRegisterNativesACoreCharacter,
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
	return Z_Registration_Info_UClass_ACoreCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ACoreCharacter_NoRegister()
{
	return ACoreCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACoreCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ACoreCharacter\n * \n * The base character pawn class used by this project.\n * Responsible for sending events to pawn components.\n * New behavior should be added via pawn components when possible\n * \xe8\xb4\x9f\xe8\xb4\xa3\xe5\x90\x91Pawn\xe7\xbb\x84\xe4\xbb\xb6\xe5\x8f\x91\xe9\x80\x81\xe4\xba\x8b\xe4\xbb\xb6\xe6\xb6\x88\xe6\x81\xaf\n *\n * @note \xe5\xad\x90\xe7\xb1\xbb\xe9\x9c\x80\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96PawnExtComponent\xe7\xbb\x84\xe4\xbb\xb6\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CoreCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/CoreCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base character pawn class used by this project." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ACoreCharacter\n\nThe base character pawn class used by this project.\nResponsible for sending events to pawn components.\nNew behavior should be added via pawn components when possible\n\xe8\xb4\x9f\xe8\xb4\xa3\xe5\x90\x91Pawn\xe7\xbb\x84\xe4\xbb\xb6\xe5\x8f\x91\xe9\x80\x81\xe4\xba\x8b\xe4\xbb\xb6\xe6\xb6\x88\xe6\x81\xaf\n\n@note \xe5\xad\x90\xe7\xb1\xbb\xe9\x9c\x80\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96PawnExtComponent\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnExtComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GameCore|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/CoreCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnExtComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoreCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoreCharacter_Statics::NewProp_PawnExtComponent = { "PawnExtComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoreCharacter, PawnExtComponent), Z_Construct_UClass_UCorePawnExtensionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnExtComponent_MetaData), NewProp_PawnExtComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoreCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoreCharacter_Statics::NewProp_PawnExtComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoreCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACoreCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACoreCharacter, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoreCharacter_Statics::ClassParams = {
	&ACoreCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACoreCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoreCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoreCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoreCharacter()
{
	if (!Z_Registration_Info_UClass_ACoreCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoreCharacter.OuterSingleton, Z_Construct_UClass_ACoreCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoreCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoreCharacter);
ACoreCharacter::~ACoreCharacter() {}
// ********** End Class ACoreCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoreCharacter, ACoreCharacter::StaticClass, TEXT("ACoreCharacter"), &Z_Registration_Info_UClass_ACoreCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoreCharacter), 336681217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h__Script_GameCore_2228353526(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Character_CoreCharacter_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
