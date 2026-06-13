/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Handler/OrionArchiveType.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "OrionArchiveManagerSubsystem.generated.h"

struct FOrionPlayerID;

class UArchiveEntry;
class UOrionArchiveContext;
class UOrionArchiveLevelMeta;
class UOrionArchivePlayer;
class UOrionExperienceLevelMetaDefinition;
class UOrionSettingsWorldOption;
class UGamePhaseAbility_InitializeArchive;

enum class EOrionArchiveType : uint8;

/**
 * FFindAllWorldIDVisitor
 *
 * 获取 SaveGame 文件夹下所有存档
 * 一个存档为一个文件夹，文件夹名为 WorldID；通过遍历所有存档，并且该存档下必须有 LevelMeta.sav 才视为一个存档
 */
class FFindAllWorldIDVisitor : public IPlatformFile::FDirectoryVisitor
{
public:
	FFindAllWorldIDVisitor() { }

	virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
	{
		if (bIsDirectory)
		{
			FPlatformFileManager::Get().GetPlatformFile().IterateDirectory(FilenameOrDirectory, *this);
		}
		else
		{
			FString FullPath(FilenameOrDirectory);
			FullPath.ReplaceInline(TEXT("\\"), TEXT("/"));
			
			TArray<FString> PathParts;
			FullPath.ParseIntoArray(PathParts, TEXT("/"), true);

			if (FPaths::GetBaseFilename(PathParts.Last()).Equals(LEVELMETA_SETTINGS_SLOT_NAME) &&
				FPaths::GetExtension(PathParts.Last()).Equals(TEXT("sav"), ESearchCase::IgnoreCase) &&
				PathParts.Last(3).Equals(TEXT("SaveGames")))
			{
				WorldIDArray.AddUnique(PathParts.Last(1));
			}
		}
		
		return true;
	}

	const TArray<FString>& GetWorldIDArray() const { return WorldIDArray; }

private:
	TArray<FString> WorldIDArray;
};

/**
 * UOrionArchiveManageSubsystem
 * 
 * 存档管理子系统
 */
UCLASS()
class ORIONGAME_API UOrionArchiveManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	/** 刷新存档列表 */
	void RefreshArchive();

	/** 创建新游戏 */
	void NewGame(const UOrionExperienceLevelMetaDefinition* InLevelMetaDefinition);

	/** 加载游戏 */
	void LoadGame();

	/** 初始化存档 */
	void InitArchive();

	/** 退出该游戏世界 */
	void QuitWorld();

	/** 删除当前存档 */
	void DeleteCurrentArchive();

	/** 创建一个玩家存档 */
	void CreatePlayerArchive(const FOrionPlayerID& InPlayerID, const TSubclassOf<UOrionArchivePlayer>& InPlayerArchiveClass);

	/** 保存指定类型的存档 */
	void SaveCurrentArchiveByTypes(const TArray<EOrionArchiveType>& InArchiveTypes);

	/**
	 * 获取当前游戏关卡元数据
	 * @return 关卡元数据 USaveGame
	 */
	UOrionArchiveLevelMeta* GetCurrentLevelMeta() const;

	/**
	 * 获取当前游戏世界选项设置
	 * @return 世界选项设置 USaveGame
	 */
	UOrionSettingsWorldOption* GetCurrentWorldOptionSettings() const;

	/**
	 * 获取或加载当前游戏指定玩家存档
	 * @param InPlayerID 玩家ID
	 * @param OnGetPlayerArchive 获取玩家存档委托，返回玩家存档；玩家存档不存在时返回空指针
	 */
	void GetOrLoadPlayerArchive(const FOrionPlayerID& InPlayerID, const FOnGetPlayerArchive& OnGetPlayerArchive) const;

	/**
	 * 获取所有存档UI条目，按存档时间先后排序
	 * @param InOutArchiveEntries 时间排序后的存档条目
	 */
	void GetArchiveEntries(TArray<UArchiveEntry*>& InOutArchiveEntries);

	/**
	 * 清除未使用存档
	 * 除 CurrentOperationArchive 正在操作的存档，清空 ArchiveItems
	 */
	void ClearUnusedArchives();

	/**
	 * 所有存档是否已初始化完成
	 * @return 是否已完成
	 */
	bool IsFinishedRefresh() const;

protected:
	void GetAllArchiveWorldID(TArray<FString>& OutWorldIDArray);

private:
	UPROPERTY()
	TArray<TObjectPtr<UOrionArchiveContext>> ArchiveItems;

	// 当前正在操作的存档
	UPROPERTY()
	TObjectPtr<UOrionArchiveContext> CurrentOperationArchive;

	friend UGamePhaseAbility_InitializeArchive;
};
