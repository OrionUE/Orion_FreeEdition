/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "SteamTimelineTypes.h"
#include "SteamTimeline.generated.h"

UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamTimeline : public UOrionSteamInterface
{
	GENERATED_BODY()
public:
	UOrionSteamTimeline();
	virtual ~UOrionSteamTimeline() override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam")
	static UOrionSteamTimeline* GetSteamTimeline();

public:
	UPROPERTY(BlueprintAssignable, Category="OrionSteam|Timeline|Delegates")
	FOnSteamTimelineEventRecordingExists SteamTimelineEventRecordingExists;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Sets a description for the current game state in the timeline. These help the user to find specific moments in the timeline when saving clips. Setting a new state description replaces any previous description.
	 *
	 * Examples could include:
	 * Where the user is in the world in a single player game
	 * Which round is happening in a multiplayer game
	 * The current score for a sports game
	 *
	 * @param	Description		Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()
	 * @param	Delta			The time offset in seconds to apply to this event. Negative times indicate an event that happened in the past.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline")
	static void SetTimelineTooltip(FString Description, float Delta);

	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline")
	static void ClearTimelineTooltip(float Delta);

	/**
	 * Use this to mark an event on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds
	 *
	 * Examples could include:
	 * a boss battle
	 * a cut scene
	 * a large team fight
	 * picking up a new weapon or ammunition
	 * scoring a goal
	 *
	 * @param  Icon				        Specify the name of the icon uploaded through the Steamworks Partner Site for your title or one of the provided icons that start with steam_
	 * @param  Title				        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()
	 * @param  Description		        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()
	 * @param  IconPriority		        Specify how important this range is compared to other markers provided by the game. Ranges with larger priority values will be displayed more prominently in the UI. This value may be between 0 and k_unMaxTimelinePriority.
	 * @param  StartOffsetSeconds		The time that this range started relative to now. Negative times indicate an event that happened in the past.
	 * @param  PossibleClip				By setting this parameter to Featured or Standard, the game indicates to Steam that it would be appropriate to offer this range as a clip to the user. For instantaneous events, the suggested clip will be for a short time before and after the event itself.
	 *
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline")
	static FTimelineEventHandle AddInstantaneousTimelineEvent(FString Title, FString Description, FString Icon, int32 IconPriority, float StartOffsetSeconds, ESteamTimelineEventClipPriority PossibleClip);

	/**
	 * Use this to mark an event on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds
	 *
	 * Examples could include:
	 * a boss battle
	 * a cut scene
	 * a large team fight
	 * picking up a new weapon or ammunition
	 * scoring a goal
	 *
	 * @param  Icon				        Specify the name of the icon uploaded through the Steamworks Partner Site for your title or one of the provided icons that start with steam_
	 * @param  Title				        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()
	 * @param  Description		        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()
	 * @param  IconPriority		        Specify how important this range is compared to other markers provided by the game. Ranges with larger priority values will be displayed more prominently in the UI. This value may be between 0 and k_unMaxTimelinePriority.
	 * @param  StartOffsetSeconds		The time that this range started relative to now. Negative times indicate an event that happened in the past.
	 * @param  Duration					How long the time range should be in seconds. For instantaneous events, this should be 0
	 * @param  PossibleClip				By setting this parameter to Featured or Standard, the game indicates to Steam that it would be appropriate to offer this range as a clip to the user. For instantaneous events, the suggested clip will be for a short time before and after the event itself.
	 *
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline")
	static FTimelineEventHandle AddRangeTimelineEvent(FString Title, FString Description, FString Icon, int32 IconPriority, float StartOffsetSeconds, float Duration, ESteamTimelineEventClipPriority PossibleClip);

	/**
	 * Starts a timeline event at a the current time, plus an offset in seconds. This event must be ended with EndRangeTimelineEvent.
	 * Any timeline events that have not been ended when the game exits will be discarded.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline")
	static FTimelineEventHandle StartRangeTimelineEvent(FString Title, FString Description, FString Icon, int32 IconPriority, float StartOffsetSeconds, ESteamTimelineEventClipPriority PossibleClip);

	/**
	 *  Updates fields on a range timeline event that was started with StartRangeTimelineEvent, and which has not been ended.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline")
	static void UpdateRangeTimelineEvent(FTimelineEventHandle Event, FString Title, FString Description, FString Icon, int32 Priority, ESteamTimelineEventClipPriority PossibleClip);

	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline")
	static void EndRangeTimelineEvent(FTimelineEventHandle Event, float EndOffsetSeconds);

	/**
	 * Delete the event from the timeline.
	 * This can be called on a timeline event from AddInstantaneousTimelineEvent,
	 * AddRangeTimelineEvent, or StartRangeTimelineEvent/EndRangeTimelineEvent. The timeline event handle must be from the
	 * current game process.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline")
	static void RemoveTimelineEvent(FTimelineEventHandle Event);

	/*
	 * Changes the color of the timeline bar. See ETimelineGameMode comments for how to use each value
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline")
	static void SetTimelineGameMode(ESteamTimelineGameMode Mode);

private:
#if WITH_ORIONSTEAM
	STEAM_CALLBACK_MANUAL(UOrionSteamTimeline, OnSteamTimelineEventRecordingExists, SteamTimelineEventRecordingExists_t, SteamTimelineEventRecordingExistsCallback);
#endif
};

// Game phases allow the user to navigate their background recordings and clips. Exactly what a game phase means will vary game to game, but
// the game phase should be a section of gameplay that is usually between 10 minutes and a few hours in length, and should be the
// main way a user would think to divide up the game. These are presented to the user in a UI that shows the date the game was played,
// with one row per game slice. Game phases should be used to mark sections of gameplay that the user might be interested in watching.
//
//	Examples could include:
//		* A single match in a multiplayer PvP game
//		* A chapter of a story-based singleplayer game
//		* A single run in a roguelike
//
// Game phases are started with StartGamePhase, and while a phase is still happening, they can have tags and attributes added to them.
//
// Phase attributes represent generic text fields that can be updated throughout the duration of the phase. They are meant
// to be used for phase metadata that is not part of a well defined set of options. For example, a KDA attribute that starts
// with the value "0/0/0" and updates as the phase progresses, or something like a played-entered character name. Attributes
// can be set as many times as the game likes with SetGamePhaseAttribute, and only the last value will be shown to the user.
//
// Phase tags represent data with a well defined set of options, which could be data such as match resolution, hero played,
// game mode, etc. Tags can have an icon in addition to a text name. Multiple tags within the same group may be added per phase
// and all will be remembered. For example, AddGamePhaseTag may be called multiple times for a "Bosses Defeated" group, with
// different names and icons for each boss defeated during the phase, all of which will be shown to the user.
//
// The phase will continue until the game exits, until the game calls EndGamePhase, or until the game calls
// StartGamePhase to start a new phase.
UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamTimelineGamePhases : public UOrionSteamInterface
{
	GENERATED_BODY()
public:
	UOrionSteamTimelineGamePhases();
	virtual ~UOrionSteamTimelineGamePhases() override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam")
	static UOrionSteamTimelineGamePhases* GetSteamTimelineGamePhase();

public:
	UPROPERTY(BlueprintAssignable, Category="OrionSteam|Timeline|Delegates")
	FOnSteamTimelineGamePhaseRecordingExists SteamTimelineGamePhaseRecordingExists;

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

public:
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline|GamePhases")
	static void StartGamePhase();

	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline|GamePhases")
	static void EndGamePhase();

	/**
	 * Games can set a phase ID so they can refer back to a phase in OpenOverlayToPhase
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline|GamePhases")
	static void SetGamePhaseID(FString PhaseID);

	/**
	 * Add a tag that applies to the entire phase
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline|GamePhases")
	static void AddGamePhaseTag(FString TagName, FString TagIcon, FString TagGroup, int32 Priority);

	/**
	 * Add a text attribute that applies to the entire phase
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline|GamePhases")
	static void SetGamePhaseAttribute(FString AttributeGroup, FString AttributeValue, int32 Priority);

	/**
	 * Opens the Steam overlay to a game phase.
	 * @param PhaseId The ID of a phase that was previously provided by the game in SetGamePhaseID.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline|GamePhases")
	static void OpenOverlayToGamePhase(FString PhaseId);

	/**
	 * Opens the Steam overlay to a timeline event.
	 * @param Event	The ID of a timeline event returned by StartEvent or AddSimpleTimelineEvent
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Timeline|GamePhases")
	static void OpenOverlayToTimelineEvent(FTimelineEventHandle Event);

private:
#if WITH_ORIONSTEAM
	STEAM_CALLBACK_MANUAL(UOrionSteamTimelineGamePhases, OnSteamTimelineGamePhaseRecordingExists, SteamTimelineGamePhaseRecordingExists_t, SteamTimelineGamePhaseRecordingExistsCallback);
#endif
};
