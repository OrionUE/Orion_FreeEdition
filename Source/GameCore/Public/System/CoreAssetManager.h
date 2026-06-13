/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/AssetManager.h"
#include "CoreGameData.h"
#include "Character/CorePawnData.h"

#include "CoreAssetManager.generated.h"

#define STARTUP_JOB_WEIGHTED(JobFunc, JobWeight) StartupJobs.Add(FCoreAssetManagerStartupJob(#JobFunc, [this](const FCoreAssetManagerStartupJob& StartupJob, TSharedPtr<FStreamableHandle>& LoadHandle){JobFunc;}, JobWeight))
#define STARTUP_JOB(JobFunc) STARTUP_JOB_WEIGHTED(JobFunc, 1.f)

struct FCoreAssetManagerStartupJob;

struct FCoreBundles
{
	static const FName Equipped;
};

/**
 * UCoreAssetManager
 * 
 * 游戏资产管理器基类
 * 覆盖功能和存储游戏特定类型的资产管理器的游戏实现
 * 
 * @note
 * 需在DefaultGame.ini中配置CoreGameDataPath、DefaultPawnData
 * 需在DefaultEngine.ini添加此类的名称和路径
 * [/Script/Engine.Engine]
 * AssetManagerClassName=/Script/ModuleName.AssetManagerClassName
 */
UCLASS(Config=Game)
class GAMECORE_API UCoreAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	UCoreAssetManager();
	
	static UCoreAssetManager& Get();
	
	/**
	 * Returns the asset referenced by a TSoftObjectPtr.
	 * This will synchronously load the asset if it's not already loaded.
	 * 返回由TSoftObjectPtr引用的资源。将同步加载尚未加载的资源
	 * 
	 * @tparam AssetType			资源类型
	 * @param AssetPointer			资源路径
	 * @param bKeepInMemory			加载后是否保持在内存中
	 * @return						加载后的资产指针，如果加载失败则返回空指针
	 */
	template<typename AssetType>
	static AssetType* GetAsset(const TSoftObjectPtr<AssetType>& AssetPointer, bool bKeepInMemory = true);
	
	/**
	 * Returns the subclass referenced by a TSoftClassPtr.
	 * This will synchronously load the asset if it's not already loaded.
	 * 返回由TSoftClassPtr引用的子类。将同步加载尚未加载的资源
	 * 
	 * @tparam AssetType			资源类型
	 * @param AssetPointer			资源路径
	 * @param bKeepInMemory			加载后是否保持在内存中
	 * @return						加载后的子类，返回TSubclassOf类型
	 */
	template<typename AssetType>
	static TSubclassOf<AssetType> GetSubclass(const TSoftClassPtr<AssetType>& AssetPointer, bool bKeepInMemory = true);

	/**
	 * Logs all assets currently loaded and tracked by the asset manager.
	 * 记录当前由资产管理器加载和跟踪的所有资产
	 */
	static void DumpLoadedAssets();

	template<typename GameDataClass>
	const GameDataClass& GetGameData()
	{
		return GetOrLoadTypedGameData<GameDataClass>(CoreGameDataPath);
	}
	
	const UCorePawnData* GetDefaultPawnData() const;

protected:
	/**
	 * 获取或加载指定类型的GameData
	 * 
	 * @tparam GameDataClass		GameData类型
	 * @param DataPath				GameData路径
	 * @return						返回获取或创建的GameData
	 */
	template<typename GameDataClass>
	const GameDataClass& GetOrLoadTypedGameData(const TSoftObjectPtr<UCoreGameData>& DataPath)
	{
		if (TObjectPtr<UPrimaryDataAsset> const * pResult = GameDataMap.Find(GameDataClass::StaticClass()))
		{
			return *CastChecked<GameDataClass>(*pResult);
		}

		// Does a blocking load if needed
		return *CastChecked<const GameDataClass>(LoadGameDataOfClass(GameDataClass::StaticClass(), DataPath, GameDataClass::StaticClass()->GetFName()));
	}

	/**
	 * 同步加载资产
	 */
	static UObject* SynchronousLoadAsset(const FSoftObjectPath& AssetPath);

	/**
	 * 是否记录资产LogAssetLoads
	 */
	static bool ShouldLogAssetLoads();
	
	/**
	 * Thread safe way of adding a loaded asset to keep in memory.
	 * 以线程安全的方式添加一个加载的资产，以保持在内存中
	 */
	void AddLoadedAsset(const UObject* Asset);

	UPrimaryDataAsset* LoadGameDataOfClass(TSubclassOf<UPrimaryDataAsset> DataClass, const TSoftObjectPtr<UPrimaryDataAsset>& DataClassPath, FPrimaryAssetType PrimaryAssetType);

	//~UAssetManager interface
	virtual void StartInitialLoading() override;
#if WITH_EDITOR
	virtual void PreBeginPIE(bool bStartSimulate) override;
#endif
	//~End of UAssetManager interface

protected:
	// Global game data asset to use.
	UPROPERTY(Config)
	TSoftObjectPtr<UCoreGameData> CoreGameDataPath;

	// Loaded version of the game data
	UPROPERTY(Transient)
	TMap<TObjectPtr<UClass>, TObjectPtr<UPrimaryDataAsset>> GameDataMap;
	
	// Pawn data used when spawning player pawns if there isn't one set on the player state.
	UPROPERTY(Config)
	TSoftObjectPtr<UCorePawnData> DefaultPawnData;

protected:
	/**
	 * Flushes the StartupJobs array. Processes all startup work.
	 * 刷新StartupJobs数组。处理所有启动工作
	 */
	void DoAllStartupJobs();
	
	/**
	 * Sets up the ability system
	 * 初始化GameplayCue游戏玩法管理器
	 */
	void InitializeGameplayCueManager();
	
	/**
	 * Called periodically during loads, could be used to feed the status to a loading screen
	 */
	void UpdateInitialGameContentLoadPercent(float GameContentPercent);
	
	// The list of tasks to execute on startup. Used to track startup progress.
	TArray<FCoreAssetManagerStartupJob> StartupJobs;

private:
	// Assets loaded and tracked by the asset manager.
	// 资产管理器加载和跟踪的资产
	UPROPERTY()
	TSet<TObjectPtr<const UObject>> LoadedAssets;

	// Used for a scope lock when modifying the list of load assets.
	// 修改加载资源列表时的锁
	FCriticalSection LoadedAssetsCritical;
};

template<typename AssetType>
AssetType* UCoreAssetManager::GetAsset(const TSoftObjectPtr<AssetType>& AssetPointer, bool bKeepInMemory)
{
	AssetType* LoadedAsset = nullptr;

	const FSoftObjectPath& AssetPath = AssetPointer.ToSoftObjectPath();

	if (AssetPath.IsValid())
	{
		LoadedAsset = AssetPointer.Get();
		if (!LoadedAsset)
		{
			LoadedAsset = Cast<AssetType>(SynchronousLoadAsset(AssetPath));
			ensureAlwaysMsgf(LoadedAsset, TEXT("Failed to load asset [%s]"), *AssetPointer.ToString());
		}

		if (LoadedAsset && bKeepInMemory)
		{
			// Added to loaded asset list.
			Get().AddLoadedAsset(Cast<UObject>(LoadedAsset));
		}
	}

	return LoadedAsset;
}

template <typename AssetType>
TSubclassOf<AssetType> UCoreAssetManager::GetSubclass(const TSoftClassPtr<AssetType>& AssetPointer, bool bKeepInMemory)
{
	TSubclassOf<AssetType> LoadedSubclass;

	const FSoftObjectPath& AssetPath = AssetPointer.ToSoftObjectPath();

	if (AssetPath.IsValid())
	{
		LoadedSubclass = AssetPointer.Get();
		if (!LoadedSubclass)
		{
			LoadedSubclass = Cast<UClass>(SynchronousLoadAsset(AssetPath));
			ensureAlwaysMsgf(LoadedSubclass, TEXT("Failed to load asset class [%s]"), *AssetPointer.ToString());
		}

		if (LoadedSubclass && bKeepInMemory)
		{
			// Added to loaded asset list.
			Get().AddLoadedAsset(Cast<UObject>(LoadedSubclass));
		}
	}

	return LoadedSubclass;
}
