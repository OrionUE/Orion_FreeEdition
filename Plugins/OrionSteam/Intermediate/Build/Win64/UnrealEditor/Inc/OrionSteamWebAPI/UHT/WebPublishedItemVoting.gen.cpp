// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PublishedItemVoting/WebPublishedItemVoting.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebPublishedItemVoting() {}

// ********** Begin Cross Module References ********************************************************
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPISubsystem();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebPublishedItemVoting();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UWebPublishedItemVoting_NoRegister();
ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebPublishedItemVoting Function ItemVoteSummary *************************
struct Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics
{
	struct WebPublishedItemVoting_eventItemVoteSummary_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		TArray<FString> PublishedFileIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PublishedFileIDd" },
		{ "Category", "OrionSteamWebAPI|PublishedItemVoting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Item Vote Summary\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09Steam ID of user\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09PublishedFileIds\x09\x09The Published File ID who's vote details are requdred\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVoting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item Vote Summary\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 Steam ID of user\n@param       AppId                                   AppId of product\n@param       PublishedFileIds                The Published File ID who's vote details are requdred" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebPublishedItemVoting, nullptr, "ItemVoteSummary", Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::WebPublishedItemVoting_eventItemVoteSummary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::WebPublishedItemVoting_eventItemVoteSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPublishedItemVoting::execItemVoteSummary)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ItemVoteSummary(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UWebPublishedItemVoting Function ItemVoteSummary ***************************

// ********** Begin Class UWebPublishedItemVoting Function UserVoteSummary *************************
struct Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics
{
	struct WebPublishedItemVoting_eventUserVoteSummary_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		TArray<FString> PublishedFileIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PublishedFileIDd" },
		{ "Category", "OrionSteamWebAPI|PublishedItemVoting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Item Vote Summary\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09Steam ID of user\n\x09 * @param\x09PublishedFileIds\x09\x09The Published File ID who's vote details are requdred\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVoting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item Vote Summary\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 Steam ID of user\n@param       PublishedFileIds                The Published File ID who's vote details are requdred" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, Callback), Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2114134120
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebPublishedItemVoting, nullptr, "UserVoteSummary", Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::WebPublishedItemVoting_eventUserVoteSummary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::WebPublishedItemVoting_eventUserVoteSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebPublishedItemVoting::execUserVoteSummary)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UserVoteSummary(FOnOrionSteamWebAPICallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UWebPublishedItemVoting Function UserVoteSummary ***************************

// ********** Begin Class UWebPublishedItemVoting **************************************************
void UWebPublishedItemVoting::StaticRegisterNativesUWebPublishedItemVoting()
{
	UClass* Class = UWebPublishedItemVoting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ItemVoteSummary", &UWebPublishedItemVoting::execItemVoteSummary },
		{ "UserVoteSummary", &UWebPublishedItemVoting::execUserVoteSummary },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWebPublishedItemVoting;
UClass* UWebPublishedItemVoting::GetPrivateStaticClass()
{
	using TClass = UWebPublishedItemVoting;
	if (!Z_Registration_Info_UClass_UWebPublishedItemVoting.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WebPublishedItemVoting"),
			Z_Registration_Info_UClass_UWebPublishedItemVoting.InnerSingleton,
			StaticRegisterNativesUWebPublishedItemVoting,
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
	return Z_Registration_Info_UClass_UWebPublishedItemVoting.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebPublishedItemVoting_NoRegister()
{
	return UWebPublishedItemVoting::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebPublishedItemVoting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PublishedItemVoting/WebPublishedItemVoting.h" },
		{ "ModuleRelativePath", "Public/PublishedItemVoting/WebPublishedItemVoting.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary, "ItemVoteSummary" }, // 1063462413
		{ &Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary, "UserVoteSummary" }, // 3356305277
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPublishedItemVoting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebPublishedItemVoting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPISubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebPublishedItemVoting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebPublishedItemVoting_Statics::ClassParams = {
	&UWebPublishedItemVoting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebPublishedItemVoting()
{
	if (!Z_Registration_Info_UClass_UWebPublishedItemVoting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebPublishedItemVoting.OuterSingleton, Z_Construct_UClass_UWebPublishedItemVoting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebPublishedItemVoting.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPublishedItemVoting);
UWebPublishedItemVoting::~UWebPublishedItemVoting() {}
// ********** End Class UWebPublishedItemVoting ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebPublishedItemVoting, UWebPublishedItemVoting::StaticClass, TEXT("UWebPublishedItemVoting"), &Z_Registration_Info_UClass_UWebPublishedItemVoting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebPublishedItemVoting), 1513978516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h__Script_OrionSteamWebAPI_3781345119(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_PublishedItemVoting_WebPublishedItemVoting_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
