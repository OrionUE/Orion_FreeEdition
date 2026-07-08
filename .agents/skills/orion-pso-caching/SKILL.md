---
name: orion-pso-caching
description: "Use when packaging, collecting, converting, validating, or troubleshooting Unreal Engine 5.8 PSO shader caches in this Orion project workflow: PSO Precaching, bundled PSO caches, ShaderPipelineCache, PSOPrecache, CollectedPSOs, PipelineCaches, ShaderStableInfo .shk files, .rec.upipelinecache recordings, .spc generation, incremental PSO collection, specified-map PSO collection, -logPSO, -clearPSODriverCache, all-map/all-quality PSO roaming, startup shader compilation UI, abnormal-exit or desktop-switch relaunch causing apparent full startup PSO recompilation, or user requests such as 打包并收集着色器, 收集PSO, 增量收集PSO, 指定地图收集PSO, 收集着色器, PSO打包, 预编译着色器, 清除PSO缓存, 崩溃后重新编译全部着色器."
---

# Orion PSO Caching

本 Skill 用于执行 Unreal Engine 5.8 Windows PSO 全流程：确认配置、Cook 后复制 `.shk`、按全量/增量/指定地图范围启动打包版游戏记录 `.rec.upipelinecache`、转换 `.spc`、注入 `Build/<Platform>/PipelineCaches`，或在 UE 5.8 `.spc` 读回崩溃时生成 direct stable `.stable.upipelinecache`，再重新打包并验证日志。

## 工作流

1. 先判断用户意图：只解释 PSO、配置 PSO、收集 PSO、转换 `.spc`、打包验证，还是“打包并收集着色器”全流程。
2. 用户触发“收集 PSO / 打包并收集着色器”但没有指定范围时，先让用户选择：全量全部地图（耗时长）、增量只收集缺失/过期地图、或指定地图名称/路径。用户已经说“全部/全量”则用 `-CollectionMode All`；说“增量/改动/最新”则用 `-CollectionMode Incremental`；给出地图名或路径则用 `-CollectionMode Maps -Maps <MapNameOrPath>`。
3. 修改配置或脚本前读取 `../orion-code-style/SKILL.md`；需要机械 CRLF 修复时配合 `../crlf-mechanical-formatting/SKILL.md`。
4. 查当前项目真实配置：`Config/<Platform>/<Platform>Engine.ini` 的 `NeedsShaderStableKeys`、`r.PSOPrecaching`、`r.ShaderPipelineCache.*`，以及 `Config/DefaultGame.ini` 的 `bShareMaterialShaderCode` / `bSharedMaterialNativeLibraries`。
5. Cook/package 后复制 `Saved/Cooked/<Platform>/<ProjectName>/Metadata/PipelineCaches/ShaderStableInfo-*.shk` 到 `CollectedPSOs`。
6. 用 `scripts/Collect-PSOs-Windows.ps1` 发现 `.umap`、按收集范围和画质档启动 packaged game、传入 `-clearPSODriverCache -logPSO -NoLoadingScreen -OrionPSOCapture`，由游戏内 `UOrionPSOCaptureSubsystem` 生成第三视角巡航相机穿越场景；不要依赖外部 WASD、鼠标或输入法状态做正式收集。脚本只写 `-abslog` 文件日志，不传 `-log` 弹出命令窗口；每次游戏退出或超时后必须清理本次启动的进程树。
7. 用 `scripts/Cmd_ConvertPSOs_5.8.bat` 或 `scripts/Convert-PSOs-5.8.ps1` 把 `CollectedPSOs/*.rec.upipelinecache` 和 `CollectedPSOs/*.shk` 转成 `PSO_<ProjectName>_<ShaderFormat>.spc`；`-CopyToBuild` 会先执行 `ShaderPipelineCacheTools build` 读回验证，通过后才移动到 `Build/<Platform>/PipelineCaches`。不要在 `CollectedPSOs` 和 `Build/<Platform>/PipelineCaches` 同时保留同一份 `.spc`。
8. 如果 `.spc` 读回验证崩在 `PipelineFileCache.cpp` 或 `PipelineCacheUtilities.cpp`，不要改用 `.stablepc.csv.compressed` 作为正式格式；先移出 `Build/<Platform>/PipelineCaches` 的 `.spc/.stablepc*`，再用 `scripts/Build-DirectStablePSO-5.8.ps1 -CleanBuildPipelineCaches` 直接写 `Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache`。此路径要求 `r.ShaderPipelineCacheTools.IncludeComputePSODuringCook=0`，避免 Cook 删除 direct stable 输出；同时要求 `Config/DefaultGame.ini` 显式配置 `+DirectoriesToAlwaysStageAsUFS=(Path="PipelineCaches")`，保证该非资产文件进入包。
	- direct stable 与 `.spc` 正常路径的运行时目标相同，都是让包内存在 `Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache` 供 `FShaderPipelineCache` 打开和预编译；差别是 `.spc` 正常路径由 Cook 执行 `.spc + .shk -> .stable.upipelinecache` 并做 stable-key remap、sanity check、chunk 处理，而 direct stable 跳过这一步，直接把本次录制数据写成运行时 cache。因此 direct stable 是本项目 UE 5.8 `.spc` 读回崩溃时的可用绕过方案，不是长期优先格式。
	- 如果 Cook/UAT 日志栈是 `BuildPSOSC -> LoadStablePipelineCacheFile -> ContainerHelpers invalid TArray size`，或 `LoadStablePipelineCacheFile -> PipelineFileCache.cpp:1424 -> Enclosing block should never be called`，先查日志中的 `With Args: build "...Build/<Platform>/PipelineCaches/*<ProjectName>_<ShaderFormat>.spc"` 和 `Expanding matched`。这表示 Cook 实际读到了 `.spc` 并在反序列化稳定 PSO 缓存时崩溃，不是 NVIDIA 显卡驱动、DXCache 或 `-clearPSODriverCache` 问题；用户手工重新收集 `.rec.upipelinecache` 后仍可能复现，说明是本项目 PSO 数据组合触发 UE 5.8 `.spc` 读回路径问题。清空 `Build/<Platform>/PipelineCaches/*.spc/.stablepc*` 后可不带 PSO 打包，或改走 direct stable fallback。
9. 用户要求“生成空 `.spc` 再试”时，用 `scripts/New-EmptyPSOStableCache-5.8.ps1` 生成 66 字节 UE 5.8 空稳定缓存并备份原 `.spc`。空 `.spc` 只用于诊断：UE 能读到 `Loaded 0 stable PSOs` 时说明不是 `.spc` 头格式本身崩溃；Cook 仍可能因 0 PSO 返回失败，不能代表 PSO 已完成打包。
10. 重新 cook/package；`.spc` 正常路径检查 UAT 日志是否运行 `UShaderPipelineCacheToolsCommandlet`、加载 `.shk` / `.spc`、写出 stable `.upipelinecache`；direct stable 路径则确认日志没有再从 `Build/<Platform>/PipelineCaches` 读取 `.spc/.stablepc*`，并确认 UFS manifest 包含 `Content/PipelineCaches/<Platform>/*.stable.upipelinecache`，且最终 `BUILD SUCCESSFUL`。
11. 用 packaged game 加 `-clearPSODriverCache -trace=default` 或日志关键字验证：包内 cache 已打开、新 PSO 数量显著下降、启动 shader 编译 UI 能根据 `NumPrecompilesRemaining()` 完成。
12. 排查“进入关卡后异常退出、返回桌面或崩溃，下次启动又像全量编译着色器”时，先区分 `LogShaderCompilers` 的真正 shader 编译和 `FShaderPipelineCache::NumPrecompilesRemaining()` 驱动的启动 PSO UI。UE 5.8 Windows 没有内建“此 bundled PSO cache 已完成预编译”的完成标记，项目侧应把当前 stable cache 指纹写到用户配置，并在 `-clearPSODriverCache`、`-deleteuserpsocache`、`-logPSO` 下忽略该标记强制验证。

## 路由

- 打包、Profile、UAT、Steam CustomConfig、Stage/Package 验证：先用 `../orion-packaging/SKILL.md`，本 Skill 负责 PSO 收集和 `.spc` 注入。
- 升级 Unreal Engine、切换引擎构建、或用户要求复测 UE 更新是否修复 `.spc` / PSO 打包崩溃时，读取 `../orion-engine-upgrade-regression-todos/SKILL.md`。
- 渲染配置、DLSS/NIS/RTX、Scalability、启动 shader 编译 UI：配合 `../orion-rendering-framework/SKILL.md`。
- 查 UE 5.8 引擎源码、`ShaderPipelineCache`、`PSOPrecache`、`PipelineStateCache` 或 commandlet：配合 `../unreal-source-code-navigator/SKILL.md`。
- 修改加载屏、编译着色器进度 UI 或 `FlowStep_TryCompileShaders`：配合 `../orion-loading-screen-framework/SKILL.md`。
- 创建/移动 PSO 相关目录或正式构建资源：配合 `../orion-asset-management/SKILL.md` 和 `../orion-framework-architecture/SKILL.md`。

## References

- 需要学习资料和 UE 5.8 源码要点时，读取 `references/pso-study-notes.zh-CN.md`。
- 需要执行完整配置、收集、转换、打包、验证流程时，读取 `references/pso-full-workflow.zh-CN.md`。

## Scripts

- `scripts/Test-PsoSetup.ps1`：只读检查当前 PSO 配置、引擎路径、Cook `.shk`、`CollectedPSOs`、`Build/<Platform>/PipelineCaches`。
- `scripts/Collect-PSOs-Windows.ps1`：复制 cook `.shk`、发现 `.umap`、支持 `-CollectionMode All|Incremental|Maps`、支持 `-Maps/-Map` 指定地图、按画质档启动 packaged game、支持 `-AdditionalArgs` 传入运行时参数、启用 `-OrionPSOCapture` 游戏内第三视角巡航相机并收集 `.upipelinecache`；脚本使用文件日志并在每次运行后清理游戏进程树，避免残留命令窗口。
- `scripts/Convert-PSOs-5.8.ps1`：调用 UE 5.8 `ShaderPipelineCacheTools expand` 生成正式打包使用的 `.spc`；`-CopyToBuild` 会先在 `Saved/OrionUE/PSO/convert-output` 生成输出，再用 `ShaderPipelineCacheTools build` 验证读回，验证通过后移动到 `Build/<Platform>/PipelineCaches`，不复制到两处。转换日志写入 `Saved/Logs/PSO/pso-convert-*.log`，读回验证日志写入 `Saved/OrionUE/PSO/convert-validation/*/build-validation.log`。必须传入 `.uproject`，并用通配符让 UE 展开输入文件，避免 Windows 超长参数和无项目上下文导致 commandlet 卡住。`stablepc.csv.compressed` 是旧文本诊断格式，不作为本流程正式格式。
- `scripts/Cmd_ConvertPSOs_5.8.bat`：Windows 批处理入口，转发到 `Convert-PSOs-5.8.ps1`。
- `scripts/Test-PSOSpcBatches-5.8.ps1`：把 `CollectedPSOs` 按全部、画质、地图或固定大小分组，逐组执行 `.rec + .shk -> .spc -> build 读回验证`，用于定位 `.spc` Cook 崩溃是否来自某个 `.rec.upipelinecache`、某个画质或某张地图。
- `scripts/Build-DirectStablePSO-5.8.ps1`：当 UE 5.8 `.spc` 读回验证失败时，调用项目 `OrionPSOFilter` commandlet 合并 `CollectedPSOs/*.rec.upipelinecache`，直接生成 `Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache`；脚本会检查或移动 `Build/<Platform>/PipelineCaches` 残留 `.spc/.stablepc*`，并检查 `DirectoriesToAlwaysStageAsUFS=(Path="PipelineCaches")`，避免 Cook 再走失败路径或包内漏掉 direct stable cache。
- `scripts/New-EmptyPSOStableCache-5.8.ps1`：生成 UE 5.8 结构合法但没有任何 stable PSO permutation 的空 `.spc`，默认输出到 `Build/<Platform>/PipelineCaches/PSO_<ProjectName>_<ShaderFormat>.spc` 并把原文件备份到 `Saved/OrionUE/PSO/spc-backups/<timestamp>`；仅用于验证 `.spc` 读回崩溃是否来自录制数据内容，不能作为正式 PSO 缓存。

## 验证

完成 Skill 或脚本修改后运行：

```powershell
python -X utf8 <SkillCreatorRoot>\scripts\quick_validate.py .agents\skills\orion-pso-caching
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-framework-skill-authoring\scripts\check-skill-portability.ps1 -Path .agents\skills\orion-pso-caching -CheckCRLF -RequireRouting
```
