// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BroadcastService/WebBroadcastServiceAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebBroadcastServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionPostGameDataFrame Function PostGameDataFrameAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		FString SteamID;
		FString BroadcastId;
		FString FrameData;
		UOrionSteamWebAPIAsyncActionPostGameDataFrame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|Broadcast|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Provides access to Steam broadcasts.\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09 * @param\x09""AppID\n\x09 * @param\x09SteamID\n\x09 * @param\x09""BroadcastId\n\x09 * @param\x09""FrameData\n\x09 */" },
#endif
		{ "DisplayName", "Post Game Data Frame" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides access to Steam broadcasts.\n\n@param       Key                             Steamworks Web API publisher authentication key.\n@param       AppID\n@param       SteamID\n@param       BroadcastId\n@param       FrameData" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcastId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, SteamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_BroadcastId = { "BroadcastId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, BroadcastId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, FrameData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_BroadcastId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_FrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame, nullptr, "PostGameDataFrameAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::OrionSteamWebAPIAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::OrionSteamWebAPIAsyncActionPostGameDataFrame_eventPostGameDataFrameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionPostGameDataFrame::execPostGameDataFrameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
	P_GET_PROPERTY(FStrProperty,Z_Param_BroadcastId);
	P_GET_PROPERTY(FStrProperty,Z_Param_FrameData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionPostGameDataFrame**)Z_Param__Result=UOrionSteamWebAPIAsyncActionPostGameDataFrame::PostGameDataFrameAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_BroadcastId,Z_Param_FrameData);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionPostGameDataFrame Function PostGameDataFrameAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionPostGameDataFrame ****************************
void UOrionSteamWebAPIAsyncActionPostGameDataFrame::StaticRegisterNativesUOrionSteamWebAPIAsyncActionPostGameDataFrame()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionPostGameDataFrame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PostGameDataFrameAsync", &UOrionSteamWebAPIAsyncActionPostGameDataFrame::execPostGameDataFrameAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame;
UClass* UOrionSteamWebAPIAsyncActionPostGameDataFrame::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionPostGameDataFrame;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionPostGameDataFrame"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionPostGameDataFrame,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionPostGameDataFrame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamAppsAsyncActionPostGameDataFrame\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "BroadcastService/WebBroadcastServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastServiceAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamAppsAsyncActionPostGameDataFrame\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionPostGameDataFrame_PostGameDataFrameAsync, "PostGameDataFrameAsync" }, // 2815173119
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionPostGameDataFrame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionPostGameDataFrame::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionPostGameDataFrame::UOrionSteamWebAPIAsyncActionPostGameDataFrame() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionPostGameDataFrame);
UOrionSteamWebAPIAsyncActionPostGameDataFrame::~UOrionSteamWebAPIAsyncActionPostGameDataFrame() {}
// ********** End Class UOrionSteamWebAPIAsyncActionPostGameDataFrame ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame, UOrionSteamWebAPIAsyncActionPostGameDataFrame::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionPostGameDataFrame"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionPostGameDataFrame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionPostGameDataFrame), 4283688024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastServiceAsyncActions_h__Script_OrionSteamWebAPI_2943972362(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_BroadcastService_WebBroadcastServiceAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
