# 引擎升级回归复测 Todo

## 使用原则

- 只记录引擎升级、引擎构建切换或 UE 工具链变化后需要复测的问题；普通项目 bug 应进入对应系统 Skill。
- 每次升级 Unreal Engine 后，先复测 `状态: RecheckOnEngineUpgrade` 的项目，再判断是否删除 workaround。
- 如果一个 workaround 保护的是流程错误而不是 UE bug，标记为 `WorkflowGuard`，不要因为引擎升级而删除。
- 所有示例路径使用占位符，不写本机绝对路径；项目名使用 `<ProjectName>`。

## 状态说明

- `RecheckOnEngineUpgrade`：下次 UE 更新后优先复测。
- `WorkaroundActive`：当前仍需要 workaround，删除前必须做对照验证。
- `WorkflowGuard`：长期流程防呆，不依赖 UE 修复。
- `ResolvedCandidate`：新引擎里看起来已修复，但还没有完整去 workaround 验证。
- `Resolved`：已在新引擎中验证修复，旧 workaround 可以移除或降级为兼容分支。

## 复测记录模板

```text
### TODO-AREA-000: 标题

状态:
首次记录:
基线版本:
现象:
日志关键字:
最小复现:
成功标准:
当前 workaround:
复测步骤:
关联 Skill:
最新复测:
```

## 当前待复测清单

### TODO-PSO-001: UE 5.8 `.spc` 在 Cook 的 BuildPSOSC 读回阶段崩溃

状态: `RecheckOnEngineUpgrade`, `WorkaroundActive`

首次记录: 2026-06-25

基线版本: UE 5.8 installed build, Windows, `PCD3D_SM6`

现象:

- `ShaderPipelineCacheTools expand` 能返回 0 并生成 `.spc`。
- Cook/UAT 执行 `UShaderPipelineCacheToolsCommandlet build` 读取 `Build/<Platform>/PipelineCaches/*<ProjectName>_<ShaderFormat>.spc` 时崩溃。
- 用户重新手工收集 `.rec.upipelinecache` 再生成 `.spc` 后仍可复现，因此不是单次自动收集脚本独有问题。

日志关键字:

- `With Args: build "...Build/<Platform>/PipelineCaches/*<ProjectName>_<ShaderFormat>.spc"`
- `Expanding matched 1 files`
- `BuildPSOSC`
- `LoadStablePipelineCacheFile`
- `ContainerHelpers.cpp` + `Trying to resize TArray to an invalid size`
- `PipelineFileCache.cpp:1424` + `Enclosing block should never be called`
- `PipelineCacheUtilities.cpp:205` + `PermDescriptor.ActivePerSlot[SF_Compute]`

最小复现:

1. 使用同一代 Cook 生成的 `ShaderStableInfo-Global-<ShaderFormat>.shk` 和 `ShaderStableInfo-<ProjectName>-<ShaderFormat>.shk`。
2. 使用 packaged game 的 `-logPSO` 记录至少一个 `.rec.upipelinecache`。
3. 运行 `ShaderPipelineCacheTools expand` 或 PSO 转换脚本生成 `.spc`。
4. 运行 `ShaderPipelineCacheTools build` 读回验证，或把 `.spc` 放入 `Build/<Platform>/PipelineCaches` 后重新 Cook。

成功标准:

- 转换脚本的 build 读回验证通过。
- Cook 日志显示 `Loaded ... stable PSOs`、`Number of PSOs after sanity checks`、`Wrote ... stable.upipelinecache`。
- 不再需要 direct stable fallback。

当前 workaround:

- 不把失败 `.spc` 留在 `Build/<Platform>/PipelineCaches`。
- 使用 `Build-DirectStablePSO-5.8.ps1 -CleanBuildPipelineCaches` 或后续等价脚本生成 `Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache`。
- 保持 `r.ShaderPipelineCacheTools.IncludeComputePSODuringCook=0`，避免 Cook 在没有 `.spc` 输入时删除 direct stable 输出。
- 确认 `ProjectPackagingSettings` 显式 Stage `PipelineCaches`。

复测步骤:

1. 升级 UE 后重新 Cook，生成新的 `.shk`。
2. 只采一张代表地图和一个画质档，生成小 `.rec.upipelinecache`。
3. 运行 `.rec + .shk -> .spc -> build` 默认读回验证，不传跳过验证参数。
4. 若小样本通过，再用全量收集数据复测。
5. 若全量通过，再进行一次带 `.spc` 的完整 package，并确认 staged `*.stable.upipelinecache`。
6. 若通过，标记为 `ResolvedCandidate`，再尝试移除 direct stable workaround 做对照包。

关联 Skill: `../orion-pso-caching/SKILL.md`

最新复测: 未在 UE 5.8 之后版本验证。

### TODO-PSO-002: `stablepc.csv.compressed` 不能作为 `.spc` 的可靠 fallback

状态: `RecheckOnEngineUpgrade`, `WorkaroundActive`

首次记录: 2026-06-25

基线版本: UE 5.8 installed build, Windows, `PCD3D_SM6`

现象:

- `ShaderPipelineCacheTools expand` 可生成 `.stablepc.csv.compressed`。
- Cook 的 `BuildPSOSC` 读取该文本格式时报格式不匹配，最终创建 0 条 PSO 并失败。

日志关键字:

- `Using stable pipeline cache in a deprecated text format`
- `not in the correct format (GraphicsDesc)`
- `Loaded 0 PSO lines`
- `UShaderPipelineCacheToolsCommandlet failed`

成功标准:

- 只有在 Epic 后续版本明确恢复该格式兼容性时，才允许作为诊断输入。
- 即使新版本能读取，也优先使用 `.spc` 正式路径；不要把文本格式作为默认正式包格式。

当前 workaround:

- 不把 `.stablepc.csv.compressed` 长期放在 `Build/<Platform>/PipelineCaches`。
- `.spc` 失败时走 direct stable fallback，而不是旧文本格式。

复测步骤:

1. 在新 UE 版本中生成 `.stablepc.csv.compressed`。
2. 仅用小样本运行 `ShaderPipelineCacheTools build`。
3. 若仍有 deprecated warning 但能成功，记录为诊断可用；若仍失败，保持当前规则。

关联 Skill: `../orion-pso-caching/SKILL.md`

最新复测: 未在 UE 5.8 之后版本验证。

### TODO-PSO-003: direct stable 文件可能被 Cook 删除或没有进入包

状态: `RecheckOnEngineUpgrade`, `WorkaroundActive`

首次记录: 2026-06-25

基线版本: UE 5.8 installed build, Windows

现象:

- `Content/PipelineCaches/<Platform>/<ProjectName>_<ShaderFormat>.stable.upipelinecache` 是运行时读取目标，但不是普通 `.uasset`。
- 没有 `.spc` 输入时，Cook 仍可能因为 compute PSO 设置运行 `ShaderPipelineCacheTools build`，从而删除 direct stable 输出。
- 自动 staging 不一定覆盖 `Content/PipelineCaches/<Platform>`，需要显式 UFS staging。

日志关键字:

- `NOT Running UShaderPipelineCacheToolsCommandlet`
- `Deleting ... cooked data doesn't belong here`
- `stable.upipelinecache`
- UFS manifest 中缺少 `Content/PipelineCaches/<Platform>/...stable.upipelinecache`

成功标准:

- 没有 `.spc` 输入时，Cook 不删除 direct stable 文件。
- UFS manifest、Pak/IoStore 或 staged 文件列表能找到 `*.stable.upipelinecache`。
- Packaged game 日志显示打开了 bundled pipeline cache，且 entries/tasks 不为 0。

当前 workaround:

- `r.ShaderPipelineCacheTools.IncludeComputePSODuringCook=0`。
- `+DirectoriesToAlwaysStageAsUFS=(Path="PipelineCaches")`。

复测步骤:

1. 升级 UE 后保留 direct stable 文件，清空 `Build/<Platform>/PipelineCaches`。
2. 分别测试是否仍需要 compute CVar 和 UFS staging 设置。
3. 只有在去掉某个 workaround 后完整 Cook、Stage、Package、运行时验证都通过，才标记为 `ResolvedCandidate`。

关联 Skill: `../orion-pso-caching/SKILL.md`, `../orion-packaging/SKILL.md`

最新复测: 未在 UE 5.8 之后版本验证。

### TODO-PKG-001: Cook commandlet 与编辑器 MCP 自动启动争用 HttpListener 端口

状态: `RecheckOnEngineUpgrade`, `WorkaroundActive`

首次记录: 2026-06-26

基线版本: UE 5.8 installed build

现象:

- 编辑器已启动 MCP server 时，Cook 的 `UnrealEditor-Cmd.exe` 也自动启动 MCP，导致 commandlet 绑定同一个本机端口失败。
- UAT 可能以 `Error_UnknownCookFailure` 结束。

日志关键字:

- `LogHttpListener: Error: HttpListener unable to bind`
- `ModelContextProtocolSettings`
- `bAutoStartServer=True`

成功标准:

- 编辑器开着时，Cook commandlet 不再争用同一 MCP 端口。
- 普通打包无需额外禁用 commandlet MCP 自动启动。

当前 workaround:

- UAT/Cook 追加 `-ini:EditorPerProjectUserSettings:[/Script/ModelContextProtocolEngine.ModelContextProtocolSettings]:bAutoStartServer=False`。
- 只禁用 commandlet 自动启动，不改用户编辑器 MCP 默认配置。

复测步骤:

1. 升级 UE 后保持编辑器打开并确认 MCP server 处于运行状态。
2. 不带 workaround 运行一次最小 Cook commandlet。
3. 若不再出现绑定失败，再运行完整打包。
4. 若两者通过，标记为 `ResolvedCandidate`；否则保留 Profile 和 UAT 参数。

关联 Skill: `../orion-packaging/SKILL.md`, `../orion-mcp-workflow/SKILL.md`

最新复测: 未在 UE 5.8 之后版本验证。

### TODO-PSO-CAPTURE-001: PSO 收集不能依赖外部 WASD、输入法或窗口焦点

状态: `WorkflowGuard`

首次记录: 2026-06-25

现象:

- 外部键盘输入可能被中文输入法、窗口焦点、启动电影、主菜单或 LoadingScreen 吞掉。
- 只看见游戏窗口打开，不代表真的发生第三视角场景漫游。

长期规则:

- 正式 PSO 收集必须使用游戏内 capture 参数或同等自动化，让运行时自己创建第三视角巡航相机。
- 运行日志必须能证明 capture started/finished，而不是只依赖外部按键。

复测条件:

- 只有当项目改用 Gauntlet、Automation Driver 或新的游戏内 capture 系统时，才更新本项；不因 UE 版本升级而删除。

关联 Skill: `../orion-pso-caching/SKILL.md`

### TODO-PSO-CAPTURE-002: PSO 收集后必须关闭游戏进程树和日志窗口

状态: `WorkflowGuard`

首次记录: 2026-06-25

现象:

- packaged game 带 `-log` 会弹出额外命令窗口。
- 根目录 bootstrap exe 可能拉起真正的 `Binaries/<Platform>` 游戏进程；只关闭父进程会残留窗口或子进程。

长期规则:

- 正式收集用 `-abslog=<RunLog>` 写文件日志，不传 `-log`。
- 脚本优先启动内部 game exe，并在 finally 中清理本次启动的进程树。
- 不按 exe 名称全局杀进程，避免误关用户其他运行实例。

复测条件:

- 这是脚本/流程防呆，不依赖 UE 修复。只有启动器结构或收集脚本重写时更新。

关联 Skill: `../orion-pso-caching/SKILL.md`

## 新增 Todo 时的要求

新增条目必须包含：

- 唯一 ID，例如 `TODO-PSO-004` 或 `TODO-PKG-002`。
- 首次记录日期和基线 UE 版本。
- 最少 2 个日志关键字，保证以后能从 UAT/Cook/runtime log 搜到。
- 当前 workaround 和成功标准。
- 复测步骤必须能在小样本上先跑，避免每次升级都直接跑全量 PSO 收集。

如果一个问题只是当前项目配置错误、脚本 bug 或资产缺失，优先写进对应 Skill 的“常见失败”，不要放进本清单。
