---
name: unreal-movie-media-framework
description: "Use when Codex works on Unreal Engine movie/video assets and playback in this framework: Content/Movies, .bk2, .mp4, .mov, BinkMedia, Bink conversion, startup movies, loading screen movies, MoviePlayerSettings, StartupMovies, FLoadingScreenAttributes, IGameMoviePlayer, UBinkMediaPlayer, UBinkMediaTexture, UMediaPlayer, UFileMediaSource, MediaTexture, MediaSoundComponent, bSkipMovies, UFSMovies, NonUFSMovies, MovieDenyList, or packaged movie staging."
---

# Unreal Movie Media Framework

本 Skill 用于处理框架内视频文件、启动视频、加载屏视频、Bink/Media Framework 播放、Movie 配置和打包 staging。视频源文件和最终播放文件统一以 `Content/Movies` 为入口。

## 工作流

1. 先读取 `.uproject`，确认 `BinkMedia`、目标平台 Media Player 插件以及 Movie/Media 相关插件启用状态。
2. 读取 `Content/Movies` 的目标子目录，不要深扫整个 `Content`；只确认相关视频源文件、`.bk2` 文件和命名是否存在。
3. 读取 `Config/DefaultGame.ini` 中的 `[/Script/MoviePlayer.MoviePlayerSettings]`、`[/Script/UnrealEd.ProjectPackagingSettings]`，以及目标平台覆盖配置。
4. 判断用途：启动/加载屏视频优先走 MoviePlayer + Bink `.bk2`；运行时材质或 UI 播放走 Bink Media 或 Media Framework。
5. 用户提供 `.mp4`、`.mov` 等源视频时，告知最终推荐转成 `.bk2`，并使用当前引擎发行版或 BinkMedia 插件附带的 Bink 转换工具完成转换。
6. 添加自己的视频时，把最终 runtime 文件放在 `Content/Movies` 下，按用途拆 `StartUp`、`Loading`、`UI`、`Cinematics` 等子目录；不要放到 `Content/UI` 或 `Content/Cinematics`。
7. 修改或新增视频资产后，继续检查 packaging 配置：`bSkipMovies`、`UFSMovies`、`NonUFSMovies`、`MovieDenyList` 和 dedicated server 目标。

## 路由

- 创建、移动、命名、导入或整理视频源文件、Bink 文件、Media Player、File Media Source、Media Texture、Bink Media Player 资产时，配合 `../unreal-asset-management/SKILL.md`。
- 修改 `MoviePlayerSettings`、`StartupMovies`、`BinkMoviePlayerSettings`、`ProjectPackagingSettings` 或平台配置时，配合 `../unreal-project-config/SKILL.md`。
- 打包后视频缺失、`bSkipMovies`、`UFSMovies`、`NonUFSMovies`、UFS/NonUFS staging、pak/io store 或 dedicated server 行为，配合 `../unreal-packaging/SKILL.md`。
- UI 中播放视频、把 Media Texture 接入 Widget 或 CommonUI 界面时，配合 `../unreal-umg/SKILL.md`；加载屏视频、加载屏 MoviePlayer/UMG 生命周期和显示隐藏时机，配合 `../unreal-loading-screen-framework/SKILL.md`。
- 视频音频、`MediaSoundComponent`、SoundClass、混音或字幕音频联动时，配合 `../unreal-audio-framework/SKILL.md`；字幕显示继续查字幕/UI 对应 Skill。
- 判断源码落点、模块依赖、引擎 MoviePlayer/BinkMedia/MediaAssets API 或平台差异时，配合 `../unreal-source-code-navigator/SKILL.md` 和 `../unreal-framework-architecture/SKILL.md`。

## Reference

读取 `references/movie-media-framework.zh-CN.md` 获取 `Content/Movies` 规范、Bink 转换说明、启动视频配置、运行时播放方案、打包 staging 规则和常见错误。

## 硬规则

- 不把宿主项目名、绝对路径、用户名、机器路径或本地引擎安装路径写进 Skill、资产、配置示例或生成文档。
- 视频文件的正式入口是 `Content/Movies`；Level Sequence、镜头和过场编排资产仍属于 `Content/Cinematics`。
- 发布、启动视频和加载屏视频优先推荐 `.bk2`；`.bk2` 由用户使用当前引擎附带的 Bink 转换工具从 `.mp4`、`.mov` 等源文件转换。
- Bink 启动视频路径通常相对 `Content/Movies` 且不写 `.bk2` 扩展名；运行时 Bink URL 通常写成相对 `Content` 的 `Movies/<Folder>/<Name>.bk2`。
- 不假设 `.mp4`、`.mov` 在所有平台都能稳定播放；平台 Media 插件支持必须以当前引擎和目标平台为准。
