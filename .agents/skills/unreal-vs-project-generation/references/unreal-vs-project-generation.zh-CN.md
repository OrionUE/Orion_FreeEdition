# Unreal VS 工程生成排查参考

## 快速判断

现象：“Generate Visual Studio project files 没用”、升级引擎后 `.sln` 仍指向旧引擎、或资源管理器右键生成没有可见反馈。

先做三件事：

1. 读 `.uproject` 的 `EngineAssociation`。
2. 查本机这个 association 是否能解析到目标引擎。
3. 搜索 `.sln`、`.slnx` 和 `Intermediate/ProjectFiles` 中的引擎路径，确认工程文件是否仍引用旧引擎。

如果 `.uproject` 已经是目标版本，但 `.sln` 仍是旧路径，说明生成流程没有成功完成，或右键菜单实际走了旧引擎/旧缓存。

## 推荐 UBT 命令

UE 5.8 安装版可能没有 `Engine/Build/BatchFiles/GenerateProjectFiles.bat`。不要把批处理文件不存在误判为引擎不可用；优先直接调用 UBT：

```powershell
& '<ENGINE_ROOT>\Engine\Binaries\DotNET\UnrealBuildTool\UnrealBuildTool.exe' `
	-ProjectFiles `
	-Project='<PROJECT_ROOT>\<ProjectName>.uproject' `
	-Game `
	-Engine `
	-Progress
```

如需 Visual Studio 格式，先看 UBT 输出。某些入口会提示命令行 `-ProjectFileFormat=VisualStudio` 被忽略，此时应通过 Editor Preferences 或 `BuildConfiguration.xml` 设置 IDE，而不是反复加命令行参数。

UBT 日志位置：

```text
%LOCALAPPDATA%\UnrealBuildTool\Log_GPF.txt
```

以日志里的第一处 error / exception 为准排查。生成失败时 `.sln` 往往会保持旧内容，看起来像“按钮没用”。

## 描述文件编码问题

UE 5.8 的 UBT 项目生成会按 UTF-8 JSON 读取 `.uproject` / `.uplugin`。如果文件是 UTF-16 LE BOM，常见错误类似：

```text
JsonReaderException: '0xFF' is an invalid start of a value. LineNumber: 0 | BytePositionInLine: 0.
```

扫描描述文件 BOM：

```powershell
$Paths = rg --files -g '*.uplugin' -g '*.uproject' -g '!Binaries/**' -g '!Intermediate/**' -g '!Saved/**' -g '!DerivedDataCache/**'
$Rows = foreach ($Path in $Paths)
{
	$Bytes = [System.IO.File]::ReadAllBytes((Resolve-Path -LiteralPath $Path))
	$Prefix = if ($Bytes.Length -ge 4) { ($Bytes[0..3] | ForEach-Object { $_.ToString('X2') }) -join ' ' } else { '' }
	[pscustomobject]@{ Path = $Path; Prefix = $Prefix; Length = $Bytes.Length }
}
$Rows | Where-Object { $_.Prefix -match '^(FF FE|FE FF|EF BB BF)' } | Sort-Object Path
```

`FF FE` 通常表示 UTF-16 LE BOM。转换为 UTF-8 no BOM + CRLF：

```powershell
$Utf8NoBom = New-Object System.Text.UTF8Encoding($false)
$CrLf = [string]::Concat([char]13, [char]10)
$Lf = [string][char]10

foreach ($Path in @('<RELATIVE_PATH_TO_DESCRIPTOR>'))
{
	$FullPath = (Resolve-Path -LiteralPath $Path).Path
	$Original = [System.IO.File]::ReadAllText($FullPath)
	$Normalized = [regex]::Replace($Original, '\r\n|\n|\r', $Lf)
	$NewText = $Normalized -replace [regex]::Escape($Lf), $CrLf
	[System.IO.File]::WriteAllBytes($FullPath, $Utf8NoBom.GetBytes($NewText))
}
```

转换后验证：

```powershell
foreach ($Path in @('<RELATIVE_PATH_TO_DESCRIPTOR>'))
{
	Get-Content -Raw -LiteralPath $Path | ConvertFrom-Json | Out-Null
	$Bytes = [System.IO.File]::ReadAllBytes((Resolve-Path -LiteralPath $Path))
	if ($Bytes[0] -eq 0xFF -or $Bytes[0] -eq 0xEF) { throw "$Path still has a BOM" }
	for ($Index = 0; $Index -lt $Bytes.Length; ++$Index)
	{
		if ($Bytes[$Index] -eq 10 -and ($Index -eq 0 -or $Bytes[$Index - 1] -ne 13))
		{
			throw "$Path contains LF-only line endings"
		}
	}
}
```

项目内已有的机械格式化脚本可能只比较文本内容；如果文件内容相同但只是编码不同，它可能不会写回。遇到纯编码转换时，必须显式 `WriteAllBytes`。

## TargetRules 共享构建产物限制

UE 5.8 生成工程时可能出现：

```text
<EditorTarget> modifies the values of properties: [ ... ]. This is not allowed, as <EditorTarget> has build products in common with UnrealEditor.
```

处理顺序：

1. 打开对应 `.Target.cs`，确认它修改了哪些 TargetRules 属性。
2. 如果这些设置不是必须，移除差异设置。
3. 如果必须和 `UnrealEditor` 不同，设置 `BuildEnvironment = TargetBuildEnvironment.Unique;`。
4. 如果明确接受共享环境覆盖风险，才考虑 `bOverrideBuildEnvironment = true`。

修改 `.Target.cs` 前必须读取代码格式 Skill，改完运行项目代码格式校验。

## UE 5.8 编译和编辑器启动阻断

生成工程成功不代表迁移完成。升级到 UE 5.8 后，继续执行目标 Editor 编译并实际启动编辑器：

```powershell
& '<ENGINE_ROOT>\Engine\Build\BatchFiles\Build.bat' <EditorTarget> Win64 Development -Project='<PROJECT_ROOT>\<ProjectName>.uproject' -WaitMutex -NoHotReloadFromIDE
Start-Process -FilePath '<ENGINE_ROOT>\Engine\Binaries\Win64\UnrealEditor.exe' -ArgumentList @('<PROJECT_ROOT>\<ProjectName>.uproject')
```

常见阻断和处理顺序：

1. `Target Upgrade Required`，日志里出现 `Current target requires upgrade to V7`：把共享 Target 设置升级到 `BuildSettingsVersion.V7`，重新编译刷新 `Binaries/Win64/<EditorTarget>.target`。V7 会把未定义宏检查变严格；如果旧代码依赖 `#if WITH_STEAM` 这类宏未定义时默认为 0，在共享 Target 中补默认 `WITH_STEAM=0`，同时保留 Steam 专用 Target 的 `WITH_STEAM=1`。
2. 旧内容插件或已编译通过的源码插件弹出 `<PluginName> is Incompatible`：先确认插件是否已经随 Editor 目标编译通过；如果只是 `.uplugin` 的 `EngineVersion` 仍是旧版本，可把描述文件更新到目标引擎版本并保持 UTF-8 no BOM + CRLF。不要把真实源码不兼容误判成描述版本问题。
3. 旧 NVIDIA DLSS / Streamline 插件核心模块在 UE 5.8 API 上失败，但项目只需要保留 Blueprint 类型引用：优先禁用 `.uproject` 中不可用的核心插件；如果项目 Build.cs 仍依赖 Blueprint 壳模块，可让对应 Blueprint ModuleRules 在 UE 5.8+ 返回 unsupported，使 `WITH_DLSS` / `WITH_STREAMLINE` 为 0 并跳过核心模块依赖。需要真正启用 DLSS 时，应替换为支持目标引擎的插件版本。
4. 禁用插件后启动弹 `The game module '<ModuleName>' could not be loaded`，日志里有 `Failed to preload '<ProjectModule>.dll'` 和 `Missing import: UnrealEditor-<DisabledPluginModule>.dll`：不要复制 DLL 到项目 `Binaries` 目录。根因通常是项目模块的 `*.Build.cs` 仍静态依赖已禁用插件模块，导致生成的项目 DLL import table 仍要求加载插件 DLL。修复顺序：
	- 在项目模块 `*.Build.cs` 按引擎版本或插件可用性 gate 这些依赖，并定义项目侧宏，例如 `PROJECT_WITH_<FEATURE>=0/1`。
	- 源码里用该宏隔离插件头文件和插件 API 调用；禁用路径提供 no-op 或内置渲染 fallback。
	- 反射类型不要放进普通 `#if`。如果原插件 `UENUM` 出现在 `UFUNCTION` / `UPROPERTY` 里，改用项目自有的始终可见 `UENUM`，只在 `.cpp` 的启用路径中转换为插件枚举。
	- 重新构建 Editor Target 后，检查 `Binaries/Win64/<EditorTarget>.target` 不再列出已禁用插件的 DLL，并读取最新日志确认不再出现 `Missing import`。
5. UE 5.8 JSON API、OnlineSubsystem、InputDevice 或 Core 宏迁移错误：以当前引擎源码为准修最小调用点。常见例子包括用 `TryGetField(TEXT("Key"))` 代替直接访问 `FJsonObject::Values["Key"]`，移除旧 `SEARCH_PRESENCE` 并使用 lobby 查询键，使用 `IPlatformInputDeviceMapper` 替代旧控制器连接委托，使用 `FindFirstObject` 代替 `ANY_PACKAGE`。
6. 编译成功后不只看 ExitCode。验证编辑器进程存在、窗口标题进入项目主窗口，并读取最新 `Saved/Logs/<ProjectName>.log` 确认没有停在插件兼容、Target 升级弹窗或模块 DLL 导入失败。

## 成功验证

生成成功至少确认：

1. UBT 输出 `Result: Succeeded`。
2. `.sln` / `.slnx` 已写出。
3. `Intermediate/ProjectFiles/UECommon.props` 的 `BuildBatchScript` 指向目标 `<ENGINE_ROOT>`。
4. `.vcxproj` 的 `NMakeOutput`、`SourcePath` 或 include path 不再指向旧引擎。
5. 如果修过 `.uplugin` / `.uproject`，确认 JSON 可解析、无 UTF-16 BOM、无 LF-only。
6. 如果目标是“能打开编辑器”，确认 `<EditorTarget>` 编译 `Result: Succeeded`，且编辑器窗口标题进入项目主窗口而不是停在兼容弹窗。
