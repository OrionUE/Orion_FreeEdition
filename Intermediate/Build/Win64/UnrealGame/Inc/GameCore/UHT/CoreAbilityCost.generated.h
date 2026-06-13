// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/CoreAbilityCost.h"

#ifdef GAMECORE_CoreAbilityCost_generated_h
#error "CoreAbilityCost.generated.h already included, missing '#pragma once' in CoreAbilityCost.h"
#endif
#define GAMECORE_CoreAbilityCost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreAbilityCost *********************************************************
GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityCost_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreAbilityCost(); \
	friend struct Z_Construct_UClass_UCoreAbilityCost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UCoreAbilityCost_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreAbilityCost, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreAbilityCost_NoRegister) \
	DECLARE_SERIALIZER(UCoreAbilityCost)


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreAbilityCost(UCoreAbilityCost&&) = delete; \
	UCoreAbilityCost(const UCoreAbilityCost&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreAbilityCost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreAbilityCost); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCoreAbilityCost) \
	NO_API virtual ~UCoreAbilityCost();


#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h_17_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h_20_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreAbilityCost;

// ********** End Class UCoreAbilityCost ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_AbilitySystem_Abilities_CoreAbilityCost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
