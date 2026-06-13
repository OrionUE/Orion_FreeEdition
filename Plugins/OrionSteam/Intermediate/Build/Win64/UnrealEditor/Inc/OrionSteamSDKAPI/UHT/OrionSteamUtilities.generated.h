// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionSteamSDKAPI/OrionSteamUtilities.h"

#ifdef ORIONSTEAMSDKAPI_OrionSteamUtilities_generated_h
#error "OrionSteamUtilities.generated.h already included, missing '#pragma once' in OrionSteamUtilities.h"
#endif
#define ORIONSTEAMSDKAPI_OrionSteamUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class APlayerState;
class UObject;
class UOrionSteamAsyncActionListenForControllerChange;
class UOrionSteamVoice;
class UServerFilter;
class UWorld;
enum class EOrionSteamIdentical : uint8;
enum class EOrionSteamNetworkingIdentityType : uint8;
enum class EOrionSteamValid : uint8;
enum class ESteamAccountType : uint8;
enum class ESteamAttributeType : uint8;
enum class ESteamComparisonOp : uint8;
enum class ESteamMessageType : uint8;
struct FBlueprintSessionResult;
struct FDateTime;
struct FLatentActionInfo;
struct FOnlineFriendOrionSteamBlueprint;
struct FPublishedFileID;
struct FSteamGameID;
struct FSteamID;
struct FSteamInventoryUpdateHandle;
struct FSteamItemInstanceID;
struct FSteamNetworkingIdentity;
struct FSteamServerAddr;
struct FSteamSessionSearchSetting;
struct FSteamSessionSetting;
struct FSteamTicketHandle;
struct FSteamUGCHandle;

// ********** Begin Delegate FOnSteamMessage *******************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_61_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSteamMessage_DelegateWrapper(const FScriptDelegate& OnSteamMessage, ESteamMessageType Type, const FString& Message);


// ********** End Delegate FOnSteamMessage *********************************************************

// ********** Begin Delegate FOnHTTPResponse *******************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_62_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnHTTPResponse_DelegateWrapper(const FScriptDelegate& OnHTTPResponse, const FString& Response);


// ********** End Delegate FOnHTTPResponse *********************************************************

// ********** Begin Delegate FOnControllerChangedCallback ******************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_63_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnControllerChangedCallback_DelegateWrapper(const FMulticastScriptDelegate& OnControllerChangedCallback, bool bIsConnected, int32 UserId);


// ********** End Delegate FOnControllerChangedCallback ********************************************

// ********** Begin Delegate FOnSessionUserInviteAcceptedCallback **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_64_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSessionUserInviteAcceptedCallback_DelegateWrapper(const FScriptDelegate& OnSessionUserInviteAcceptedCallback, bool bWasSuccessful, int32 LocalPlayerNum, const FString& InvitedBy, FBlueprintSessionResult const& Session);


// ********** End Delegate FOnSessionUserInviteAcceptedCallback ************************************

// ********** Begin Delegate FOnSessionUserInviteRecievedCallback **********************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_65_DELEGATE \
ORIONSTEAMSDKAPI_API void FOnSessionUserInviteRecievedCallback_DelegateWrapper(const FScriptDelegate& OnSessionUserInviteRecievedCallback, const FString& InvitedBy, FBlueprintSessionResult const& InviteResult);


// ********** End Delegate FOnSessionUserInviteRecievedCallback ************************************

// ********** Begin Class UOrionSteamVoice *********************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConstructOrionSteamVoice); \
	DECLARE_FUNCTION(execDestroyOrionSteamVoice); \
	DECLARE_FUNCTION(execAddAudioBuffer);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamVoice_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamVoice(); \
	friend struct Z_Construct_UClass_UOrionSteamVoice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamVoice_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamVoice, USoundWaveProcedural, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamVoice_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamVoice)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_70_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamVoice(UOrionSteamVoice&&) = delete; \
	UOrionSteamVoice(const UOrionSteamVoice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamVoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamVoice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamVoice) \
	NO_API virtual ~UOrionSteamVoice();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_67_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_70_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamVoice;

// ********** End Class UOrionSteamVoice ***********************************************************

// ********** Begin Class UOrionSteamAsyncActionListenForControllerChange **************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execListenForControllerChange);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamAsyncActionListenForControllerChange(); \
	friend struct Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamAsyncActionListenForControllerChange, UOrionSteamAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamAsyncActionListenForControllerChange_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamAsyncActionListenForControllerChange)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamAsyncActionListenForControllerChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamAsyncActionListenForControllerChange(UOrionSteamAsyncActionListenForControllerChange&&) = delete; \
	UOrionSteamAsyncActionListenForControllerChange(const UOrionSteamAsyncActionListenForControllerChange&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamAsyncActionListenForControllerChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamAsyncActionListenForControllerChange); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamAsyncActionListenForControllerChange) \
	NO_API virtual ~UOrionSteamAsyncActionListenForControllerChange();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_88_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_91_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamAsyncActionListenForControllerChange;

// ********** End Class UOrionSteamAsyncActionListenForControllerChange ****************************

// ********** Begin Class UOrionSteamUtilities *****************************************************
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVoiceInputDevice); \
	DECLARE_FUNCTION(execUpdateVoiceInputDevice); \
	DECLARE_FUNCTION(execIsLocalPlayerTalking); \
	DECLARE_FUNCTION(execIsRemotePlayerTalking); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execUnmuteRemoteTalker); \
	DECLARE_FUNCTION(execMuteRemoteTalker); \
	DECLARE_FUNCTION(execIsRecalculatingPing); \
	DECLARE_FUNCTION(execGetPingFromHostData); \
	DECLARE_FUNCTION(execGetHostPingData); \
	DECLARE_FUNCTION(execIsUsingP2PRelays); \
	DECLARE_FUNCTION(execSetLocalHost); \
	DECLARE_FUNCTION(execSetPSNId); \
	DECLARE_FUNCTION(execSetXboxPairwiseId); \
	DECLARE_FUNCTION(execSetSteamId64); \
	DECLARE_FUNCTION(execSetType); \
	DECLARE_FUNCTION(execGetAccountId); \
	DECLARE_FUNCTION(execK2_IsPlayerInSession); \
	DECLARE_FUNCTION(execKickPlayer); \
	DECLARE_FUNCTION(execTryJoinServer); \
	DECLARE_FUNCTION(execWriteBytesToFile); \
	DECLARE_FUNCTION(execReadFileToBytes); \
	DECLARE_FUNCTION(execK2_HexToString); \
	DECLARE_FUNCTION(execK2_HexToBytes); \
	DECLARE_FUNCTION(execIsSteamServerInitialized); \
	DECLARE_FUNCTION(execBP_BytesToString); \
	DECLARE_FUNCTION(execBP_StringToBytes); \
	DECLARE_FUNCTION(execGetSteamIdFromPlayerState); \
	DECLARE_FUNCTION(execGetPublicIp); \
	DECLARE_FUNCTION(execEncryptString); \
	DECLARE_FUNCTION(execFromUnixTimestamp); \
	DECLARE_FUNCTION(execConstructServerFilter); \
	DECLARE_FUNCTION(execIsSteamAvailable); \
	DECLARE_FUNCTION(execIsLobby); \
	DECLARE_FUNCTION(execGetAccountType); \
	DECLARE_FUNCTION(execGetGameEngineInitialized); \
	DECLARE_FUNCTION(execReadFriendList); \
	DECLARE_FUNCTION(execGetFriendsList); \
	DECLARE_FUNCTION(execStopListeningForSessionInviteRecieved); \
	DECLARE_FUNCTION(execListenForSessionInviteRecieved); \
	DECLARE_FUNCTION(execServerTravel); \
	DECLARE_FUNCTION(execStopListeningForSessionInviteAccepted); \
	DECLARE_FUNCTION(execListenForSessionInviteAccepted); \
	DECLARE_FUNCTION(execListenForSteamMessages); \
	DECLARE_FUNCTION(execSteamItemInstanceID_Equals_Exec); \
	DECLARE_FUNCTION(execSteamItemInstanceID_Equals); \
	DECLARE_FUNCTION(execPublishedFileID_NotEquals); \
	DECLARE_FUNCTION(execPublishedFileID_Equals_Exec); \
	DECLARE_FUNCTION(execPublishedFileID_Equals); \
	DECLARE_FUNCTION(execNotEqual); \
	DECLARE_FUNCTION(execEqual_Exec); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid); \
	DECLARE_FUNCTION(execIsUGCHandleValid_Exec); \
	DECLARE_FUNCTION(execIsUGCHandleValid); \
	DECLARE_FUNCTION(execIsGameIDValid_Exec); \
	DECLARE_FUNCTION(execIsGameIDValid); \
	DECLARE_FUNCTION(execIsSteamIDValid_Exec); \
	DECLARE_FUNCTION(execIsPublishedFileIDValid_Exec); \
	DECLARE_FUNCTION(execIsPublishedFileIDValid); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execBreakTicketHandle); \
	DECLARE_FUNCTION(execBreakInventoryUpdateHandle); \
	DECLARE_FUNCTION(execBreakUGCHandle); \
	DECLARE_FUNCTION(execBreakPublishedFileID); \
	DECLARE_FUNCTION(execBreakSteamGameID); \
	DECLARE_FUNCTION(execBreakSteamID); \
	DECLARE_FUNCTION(execBreakSteamItemInstanceID); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execMakeSearchBoolean); \
	DECLARE_FUNCTION(execMakeSearchInteger); \
	DECLARE_FUNCTION(execMakeSearchString); \
	DECLARE_FUNCTION(execMakeInteger); \
	DECLARE_FUNCTION(execMakeString); \
	DECLARE_FUNCTION(execMakeTicketHandle); \
	DECLARE_FUNCTION(execMakeInventoryUpdateHandle); \
	DECLARE_FUNCTION(execMakeUGCHandle); \
	DECLARE_FUNCTION(execMakePublishedFileID); \
	DECLARE_FUNCTION(execMakeSteamGameID); \
	DECLARE_FUNCTION(execMakeSteamID); \
	DECLARE_FUNCTION(execMakeSteamItemInstanceID);


ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUtilities_NoRegister();

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_168_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSteamUtilities(); \
	friend struct Z_Construct_UClass_UOrionSteamUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_UOrionSteamUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrionSteamUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OrionSteamSDKAPI"), Z_Construct_UClass_UOrionSteamUtilities_NoRegister) \
	DECLARE_SERIALIZER(UOrionSteamUtilities)


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_168_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionSteamUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrionSteamUtilities(UOrionSteamUtilities&&) = delete; \
	UOrionSteamUtilities(const UOrionSteamUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSteamUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSteamUtilities); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionSteamUtilities) \
	NO_API virtual ~UOrionSteamUtilities();


#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_165_PROLOG
#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_168_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_168_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h_168_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrionSteamUtilities;

// ********** End Class UOrionSteamUtilities *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamUtilities_h

// ********** Begin Enum EFriendListType ***********************************************************
#define FOREACH_ENUM_EFRIENDLISTTYPE(op) \
	op(Default) \
	op(OnlinePlayers) \
	op(InGamePlayers) \
	op(InGameAndSessionPlayers) 
// ********** End Enum EFriendListType *************************************************************

// ********** Begin Enum EOrionSteamValid **********************************************************
#define FOREACH_ENUM_EORIONSTEAMVALID(op) \
	op(EOrionSteamValid::Valid) \
	op(EOrionSteamValid::NotValid) 

enum class EOrionSteamValid : uint8;
template<> struct TIsUEnumClass<EOrionSteamValid> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamValid>();
// ********** End Enum EOrionSteamValid ************************************************************

// ********** Begin Enum EOrionSteamIdentical ******************************************************
#define FOREACH_ENUM_EORIONSTEAMIDENTICAL(op) \
	op(EOrionSteamIdentical::Identical) \
	op(EOrionSteamIdentical::NotIdentical) 

enum class EOrionSteamIdentical : uint8;
template<> struct TIsUEnumClass<EOrionSteamIdentical> { enum { Value = true }; };
template<> ORIONSTEAMSDKAPI_API UEnum* StaticEnum<EOrionSteamIdentical>();
// ********** End Enum EOrionSteamIdentical ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
