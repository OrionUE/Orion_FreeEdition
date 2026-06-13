/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Abilities/Tasks/AbilityTask.h"

#include "AbilityTask_WaitForInteractableTargets.generated.h"

class IInteractableTarget;

struct FInteractionQuery;
struct FInteractionOption;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractableObjectsChanged, const TArray<FInteractionOption>&, InteractableOptions);

/**
 * UAbilityTask_WaitForInteractableTargets
 * 等待可交互目标任务基类
 */
UCLASS(Abstract)
class INTERACTIONSYSTEM_API UAbilityTask_WaitForInteractableTargets : public UAbilityTask
{
	GENERATED_BODY()

protected:
	/**
	 * 进行射线追踪命中
	 * @param OutHitResult			命中的第一个物品
	 * @param World					当前World
	 * @param Start					射线开始位置
	 * @param End					射线结束位置
	 * @param ProfileName			命中配置文件
	 * @param Params				碰撞查询额外参数
	 */
	static void LineTrace(FHitResult& OutHitResult, const UWorld* World, const FVector& Start, const FVector& End, FName ProfileName, const FCollisionQueryParams& Params);

	/**
	 * 获取当前角色准星的位置向量
	 * @param InSourceActor			当前角色
	 * @param Params				碰撞查询额外参数
	 * @param TraceStart			开始位置
	 * @param MaxRange				射线追踪扫描半径
	 * @param OutTraceEnd			返回准星的位置
	 */
	void AimWithPlayerController(const AActor* InSourceActor, const FCollisionQueryParams& Params, const FVector& TraceStart, float MaxRange, FVector& OutTraceEnd) const;

	/**
	 * 调整射线的终点以确保在技能范围内
	 * @param CameraLocation		角色摄像机位置
	 * @param CameraDirection		角色摄像机方向
	 * @param AbilityCenter			技能中心位置
	 * @param AbilityRange			技能半径
	 * @param ClippedPosition		调整后的射线结束位置
	 * @return 
	 */
	static bool ClipCameraRayToAbilityRange(const FVector& CameraLocation, const FVector& CameraDirection, const FVector& AbilityCenter, float AbilityRange, FVector& ClippedPosition);

	/**
	 * 更新可交互选项
	 * @param InteractQuery			交互所有者信息
	 * @param InteractableTargets	交互目标
	 */
	void UpdateInteractableOptions(const FInteractionQuery& InteractQuery, const TArray<TScriptInterface<IInteractableTarget>>& InteractableTargets);

public:
	UPROPERTY(BlueprintAssignable)
	FOnInteractableObjectsChanged OnInteractableObjectsChanged;

protected:
	FCollisionProfileName TraceProfile;

	// Does the trace affect the aiming pitch
	bool bTraceAffectsAimPitch = true;

	// 当前可交互物品选项
	TArray<FInteractionOption> CurrentOptions;
};
