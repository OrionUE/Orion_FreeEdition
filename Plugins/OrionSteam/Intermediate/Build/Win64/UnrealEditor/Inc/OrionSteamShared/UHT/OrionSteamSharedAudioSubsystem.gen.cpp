// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamSharedAudioSubsystem.h"
#include "OrionSteamSharedTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamSharedAudioSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ORIONSTEAMSHARED_API UClass* Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary();
ORIONSTEAMSHARED_API UClass* Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_NoRegister();
ORIONSTEAMSHARED_API UClass* Z_Construct_UClass_UOrionSteamSharedAudioSubsystem();
ORIONSTEAMSHARED_API UClass* Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_NoRegister();
ORIONSTEAMSHARED_API UFunction* Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature();
ORIONSTEAMSHARED_API UScriptStruct* Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo();
UPackage* Z_Construct_UPackage__Script_OrionSteamShared();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamAudioCaptureBlueprintLibrary Function Conv_AudioInputDeviceInfoToString 
struct Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics
{
	struct OrionSteamAudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms
	{
		FOrionSteamAudioInputDeviceInfo info;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the device info in a human readable format\n\x09 * @param info - The audio device data to print\n\x09 * @return The data in a string format\n\x09 */" },
#endif
		{ "CompactNodeTitle", "To String" },
		{ "DisplayName", "Audio Input Device Info To String" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the device info in a human readable format\n@param info - The audio device data to print\n@return The data in a string format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_info;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms, info), Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_info_MetaData), NewProp_info_MetaData) }; // 2165814420
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_info,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary, nullptr, "Conv_AudioInputDeviceInfoToString", Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::OrionSteamAudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::OrionSteamAudioCaptureBlueprintLibrary_eventConv_AudioInputDeviceInfoToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAudioCaptureBlueprintLibrary::execConv_AudioInputDeviceInfoToString)
{
	P_GET_STRUCT_REF(FOrionSteamAudioInputDeviceInfo,Z_Param_Out_info);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOrionSteamAudioCaptureBlueprintLibrary::Conv_AudioInputDeviceInfoToString(Z_Param_Out_info);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAudioCaptureBlueprintLibrary Function Conv_AudioInputDeviceInfoToString 

// ********** Begin Class UOrionSteamAudioCaptureBlueprintLibrary Function GetAvailableAudioInputDevices 
struct Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics
{
	struct OrionSteamAudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms
	{
		const UObject* WorldContextObject;
		FScriptDelegate OnObtainDevicesEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets information about all audio output devices available in the system\n\x09 * @param OnObtainDevicesEvent - the event to fire when the audio endpoint devices have been retrieved\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamSharedAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets information about all audio output devices available in the system\n@param OnObtainDevicesEvent - the event to fire when the audio endpoint devices have been retrieved" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnObtainDevicesEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnObtainDevicesEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_OnObtainDevicesEvent = { "OnObtainDevicesEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamAudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms, OnObtainDevicesEvent), Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnObtainDevicesEvent_MetaData), NewProp_OnObtainDevicesEvent_MetaData) }; // 1199013782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::NewProp_OnObtainDevicesEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary, nullptr, "GetAvailableAudioInputDevices", Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::OrionSteamAudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::OrionSteamAudioCaptureBlueprintLibrary_eventGetAvailableAudioInputDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamAudioCaptureBlueprintLibrary::execGetAvailableAudioInputDevices)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnObtainDevicesEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOrionSteamAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices(Z_Param_WorldContextObject,FOnOrionSteamAudioInputDevicesObtained(Z_Param_Out_OnObtainDevicesEvent));
	P_NATIVE_END;
}
// ********** End Class UOrionSteamAudioCaptureBlueprintLibrary Function GetAvailableAudioInputDevices 

// ********** Begin Class UOrionSteamAudioCaptureBlueprintLibrary **********************************
void UOrionSteamAudioCaptureBlueprintLibrary::StaticRegisterNativesUOrionSteamAudioCaptureBlueprintLibrary()
{
	UClass* Class = UOrionSteamAudioCaptureBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Conv_AudioInputDeviceInfoToString", &UOrionSteamAudioCaptureBlueprintLibrary::execConv_AudioInputDeviceInfoToString },
		{ "GetAvailableAudioInputDevices", &UOrionSteamAudioCaptureBlueprintLibrary::execGetAvailableAudioInputDevices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamAudioCaptureBlueprintLibrary;
UClass* UOrionSteamAudioCaptureBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UOrionSteamAudioCaptureBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UOrionSteamAudioCaptureBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamAudioCaptureBlueprintLibrary"),
			Z_Registration_Info_UClass_UOrionSteamAudioCaptureBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUOrionSteamAudioCaptureBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UOrionSteamAudioCaptureBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_NoRegister()
{
	return UOrionSteamAudioCaptureBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OrionSteamSharedAudioSubsystem.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedAudioSubsystem.h" },
		{ "ScriptName", "OrionSteamAudioCaptureLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString, "Conv_AudioInputDeviceInfoToString" }, // 134042968
		{ &Z_Construct_UFunction_UOrionSteamAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices, "GetAvailableAudioInputDevices" }, // 1584225288
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamAudioCaptureBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamShared,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_Statics::ClassParams = {
	&UOrionSteamAudioCaptureBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UOrionSteamAudioCaptureBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamAudioCaptureBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamAudioCaptureBlueprintLibrary.OuterSingleton;
}
UOrionSteamAudioCaptureBlueprintLibrary::UOrionSteamAudioCaptureBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamAudioCaptureBlueprintLibrary);
UOrionSteamAudioCaptureBlueprintLibrary::~UOrionSteamAudioCaptureBlueprintLibrary() {}
// ********** End Class UOrionSteamAudioCaptureBlueprintLibrary ************************************

// ********** Begin Class UOrionSteamSharedAudioSubsystem Function K2_FindAudioDeviceInfoFromDeviceId 
struct Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics
{
	struct OrionSteamSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceId_Parms
	{
		FString DeviceId;
		FOrionSteamAudioInputDeviceInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Voice" },
		{ "DisplayName", "Find Audio Device Info From Device Id" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceId_Parms, DeviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceId_Parms, ReturnValue), Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 2165814420
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamSharedAudioSubsystem, nullptr, "K2_FindAudioDeviceInfoFromDeviceId", Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::OrionSteamSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::OrionSteamSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamSharedAudioSubsystem::execK2_FindAudioDeviceInfoFromDeviceId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOrionSteamAudioInputDeviceInfo*)Z_Param__Result=UOrionSteamSharedAudioSubsystem::K2_FindAudioDeviceInfoFromDeviceId(Z_Param_DeviceId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamSharedAudioSubsystem Function K2_FindAudioDeviceInfoFromDeviceId 

// ********** Begin Class UOrionSteamSharedAudioSubsystem Function K2_FindAudioDeviceInfoFromDeviceName 
struct Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics
{
	struct OrionSteamSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceName_Parms
	{
		FString DeviceName;
		FOrionSteamAudioInputDeviceInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Voice" },
		{ "DisplayName", "Find Audio Device Info From Device Name" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceName_Parms, DeviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceName_Parms, ReturnValue), Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 2165814420
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamSharedAudioSubsystem, nullptr, "K2_FindAudioDeviceInfoFromDeviceName", Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::OrionSteamSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::OrionSteamSharedAudioSubsystem_eventK2_FindAudioDeviceInfoFromDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamSharedAudioSubsystem::execK2_FindAudioDeviceInfoFromDeviceName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOrionSteamAudioInputDeviceInfo*)Z_Param__Result=UOrionSteamSharedAudioSubsystem::K2_FindAudioDeviceInfoFromDeviceName(Z_Param_DeviceName);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamSharedAudioSubsystem Function K2_FindAudioDeviceInfoFromDeviceName 

// ********** Begin Class UOrionSteamSharedAudioSubsystem Function K2_GetAudioInputDevices *********
struct Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics
{
	struct OrionSteamSharedAudioSubsystem_eventK2_GetAudioInputDevices_Parms
	{
		TArray<FOrionSteamAudioInputDeviceInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteam|Voice" },
		{ "DisplayName", "Get Audio Input Devices" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedAudioSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrionSteamAudioInputDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 2165814420
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamSharedAudioSubsystem_eventK2_GetAudioInputDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2165814420
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamSharedAudioSubsystem, nullptr, "K2_GetAudioInputDevices", Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::OrionSteamSharedAudioSubsystem_eventK2_GetAudioInputDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::OrionSteamSharedAudioSubsystem_eventK2_GetAudioInputDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamSharedAudioSubsystem::execK2_GetAudioInputDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FOrionSteamAudioInputDeviceInfo>*)Z_Param__Result=UOrionSteamSharedAudioSubsystem::K2_GetAudioInputDevices();
	P_NATIVE_END;
}
// ********** End Class UOrionSteamSharedAudioSubsystem Function K2_GetAudioInputDevices ***********

// ********** Begin Class UOrionSteamSharedAudioSubsystem ******************************************
void UOrionSteamSharedAudioSubsystem::StaticRegisterNativesUOrionSteamSharedAudioSubsystem()
{
	UClass* Class = UOrionSteamSharedAudioSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_FindAudioDeviceInfoFromDeviceId", &UOrionSteamSharedAudioSubsystem::execK2_FindAudioDeviceInfoFromDeviceId },
		{ "K2_FindAudioDeviceInfoFromDeviceName", &UOrionSteamSharedAudioSubsystem::execK2_FindAudioDeviceInfoFromDeviceName },
		{ "K2_GetAudioInputDevices", &UOrionSteamSharedAudioSubsystem::execK2_GetAudioInputDevices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamSharedAudioSubsystem;
UClass* UOrionSteamSharedAudioSubsystem::GetPrivateStaticClass()
{
	using TClass = UOrionSteamSharedAudioSubsystem;
	if (!Z_Registration_Info_UClass_UOrionSteamSharedAudioSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamSharedAudioSubsystem"),
			Z_Registration_Info_UClass_UOrionSteamSharedAudioSubsystem.InnerSingleton,
			StaticRegisterNativesUOrionSteamSharedAudioSubsystem,
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
	return Z_Registration_Info_UClass_UOrionSteamSharedAudioSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_NoRegister()
{
	return UOrionSteamSharedAudioSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An implementation of ISoundHandleSystem using AudioEngineSubsystem\n */" },
#endif
		{ "IncludePath", "OrionSteamSharedAudioSubsystem.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSharedAudioSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An implementation of ISoundHandleSystem using AudioEngineSubsystem" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceId, "K2_FindAudioDeviceInfoFromDeviceId" }, // 2582891584
		{ &Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_FindAudioDeviceInfoFromDeviceName, "K2_FindAudioDeviceInfoFromDeviceName" }, // 662862598
		{ &Z_Construct_UFunction_UOrionSteamSharedAudioSubsystem_K2_GetAudioInputDevices, "K2_GetAudioInputDevices" }, // 1025142301
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamSharedAudioSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamShared,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_Statics::ClassParams = {
	&UOrionSteamSharedAudioSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamSharedAudioSubsystem()
{
	if (!Z_Registration_Info_UClass_UOrionSteamSharedAudioSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamSharedAudioSubsystem.OuterSingleton, Z_Construct_UClass_UOrionSteamSharedAudioSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamSharedAudioSubsystem.OuterSingleton;
}
UOrionSteamSharedAudioSubsystem::UOrionSteamSharedAudioSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamSharedAudioSubsystem);
UOrionSteamSharedAudioSubsystem::~UOrionSteamSharedAudioSubsystem() {}
// ********** End Class UOrionSteamSharedAudioSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h__Script_OrionSteamShared_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamAudioCaptureBlueprintLibrary, UOrionSteamAudioCaptureBlueprintLibrary::StaticClass, TEXT("UOrionSteamAudioCaptureBlueprintLibrary"), &Z_Registration_Info_UClass_UOrionSteamAudioCaptureBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamAudioCaptureBlueprintLibrary), 2372313506U) },
		{ Z_Construct_UClass_UOrionSteamSharedAudioSubsystem, UOrionSteamSharedAudioSubsystem::StaticClass, TEXT("UOrionSteamSharedAudioSubsystem"), &Z_Registration_Info_UClass_UOrionSteamSharedAudioSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamSharedAudioSubsystem), 3067302573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h__Script_OrionSteamShared_2274118894(TEXT("/Script/OrionSteamShared"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h__Script_OrionSteamShared_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamShared_Public_OrionSteamSharedAudioSubsystem_h__Script_OrionSteamShared_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
