# UE 第三方库插件制作规则

## 目录职责

第三方插件优先采用“插件根 ThirdParty 存实体、Source/ThirdParty 存声明”的结构：

| 路径 | 职责 | 约束 |
| --- | --- | --- |
| `<PluginRoot>/<PluginName>.uplugin` | 插件模块、平台、内容和依赖描述 | Runtime/Editor/Program 模块写在这里；External 模块通常不需要写入 descriptor |
| `<PluginRoot>/Source/<RuntimeModule>/` | UE Runtime 桥接模块 | 只暴露项目需要的稳定 API；不要把 SDK 头扩散到公共接口 |
| `<PluginRoot>/Source/<EditorModule>/` | UE Editor 工具模块 | 只在 Editor target 加载；不得被 Runtime 依赖 |
| `<PluginRoot>/Source/ThirdParty/<SDKName>/<SDKName>.Build.cs` | External 模块声明层 | 只写 `ModuleType.External`、include/lib/runtime dependency/平台分支 |
| `<PluginRoot>/ThirdParty/<SDKName>/include` 或 `<SDKVersion>/include` | 第三方头文件 | 实体库不放在 `Source/ThirdParty` |
| `<PluginRoot>/ThirdParty/<SDKName>/lib/<Platform>` | 静态库或导入库 | 按平台、架构、CRT/ABI 和配置分层 |
| `<PluginRoot>/ThirdParty/<SDKName>/bin/<Platform>` 或 `Runtime/<Platform>` | `.dll`、`.so`、`.dylib` 和运行时资源 | 作为源码库里的第三方运行库来源，由 `RuntimeDependencies` stage |
| `<PluginRoot>/ThirdParty/<SDKName>/licenses` | LICENSE、NOTICE、SBOM、来源和版本 | 发布前必须可审计 |
| `<PluginRoot>/Binaries/<Platform>` | UE 编译产物、helper exe 或最终 staged 产物 | 不作为第三方 SDK 源头目录 |

`Binaries` 是 UE 模块输出和包体 stage 常见位置，不应作为源码库中第三方库的长期源头。若第三方 DLL 运行时必须和 exe 同目录，仍从 `ThirdParty` 源头复制或 stage 到 `$(TargetOutputDir)`。

## External Build.cs 基线

External 模块只表达 SDK 接入，不承载业务逻辑。

```csharp
using UnrealBuildTool;
using System.IO;

public class FooSDK : ModuleRules
{
	public FooSDK(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		string PluginRoot = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", "..", ".."));
		string SDKRoot = Path.Combine(PluginRoot, "ThirdParty", "FooSDK");

		PublicDefinitions.Add("WITH_FOOSDK=1");
		PublicSystemIncludePaths.Add(Path.Combine(SDKRoot, "include"));

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			string LibPath = Path.Combine(SDKRoot, "lib", "Win64", "foo.lib");
			string RuntimePath = Path.Combine(SDKRoot, "bin", "Win64", "foo.dll");

			PublicAdditionalLibraries.Add(LibPath);
			PublicDelayLoadDLLs.Add("foo.dll");
			RuntimeDependencies.Add("$(TargetOutputDir)/foo.dll", RuntimePath);
		}
		else
		{
			PublicDefinitions.Add("WITH_FOOSDK=0");
		}
	}
}
```

路径计算要和模块目录匹配：当 `Build.cs` 位于 `Source/ThirdParty/<SDKName>` 时，`ModuleDirectory/../../..` 才回到插件根。当前 UE 版本若可用 `PluginDirectory`，也可以优先使用它。

## RuntimeDependencies 规则

选择 staging 目标前先确认运行时代码如何加载库：

- 代码通过 `FPlatformProcess::GetDllHandle()` 从插件相对路径加载：把 `RuntimeDependencies` 指向 `ThirdParty/<SDKName>/...` 源文件，确保包体保留插件相对目录。
- 代码依赖 Windows delay-load 并让 DLL 和 exe 同目录：使用 `RuntimeDependencies.Add("$(TargetOutputDir)/foo.dll", SourceDll)`。
- SDK 有资源目录、locale、pak、dat、json、模型文件或证书：递归添加明确的 runtime 根目录，或列出所有必需文件；不要只 stage DLL。
- Debug/Development/Shipping 使用不同 CRT、符号或库名时，在 `Target.Configuration` 和 `Target.bDebugBuildsActuallyUseDebugCRT` 分支中处理。
- Dedicated Server 不需要客户端 SDK 时，External 模块应定义 `WITH_<SDK>=0` 并让上层模块提供空实现或不依赖该模块。

## 平台要点

- Windows：导入库进 `PublicAdditionalLibraries`，DLL 名进 `PublicDelayLoadDLLs`，运行库通过 `RuntimeDependencies` stage。第三方库的 `/MD`、`/MT` 和 UE 目标 CRT 必须一致。
- Linux：优先确认 `.so` 的 `rpath`、依赖链、架构和导出符号；用 `ldd`、`readelf`、`nm` 验证。
- macOS：确认 `.dylib` 或 framework 的 install name 使用 `@rpath`；用 `otool -L` 验证。
- Android：按 ABI 提供 `.so`，用 UPL/APL 和 `AdditionalPropertiesForReceipt` 参与打包；不要只放一个通用 `.so`。
- iOS：优先使用 framework 或 `.a`，保留 arm64 slice 和 dSYM；不要默认依赖已废弃的 bitcode 流程。

## 发布和合规清单

- 记录 SDK 名称、版本、来源 URL、构建参数、目标平台、架构、CRT/ABI、是否启用专有功能。
- 保留 LICENSE、NOTICE、第三方版权说明和必要 SBOM。
- 符号文件按发布策略归档；Shipping 可不随包体分发，但调试链路必须能找回。
- 插件包分发前检查 `.uplugin` 的 `SupportedTargetPlatforms`、模块 `PlatformAllowList` / `TargetDenyList` 和 `CanContainContent`。
- 不提交下载缓存、临时 build tree、中间产物、用户本机路径或未清理日志。

## 常见问题

### 第三方库放在 Source/ThirdParty

现象：源码目录混入 SDK 头、lib、dll、pak、dat 或完整二进制包，External `Build.cs` 和实体库混在一起。

原因：把 `Source/ThirdParty` 当成库目录，而不是 External 模块声明层。

修复：把 SDK 实体移动到 `<PluginRoot>/ThirdParty/<SDKName>/`，只在 `<PluginRoot>/Source/ThirdParty/<SDKName>/<SDKName>.Build.cs` 保留 `ModuleType.External` 声明，并同步调整 include/lib/runtime path。

验证：`Source/ThirdParty/<SDKName>` 下只有 Build.cs 或少量声明辅助文件；打包后 staged 包内仍能找到运行库。

### 第三方运行库放在 Binaries

现象：源码库里的 SDK 源头位于 `<PluginRoot>/Binaries/ThirdParty`。

原因：把运行时 stage 位置误当成第三方库源码管理位置。

修复：把源码库源头移到 `<PluginRoot>/ThirdParty/<SDKName>/bin` 或 `Runtime`；`Binaries/<Platform>` 只保留 UE 编译产物、helper 程序或 UBT/UAT staged 输出。

验证：清理 `Binaries` 后，External 模块仍能从 `ThirdParty` 找到 SDK，并可重新构建和打包。

### Editor 能运行但包体缺文件

现象：Editor 下能加载 DLL，打包后报缺 DLL、locale、pak、dat、json 或资源目录。

原因：本地路径存在但没有进入 `RuntimeDependencies`，或代码加载路径和 staged 目标路径不一致。

修复：先确定运行时代码从哪个目录加载，再把所有必要 runtime 文件按同一相对结构 stage；必要时递归添加 runtime 根目录。

验证：在 staged 包里按运行时加载路径检查文件存在，并启动包体查看日志没有缺库或缺资源错误。

### Windows Move-Item 迁移第三方目录半成功

现象：把大型 SDK 目录从 `Source/ThirdParty` 或 `Binaries/ThirdParty` 移到插件根 `ThirdParty` 时，`Move-Item` 报某个 `.lib`、`.dll` 或 `.pak` 被占用；目标目录已经出现大量文件，但源目录还残留一部分文件。

原因：IDE、MSBuild、杀毒扫描或后台索引短暂持有第三方文件句柄，`Move-Item` 的复制阶段已完成一部分，删除源文件阶段失败。

修复：不要直接删除目标重来。先比较源/目标文件数和相对路径；确认目标目录已包含源目录所有文件后，对旧源目录执行带 2 到 3 次短延迟重试的 `Remove-Item -Recurse -Force`。runtime 目录可先 `Copy-Item -Recurse` 到新 `ThirdParty/.../Runtime`，再删除旧 `Binaries/ThirdParty` 源目录。

验证：旧 `Source/ThirdParty/<SDKName>/<SDKPackage>` 和旧 `Binaries/ThirdParty/<SDKName>` 不存在；新 `ThirdParty/<SDKName>` 下的文件数、关键 lib/DLL/resource 文件存在；External `Build.cs` 指向新路径后能编译。

### Program helper 进程解析不到插件根

现象：主 Editor/Game 进程能加载第三方 DLL，但 SDK 的 helper、worker、subprocess 或 crashpad 这类 Program 进程启动后立即退出；父进程日志表现为子进程反复崩溃、服务重启或缺 runtime 文件，打包版和编辑器都可能复现。

原因：Program helper 通常不是通过 `.uproject` 启动，进程内的 `IPluginManager` 和 `FPaths::ProjectPluginsDir()` 不一定有正确项目上下文。若运行库源码位于插件根 `ThirdParty/<SDKName>`，helper 继续依赖 `ProjectPluginsDir()` 就可能找错 SDK 根目录。

修复：helper 专用路径不要只依赖项目目录。若 helper 被 staged 到 `<PluginRoot>/Binaries/<Platform>/<Helper>.exe`，运行时代码应先检测当前可执行文件名，再从 `FPlatformProcess::ExecutablePath()` 回推插件根；主进程仍可优先使用 `IPluginManager::FindPlugin()`。修复后同时重编 helper Program、Editor、Development/Shipping 客户端，并验证 helper 被 RuntimeDependencies staged。

验证：清理旧日志后启动 Editor 或客户端，确认父进程日志没有连续子进程 crash；打包 receipt 中同时存在 helper exe 和 `ThirdParty/<SDKName>/Runtime/...` 文件。
