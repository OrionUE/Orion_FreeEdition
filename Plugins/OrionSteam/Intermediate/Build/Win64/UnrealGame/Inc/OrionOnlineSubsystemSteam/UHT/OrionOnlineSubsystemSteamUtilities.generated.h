// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionOnlineSubsystemSteamUtilities.h"

#ifdef ORIONONLINESUBSYSTEMSTEAM_OrionOnlineSubsystemSteamUtilities_generated_h
#error "OrionOnlineSubsystemSteamUtilities.generated.h already included, missing '#pragma once' in OrionOnlineSubsystemSteamUtilities.h"
#endif
#define ORIONONLINESUBSYSTEMSTEAM_OrionOnlineSubsystemSteamUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FSteamSessionSetting;

// ********** Begin Class UOrionOnlineSteamSubsystemUtilities **************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_OrionOnlineSubsystemSteamUtilities_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindFriendSessions); \
	DECLARE_FUNCTION(execGetExtraSessionSettings); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execSendSessionInviteToFriend);


ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSteamSubsystemUtilities_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_OrionOnlineSubsystemSteamUtilities_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionOnlineSteamSubsystemUtilities(); \
	friend struct Z_Construct_UClass_UOrionOnlineSteamSubsystemUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_UOrionOnlineSteamSubsystemUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionOnlineSteamSubsystemUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OrionOnlineSubsystemSteam"), Z_Construct_UClass_UOrionOnlineSteamSubsystemUtilities_NoRegister) \
	DECLARE_SERIALIZER(UOrionOnlineSteamSubsystemUtilities)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_OrionOnlineSubsystemSteamUtilities_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionOnlineSteamSubsystemUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionOnlineSteamSubsystemUtilities(UOrionOnlineSteamSubsystemUtilities&&) = delete; \
	UOrionOnlineSteamSubsystemUtilities(const UOrionOnlineSteamSubsystemUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionOnlineSteamSubsystemUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionOnlineSteamSubsystemUtilities); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionOnlineSteamSubsystemUtilities) \
	NO_API virtual ~UOrionOnlineSteamSubsystemUtilities();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_OrionOnlineSubsystemSteamUtilities_h_24_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_OrionOnlineSubsystemSteamUtilities_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_OrionOnlineSubsystemSteamUtilities_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_OrionOnlineSubsystemSteamUtilities_h_27_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_OrionOnlineSubsystemSteamUtilities_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionOnlineSteamSubsystemUtilities;

// ********** End Class UOrionOnlineSteamSubsystemUtilities ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionOnlineSubsystemSteam_Public_OrionOnlineSubsystemSteamUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
