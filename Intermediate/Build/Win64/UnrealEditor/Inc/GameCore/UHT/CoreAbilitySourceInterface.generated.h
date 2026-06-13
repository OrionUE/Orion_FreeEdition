// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/CoreAbilitySourceInterface.h"

#ifdef GAMECORE_CoreAbilitySourceInterface_generated_h
#error "CoreAbilitySourceInterface.generated.h already included, missing '#pragma once' in CoreAbilitySourceInterface.h"
#endif
#define GAMECORE_CoreAbilitySourceInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCoreAbilitySourceInterface ******************************************
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySourceInterface_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreAbilitySourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreAbilitySourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAbilitySourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAbilitySourceInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreAbilitySourceInterface(UCoreAbilitySourceInterface&&) = delete; \
	UCoreAbilitySourceInterface(const UCoreAbilitySourceInterface&) = delete; \
	virtual ~UCoreAbilitySourceInterface() = default;


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCoreAbilitySourceInterface(); \
	friend struct Z_Construct_UClass_UCoreAbilitySourceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilitySourceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreAbilitySourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreAbilitySourceInterface_NoRegister) \
	DECLARE_SERIALIZER(UCoreAbilitySourceInterface)


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~ICoreAbilitySourceInterface() {} \
public: \
	typedef UCoreAbilitySourceInterface UClassType; \
	typedef ICoreAbilitySourceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h_18_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreAbilitySourceInterface;

// ********** End Interface UCoreAbilitySourceInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_CoreAbilitySourceInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
