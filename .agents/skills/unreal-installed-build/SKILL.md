---
name: unreal-installed-build
description: "Use when working with Unreal Engine source Installed Builds, BuildGraph InstalledEngineBuild.xml, minimal editor-only installed build, Rider/Visual Studio repeatedly compiling thousands of Engine/Editor actions, EngineAssociation registry aliases, UnrealVersionSelector, BuildGraph DDC/XGE/pdbcopy/disk-space failures, or validating that IDE project files point to an Installed Build instead of a source engine root."
---

# Unreal Installed Build

## 核心流程

处理源码版 Unreal 引擎 Installed Build、Rider/VS 引擎关联和“不要反复编译 Editor”问题时使用本 Skill。

先读取并配合：

- `../orion-project-config/SKILL.md`：修改 `.uproject`、注册表引擎别名或项目配置时。
- `../unreal-vs-project-generation/SKILL.md`：重新生成 `.sln`、`.slnx`、`Intermediate/ProjectFiles` 或排查 Rider/VS 路径时。
- `../orion-code-style/SKILL.md`：如果本次要修改项目文本文件。

详细命令、故障和验证清单见 `references/unreal-installed-build.zh-CN.md`。

## 决策规则

1. 先确认用户要的是“完整调试/Server/Client/DebugGame”还是“最小 Editor 日常开发”。
2. 如果用户明确“不编译”或“只改关联”，只改注册表、`.uproject` 或生成文件路径，不启动 BuildGraph、UBT Build 或 MSBuild Build。
3. 最小标准 Installed Build 仍会编译一次 `UnrealGame Win64 Development`；这是 Epic BuildGraph 的 Win64 installed build 依赖，不代表启用了 Server、Client、Debug 或 Test。
4. `-SkipBuild` 只用于临时打开已有 Editor；日常项目 C++ 开发不要用它。需要项目代码能编译但禁止动引擎产物时，用 `-NoEngineChanges` 保护 IDE 生成的 NMake 命令。
5. BuildGraph 成功前不要关机；必须先验证 `InstalledBuild.txt`、关键 exe/dll 和 `AutomationTool exiting with ExitCode=0`。

## 最小 Installed Build

用于“只要 Editor，尽量小，避免 Rider 重编源码 Editor”的常用参数：

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

## 接入项目

把 Installed Build 注册成项目使用的 `EngineAssociation` 名字，例如：

```powershell
reg add "HKCU\Software\Epic Games\Unreal Engine\Builds" /v "5.8" /t REG_SZ /d "<InstalledBuildRoot>" /f
reg add "HKCU\Software\Epic Games\Unreal Engine\Builds" /v "UE_5.8_Official" /t REG_SZ /d "<OfficialEngineRoot>" /f
```

项目 `.uproject` 保持：

```json
"EngineAssociation": "5.8"
```

生成或修正工程文件后，至少验证 `UECommon.props` 的 `BuildBatchScript` 指向 `<InstalledBuildRoot>\Engine\Build\BatchFiles\Build.bat`，并确认 `.sln` 没有残留官方安装版或源码根路径。
