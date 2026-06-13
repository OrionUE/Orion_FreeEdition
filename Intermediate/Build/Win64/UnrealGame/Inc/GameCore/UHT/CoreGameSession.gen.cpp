// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/CoreGameSession.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreGameSession() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameSession();
GAMECORE_API UClass* Z_Construct_UClass_ACoreGameSession();
GAMECORE_API UClass* Z_Construct_UClass_ACoreGameSession_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACoreGameSession *********************************************************
void ACoreGameSession::StaticRegisterNativesACoreGameSession()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACoreGameSession;
UClass* ACoreGameSession::GetPrivateStaticClass()
{
	using TClass = ACoreGameSession;
	if (!Z_Registration_Info_UClass_ACoreGameSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreGameSession"),
			Z_Registration_Info_UClass_ACoreGameSession.InnerSingleton,
			StaticRegisterNativesACoreGameSession,
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
	return Z_Registration_Info_UClass_ACoreGameSession.InnerSingleton;
}
UClass* Z_Construct_UClass_ACoreGameSession_NoRegister()
{
	return ACoreGameSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACoreGameSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "System/CoreGameSession.h" },
		{ "ModuleRelativePath", "Public/System/CoreGameSession.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoreGameSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACoreGameSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameSession,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoreGameSession_Statics::ClassParams = {
	&ACoreGameSession::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreGameSession_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoreGameSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoreGameSession()
{
	if (!Z_Registration_Info_UClass_ACoreGameSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoreGameSession.OuterSingleton, Z_Construct_UClass_ACoreGameSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoreGameSession.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoreGameSession);
ACoreGameSession::~ACoreGameSession() {}
// ********** End Class ACoreGameSession ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoreGameSession, ACoreGameSession::StaticClass, TEXT("ACoreGameSession"), &Z_Registration_Info_UClass_ACoreGameSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoreGameSession), 1898776622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h__Script_GameCore_641651423(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
