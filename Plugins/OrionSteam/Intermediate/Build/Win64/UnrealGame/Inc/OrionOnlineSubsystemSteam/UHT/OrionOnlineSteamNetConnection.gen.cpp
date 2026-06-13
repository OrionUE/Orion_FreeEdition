// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Net/OrionOnlineSteamNetConnection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionOnlineSteamNetConnection() {}

// ********** Begin Cross Module References ********************************************************
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSteamNetConnection();
ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSteamNetConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionOnlineSubsystemSteam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionOnlineSteamNetConnection *******************************************
void UOrionOnlineSteamNetConnection::StaticRegisterNativesUOrionOnlineSteamNetConnection()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionOnlineSteamNetConnection;
UClass* UOrionOnlineSteamNetConnection::GetPrivateStaticClass()
{
	using TClass = UOrionOnlineSteamNetConnection;
	if (!Z_Registration_Info_UClass_UOrionOnlineSteamNetConnection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionOnlineSteamNetConnection"),
			Z_Registration_Info_UClass_UOrionOnlineSteamNetConnection.InnerSingleton,
			StaticRegisterNativesUOrionOnlineSteamNetConnection,
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
	return Z_Registration_Info_UClass_UOrionOnlineSteamNetConnection.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionOnlineSteamNetConnection_NoRegister()
{
	return UOrionOnlineSteamNetConnection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Net/OrionOnlineSteamNetConnection.h" },
		{ "ModuleRelativePath", "Private/Net/OrionOnlineSteamNetConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_bIsPassthrough_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UIpConnection Interface\n" },
#endif
		{ "ModuleRelativePath", "Private/Net/OrionOnlineSteamNetConnection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_m_bIsPassthrough_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bIsPassthrough;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionOnlineSteamNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::NewProp_m_bIsPassthrough_SetBit(void* Obj)
{
	((UOrionOnlineSteamNetConnection*)Obj)->m_bIsPassthrough = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::NewProp_m_bIsPassthrough = { "m_bIsPassthrough", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionOnlineSteamNetConnection), &Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::NewProp_m_bIsPassthrough_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_bIsPassthrough_MetaData), NewProp_m_bIsPassthrough_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::NewProp_m_bIsPassthrough,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionOnlineSubsystemSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::ClassParams = {
	&UOrionOnlineSteamNetConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionOnlineSteamNetConnection()
{
	if (!Z_Registration_Info_UClass_UOrionOnlineSteamNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionOnlineSteamNetConnection.OuterSingleton, Z_Construct_UClass_UOrionOnlineSteamNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionOnlineSteamNetConnection.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionOnlineSteamNetConnection);
UOrionOnlineSteamNetConnection::~UOrionOnlineSteamNetConnection() {}
// ********** End Class UOrionOnlineSteamNetConnection *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h__Script_OrionOnlineSubsystemSteam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionOnlineSteamNetConnection, UOrionOnlineSteamNetConnection::StaticClass, TEXT("UOrionOnlineSteamNetConnection"), &Z_Registration_Info_UClass_UOrionOnlineSteamNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionOnlineSteamNetConnection), 675897137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h__Script_OrionOnlineSubsystemSteam_3583829564(TEXT("/Script/OrionOnlineSubsystemSteam"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h__Script_OrionOnlineSubsystemSteam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Private_Net_OrionOnlineSteamNetConnection_h__Script_OrionOnlineSubsystemSteam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
