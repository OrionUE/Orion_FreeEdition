# Windows Steam 打包流程

## 适用场景

用于 Unreal Engine 项目在 Windows 系统下打包 Steam 版本，或者验证现有 Steam 打包 Profile 是否能成功完成 Build/Cook/Stage/Package。

优先使用本 Skill 自带的 Legacy Project Launcher `.ulp2` Profile 模板。模板保留固定打包方式，但不要在 Skill 中硬编码具体项目名、引擎绝对路径、用户目录或机器专属路径。

Steam 专用 Engine 配置入口是 `Config/Custom/Steam/DefaultEngine.ini`。Steam 打包必须使用 Steam Target，并让 UAT/Stage 看到 `CustomConfig=Steam`；不要再把 Steam block 当成根 `Config/DefaultEngine.ini` 的固定内容。

## 每次打包前必须确认

当用户要求打包或验证打包时，先给出一个简短确认，包含以下三点：

1. **配置版本**
	- 可选：`Shipping`、`Debug`、`Development`
	- 默认：`Development`
	- 对应 Profile：
		- `Shipping` -> `<ProjectName>Steam_Shipping`
		- `Debug` -> `<ProjectName>Steam_Debug`
		- `Development` -> `<ProjectName>Steam_Development`

2. **保存路径**
	- 默认保存到当前项目目录下的 `Packages/<Configuration>`。
	- 示例：
		- `Development` -> `Packages/Development`
		- `Shipping` -> `Packages/Shipping`
		- `Debug` -> `Packages/Debug`
	- 如果用户提供自定义路径，使用用户路径，并在执行前复述一次。

3. **更多自定义选项**
	- 询问用户是否需要覆盖 Profile 默认值。
	- 常见可覆盖项：
		- `Cooked Cultures`
		- `Cooked Platforms`
		- Cook 额外参数
		- Additional Command Line Parameters
		- 是否压缩
		- 是否加密配置
		- 是否使用 Pak
		- 是否使用 IoStore
		- 是否跳过 Editor Content
		- 是否 Archive
	- 如果用户不自定义，使用所选 Profile 内的默认设置。

推荐确认话术：

```text
我先按默认 Steam Windows 打包规则确认一下：
1. 版本：Development（可改 Shipping / Debug / Development）
2. 输出路径：Packages/Development
3. 自定义选项：默认使用 Profile 里的 Cooked Cultures、Cooked Platforms 等设置；需要覆盖的话请告诉我
确认后我再开始打包/验证。
```

## Profile 选择规则

默认 Profile 只表达配置意图，不绑定具体项目名：

| 配置 | Profile 模板 | 默认输出目录 |
| --- | --- | --- |
| `Development` | `<ProjectName>Steam_Development` | `Packages/Development` |
| `Shipping` | `<ProjectName>Steam_Shipping` | `Packages/Shipping` |
| `Debug` | `<ProjectName>Steam_Debug` | `Packages/Debug` |

Profile 内容来自 Skill 内置模板：

| 配置 | 模板文件 |
| --- | --- |
| `Development` | `assets/profile-templates/Development.ulp2.template.json` |
| `Shipping` | `assets/profile-templates/Shipping.ulp2.template.json` |
| `Debug` | `assets/profile-templates/Debug.ulp2.template.json` |

实例化模板时替换这些占位符：

| 占位符 | 含义 |
| --- | --- |
| `{{ProjectName}}` | 当前项目名，不带 `.uproject` 后缀 |
| `{{ProjectFilePath}}` | 当前 `.uproject` 的完整路径，建议用 `/` 分隔 |
| `{{PackageDir}}` | 当前配置输出目录，默认 `Packages/<Configuration>` |
| `{{SteamBuildTargetName}}` | Steam 版本 Target，默认 `<ProjectName>Steam`，如项目不同则从 `.Target.cs` 推断或让用户确认 |
| `{{UnrealEditorCmdPath}}` | 当前引擎的 `UnrealEditor-Cmd.exe` 路径 |
| `{{SessionOwner}}` | 当前系统用户名 |
| `{{ProfileGuid}}` | 新生成的 32 位 Profile GUID |
| `{{DeviceGroupGuid}}` | 新生成的 32 位 Device Group GUID |
| `{{SessionGuid}}` | 新生成的 32 位 Session GUID |

不要要求用户已有这些 Profile；如果项目没有 Profile，就按模板生成或导入。

Steam 模板的 `scripts` 节点必须显式包含：

```json
"target": "{{SteamBuildTargetName}}",
"customconfig": "Steam"
```

这样直接使用 `RunUAT.bat -profile=<Profile.ulp2>` 时会得到 `-target=<SteamBuildTargetName>` 和 `-customconfig=Steam`。如果走 Project Launcher UI，仍要确认日志中的 `Parsing command line:` 或目标 receipt 显示 Steam Target/CustomConfig。

## 生成 Profile 文件

如果需要为当前项目安装这三份 Profile，使用脚本：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-packaging\scripts\install-steam-windows-profiles.ps1 `
	-ProjectFile "<ProjectRoot>\<ProjectName>.uproject" `
	-EngineDir "<UnrealEngineRoot>\Engine"
```

可选参数：

- `-SteamBuildTargetName`：默认 `<ProjectName>Steam`。
- `-OutputRoot`：默认当前项目目录下的 `Packages`。
- `-Configuration`：默认 `All`，也可指定 `Development`、`Shipping`、`Debug`。

脚本会写入引擎的 Legacy Project Launcher Profile 目录：

```text
<EngineDir>/Programs/UnrealFrontend/Profiles
```

生成后的文件名遵循 UE Launcher 规则：

```text
<PROFILE_NAME_UPPERCASE>_<ProfileGuid>.ulp2
```

## 执行前检查

开始打包前，先检查：

- 当前工作目录是否是 Unreal 项目根目录。
- 是否能找到 `.uproject`。
- 是否已存在对应 Profile；如果不存在，按 Skill 模板生成 `<ProjectName>Steam_<Configuration>`。
- 编辑器是否正在占用需要重建的模块 DLL；如果会阻塞编译，先提示用户保存并关闭编辑器。
- 输出目录是否明确，并确认不会误删用户文件。

## 执行和验证

执行打包或验证时，优先保留模板/Profile 默认配置，只覆盖用户明确指定的项。

### Legacy Project Launcher 等价 UAT 命令

自动化验证时，可以不打开编辑器 UI，直接按 Legacy Project Launcher 等价参数调用 UAT。命令结构应保持：

```powershell
& "<EngineDir>\Build\BatchFiles\RunUAT.bat" `
	-ScriptsForProject="<ProjectFile>" `
	BuildCookRun `
	-project="<ProjectFile>" `
	-noP4 `
	-clientconfig=<Configuration> `
	-serverconfig=<Configuration> `
	-CustomConfig=Steam `
	-nocompile `
	-nocompileeditor `
	-unrealexe="<EngineDir>\Binaries\Win64\UnrealEditor-Cmd.exe" `
	-utf8output `
	-platform=Win64 `
	-target=<SteamBuildTargetName> `
	-build `
	-cook `
	-CookCultures=<CultureA>+<CultureB> `
	-unversionedcookedcontent `
	-encryptinifiles `
	-pak `
	-iostore `
	-compressed `
	-stage `
	-package `
	-stagingdirectory="<PackageDir>"
```

注意：

- `-clientconfig` 和 `-serverconfig` 使用所选 Profile 的配置。
- `Debug` Profile 的 UAT 配置通常是 `DebugGame`，不要只按 Profile 名字写成 `Debug`。
- `Development` 模板默认启用 `-iostore`；`Shipping` 和 `Debug` 模板默认不启用 `-iostore`，除非用户覆盖。
- `-target` 使用 Steam 版本 Target；默认 `<ProjectName>Steam`，但必须以项目实际 `.Target.cs` 为准。
- Steam Target 使用 `CustomConfig = "Steam"` 时，UAT 验证命令也要显式带 `-CustomConfig=Steam`，并验证 `Config/Custom/Steam/DefaultEngine.ini` 被 Stage。
- `-CookCultures`、`-platform`、Pak、压缩、加密等参数来自 Profile 模板，用户未要求覆盖时不要自行改动。

### 日志落盘和后台执行

长时间打包不要只依赖终端滚动输出。推荐为每次验证创建独立日志目录：

```text
<ProjectRoot>/Saved/Logs/Packaging
```

后台执行时至少写出：

- `*.log`：完整 UAT 输出。
- `*.exitcode`：UAT 退出码。
- `*.ps1`：本次实际执行脚本，便于复现。
- `*.pid`：后台进程 ID。

PowerShell 模板：

```powershell
$LogDir = Join-Path $ProjectRoot "Saved\Logs\Packaging"
New-Item -ItemType Directory -Force -Path $LogDir | Out-Null
$Stamp = Get-Date -Format "yyyyMMdd-HHmmss"
$LogPath = Join-Path $LogDir "$Configuration-UAT-$Stamp.log"
$ExitPath = Join-Path $LogDir "$Configuration-UAT-$Stamp.exitcode"

& "<EngineDir>\Build\BatchFiles\RunUAT.bat" <UATArgs> 2>&1 |
	Tee-Object -FilePath $LogPath

$Code = $LASTEXITCODE
Set-Content -Path $ExitPath -Value $Code -Encoding ASCII
exit $Code
```

### 轮询和错误定位

打包过程中定期检查进程和日志尾部：

```powershell
Get-Process -Id <Pid> -ErrorAction SilentlyContinue
Get-Content -Path "<LogPath>" -Tail 120
```

同时扫描关键字：

```powershell
Select-String -Path "<LogPath>" `
	-Pattern "Error:|Fatal|Exception|Unhandled|Unknown Cook Failure|BUILD FAILED|BUILD SUCCESSFUL|AutomationTool exiting|ExitCode" `
	-CaseSensitive:$false
```

对 Unreal 打包日志要看最终状态，而不是看到 `Failed` 字样就立刻判定失败。很多 `Failed to compile Material`、`Failed to load Outer`、`VerifyImport` 会以 `Warning` 形式出现，最终仍可能 `ExitCode=0`。

### 成功和失败判定

成功必须同时满足：

- UAT 退出码为 `0`。
- 日志包含 `BUILD SUCCESSFUL`。
- 日志包含 `AutomationTool exiting with ExitCode=0 (Success)`。
- 输出目录存在，并生成游戏可执行文件、Manifest、Pak/IoStore 文件等预期产物。
- Steam 包的 UFS manifest 包含 `Config/Custom/Steam/DefaultEngine.ini`，日志包含 `Including config file ... Config\Custom\Steam\DefaultEngine.ini`。

失败时优先提取：

- 第一条 `Fatal` / `Unhandled Exception`。
- 第一条 `Error:`。
- `Unknown Cook Failure` 附近 80-120 行。
- 最后一次 `AutomationTool exiting`。
- Cook 崩溃时的 `Saved/Crashes` 和 `Engine/Programs/AutomationTool/Saved/Logs` 对应日志。

### 非致命警告处理

以下日志模式不能单独作为失败结论，必须结合最终 ExitCode 判断：

- `LogMaterial: Warning: ... Failed to compile Material ... Default Material will be used in game`
- `LoadErrors: Warning: CreateExport: Failed to load Outer ...`
- `LogLinker: Warning: Unable to load ... because its class ... does not exist`
- 蓝图编译 Warning
- 资源建议 resave 的 Warning

如果最终 `ExitCode=0`，这些问题应作为后续资源清理项记录，而不是阻塞本次打包修复。

### Windows PowerShell 调用 RunUAT.bat 参数被合并

现象：UAT 日志中 `Parsing command line:` 显示 `-ScriptsForProject=<ProjectFile> BuildCookRun -project=...` 被合并成同一个参数，随后报 `Project '<ProjectFile> BuildCookRun ...' does not exist`，打包很快以 `ExitCode=2` 失败。

原因：在部分 Windows PowerShell 环境中，直接用 call operator 调用 `.bat` 并传入参数数组时，带空格或引号的参数可能被错误合并。

修复：后台打包脚本中为每个含路径的参数显式加引号，再通过 `cmd.exe /d /c` 执行完整命令行，同时继续用 `Tee-Object` 写日志：

```powershell
function Quote-CmdArg([string]$Value) { return '"' + ($Value -replace '"', '\"') + '"' }

$UatArgs = @(
	'-ScriptsForProject=' + (Quote-CmdArg $ProjectFile),
	'BuildCookRun',
	'-project=' + (Quote-CmdArg $ProjectFile),
	'-unrealexe=' + (Quote-CmdArg $UnrealEditorCmd),
	'-stagingdirectory=' + (Quote-CmdArg $PackageDir)
)

$CommandLine = (Quote-CmdArg $RunUAT) + ' ' + ($UatArgs -join ' ')
& cmd.exe /d /c $CommandLine 2>&1 | Tee-Object -FilePath $LogPath
$Code = $LASTEXITCODE
```

验证：日志里的 `Parsing command line:` 应显示 `BuildCookRun` 是独立命令，后续进入 `Setting up ProjectParams` 和 `BUILD COMMAND STARTED`。

### PowerShell 变量或等号后空格导致 UAT 找不到 project

现象：

- UAT 报 `Could not find a project file $ProjectFile`。
- 或者 UAT 报 `No project file specified. Use -project=<project>.`，日志里实际参数类似 `-project= "<ProjectFile>"`。

原因：调用 `.bat` 时把 `-project=$ProjectFile` 作为字面量传给 UAT，或拼接参数时把 `-project=` 和带引号路径拆成了两个 token。UAT 需要 `-project=<path>` 是同一个参数，等号后不能有空格。

修复：把每个等号参数拼成一个完整字符串：

```powershell
$ProjectArg = '-project="{0}"' -f $ProjectFile
$ArchiveArg = '-archivedirectory="{0}"' -f $ArchiveDir
```

验证：日志 `Parsing command line:` 中显示真实路径，不包含 `$ProjectFile` 字面量，也没有 `-project= "<path>"` 这种等号后空格。

### CMD 包装 RunUAT.bat 后 exitcode 文件没有生成

现象：UAT 日志已经写出 `AutomationTool exiting with ExitCode=0 (Success)` 或其他最终状态，包装 `.cmd` 进程也退出了，但脚本中放在 `RunUAT.bat` 后面的 `echo %ERRORLEVEL% > <ExitPath>` 没有执行，导致 `*.exitcode` 缺失。

原因：在 Windows batch 语义中，一个 `.cmd` / `.bat` 直接调用另一个 `.bat` 时，如果不写 `call`，控制权会转移给被调用的 batch，后续行不会继续执行。

修复：如果生成 `.cmd` 包装脚本，并且 `RunUAT.bat` 后还要写 exit code、pid 或清理动作，必须使用 `call`：

```bat
call "<EngineDir>\Build\BatchFiles\RunUAT.bat" <UATArgs> > "<LogPath>" 2>&1
echo %ERRORLEVEL% > "<ExitPath>"
```

验证：包装进程退出后，日志包含最终 `AutomationTool exiting ...`，同时 `*.exitcode` 文件存在且内容等于 UAT 退出码。

### 生成后台 UAT 脚本时 PowerShell 引号解析失败

现象：用 PowerShell 数组拼接后台 `.ps1` 脚本内容时，脚本还没有启动 UAT 就出现 `ParserError`，错误位置通常落在 `'-target=...'`、`'-cook'` 这类嵌套单引号参数附近。

原因：外层 PowerShell 同时承担“生成脚本文本”和“表达当前命令”的职责，字符串里再嵌套 UAT 参数数组时很容易少写或多写一个引号。

修复：优先使用单引号 here-string 作为脚本模板，用 `__PLACEHOLDER__` 占位符替换路径；不要用大量逐行单引号字符串拼接生成复杂脚本。模板写回时继续使用 UTF-8 bytes 和显式 CRLF。

验证：生成的 `.ps1` 能正常启动，日志首行输出完整 `Command:`，并且 UAT 进入 `Running AutomationTool...`。

### 安装版引擎打包含 BinkMedia 时缺少 precompiled manifest

现象：安装版引擎打包 Win64 monolithic 目标时，UBT 报 `Missing precompiled manifest for 'BinkMediaPlayer'`，并提示该模块不能被 monolithic precompiled build 引用。

原因：项目启用了 `BinkMedia`，且包内需要 `.bk2` 启动电影；安装版引擎没有对应 Runtime 模块的 precompiled manifest。

修复：如果项目确实使用 `.bk2` / Bink 启动电影，不要直接禁用 Bink。优先切换到可编译引擎源码的 Engine 目录打包，让 `BinkMediaPlayer` 从源码参与构建。只有确认项目不需要 Bink 电影时，才考虑禁用插件或改用其他 MoviePlayer。

验证：源码引擎 UBT 日志应越过 `BinkMediaPlayer.precompiled` 错误，并进入 C++ 编译或 Cook 阶段。

### 禁用 BinkMedia 后 LoadingScreen 仍引用 Bink 导致 Cook 失败

现象：用户已经禁用 `BinkMedia`，UBT/Build 能通过，但 Cook 末尾以 `ExitCode=25`、`UnknownCookFailure` 失败；日志中常见 `VerifyImport: Failed to find script package ... /Script/BinkMediaPlayer`，随后某个启动 LoadingScreen Widget 蓝图编译报错，例如媒体播放器相关 pin 不存在、delegate signature 无法确定、`bad or unknown type (Delegate)`。

原因：`CommonLoadingScreenSettings.LoadingScreenWidget` 指向的 host widget 仍硬引用启动期视频/Logo widget，后者依赖 Bink media player。即使不再播放视频，只要 Cook 加载并编译这条蓝图引用链，禁用插件后也会失败。

修复：

- 不要为了临时过 Cook 自动重新启用 `BinkMedia`，除非用户明确要保留 Bink 启动视频。
- 如果用户确认项目不需要 Bink 启动视频，优先在加载屏资产中移除 Bink 变量、节点和媒体播放器引用，并保存资产。
- 需要快速验证打包时，可先把 `[/Script/CommonLoadingScreen.CommonLoadingScreenSettings]` 的 `LoadingScreenWidget` 临时指向一个不引用 Bink、且会调用 `SetIsLoadingWidgetCompleted(true)` 的普通 `UUserWidget` 派生加载屏。
- 这类修复属于加载屏配置/资产引用问题，不要改 `GameCore` 或 `*.Build.cs` 来绕过。

验证：重新 Cook 后日志不再出现 `BinkMediaPlayer`、启动 LoadingScreen Widget 蓝图编译 Error 或 `UnknownCookFailure`；最终仍以 `BUILD SUCCESSFUL` 和 `AutomationTool exiting with ExitCode=0 (Success)` 为准。

### Steam SDK delay-load DLL 在 Cook 进程中缺失

现象：Steam 包 Cook 早期以 `ExitCode=25` 或 `UnknownCookFailure` 失败，日志里有 `Unhandled Exception: 0xc06d007e`，调用栈包含 `UnrealEditor-<SteamSDKModule>.dll!__delayLoadHelper2()`、`_tailMerge_steam_api64_dll()` 或 Steam SDK wrapper 的默认对象构造函数。

原因：`RuntimeDependencies` 能把 `steam_api64.dll` 放进最终包，但 Editor-Cmd Cook 进程的 DLL 搜索路径不一定包含插件 ThirdParty redistributable 目录；有些 CDO 构造或静态调用会在 Steam helper module 添加 DLL 搜索路径前触发 delay-load。

修复：做非侵入式打包验证时，把插件的 Steam redistributable 目录临时加入本次 UAT 进程的 `PATH`，不要写入系统环境变量，也不要在 Skill 中保存机器绝对路径：

```powershell
$SteamDllDir = Join-Path $ProjectRoot "Plugins\OrionSteam\Source\ThirdParty\SteamLibrary\redistributable_bin\win64"
$env:PATH = "$SteamDllDir;$env:PATH"
```

验证：Cook 能越过 Steam SDK wrapper 初始化，后续以最终 `BUILD SUCCESSFUL` 和 `AutomationTool exiting with ExitCode=0 (Success)` 判断结果。

### 源码引擎 AutomationTool 因 NuGet audit 警告失败

现象：源码引擎首次运行 UAT 时，AutomationTool 在正式日志初始化前失败；`Engine/Programs/AutomationTool/Saved/Logs/ErrorLog.txt` 中出现大量 `NU1901`、`NU1902`、`NU1903`，内容为 NuGet 包漏洞警告被当成错误。

原因：当前 dotnet/NuGet audit 行为把已知漏洞警告提升为错误，导致 AutomationTool 脚本模块构建失败。

修复：只在本次 UAT 进程内禁用 NuGet audit：

```powershell
$env:NuGetAudit = 'false'
$env:NUGET_AUDIT = 'false'
```

验证：UAT 能继续进入 `BUILD COMMAND STARTED`、UBT/UHT 和后续编译流程。

打包后必须检查：

- AutomationTool / UAT 是否返回成功。
- Cook 日志是否有 Error、Fatal、Unhandled Exception。
- 输出目录是否生成预期内容。
- 如果是 Steam 包，确认 Steam 相关目标、插件或 App 配置没有因为当前配置缺失而失败，并确认 `Config/Custom/Steam/DefaultEngine.ini` 已进入 UFS manifest。

最终回复应包含：

- 使用的配置版本。
- 使用的 Profile 名称。
- 输出路径。
- 成功或失败结论。
- 如果失败，列出第一个有效错误和对应日志路径。
