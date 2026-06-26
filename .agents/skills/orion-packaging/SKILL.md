---
name: orion-packaging
description: "Use when packaging or validating a Windows Steam build for an Unreal Engine project with Legacy Project Launcher custom profiles for Shipping, Debug, and Development, including Steam CustomConfig packaging from Config/Custom/Steam/DefaultEngine.ini, PSO shader cache collection prompts, 打包并收集着色器, packaged runtime startup crashes, missing plugin Content/default assets, packaged localization staging, CulturesToStage, .locres files, Content/Localization targets, packaged movie staging, Content/Movies files, bSkipMovies, UFSMovies, NonUFSMovies, Bink .bk2 files, and startup/loading movie validation."
---

# Unreal Packaging

用于 Unreal Engine 项目在 Windows 系统下打包或验证 Steam 版本，尤其是使用本 Skill 内置的 Legacy Project Launcher 自定义 Profile 模板。

当用户要求“打包”“验证打包”“跑 Launch Profile”“打 Steam 包”或类似任务时，先确认四件事：

1. 打包版本：`Shipping`、`Debug`、`Development`。如果用户未指定，默认 `Development`。
2. 保存路径：默认使用当前项目目录下的 `Packages/<Configuration>`，例如 `Packages/Development`、`Packages/Shipping`、`Packages/Debug`。
3. 更多自定义选项：询问用户是否要覆盖 Profile 里的 `Cooked Cultures`、`Cooked Platforms`、Cook 选项、额外命令行、压缩、加密、Pak/IoStore 等设置；如果用户不自定义，则使用 Profile 默认值。
4. 是否同步收集 PSO/着色器缓存：如果用户说“打包并收集着色器”“收集 PSO”“收集着色器”等明确语义，直接读取 `../orion-pso-caching/SKILL.md` 并执行 PSO 全流程；普通打包请求先简短询问是否需要收集。

内置 Windows Steam Profile 模板：

- `Shipping`: `assets/profile-templates/Shipping.ulp2.template.json`
- `Debug`: `assets/profile-templates/Debug.ulp2.template.json`
- `Development`: `assets/profile-templates/Development.ulp2.template.json`

实例化后 Profile 名称必须保持：

- `Shipping`: `<ProjectName>Steam_Shipping`
- `Debug`: `<ProjectName>Steam_Debug`
- `Development`: `<ProjectName>Steam_Development`

除非用户明确要求覆盖，否则使用模板内的 Cooked Cultures、Cooked Platforms、Pak、压缩、加密、IoStore 等默认设置。

Steam Profile 模板必须把 `{{SteamBuildTargetName}}` 和 `customconfig=Steam` 一起传给 UAT。Steam 专用 Engine 配置以 `Config/Custom/Steam/DefaultEngine.ini` 为准，不再假设 Steam block 写在根 `Config/DefaultEngine.ini`。

可用脚本：

- `scripts/install-steam-windows-profiles.ps1`：把内置模板实例化为当前项目的 `.ulp2` Profile 文件。

自动化验证打包时，按参考文档里的 UAT 等价命令、独立日志、轮询和结果判定流程执行。

Cook 日志出现 `LogHttpListener: Error: HttpListener unable to bind to 127.0.0.1:18765` 时，先检查是否有当前项目的 `UnrealEditor.exe` 正在监听 MCP 端口。不要把它误判为 PSO 问题；UAT/Cook 命令必须带 `-AdditionalCookerOptions="-ini:EditorPerProjectUserSettings:[/Script/ModelContextProtocolEngine.ModelContextProtocolSettings]:bAutoStartServer=False"`，只禁用 commandlet 的 MCP 自动启动，不改编辑器里的 MCP 配置。

## 路由

- 修改或解释 `Config/DefaultGame.ini` 里的 `ProjectPackagingSettings`、`IniKeyDenylist`、`DirectoriesToAlwaysCook`、`DirectoriesToAlwaysStageAsUFS`、文化、本地化、Pak/IoStore、chunk、压缩或 `Config/DefaultCrypto.ini` 时，先读取 `../orion-project-config/SKILL.md`。
- 排查 `Content/Movies`、`.bk2`、启动视频、加载屏视频、`bSkipMovies`、`UFSMovies`、`NonUFSMovies`、`MovieDenyList`、UFS/NonUFS movie staging 或打包后视频缺失时，配合 `../orion-movie-media-framework/SKILL.md`。
- 排查 `Content/Localization`、`.locres`、`.locmeta`、`CulturesToStage`、`LocalizationPaths`、新增语言打包后不可选、语言回退或本地化 target staging 时，配合 `../orion-localization-framework/SKILL.md`。
- 打 Steam 包、Steam Shipping/Development 目标、Dedicated Server、`SteamDevAppId` / `SteamAppId`、Steam DLL staging、Steam sockets NetDriver、OnlineSubsystem service 或 Steam 发布前检查时，配合 `../orion-online-steam-framework/SKILL.md`。
- 打包后收集 PSO、转换 `.rec.upipelinecache` 和 `.shk` 为 `.spc`、注入 `Build/<Platform>/PipelineCaches`、自动遍历地图/画质漫游、重新 cook/package 或排查 `ShaderPipelineCache` / `PSOPrecache` 时，读取 `../orion-pso-caching/SKILL.md`，并配合 `../orion-rendering-framework/SKILL.md`。
- 升级 Unreal Engine、切换引擎构建、或用户要求复测之前的 Cook/UAT/PSO/MCP 端口问题是否修复时，读取 `../orion-engine-upgrade-regression-todos/SKILL.md`。
- 替换或生成 `Build/<Platform>` 应用图标、launcher icon、`Application.ico`、`Application.icns`、Linux `Application.png` 或 Android `res/drawable` Logo 时，配合 `../orion-build-platform-icons/SKILL.md`；打包验证仍按本 Skill 执行。
- `DefaultCrypto.ini` 中的 AES/RSA 值视为秘密；打包验证只说明字段状态和日志结论，不输出实际 key value。

详细流程见：

`references/packaging-workflow.zh-CN.md`
