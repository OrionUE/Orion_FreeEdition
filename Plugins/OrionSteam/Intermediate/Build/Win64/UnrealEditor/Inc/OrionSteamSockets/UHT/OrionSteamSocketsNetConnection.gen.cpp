// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamSocketsNetConnection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamSocketsNetConnection() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
ORIONSTEAMSOCKETS_API UClass* Z_Construct_UClass_UOrionSteamSocketsNetConnection();
ORIONSTEAMSOCKETS_API UClass* Z_Construct_UClass_UOrionSteamSocketsNetConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamSockets();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamSocketsNetConnection ******************************************
void UOrionSteamSocketsNetConnection::StaticRegisterNativesUOrionSteamSocketsNetConnection()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamSocketsNetConnection;
UClass* UOrionSteamSocketsNetConnection::GetPrivateStaticClass()
{
	using TClass = UOrionSteamSocketsNetConnection;
	if (!Z_Registration_Info_UClass_UOrionSteamSocketsNetConnection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamSocketsNetConnection"),
			Z_Registration_Info_UClass_UOrionSteamSocketsNetConnection.InnerSingleton,
			StaticRegisterNativesUOrionSteamSocketsNetConnection,
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
	return Z_Registration_Info_UClass_UOrionSteamSocketsNetConnection.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamSocketsNetConnection_NoRegister()
{
	return UOrionSteamSocketsNetConnection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamSocketsNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamSocketsNetConnection.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSocketsNetConnection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamSocketsNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamSocketsNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamSocketsNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamSocketsNetConnection_Statics::ClassParams = {
	&UOrionSteamSocketsNetConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamSocketsNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamSocketsNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamSocketsNetConnection()
{
	if (!Z_Registration_Info_UClass_UOrionSteamSocketsNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamSocketsNetConnection.OuterSingleton, Z_Construct_UClass_UOrionSteamSocketsNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamSocketsNetConnection.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamSocketsNetConnection);
UOrionSteamSocketsNetConnection::~UOrionSteamSocketsNetConnection() {}
// ********** End Class UOrionSteamSocketsNetConnection ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSockets_Public_OrionSteamSocketsNetConnection_h__Script_OrionSteamSockets_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamSocketsNetConnection, UOrionSteamSocketsNetConnection::StaticClass, TEXT("UOrionSteamSocketsNetConnection"), &Z_Registration_Info_UClass_UOrionSteamSocketsNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamSocketsNetConnection), 11222875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSockets_Public_OrionSteamSocketsNetConnection_h__Script_OrionSteamSockets_2990914734(TEXT("/Script/OrionSteamSockets"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSockets_Public_OrionSteamSocketsNetConnection_h__Script_OrionSteamSockets_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSockets_Public_OrionSteamSocketsNetConnection_h__Script_OrionSteamSockets_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
