// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hotfix/CoreHotfixManager.h"

#ifdef GAMECORE_CoreHotfixManager_generated_h
#error "CoreHotfixManager.generated.h already included, missing '#pragma once' in CoreHotfixManager.h"
#endif
#define GAMECORE_CoreHotfixManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreHotfixManager *******************************************************
struct Z_Construct_UClass_UCoreHotfixManager_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCoreHotfixManager(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCoreHotfixManager_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCoreHotfixManager(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCoreHotfixManager, UOnlineHotfixManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreHotfixManager) \
	DECLARE_SERIALIZER(UCoreHotfixManager)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreHotfixManager(UCoreHotfixManager&&) = delete; \
	UCoreHotfixManager(const UCoreHotfixManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreHotfixManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreHotfixManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreHotfixManager) \
	NO_API virtual ~UCoreHotfixManager();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h_12_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreHotfixManager;

// ********** End Class UCoreHotfixManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Hotfix_CoreHotfixManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
