# Unreal Installed Build 参考

## 适用目标

本参考用于把源码版 Unreal 引擎做成 Installed Build，并让 Rider/Visual Studio 日常只面向 Installed Build 和项目模块，避免把源码 Editor 模块当成项目构建的一部分反复编译。

常见触发语：

- “Rider 又编译 4000 多个”
- “不要重复编译源码 Editor”
- “Installed Build 最小版”
- “只要 Editor，不要 Server/Test/Debug”
- “EngineAssociation 写什么”
- “官方版 5.8 改名，Installed Build 叫 5.8”

## 架构判断

- 这类改动属于项目配置和本机引擎身份映射，不属于游戏运行时架构。
- 不修改引擎源码、项目 C++、蓝图资产或插件逻辑，除非用户明确扩大范围。
- `.uproject`、注册表、`.sln`、`Intermediate/ProjectFiles` 是主要落点。
- 验证目标不是“编译通过项目代码”，而是确认项目解析到 Installed Build，并且 IDE 生成文件不指向源码根。

## 标准最小 BuildGraph 参数

最小 Editor 日常开发版本使用：

```powershell
$EngineRoot = '<SourceEngineRoot>'
$BuiltDirectory = '<SourceEngineRoot>\LocalBuilds\Engine'
$ArgsList = @(
	'BuildGraph',
	'-Script=Engine/Build/InstalledEngineBuild.xml',
	'-Target=Make Installed Build Win64',
	'-Set:HostPlatformOnly=true',
	'-Set:WithWin64=true',
	'-Set:WithClient=false',
	'-Set:WithServer=false',
	'-Set:GameConfigurations=Development',
	'-Set:WithFullDebugInfo=false',
	'-Set:WithDDC=false',
	"-Set:BuiltDirectory=$BuiltDirectory"
)

Push-Location $EngineRoot
try
{
	& "$EngineRoot\Engine\Build\BatchFiles\RunUAT.bat" @ArgsList
}
finally
{
	Pop-Location
}
```

注意：

- 不要写成 `'-Set:BuiltDirectory=' + $BuiltDirectory` 这类容易拆参的写法；用插值字符串。
- `WithDDC=false` 可以显著减少体积和 DDC 故障概率。
- `WithFullDebugInfo=false` 会裁剪调试符号；如果用户明确要完整引擎源码调试，改成 true，但体积会大很多。
- `WithServer=false`、`WithClient=false` 不代表完全不会编 `UnrealGame`。

## 为什么最小版还会编 UnrealGame

Epic 的 `InstalledEngineBuild.xml` 标准 Win64 installed build 目标会把 `Compile UnrealGame Win64` 纳入 InstalledRequirements。即使：

```text
WithClient=false
WithServer=false
GameConfigurations=Development
```

仍会出现类似：

```text
[3/9] Compile UnrealGame Win64
UnrealGame Win64 Development -precompile -allmodules -nolink -nodebuginfo
```

这是标准 Installed Build 支持项目编译和打包所需的 Win64 游戏目标预编译，不是 Server、Client、Debug、Test，也不是重新编源码 Editor。

## 监控规则

长时间构建时低频检查，避免浪费上下文和额外 IO。

推荐每 5 分钟只看：

```powershell
$MainLog = '<SourceEngineRoot>\Engine\Programs\AutomationTool\Saved\Logs\Log.txt'
$Markers = @(
	'<InstalledBuildRoot>\Engine\Build\InstalledBuild.txt',
	'<SourceEngineRoot>\Engine\Saved\BuildGraph\Make Installed Build Win64\Tag-Make Installed Build Win64.xml'
)

Get-Content -LiteralPath $MainLog -Tail 120
foreach ($Marker in $Markers)
{
	if (Test-Path -LiteralPath $Marker)
	{
		$Item = Get-Item -LiteralPath $Marker
		"EXISTS`t$($Item.Length)`t$($Item.LastWriteTime.ToString('yyyy-MM-dd HH:mm:ss'))`t$Marker"
	}
	else
	{
		"MISSING`t$Marker"
	}
}
```

如果主日志长时间不更新，不要立刻判定卡死。检查 BuildGraph 进程链和最近输出文件：

```powershell
Get-CimInstance Win32_Process |
	Where-Object {
		$_.CommandLine -like '*BuildGraph*InstalledEngineBuild.xml*' -or
		$_.CommandLine -like '*AutomationTool*BuildGraph*'
	} |
	Select-Object ProcessId, ParentProcessId, Name, CommandLine

Get-ChildItem -LiteralPath '<InstalledBuildRoot>' -Recurse -File -ErrorAction SilentlyContinue |
	Sort-Object LastWriteTime -Descending |
	Select-Object -First 10 FullName, Length, LastWriteTime
```

## 成功验证

必须同时满足：

```powershell
$Paths = @(
	'<InstalledBuildRoot>\Engine\Build\InstalledBuild.txt',
	'<InstalledBuildRoot>\Engine\Binaries\Win64\UnrealEditor.exe',
	'<InstalledBuildRoot>\Engine\Binaries\Win64\UnrealEditor-Engine.dll',
	'<InstalledBuildRoot>\Engine\Binaries\Win64\UnrealGame.exe',
	'<SourceEngineRoot>\Engine\Programs\AutomationTool\Saved\Logs\Log.txt'
)

foreach ($Path in $Paths)
{
	if (Test-Path -LiteralPath $Path)
	{
		$Item = Get-Item -LiteralPath $Path
		"EXISTS`t$($Item.Length)`t$($Item.LastWriteTime.ToString('yyyy-MM-dd HH:mm:ss'))`t$Path"
	}
	else
	{
		"MISSING`t$Path"
	}
}

Get-Content -LiteralPath '<SourceEngineRoot>\Engine\Programs\AutomationTool\Saved\Logs\Log.txt' -Tail 20
```

日志尾部应出现：

```text
BUILD SUCCESSFUL
AutomationTool exiting with ExitCode=0 (Success)
```

只有验证成功后，才可以执行用户要求的关机或清理。

## DDC 与 XGEController 故障

如果启用 DDC，可能在 `Build DDC Win64` 阶段失败，典型现象：

```text
Using XGE Controller for shader compilation
Ensure condition failed: GetShadowIndex() == 0
FWindowsPlatformNamedPipe::LogInternals
FXGEControllerModule::WriteOutThreadProc
```

处理：

- 最小 Editor Installed Build 直接用 `-Set:WithDDC=false`。
- 如果必须续跑 DDC，给 commandlet 追加 `-noxgecontroller -noxgeshadercompile`。
- 不要只依赖 `-ini:Engine:[ConsoleVariables]:r.XGEShaderCompile=0`，它不一定阻止 XGEController。

验证绕开 XGEController 的日志：

```text
No distributed shader compiler controller found
Using <N> local workers for shader compilation
```

## pdbcopy.exe 缺失

如果 final copy 或符号处理阶段报 `pdbcopy.exe` 缺失，安装带 Debugging Tools 的 Windows SDK。验证：

```powershell
Test-Path 'C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\pdbcopy.exe'
```

缺失时不要手动伪造文件，也不要跳过整个 Installed Build 完成验证。

## 磁盘和体积预期

经验值：

- DDC 中间产物可能达到几十 GB 到 100GB 级别。
- Full Debug、Server、Client、DebugGame、Test、DDC 全开时，输出可能达到数百 GB。
- 最小 Win64 Editor Installed Build 关闭 DDC、Server、Client、Debug/Test 后，仍可能是几十 GB 到 100GB 级别，因为会复制工具、ThirdParty、模板、规则程序集和 Win64 运行文件。

BuildGraph 最后阶段会出现：

```text
[9/9] Make Installed Build Win64
Copying ...
Stripping symbols ...
FinalizeInstalledBuild
Sanitizing ...
```

这些不是重新编译源码 Editor。

## 停止构建

用户要求停止时，先停 BuildGraph/AutomationTool/UBT 进程，再处理子进程。不要误杀 Rider 自身的 dotnet。

只停本次 Installed Build：

```powershell
Get-CimInstance Win32_Process |
	Where-Object {
		$_.CommandLine -like '*BuildGraph*InstalledEngineBuild.xml*' -or
		$_.CommandLine -like '*AutomationTool*BuildGraph*' -or
		$_.CommandLine -like '*RunUAT*InstalledEngineBuild*'
	} |
	ForEach-Object { Stop-Process -Id $_.ProcessId -Force -ErrorAction SilentlyContinue }
```

如果 Incredibuild/XGE 继续生成编译子进程，再精确停止：

```powershell
Get-CimInstance Win32_Process |
	Where-Object {
		$_.Name -in @('xgConsole.exe', 'cl.exe', 'link.exe') -and
		$_.CommandLine -like '*<SourceEngineRoot>*'
	} |
	ForEach-Object { Stop-Process -Id $_.ProcessId -Force -ErrorAction SilentlyContinue }
```

## 接入 EngineAssociation

常用做法是把 Installed Build 注册成项目想写的版本名，把官方版另起别名：

```powershell
reg add "HKCU\Software\Epic Games\Unreal Engine\Builds" /v "5.8" /t REG_SZ /d "<InstalledBuildRoot>" /f
reg add "HKCU\Software\Epic Games\Unreal Engine\Builds" /v "UE_5.8_Official" /t REG_SZ /d "<OfficialEngineRoot>" /f
```

`.uproject`：

```json
"EngineAssociation": "5.8"
```

验证：

```powershell
Get-ItemProperty -LiteralPath 'HKCU:\Software\Epic Games\Unreal Engine\Builds' |
	Select-Object '5.8', 'UE_5.8_Official' |
	Format-List

(Get-Content -Raw -LiteralPath '<ProjectRoot>\<ProjectName>.uproject' | ConvertFrom-Json).EngineAssociation
```

不要让官方版和 Installed Build 同时抢同一个 association 名称。

## 生成文件和 Rider

如果用户允许生成工程文件，使用 Installed Build 的 UBT：

```powershell
$EngineRoot = '<InstalledBuildRoot>'
$Project = '<ProjectRoot>\<ProjectName>.uproject'
$UBT = Join-Path $EngineRoot 'Engine\Binaries\DotNET\UnrealBuildTool\UnrealBuildTool.exe'
& $UBT -ProjectFiles "-Project=$Project" -Game -Engine -Progress
```

PowerShell 注意：

- 外部命令参数必须写成 `"-Project=$Project"`。
- 不要写 `-Project=$Project`，某些情况下 UBT 会收到字面量 `$Project` 或解析失败。

如果用户说“不要编译”，不要继续等 UBT 生成过程；虽然 `-ProjectFiles` 通常不编译 C++，但会构建规则程序集和绑定 IntelliSense。可以停止 `UnrealBuildTool.exe -ProjectFiles`。

只读验证生成文件：

```powershell
$Installed = '<InstalledBuildRoot>'
$Official = '<OfficialEngineRoot>'
$SourceBuild = '<SourceEngineRoot>\Engine\Build\BatchFiles\Build.bat'
$Files = @(
	'<ProjectRoot>\<ProjectName>.sln',
	'<ProjectRoot>\Intermediate\ProjectFiles\UECommon.props'
)

foreach ($File in $Files)
{
	$HasOfficial = Select-String -LiteralPath $File -Pattern $Official -SimpleMatch -Quiet
	$HasSourceBuild = Select-String -LiteralPath $File -Pattern $SourceBuild -SimpleMatch -Quiet
	"$File`tOFFICIAL_PATH=$HasOfficial`tSOURCE_BUILD=$HasSourceBuild"
}
```

`UECommon.props` 应指向：

```text
<InstalledBuildRoot>\Engine\Build\BatchFiles\Build.bat
```

如果 `.sln` 已生成但残留旧官方路径，而用户不允许重新跑 UBT，可以只对生成文件做精确路径替换。替换前必须确认 Installed Build 中对应 `.csproj`、natvis 和工具文件存在。

## Installed Build 与 Program target

生成项目文件时可能出现：

```text
Program targets are not currently supported from this engine distribution.
```

这通常来自项目或插件里的本地 `TargetType.Program`，例如 helper/tool 程序。它不代表 Installed Build 失败，也不应触发 C++ 编译。处理路线：

- 如果用户只要求引擎关联已改好，可以停止生成流程并验证注册表、`.uproject`、`UECommon.props`。
- 如果必须让工程生成完整通过，转到 `unreal-vs-project-generation` 的安装版引擎 Program target 规则，检查该 Program target 是否需要 `BuildEnvironment = TargetBuildEnvironment.Shared;` 或从生成目标中排除。

## NoUba 标签

日志里出现：

```text
[NoUba]
```

通常表示该 action 走本地原生执行或禁用了 UBA detour/remote 路径，不是 makefile 过期原因，也不是新错误。真正需要关注的是 `Creating/Invalidating makefile` 的原因和 action 数量。

## NoEngineChanges 保护

Installed Build 接入后，如果用户要求“项目代码可以编，但不准再改引擎产物”，不要使用 `-SkipBuild`。给 Rider/VS 生成的 Editor NMake 命令加：

```text
-NoEngineChanges
```

优先使用项目已有脚本：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-editor-no-engine-changes.ps1 -Mode Check -ProjectRoot .
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-editor-no-engine-changes.ps1 -Mode Apply -ProjectRoot .
```

生成工程文件后可能被覆盖，需要重新检查。

## 常见最终回复要点

完成后简洁说明：

- Installed Build 输出根。
- `InstalledBuild.txt`、`UnrealEditor.exe`、`UnrealEditor-Engine.dll`、`UnrealGame.exe` 是否存在。
- BuildGraph 日志是否 `BUILD SUCCESSFUL` / `ExitCode=0`。
- `EngineAssociation` 当前写法和注册表别名。
- 是否触发过 C++ 编译；如果只生成工程文件或改注册表，明确说明没有编译。
