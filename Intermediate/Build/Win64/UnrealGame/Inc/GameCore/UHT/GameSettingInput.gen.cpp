// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/GameSettingInput.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameSettingInput() {}

// ********** Begin Cross Module References ********************************************************
GAMECORE_API UClass* Z_Construct_UClass_UGameSettingInput();
GAMECORE_API UClass* Z_Construct_UClass_UGameSettingInput_NoRegister();
GAMECORE_API UEnum* Z_Construct_UEnum_GameCore_EGameSettingKeyboardSlot();
GAMESETTINGS_API UClass* Z_Construct_UClass_UGameSettingValue();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGameSettingKeyboardSlot **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameSettingKeyboardSlot;
static UEnum* EGameSettingKeyboardSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameSettingKeyboardSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameSettingKeyboardSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameCore_EGameSettingKeyboardSlot, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("EGameSettingKeyboardSlot"));
	}
	return Z_Registration_Info_UEnum_EGameSettingKeyboardSlot.OuterSingleton;
}
template<> GAMECORE_API UEnum* StaticEnum<EGameSettingKeyboardSlot>()
{
	return EGameSettingKeyboardSlot_StaticEnum();
}
struct Z_Construct_UEnum_GameCore_EGameSettingKeyboardSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "GamepadFirst.Name", "EGameSettingKeyboardSlot::GamepadFirst" },
		{ "ModuleRelativePath", "Public/Settings/GameSettingInput.h" },
		{ "MouseAndKeyboardFirst.Name", "EGameSettingKeyboardSlot::MouseAndKeyboardFirst" },
		{ "MouseAndKeyboardSecond.Name", "EGameSettingKeyboardSlot::MouseAndKeyboardSecond" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameSettingKeyboardSlot::MouseAndKeyboardFirst", (int64)EGameSettingKeyboardSlot::MouseAndKeyboardFirst },
		{ "EGameSettingKeyboardSlot::MouseAndKeyboardSecond", (int64)EGameSettingKeyboardSlot::MouseAndKeyboardSecond },
		{ "EGameSettingKeyboardSlot::GamepadFirst", (int64)EGameSettingKeyboardSlot::GamepadFirst },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameCore_EGameSettingKeyboardSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	"EGameSettingKeyboardSlot",
	"EGameSettingKeyboardSlot",
	Z_Construct_UEnum_GameCore_EGameSettingKeyboardSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameCore_EGameSettingKeyboardSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameCore_EGameSettingKeyboardSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameCore_EGameSettingKeyboardSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameCore_EGameSettingKeyboardSlot()
{
	if (!Z_Registration_Info_UEnum_EGameSettingKeyboardSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameSettingKeyboardSlot.InnerSingleton, Z_Construct_UEnum_GameCore_EGameSettingKeyboardSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameSettingKeyboardSlot.InnerSingleton;
}
// ********** End Enum EGameSettingKeyboardSlot ****************************************************

// ********** Begin Class UGameSettingInput ********************************************************
void UGameSettingInput::StaticRegisterNativesUGameSettingInput()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameSettingInput;
UClass* UGameSettingInput::GetPrivateStaticClass()
{
	using TClass = UGameSettingInput;
	if (!Z_Registration_Info_UClass_UGameSettingInput.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameSettingInput"),
			Z_Registration_Info_UClass_UGameSettingInput.InnerSingleton,
			StaticRegisterNativesUGameSettingInput,
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
	return Z_Registration_Info_UClass_UGameSettingInput.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameSettingInput_NoRegister()
{
	return UGameSettingInput::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameSettingInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/GameSettingInput.h" },
		{ "ModuleRelativePath", "Public/Settings/GameSettingInput.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSettingInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameSettingInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameSettingValue,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSettingInput_Statics::ClassParams = {
	&UGameSettingInput::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSettingInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSettingInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameSettingInput()
{
	if (!Z_Registration_Info_UClass_UGameSettingInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSettingInput.OuterSingleton, Z_Construct_UClass_UGameSettingInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSettingInput.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSettingInput);
UGameSettingInput::~UGameSettingInput() {}
// ********** End Class UGameSettingInput **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h__Script_GameCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameSettingKeyboardSlot_StaticEnum, TEXT("EGameSettingKeyboardSlot"), &Z_Registration_Info_UEnum_EGameSettingKeyboardSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2217815524U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSettingInput, UGameSettingInput::StaticClass, TEXT("UGameSettingInput"), &Z_Registration_Info_UClass_UGameSettingInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSettingInput), 2635567405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h__Script_GameCore_1682180582(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h__Script_GameCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Settings_GameSettingInput_h__Script_GameCore_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
