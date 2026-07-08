# Unreal VS 工程生成排查参考

## 快速判断

现象：“Generate Visual Studio project files 没用”、升级引擎后 `.sln` 仍指向旧引擎、或资源管理器右键生成没有可见反馈。

先做三件事：

1. 读 `.uproject` 的 `EngineAssociation`。
2. 查本机这个 association 是否能解析到目标引擎。
3. 搜索 `.sln`、`.slnx` 和 `Intermediate/ProjectFiles` 中的引擎路径，确认工程文件是否仍引用旧引擎。

如果 `.uproject` 已经是目标版本，但 `.sln` 仍是旧路径，说明生成流程没有成功完成，或右键菜单实际走了旧引擎/旧缓存。

## Rider MSB4019 找不到 Microsoft.Cpp.Default.props

现象：Rider 编译 UE 工程时，`UECommon.props` 报 `MSB4019`，提示找不到 `$(VCTargetsPath)\Microsoft.Cpp.Default.props`，并且展开后的路径落在 Rider 自带 MSBuild 目录，例如：

```text
<RiderInstallRoot>\tools\MSBuild\Microsoft\VC\v180\Microsoft.Cpp.Default.props
```

这通常不是项目 C++ 编译错误，而是 Rider/MSBuild 工具链选择错误：Rider 自带的 MSBuild 目录没有对应 Visual Studio C++ targets。先验证三件事：

```powershell
$RiderCppProps = '<RiderInstallRoot>\tools\MSBuild\Microsoft\VC\v180\Microsoft.Cpp.Default.props'
$VsCppProps = '<VSInstallRoot>\MSBuild\Microsoft\VC\v180\Microsoft.Cpp.Default.props'

Test-Path $RiderCppProps
Test-Path $VsCppProps

[Environment]::GetEnvironmentVariable('VCTargetsPath', 'User')
[Environment]::GetEnvironmentVariable('VCTargetsPath', 'Machine')
```

判断规则：

- Rider 路径不存在、VS 路径存在：让 Rider 使用 Visual Studio 的 MSBuild / Toolchain，或升级到支持当前 VS/UE 工具链的 Rider。
- 只在 Rider 里填写 `<VSInstallRoot>` 不一定足够；如果 `MSBuild` 版本仍是 `Bundled` 或 Rider 版本不能识别当前 VS 系列，`.vcxproj` 加载阶段仍可能使用 `<RiderInstallRoot>\tools\MSBuild\...`。
- 用户或系统环境变量存在 `VCTargetsPath` 且指向 Rider、旧 VS 或不存在目录：移除该变量或改为真实 VS C++ targets 根目录，随后彻底重启 Rider。
- 环境变量不存在但展开路径仍落到 Rider：优先检查 Rider 的 Toolchain / MSBuild 设置，避免使用 Rider bundled MSBuild 编译 UE C++。
- 如果本机只有 VS18/v180 targets，旧 Rider 版本可能无法正确识别；可升级 Rider，或安装/选择 UE 当前支持且 Rider 能识别的 Visual Studio 工具链。

如果用户已经改过 Rider 设置但仍然报同一条 `MSB4019`，可以先用用户级环境变量做机器级兜底：

```powershell
$VcTargetsPath = '<VSInstallRoot>\MSBuild\Microsoft\VC\v180\'
[Environment]::SetEnvironmentVariable('VCTargetsPath', $VcTargetsPath, 'User')
[Environment]::SetEnvironmentVariable('VCTargetsPath', $VcTargetsPath, 'Process')
```

这类用户级环境变量只会被新启动的 Rider 进程读取；设置后必须完全退出并重新打开 Rider。需要立即解锁当前生成工程文件时，可在 `Intermediate/ProjectFiles/UECommon.props` 的 `Configuration` 属性组、两个 `Import Project="$(VCTargetsPath)\..."` 之前加入兜底属性：

```xml
<VCTargetsPath Condition="!Exists('$(VCTargetsPath)\Microsoft.Cpp.Default.props')"><VSInstallRoot>\MSBuild\Microsoft\VC\v180\</VCTargetsPath>
```

这是生成文件修复，重新生成工程文件后可能被覆盖；因此它适合作为当前项目立即解锁手段，长期仍以 Rider Toolchain 设置、用户级 `VCTargetsPath` 或 Rider 版本升级为准。

如果用户明确不允许设置用户级环境变量，就只做生成文件兜底，并提醒：每次重新生成 Visual Studio/Rider 工程文件后都要复查该行是否仍存在。更稳定的 IDE 侧修复是在 Rider 的 Toolchain/MSBuild 设置里显式选择：

```text
<VSInstallRoot>\MSBuild\Current\Bin\amd64\MSBuild.exe
```

而不是只选择 `<VSInstallRoot>` 目录。

如果 Rider Toolchain 面板一直显示 `Build Tool`、`C Compiler` 或 `C++ Compiler` 为 `Detecting...`，读取 Rider 日志 `<UserLocalAppData>\JetBrains\<RiderVersion>\log\idea.log`。若出现：

```text
vcvarsall.bat amd64 8.1
[ERROR:winsdk.bat] Windows SDK 8.1 : 'include' not found
```

说明 Rider 正在按 Windows SDK 8.1 初始化 MSVC 环境，但本机没有安装 8.1 SDK。此时不要改 VS 根目录，也不要把 Toolset 指到 `MSBuild.exe`；在 Rider `Toolchains` 里把 `Version` 改为本机已安装的 Windows 10 SDK，例如 `10.0.22621.0`，或清空/选择自动检测，让它运行 `vcvarsall.bat amd64` 或 `vcvarsall.bat amd64 10.0.22621.0`。检测成功后 `Build Tool`、`C Compiler`、`C++ Compiler` 应该不再停在 `Detecting...`。

验证不要直接触发 UE 编译；用 Rider 自带 MSBuild 做预处理即可检查 import 是否已通过：

```powershell
& '<RiderInstallRoot>\tools\MSBuild\Current\Bin\amd64\MSBuild.exe' `
	'Intermediate\ProjectFiles\<ProjectName>.vcxproj' `
	'/pp:<TempDir>\<ProjectName>.Rider.msbuild.pp.xml' `
	'/p:Configuration=Development Editor' `
	'/p:Platform=x64' `
	/nologo `
	/v:minimal
```

修复后重新生成工程文件，并检查 `Intermediate/ProjectFiles/UECommon.props`、`.sln` 和 Rider Toolchain 指向同一套 Visual Studio/Engine。不要把这个错误当成项目模块缺失或引擎源码问题处理。

## 没改代码却触发大量编译

现象：用户没有改 C++，但从 Visual Studio、UnrealVersionSelector、UBT 或编辑器启动/开图后出现几千个“编译”。

先判别它到底是哪种编译：

- C++ / UBT action：日志有 `Creating makefile`、`Invalidating makefile`、`Building ... action(s)`、`[1/4000] Compile [x64] ...`、`Link [x64] ...`。
- Shader / DDC / PSO：日志有 `LogShaderCompilers`、`Using ... local workers for shader compilation`、`FShaderJobCacheShaders`、`LogTexture: Building texture`、`LogPSOHitching`、`Waited for PSO creation`、`LogNiagara: Compiling System`。

如果是 Shader/DDC/PSO，不要继续按 VS 工程生成或 C++ 增量编译排查；转到 PSO/渲染缓存 Skill，检查 DDC、ShaderPipelineCache、PSO、材质/贴图构建和最近引擎二进制/渲染配置变化。

如果确认是 C++ / UBT action，先看 UBT 的 makefile 失效原因：

- `Invalidating makefile for <Target> (DefaultEngine.ini modified)`：项目配置文件比上次 makefile 新，UBT 会重建 action graph。即使 `DefaultEngine.ini` 没有 git diff，只是被工具 touch 了时间戳，也足够触发这个判断。Rider/VS 的 Build 目标通常会调用 `Build.bat -Target="<EditorTarget> ..."`，并可能同时带上 `ShaderCompileWorker`；如果源码引擎输出不完整或 action history 认为引擎模块过期，合并 action graph 后可能直接排出几千个 `Module.UnrealEd.*.cpp`、`Module.Engine.*.cpp` action。
- `BuildConfiguration.xml is newer`：全局或项目 UBT 配置时间戳更新，所有相关 target 的 makefile 可能失效。
- `build metadata has changed`：图标、资源、版本或目标元数据变化，通常会重建 makefile 和部分资源/链接 action。
- `.uproject file is newer`：项目描述文件时间戳更新，插件/模块列表可能要重算。

如果用户需要继续使用 Rider/VS 的 Build/Run target，不要简单建议“别点 Build”。继续查 IDE 工程和 UBT 实际工具链是否被切换：

- UBT log 里的 `Compiler:` 或 `Using Visual Studio ... toolchain` 如果从 `Visual Studio 2022` / MSVC `14.4x` 变成 `Visual Studio 2026` / MSVC `14.50+`，旧的 `.obj`、`.pch`、`.lib` 往往不能复用，可能表现为几千个 engine action。
- `.sln` 如果写成 `VisualStudioVersion = 18.0`，`Intermediate/ProjectFiles/UECommon.props` 如果写成 `<PlatformToolset>v145</PlatformToolset>` 或 `DefaultSystemIncludePaths` 指向 VS2026/MSVC 14.50+，说明项目文件已经按 VS2026 生成。
- 同一机器同时安装 VS2022 和 VS2026 时，UBT 可能默认选择最新 Visual Studio。用户此前“已经编译过”的产物如果来自 VS2022/MSVC 14.4x，Rider 走 VS2026 工程时仍会重新编译。
- 如果机器已经没有 VS2022，只剩 VS2026 和多个 MSVC 小版本，不要把项目配置锁到不存在的 `VisualStudio2022`。先确认已完成基线编译使用的 VS2026/MSVC 小版本，再在项目级 `BuildConfiguration.xml` 固定 `Compiler`、`ToolChain`、`CompilerVersion`、`ToolchainVersion` 和 `VCProjectFileGenerator/Version`；否则 UBT 可能从 `14.50.x` 自动跳到 `14.51.x`，再次让 `.rsp`、PCH 和 engine action 失效。用户只要求 Rider 运行已有 Editor 时，同时给当前 Editor x64 的 `NMakeBuildCommandLine` 加 `-SkipBuild` 并用 `.sln` 目标验证不出现 `[1/xxxx] Compile`。
- 如果用户明确要求卸载某个 VS2026/MSVC 小版本，先用 VS Installer 组件卸载，不要手动删除 `VC/Tools/MSVC/<Version>` 目录。典型组件名类似 `Microsoft.VisualStudio.Component.VC.14.50.18.0.x86.x64` 和 `Microsoft.VisualStudio.Component.VC.14.50.18.0.ATL`；运行 `setup.exe modify --installPath "<VSInstallRoot>" --remove <ComponentId> --remove <ComponentId> --quiet --norestart --force` 前先结束 `MSBuild`/VS 相关进程。卸载完成后必须同步更新项目级 `BuildConfiguration.xml` 的 `CompilerVersion` 和 `ToolchainVersion` 到仍存在的 MSVC 目录，否则 UBT 会继续查找已卸载版本。

固定回已编译过的 VS 系列时，优先写项目级 UBT 配置，不要改引擎源码或用户全局配置。先只约束编译器族和工程生成版本，不要无端固定 MSVC 小版本；显式 `<Compiler>` / `<CompilerVersion>` 会再次让 makefile/action history 失效，可能触发一次更大的重算。

```xml
<?xml version="1.0" encoding="utf-8" ?>
<Configuration xmlns="https://www.unrealengine.com/BuildConfiguration">
	<WindowsPlatform>
		<PreferredCompilers>
			<Item>VisualStudio2022</Item>
		</PreferredCompilers>
	</WindowsPlatform>
	<VCProjectFileGenerator>
		<Version>VisualStudio2022</Version>
	</VCProjectFileGenerator>
</Configuration>
```

只有团队明确要求固定 MSVC 小版本、或 UBT 仍然选错工具链时，才考虑补充 `<Compiler>VisualStudio2022</Compiler>` 或 `<CompilerVersion>`。`<CompilerVersion>` 应取用户机器上已安装、且和既有构建产物一致的 MSVC 版本，例如 VS2022 的 `14.44.x`。如果不确定，先列出 `<VS2022Root>/VC/Tools/MSVC` 下的目录，再结合旧 UBT log、旧 `.rsp` 或团队约定选择；不要随意填最新版本。

写入 `<ProjectRoot>/Saved/UnrealBuildTool/BuildConfiguration.xml` 后，重新生成工程文件：

```powershell
& '<EngineRoot>/Engine/Binaries/DotNET/UnrealBuildTool/UnrealBuildTool.exe' `
	-ProjectFiles `
	-Project='<ProjectRoot>/<ProjectName>.uproject' `
	-Game `
	-Engine `
	-Progress
```

验证主工程已回到 VS2022：

```powershell
Select-String -Path `
	<ProjectName>.sln, `
	Intermediate/ProjectFiles/UECommon.props, `
	Intermediate/ProjectFiles/<ProjectName>.vcxproj `
	-Pattern 'VisualStudioVersion|PlatformToolset|ToolsVersion|DefaultSystemIncludePaths'
```

可用 `-SkipBuild` 验证 UBT 能读取配置且不执行 C++ action：

```powershell
& '<EngineRoot>/Engine/Build/BatchFiles/Build.bat' <EditorTarget> Win64 Development `
	-Project='<ProjectRoot>/<ProjectName>.uproject' `
	-WaitMutex `
	-NoHotReloadFromIDE `
	-SkipBuild
```

成功时应该很快结束并显示 `Result: Succeeded`，不应出现 `[1/xxxx] Compile` 或 `Using XGE executor to run ... action(s)`。

如果 UBT 的 `-WriteOutdatedActions` 仍然报告几千个 action，说明真实 Build target 仍会编译。用户明确要求 Rider/VS 的 Build/Run target 不触发编译时，可以只改生成文件里的当前 Editor x64 配置，把 `<NMakeBuildCommandLine>` 末尾加 `-SkipBuild`：

```xml
<NMakeBuildCommandLine>$(BuildBatchScript) -Target="... OrionEditor Win64 Development ..." -WaitMutex -FromMsBuild -architecture=x64 -SkipBuild</NMakeBuildCommandLine>
```

日常改 C++ 时不要启用 `-SkipBuild`，否则项目代码也会被跳过。这个兜底只适合用户临时打开已有 Editor 做资产或排查非 C++ 问题。项目 Skill 提供了检查、临时启用和撤销脚本：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-editor-skipbuild.ps1 -Mode Check -ProjectRoot .
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-editor-skipbuild.ps1 -Mode Apply -ProjectRoot .
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-editor-skipbuild.ps1 -Mode Remove -ProjectRoot .
```

如果用户要求“项目代码要编译，但不准再次编译源码 Editor/Engine 产物”，不要用 `-SkipBuild`。给当前 Editor 配置的 `NMakeBuildCommandLine`、`NMakeReBuildCommandLine` 和 `NMakeCompileFileCommandLine` 加 `-NoEngineChanges`：

```xml
<NMakeBuildCommandLine>$(BuildBatchScript) -Target="... <EditorTarget> Win64 Development ..." -WaitMutex -FromMsBuild -architecture=x64 -NoEngineChanges</NMakeBuildCommandLine>
```

`-NoEngineChanges` 会在执行 action 前检查将要修改的既有 Engine 文件；如果 UBT 计划改 `<EngineRoot>/Engine/...` 下已有产物，会直接失败，不继续编源码引擎。项目模块产物仍可编译。项目 Skill 提供了检查、启用和撤销脚本：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-editor-no-engine-changes.ps1 -Mode Check -ProjectRoot .
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-editor-no-engine-changes.ps1 -Mode Apply -ProjectRoot .
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-editor-no-engine-changes.ps1 -Mode Remove -ProjectRoot .
```

这个改法是生成工程文件保护：重新生成 Visual Studio/Rider 工程后可能被覆盖，生成后要重新运行 `Apply`。验证时先解析 `.vcxproj` 或检查 XML 文本，确认三条命令都有 `-NoEngineChanges` 且没有 `-SkipBuild`；不要为了验证直接触发 `.sln` Build，避免再次编译。

上面的 `-SkipBuild` 只是 IDE target 兜底，不是增量编译修复：它会让普通 Build/Run 前置 Build 跳过 C++ 编译，即使后来代码真的改了也不会在这个目标里构建；显式 Rebuild、单文件编译或重新生成工程文件可能不受影响。验证必须从 `.sln` 的真实目标执行，不要直接打 `Intermediate/ProjectFiles/<ProjectName>.vcxproj`，否则 `$(SolutionDir)` 可能解析到 `Intermediate/ProjectFiles` 并找不到 `.uproject`。

```powershell
& '<VS2022Root>/MSBuild/Current/Bin/amd64/MSBuild.exe' '<ProjectRoot>/<ProjectName>.sln' `
	'/t:Games\<ProjectName>\<ProjectName>' `
	'/p:Configuration=Development Editor' `
	'/p:Platform=Win64' `
	/m:1 `
	/v:minimal
```

成功时 UBT 命令行应包含 `-SkipBuild`，几秒结束，并且不出现 `[1/xxxx] Compile` 或 `Using XGE executor to run ... action(s)`。

用户只想打开编辑器或继续做资产时，直接运行已有 `UnrealEditor.exe <Project>.uproject`，或在 IDE 里使用 Attach/调试已运行编辑器。只要没有缺失 DLL、模块 ABI 不匹配或必须重新生成的 C++ 变更，打开现有编辑器可以不触发 C++ 编译。

## 源码版引擎只编一次，之后只编项目改动

`-SkipBuild` 不能用于日常 C++ 开发。它会跳过项目代码编译，只适合临时打开已有 Editor 做资产或排查非 C++ 问题。用户要求“项目代码仍要编译，但不要反复编译源码版引擎”时，处理重点是固定 UBT 输入和完成一次稳定基线编译。

先从 `Intermediate/ProjectFiles/<ProjectName>.vcxproj` 读取真实 Editor 配置的 `<NMakeBuildCommandLine>`。后续手工验证必须使用同一条命令形态，不要混用：

- 裸 `Build.bat <EditorTarget> Win64 Development -Project=... -WaitMutex`
- 额外加 `-NoLiveCoding` / `-NoHotReloadFromIDE`
- IDE 或工具触发的 `-Module=<ModuleName>`
- 手写 `-Target=...` 但缺少 IDE 生成命令里的 `ShaderCompileWorker` target、`-FromMsBuild` 或 `-architecture=x64`

这些参数组合变化会让 UBT 报 `Creating makefile ... (command line arguments changed)`，并刷新 `.rsp` / shared definitions。源码版引擎输出不完整时，表现就是几千个 engine action。

检查并撤销临时 `-SkipBuild`：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-editor-skipbuild.ps1 -Mode Check -ProjectRoot .
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-editor-skipbuild.ps1 -Mode Remove -ProjectRoot .
```

如果 XGE/Incredibuild 不稳定、前台会话中断，或 UBA detour 造成构建被杀，优先写项目本地 UBT 配置，不改引擎源码和用户全局配置：

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-local-ubt-build-stability.ps1 -Mode Check -ProjectRoot .
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\unreal-vs-project-generation\scripts\set-local-ubt-build-stability.ps1 -Mode Apply -ProjectRoot . -MaxParallelActions 8
```

这会管理 `<ProjectRoot>/Saved/UnrealBuildTool/BuildConfiguration.xml` 中的：

```xml
<BuildConfiguration>
	<bAllowUBAExecutor>false</bAllowUBAExecutor>
	<bAllowXGE>false</bAllowXGE>
	<MaxParallelActions>8</MaxParallelActions>
</BuildConfiguration>
```

UE 5.8 仍会显示 `Using Unreal Build Accelerator local executor`，但日志会出现 `[NoUba]` 或 `UbaSessionServer - Disable remote execution`，表示 UBA detour/remote 路径已禁用。UBT 源码中 `ProcessExecutionType.Native` 会给本地原生 action 追加 `[NoUba]`，所以它是执行方式标签，不是 makefile 过期原因。`MaxParallelActions=8` 是稳定优先的保守值；基线成功且机器稳定后，可以提高再验证。

如果多次中断后链接报：

```text
CVTRES : fatal error CVT1107: <...>\Module.X.cpp.obj
fatal error LNK1123: failure during conversion to COFF
```

这通常是中断构建留下的损坏 `.obj`，不是源码错误。不要清整个引擎目录；等当前构建退出后，定点删除报错模块的 `Intermediate\Build\Win64\x64\UnrealEditor\Development\<Module>` 下 `.obj/.lib/.exp`，必要时再删除停止构建瞬间仍在编译的 action 输出。删除前必须验证解析后的路径仍在预期 `Intermediate\Build` 根目录下。

完成一次基线编译后，立刻用同一条 IDE NMake 命令再跑一次。成功标准：

```text
Target is up to date
Using Unreal Build Accelerator local executor to run 0 action(s)
Result: Succeeded
```

只有达到这个标准，才能说明源码版引擎已经稳定到“改项目代码时只编项目相关改动”。如果第二次仍是几千个 action，继续查 `Creating/Invalidating makefile` 原因、命令行是否变了、`BuildConfiguration.xml` 是否更新、是否还有后台 UBT/XGE/cl/link 进程在改同一套中间产物。

如果 makefile 失效原因不能解释几千个 action，再按“引擎身份是否被切换”排查：

1. 查看 `.uproject` 是否被改动，尤其是 `EngineAssociation` 是否从 `"5.x"` 这类版本号变成 `{GUID}`：

```powershell
git diff -- <ProjectName>.uproject
```

2. 如果是 GUID，查注册表确认它解析到哪套引擎：

```powershell
reg query "HKCU\Software\Epic Games\Unreal Engine\Builds" /s
```

3. 搜索生成出来的工程文件，确认 VS 当前实际调用的是哪套引擎的 `Build.bat`：

```powershell
rg -n "<OldEngineRoot>|<ExpectedEngineRoot>|BuildBatchScript|NMakeBuildCommandLine" `
	<ProjectName>.sln `
	Intermediate\ProjectFiles\UECommon.props `
	Intermediate\ProjectFiles -g "*.vcxproj" -g "*.props" -g "*.sln"
```

如果 `.uproject` 的 GUID 指向源码引擎，而原来使用的是 Launcher/安装版引擎，或者 `.sln` / `UECommon.props` 已经指向源码引擎，UBT 会把这视为另一套构建环境。即使项目业务代码没改，也可能重新生成 makefile、重建规则程序集、重编 shared PCH、项目模块，甚至在源码引擎未完整预编译时触发大量引擎模块编译。

常见证据：

- `git diff -- <ProjectName>.uproject` 只显示 `EngineAssociation` 从 `"5.x"` 改成 `{GUID}`。
- `reg query` 显示该 GUID 指向 `<SourceEngineRoot>`。
- `.sln` 或 `Intermediate/ProjectFiles/UECommon.props` 的 `BuildBatchScript` 指向 `<SourceEngineRoot>\Engine\Build\BatchFiles\Build.bat`。
- UBT 日志出现 `Creating makefile ... (build metadata has changed)`，或 `Old metadata` / `New metadata` 里引擎资源路径不同。

修复思路：

1. 如果项目应继续使用安装版引擎，把 `.uproject` 的 `EngineAssociation` 恢复到稳定版本号或目标安装版标识。
2. 用目标引擎的 UBT 重新生成工程文件。
3. 重新搜索 `.sln`、`.slnx` 和 `Intermediate/ProjectFiles`，确认不再引用错误引擎根目录。
4. 只在明确需要源码引擎调试/改引擎时接受这次大编译；否则不要把它当成项目代码变更处理。

## Installed Build 全量构建

用户要求“源码版引擎只完整构建一次，之后 IDE 只编项目”时，优先考虑从源码引擎生成 Installed Build。Installed Build 可以保留源码和 PDB 用于单步调试，但不应该让 Rider/VS 把 Engine Editor 模块当成日常项目构建产物反复编译。

Windows 主机只构建 Win64 Installed Build 时，使用 `HostPlatformOnly=true`，并显式打开 Client、Server、完整调试符号和需要的 Game 配置：

```powershell
$EngineRoot = '<EngineRoot>'
$BuiltDirectory = '<BuiltDirectory>'
$ArgsList = @(
	'BuildGraph',
	'-Script=Engine/Build/InstalledEngineBuild.xml',
	'-Target=Make Installed Build Win64',
	'-Set:HostPlatformOnly=true',
	'-Set:WithWin64=true',
	'-Set:WithClient=true',
	'-Set:WithServer=true',
	'-Set:GameConfigurations=Debug;DebugGame;Development;Shipping;Test',
	'-Set:WithFullDebugInfo=true',
	'-Set:WithDDC=true',
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

在 PowerShell 的数组字面量里，不要把动态 `-Set:` 参数写成未加括号的字符串拼接，例如 `'-Set:BuiltDirectory=' + $BuiltDirectory`。在某些写法下它会被拆成 `-Set:BuiltDirectory=`、`+` 和路径等多个数组元素，AutomationTool 日志会显示 `-Set:BuiltDirectory= <BuiltDirectory>`，结果输出目录回落到默认值或被解析成额外参数。用插值字符串 `"-Set:BuiltDirectory=$BuiltDirectory"`，或用带括号的格式化表达式 `('-Set:BuiltDirectory={0}' -f $BuiltDirectory)`。

启动后先检查 AutomationTool 的 `Parsing command line` 行，确认没有被拆参：

```text
-Set:BuiltDirectory=<BuiltDirectory>
```

如果误启动后发现 `-Set:BuiltDirectory= <BuiltDirectory>` 中间有空格，应尽早停止本次 BuildGraph，结束相关 `RunUAT`、`AutomationTool`、`UnrealBuildTool`、`cl`、`link` 进程，再用正确参数重启；不要让错误输出目录的长构建继续跑完。

### Installed Build 的 DDC/XGE 故障续跑

`Make Installed Build Win64` 的 C++ 编译节点完成后，可能在 `Build DDC Win64` 阶段失败。典型日志特征：

```text
LogShaderCompilers: Display: Using XGE Controller for shader compilation
Ensure condition failed: GetShadowIndex() == 0
FWindowsPlatformNamedPipe::LogInternals
UnrealEditor-XGEController.dll!FXGEControllerModule::WriteOutThreadProc
Editor terminated with exit code 1 while running DerivedDataCache
```

这不是重新编译 Editor 源码失败，而是 DDC commandlet 里 XGEController 命名管道 handled ensure 被 UAT 统计成 error。即使日志里已经写出 `Compressed.ddp`，UAT 也会判整个 DDC 节点失败。

不要用下面这种方式禁用 XGE：

```powershell
-ini:Engine:[ConsoleVariables]:r.XGEShaderCompile=0
```

在该 commandlet 中它可能仍然输出 `Using XGE Controller for shader compilation`。以引擎源码 `Engine/Plugins/XGEController/Source/Private/XGEControllerModule.cpp` 为准，可靠参数是：

```powershell
-noxgecontroller -noxgeshadercompile
```

如果 BuildGraph 的 C++ 节点已经完成，不想再次经过编译节点，可直接续跑 DDC，并带 `-NoCompile`：

```powershell
$FeaturePacks = '<SemicolonSeparatedFeaturePackProjects>'
$EngineArgs = '-ini:Engine:[/Script/WindowsTargetPlatform.WindowsTargetSettings]:D3D12TargetedShaderFormats=PCD3D_SM6 -noxgecontroller -noxgeshadercompile -DDC-All-MissTypes=MaterialShaderMap+GlobalShaderMap -forceAllowShaderCompilerJobCache'
$FeatureArgs = '-noxgecontroller -noxgeshadercompile -DDC-All-MissTypes=MaterialShaderMap+GlobalShaderMap -forceAllowShaderCompilerJobCache'

& '<EngineRoot>\Engine\Build\BatchFiles\RunUAT.bat' -nop4 -NoCompile BuildDerivedDataCache `
	'-TempDir=<EngineRoot>\LocalBuilds\InstalledDDC' `
	"-FeaturePacks=$FeaturePacks" `
	'-TargetPlatforms=WindowsEditor+Windows' `
	'-HostPlatform=Win64' `
	'-SavedDir=<EngineRoot>\Engine\Saved\Installed\Win64' `
	"-EngineContentExtraArgs=$EngineArgs" `
	"-FeaturePackExtraArgs=$FeatureArgs"
```

`-FeaturePacks`、`-EngineContentExtraArgs` 和 `-FeaturePackExtraArgs` 必须写成插值字符串或格式化后的单个参数。不要写成单引号里的 `'-FeaturePacks=$FeaturePacks'`，否则 UAT 会收到字面量 `$FeaturePacks` 并报 `Could not find project: $FeaturePacks`。

续跑 DDC 成功的早期验证是日志出现：

```text
LogShaderCompilers: Display: No distributed shader compiler controller found
LogShaderCompilers: Display: Using <N> local workers for shader compilation
```

这说明已经绕开 XGEController。DDC 仍会显示大量 `Waiting for ... shaders to finish`、静态网格和纹理构建日志；这些是缓存生成，不是 MSVC 在重新编引擎源码。

构建完成后至少验证：

1. AutomationTool 退出码为 0。
2. `<BuiltDirectory>/Windows/Engine/Binaries/Win64/UnrealEditor.exe` 存在。
3. `<BuiltDirectory>/Windows/Engine/Binaries/Win64/UnrealServer*.target` 或对应 Server 预编译产物存在。
4. `UnrealEditor*.pdb` 存在，或确认 `WithFullDebugInfo=true` 的输出没有被裁剪。
5. 用该 Installed Build 重新生成项目工程后，Rider/VS 的 Editor Build 只编项目模块；如果 UBT 计划改 `<EngineRoot>/Engine/...` 既有产物，先用 `-NoEngineChanges` 阻断并排查原因。

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

### 安装版引擎禁止 Unique Program target

现象：安装版引擎运行 Generate Visual Studio project files 或 `UnrealBuildTool -ProjectFiles -game -rocket` 时失败：

```text
Targets with a unique build environment cannot be built with an installed engine.
```

如果失败目标是项目本地 `TargetType.Program`，例如 CEF/Web helper、独立工具程序或插件子进程，不要改引擎源码。先打开对应 `Source/<ProgramTarget>.Target.cs`，如果它必须在安装版引擎机器上参与工程生成，就显式设置：

```csharp
BuildEnvironment = TargetBuildEnvironment.Shared;
```

这个改法适用于“项目本地 Program target 只需要生成工程兼容安装版引擎，实际 exe 可由源码版引擎或 CI 预编译后分发”的场景。修复后重新生成工程文件，确认不再出现 Unique build environment 报错；再检查插件或项目是否已经提供该 Program 的预编译 exe，且 `.gitignore` 没有继续忽略该必需 exe，避免运行时或打包时报 helper/tool exe 缺失。

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
6. Editor target 编译时某个引擎插件模块 Public 头找不到，但该头在 `<ENGINE_ROOT>` 里确实存在：检查插件 `.uplugin` 模块 host type。`RuntimeNoCommandlet` 这类模块可能不进入 Editor target 编译环境，导致 `Build.cs` 里写了依赖但 `.cpp.obj.rsp` 仍没有 include path。修复应在项目 `Build.cs` 按 target 定义 `PROJECT_WITH_<FEATURE>=0/1`，不可用 target 下用宏隔离插件 include/API 并提供 no-op；不要复制引擎插件头文件。
7. 链接阶段报 `LNK2019`，而 `*.Build.cs` 看起来已有依赖：打开失败模块 `UnrealEditor-<Module>.dll.rsp`，确认 import lib 是否真的进入 link response。若 Public 头暴露 `FKey`、`FSlateBrush`、`UEnhancedPlayerInput` 等外部类型，只把依赖放 Private 可能不足；把外部类型所属模块放入 `PublicDependencyModuleNames`，再复查 `.dll.rsp`。
8. 编译成功后不只看 ExitCode。验证编辑器进程存在、窗口标题进入项目主窗口，并读取最新 `Saved/Logs/<ProjectName>.log` 确认没有停在插件兼容、Target 升级弹窗或模块 DLL 导入失败。

## 成功验证

生成成功至少确认：

1. UBT 输出 `Result: Succeeded`。
2. `.sln` / `.slnx` 已写出。
3. `Intermediate/ProjectFiles/UECommon.props` 的 `BuildBatchScript` 指向目标 `<ENGINE_ROOT>`。
4. `.vcxproj` 的 `NMakeOutput`、`SourcePath` 或 include path 不再指向旧引擎。
5. 如果修过 `.uplugin` / `.uproject`，确认 JSON 可解析、无 UTF-16 BOM、无 LF-only。
6. 如果目标是“能打开编辑器”，确认 `<EditorTarget>` 编译 `Result: Succeeded`，且编辑器窗口标题进入项目主窗口而不是停在兼容弹窗。
