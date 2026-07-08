# Orion Browser Framework 工作流

## 能力边界

`OrionBrowser` 是项目本地浏览器运行时插件，负责 CEF 生命周期、运行库路径、helper 子进程、Slate/UMG 浏览器控件和 Win64 打包。GameUI 只作为调用方，通过 `UGameUIWebBrowser` 或 `UOrionBrowserWidget` 加载 HTML/URL。

不要把运营弹窗、启动流程、奖励逻辑或具体页面业务放进 `Plugins/OrionBrowser`。这些业务继续留在 GameUI popup definition、flow action 或调用方 provider。

## 模块分层

- `OrionCEF3`：External ThirdParty 模块，Build.cs 声明层位于 `Source/ThirdParty/OrionCEF3`，固定 CEF 版本和运行库 RuntimeDependencies。
- `OrionCEF3Utils`：加载插件内 CEF DLL，路径必须来自 `Plugins/OrionBrowser/ThirdParty/OrionCEF3/Runtime`，不能回退到 Engine CEF。
- `OrionBrowser`：项目本地 WebBrowser runtime，封装 CEF 初始化、窗口、输入、渲染、JS 和资源加载。
- `OrionBrowserWidget`：Blueprint-facing UMG 模块，公开 `UOrionBrowserWidget`。
- `OrionBrowserHelper`：CEF 子进程 Program target，运行时必须和游戏可执行文件一起 staged。

## CEF 版本和导入规则

当前 Win64 基线为 `149.0.6+g0d0eeb6+chromium-149.0.7827.201`。

项目要求 H.264/AAC，因此官方标准 CEF 包只能用于版本和目录结构对照，不能作为最终运行库。最终导入必须是项目批准的 proprietary-codec build，通常需要 `proprietary_codecs=true` 和 `ffmpeg_branding=Chrome`。

常用脚本：

- `Plugins/OrionBrowser/Scripts/Resolve-OrionCEFVersion.ps1`：查询锁定 CEF 包信息。
- `Plugins/OrionBrowser/Scripts/Build-OrionCEF.ps1`：按 Chromium branch 生成 codec-enabled 构建命令。
- `Plugins/OrionBrowser/Scripts/Import-OrionCEF.ps1`：导入已批准的 CEF 分发包，并写入源码库和运行库目录。

导入后必须确认：

- `Source/ThirdParty/OrionCEF3/OrionCEF3.Build.cs` 存在，且该目录不存放 CEF 实体库。
- `ThirdParty/OrionCEF3/cef_binary_<version>_windows64/include/cef_app.h` 存在。
- `Release/libcef.lib` 存在。
- `VS*/libcef_dll_wrapper/Release/libcef_dll_wrapper.lib` 存在。
- `ThirdParty/OrionCEF3/Runtime/Win64/<version>/libcef.dll` 和 `resources.pak` 存在。

## 自建 codec-enabled CEF 149

CEF/Chromium 构建体积很大，优先使用仓库外的 `<CEFBuildRoot>`，避免把中间文件写进项目目录。Win64/Steam v1 只需要 x64 Release 时，可以把官方自动化脚本用于拉源码、打补丁和生成 GN，再手动构建 x64 Release，避免无关 x86/Debug 环境阻塞。

基础环境：

```powershell
$env:PATH = '<CEFBuildRoot>\cef\depot_tools;' + $env:PATH
$env:DEPOT_TOOLS_WIN_TOOLCHAIN = '0'
$env:vs2022_install = '<VS2022InstallDir>'
$env:GCLIENT_SUPPRESS_GIT_VERSION_WARNING = '1'
```

首次拉取：

```powershell
python <CEFBuildRoot>\cef_automate\automate-git.py --download-dir=<CEFBuildRoot>\cef --branch=7827 --x64-build --no-debug-build --force-build --minimal-distrib --client-distrib --no-chromium-history
```

如果 `gclient sync` 在 `depot_tools\external_bin\gsutil\gsutil_5.35.locked` 报 lockfile 错误，先确认没有残留 git/python/depot_tools 进程，再删除 stale lock，并用低并发继续同步：

```powershell
gclient sync --nohooks --no-history -j1
```

同步完成后可手动应用 CEF runhooks patch 并跑 hooks：

```powershell
python <CEFBuildRoot>\cef\cef\tools\patcher.py --patch-file <CEFBuildRoot>\cef\cef\patch\patches\runhooks --patch-dir <CEFBuildRoot>\cef\chromium\src
gclient runhooks
```

启用 H.264/AAC 的关键 GN 参数：

```powershell
$env:GN_DEFINES = 'is_official_build=true proprietary_codecs=true ffmpeg_branding=Chrome symbol_level=1 chrome_pgo_phase=0'
```

`chrome_pgo_phase=0` 用于绕开官方 PGO profile 不存在导致的 `requested profile ... .profdata doesn't exist`。随后继续让 CEF 自动化脚本生成 x64 Release GN：

```powershell
python <CEFBuildRoot>\cef_automate\automate-git.py --download-dir=<CEFBuildRoot>\cef --branch=7827 --x64-build --no-debug-build --force-build --force-distrib --minimal-distrib --client-distrib --no-chromium-history --no-update --build-log-file
```

如果自动化脚本继续尝试 `out\Debug_GN_x86` 并因 `Debuggers\x86\dbghelp.dll` 失败，但项目只需要 Win64，可直接进入 Chromium src 手动构建 x64 Release：

```powershell
Set-Location <CEFBuildRoot>\cef\chromium\src
autoninja -C out\Release_GN_x64 cefclient
```

构建成功后用 CEF 自带脚本生成 x64 分发包，再通过项目脚本导入：

```powershell
autoninja -C out\Release_GN_x64 bootstrap bootstrapc
python <CEFBuildRoot>\cef\chromium\src\cef\tools\make_distrib.py --output-dir=<CEFBuildRoot>\cef\cef\binary_distrib --allow-partial --ninja-build --x64-build --minimal --no-docs
powershell -NoProfile -ExecutionPolicy Bypass -File Plugins\OrionBrowser\Scripts\Import-OrionCEF.ps1 -Source <CEFDistributeRoot> -ProprietaryCodecsApproved
```

CEF 149 Windows minimal 分发有这些导入细节：

- `make_distrib.py --minimal` 会把目录命名追加 `_minimal`；导入前把目录重命名或复制为 `cef_binary_<version>_windows64`。
- `make_distrib.py` 会复制 `bootstrap.exe` 和 `bootstrapc.exe`，即使只做 minimal 包也要先构建 `bootstrap bootstrapc`。
- `v8_context_snapshot.bin` 可能位于 `Release` 而不是 `Resources`；导入脚本应接受这两种位置，并最终复制到 runtime 根目录。
- `vk_swiftshader_icd.json` 要和 `vk_swiftshader.dll` 一起复制并加入 RuntimeDependencies。
- Windows runtime 目录位于 `ThirdParty/OrionCEF3/Runtime/Win64/<version>`，应把 `Resources` 内容扁平复制到 CEF runtime 根目录；运行时代码的 `resources_dir_path` 指向 runtime 根目录，`locales_dir_path` 指向 runtime 根目录下的 `locales`。
- `OrionCEF3.Build.cs` 应递归 stage runtime 目录所有文件，避免新增 locale、pak、dat 或 json 文件时只在编辑器可用、包体缺失。
- 不要直接使用 `out\Release_GN_x64\obj\cef\libcef_dll_wrapper.lib`；它可能不是 MSVC linker 可用的最终 wrapper。
- 用 CEF 分发包 CMake 构建 `libcef_dll_wrapper`，并显式传 `-DCEF_RUNTIME_LIBRARY_FLAG=/MD`，否则 UE `/MD` 目标会报 `LNK2038 RuntimeLibrary`。
- UE Windows toolchain 可能查找 `VS2015\libcef_dll_wrapper\Release\libcef_dll_wrapper.lib`，即使本机安装的是更新版 Visual Studio；导入包里至少放入 `VS2015` 目录，也可同时保留当前 VS 目录。

wrapper 构建示例：

```powershell
Set-Location <CEFDistributeRoot>\cef_binary_<version>_windows64
<VSInstallDir>\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe -S . -B build_wrapper_vs18_md -G "Visual Studio 18 2026" -A x64 -DCEF_RUNTIME_LIBRARY_FLAG=/MD
<VSInstallDir>\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe --build build_wrapper_vs18_md --config Release --target libcef_dll_wrapper --parallel 24
Copy-Item build_wrapper_vs18_md\libcef_dll_wrapper\Release\libcef_dll_wrapper.lib VS2015\libcef_dll_wrapper\Release\libcef_dll_wrapper.lib -Force
```

导入前检查 `out\Release_GN_x64\args.gn` 至少包含：

```text
proprietary_codecs=true
ffmpeg_branding="Chrome"
chrome_pgo_phase=0
target_cpu="x64"
is_component_build=false
is_debug=false
```

## GameUI 接入

`GameUI.Build.cs` 在 Win64 非 Server 下启用 `GAMEUI_WITH_ORION_BROWSER=1`，并依赖 `OrionBrowser` 和 `OrionBrowserWidget`。

`UGameUIWebBrowser` 是兼容旧蓝图的项目包装控件。不要删除或重命名它。新的通用蓝图也可以直接使用 `UOrionBrowserWidget`。

`UUI_HtmlPopupContent` 允许 `WebBrowser_Html` 绑定为：

- `UGameUIWebBrowser`
- `UOrionBrowserWidget`

HTML 字符串使用 `LoadString(Html, BaseURL)`；远程页面使用 `LoadURL(URL)`。插件不可用时必须降级，不允许让弹窗系统崩溃。

### 鼠标光标策略

`EOrionBrowserCursorPolicy` 是浏览器层通用策略：

- `PageControlled`：完整浏览器行为，网页 CSS cursor、CEF 自定义 cursor 和文本输入光标可以改变 Slate/platform 光标。
- `GameControlled`：网页仍接收点击、输入和滚轮，但浏览器窗口不再把 `OnCursorChange` 结果写回 Slate；`OnCursorQuery` 也返回 unhandled，让项目自己的鼠标光标策略继续生效。

`UOrionBrowserWidget` 暴露 `CursorPolicy` 蓝图属性。普通全功能浏览器默认使用 `PageControlled`；GameUI HTML 弹窗、广告、活动页或任何不能改变游戏鼠标形态的嵌入页应设置为 `GameControlled`。

`UGameUIWebBrowser.CursorPolicy=ForceDefault` 必须同时做两件事：把底层 `SOrionBrowser` 设置为 `GameControlled`，并注入 `cursor: default !important` 作为页面内兜底。只注入 CSS 不足以彻底修复，因为 CEF 仍可能通过 `FOrionCEFWebBrowserWindow::OnCursorChange` 把 `CT_HAND`、`CT_GRAB`、`CT_GRABBING` 或自定义 cursor 写入 Slate 并触发 `FSlateApplication::QueryCursor()`。

不要把 HTML 按钮点击后的手型/抓手光标问题修在 popup Definition、启动 Flow 或具体广告 URL 上；根修复在 OrionBrowser 插件的 cursor policy，GameUI 只选择默认策略。

## 构建和验证

最小验证顺序：

1. 运行 code style 检查 touched code files。
2. 构建 `OrionBrowserHelper Win64 Development` 或 Shipping。
3. 构建 Editor target，确认 `OrionBrowser`、`OrionBrowserWidget`、`GameUI` 通过 UHT 和链接。
4. 打包 Steam Win64 时检查 staged 文件包含 `OrionBrowserHelper.exe`、`libcef.dll`、CEF pak/dat/resources。
5. 运行 HTML/CSS/JS 页面冒烟；页面里放按钮或链接，点击后确认项目光标没有变成 Hand/GrabHand，也没有额外抓手图标。
6. 运行 H.264/AAC MP4 页面验证画面和声音。

Dedicated Server 不应链接 CEF runtime。若 Server 构建失败，优先检查 Target gate、Build.cs 依赖和 `WITH_CEF3` / `GAMEUI_WITH_ORION_BROWSER` 宏。

## 启动预热策略

首次打开网页时的卡顿通常来自懒初始化集中发生：`FOrionWebBrowserSingleton` 首次创建会执行 CEF DLL 绑定、`CefInitialize`、helper 子进程路径解析、CEF cache 准备和默认材质同步加载。不要把预热写进启动弹窗、活动页或具体 GameUI 流程；预热属于 `OrionBrowser` Runtime 模块的通用运行时策略。

默认配置：

```ini
[OrionBrowser]
bPrewarmOnStartup=true
StartupPrewarmDelaySeconds=0.0
StartupPrewarmMaxWaitSeconds=30.0
```

`bPrewarmOnStartup=true` 时，`OrionBrowser` 模块在 `FCoreDelegates::OnFEngineLoopInitComplete` 后注册下一帧 `FTSTicker`，确认 `GDynamicRHI` 可用后调用 `IOrionBrowserModule::Prewarm()`。不要在模块 `StartupModule()` 里直接创建 CEF Singleton，因为 CEF GPU 加速初始化会读取 RHI adapter LUID，过早执行会触发 `WebBrowserModule is instantiated before GDynamicRHI is initialized` 这类检查。

手动预热入口是 `IOrionBrowserModule::Get().Prewarm()`；它只创建浏览器 Singleton，不创建可见网页窗口。`StartupPrewarmMaxWaitSeconds=0` 表示一直等待运行时条件满足。验证时检查日志出现 `Prewarming Orion CEF browser runtime`，然后再首次打开 URL 或 HTML 页面观察是否还有集中初始化卡顿。

## 帧率策略

`BrowserFrameRate=0` 表示控件不设置固定离屏渲染帧率上限。运行时通过 `[OrionBrowser]` 的 `bUseUnrestrictedFrameRate` 和 `UnrestrictedFrameRateTarget` 解析出传给 CEF 的 `windowless_frame_rate`。CEF API 不支持真正的“无限”数值，因此项目默认使用很高的目标值 `1000`，实际帧率仍受游戏线程 tick、Slate、页面复杂度和 GPU 能力限制。

默认高刷新配置：

```ini
[OrionBrowser]
bPrewarmOnStartup=true
StartupPrewarmDelaySeconds=0.0
StartupPrewarmMaxWaitSeconds=30.0
bUseUnrestrictedFrameRate=true
UnrestrictedFrameRateTarget=1000
bForceMessageLoop=true
MinMessageLoopHertz=1
MaxForcedMessageLoopHertz=0
```

`MaxForcedMessageLoopHertz=0` 表示 message pump 使用 `UnrestrictedFrameRateTarget`，不要再把 `MaxForcedMessageLoopHertz` clamp 到 60。若后续低端机器占用过高，可以把 `bUseUnrestrictedFrameRate=false` 并设置明确的 `BrowserFrameRate` / `MaxForcedMessageLoopHertz`。

## 常见问题

### 官方 CEF 包不能播放 H.264/AAC

现象：HTML5 video 标签能创建但 MP4 没画面、没声音或报不支持 codec。

原因：官方标准 CEF/Chromium 分发通常不启用 proprietary codecs。

修复：使用项目批准的 codec-enabled CEF 构建，再通过 `Import-OrionCEF.ps1 -ProprietaryCodecsApproved` 导入。

### 加载到了引擎 CEF

现象：日志显示 CEF 路径来自 Engine 目录，或版本不是 OrionCEF3 锁定版本。

原因：模块仍依赖引擎 `CEF3`/`CEF3Utils`，或运行时路径仍使用 `FPaths::EngineDir()`。

修复：确认 `OrionBrowser` 依赖 `OrionCEF3` / `OrionCEF3Utils`，并确认 `OrionCEF3Utils::LoadCEF3Modules` 从插件目录解析 DLL。

### 客户端 monolithic 链接出现 WebBrowser 重复符号

现象：Game/Steam 客户端链接时报 `LNK2005`，符号来自 `Module.WebBrowser.cpp.obj` 和 `OrionBrowser` 内部 CEF `.cpp.obj`，例如 `FCEFBrowserApp`、`FCEFWebBrowserWindow` 或 `LogCEFBrowser`。

原因：OnlineFramework/LoginFlow、编辑器辅助插件或其他模块仍可能依赖引擎 `WebBrowser` 模块；客户端 monolithic 链接时，全局 C++ 符号会和项目本地浏览器实现冲突。

修复：不要通过禁用 OnlineFramework 规避。应在 `OrionBrowser` 内部隔离命名，把复制自引擎 WebBrowser 的全局类、日志分类和自由函数改成项目私有前缀，例如 `FOrionCEF*`、`FOrionCef*`、`IOrionCef*`、`LogOrionCEFBrowser` 和 `Orion*` 工具函数。隔离后重新构建 Editor、Steam 客户端和 Server。

### wrapper 静态库无法链接

现象：`OrionBrowserHelper` 或客户端链接时报 `LNK1136 invalid or corrupt file`，或 `LNK2038 RuntimeLibrary` 中 `/MT` 与 `/MD` 不匹配。

原因：直接复制 GN 输出目录里的 `obj\cef\libcef_dll_wrapper.lib` 可能不是当前 MSVC linker 期望的最终库；CEF CMake 默认也会用 `/MT` 构建 wrapper，而 UE target 通常使用 `/MD`。

修复：在 CEF 分发包目录用 CMake 构建 `libcef_dll_wrapper`，传入 `-DCEF_RUNTIME_LIBRARY_FLAG=/MD`，再复制到 `VS2015\libcef_dll_wrapper\Release`。如果当前 VS 目录也被导入脚本扫描，可同时复制一份到对应 `VS<Version>` 目录。

### 打包后找不到 helper

现象：日志报 `OrionBrowserHelper.exe not found`。

原因：helper target 未构建，或 `RuntimeDependencies` 没把 helper staged 到 Win64 运行目录。

修复：先构建 `OrionBrowserHelper`，再确认 `OrionBrowser.Build.cs` 的 RuntimeDependencies 包含 `$(PluginDir)/Binaries/Win64/OrionBrowserHelper.exe`。

### 安装版引擎生成工程时报 Unique build environment

现象：只安装 Launcher/安装版引擎的团队机器运行 Generate Visual Studio project files，日志报：

```text
Targets with a unique build environment cannot be built with an installed engine.
```

原因：项目本地 `TargetType.Program` 默认会被 UBT 视为 Unique build environment，而安装版引擎禁止构建 Unique target。`OrionBrowserHelper` 仍需要保留为独立 CEF 子进程 Program target，但 TargetRules 必须显式兼容安装版引擎工程生成。

修复：在 `Source/OrionBrowserHelper.Target.cs` 中保留：

```csharp
BuildEnvironment = TargetBuildEnvironment.Shared;
```

源码版引擎或 CI 机器负责构建 `OrionBrowserHelper.exe`；安装版引擎团队机器消费已分发的 `Plugins/OrionBrowser/Binaries/Win64/OrionBrowserHelper.exe`。该 exe 必须从全局 `*.exe` 和 `Plugins/**/Binaries/*` 忽略规则中单独白名单，并在 `.gitattributes` 中按 LFS 管理。

`.gitignore` 不能只写目录级 `!Plugins/OrionBrowser/Binaries/`、`!Plugins/OrionBrowser/Binaries/Win64/` 和 helper exe 白名单。目录级 `!` 只用于允许 Git 继续下钻，随后必须重新忽略目录内容，再只放开单个 helper：

```gitignore
!Plugins/OrionBrowser/Binaries/
Plugins/OrionBrowser/Binaries/*
!Plugins/OrionBrowser/Binaries/Win64/
Plugins/OrionBrowser/Binaries/Win64/*
!Plugins/OrionBrowser/Binaries/Win64/OrionBrowserHelper.exe
```

这样 `.pdb`、`.modules`、编辑器 DLL 和其他编译产物仍保持 ignored，只有 `OrionBrowserHelper.exe` 可提交。验证时用安装版引擎重新生成 project files，确认不再出现 Unique build environment 报错，再检查 helper exe 是否随插件 runtime staged。

### 启动后 CEF GPU process 连续崩溃

现象：Editor 或客户端启动一段时间后崩溃，`cef3.log` 连续出现 `GPU process exited unexpectedly: exit_code=777006`，最后出现 `FATAL: GPU process isn't usable. Goodbye.`；UE callstack 通常落在 `FOrionCEFBrowserApp::TickMessagePump()` 或 `CefDoMessageLoopWork()`。

原因：CEF browser 进程能加载 `libcef.dll`，但 `OrionBrowserHelper.exe` 是独立 Program 进程，启动时可能没有项目插件上下文。如果 `OrionCEF3Utils::GetPluginBaseDir()` 在 helper 进程中回退到 `FPaths::ProjectPluginsDir()`，就可能解析到错误插件根，导致 GPU、network service 等 CEF 子进程找不到 `ThirdParty/OrionCEF3/Runtime` 下的运行库并反复退出。

修复：在 `OrionCEF3Utils::GetPluginBaseDir()` 中优先识别当前可执行文件名是否为 `OrionBrowserHelper`；如果是，则从 `FPlatformProcess::ExecutablePath()` 的目录回推两级得到插件根，即 `Plugins/OrionBrowser/Binaries/Win64/OrionBrowserHelper.exe -> Plugins/OrionBrowser`。修复后重新构建 `OrionBrowserHelper`、Editor、Development/Shipping 客户端，并检查新的 `cef3.log` 不再包含 `GPU process isn't usable`、`exit_code=777006` 或连续 GPU process crash。

### 启动预热后 CEF 子进程缺 DLL 崩溃

现象：开启 `bPrewarmOnStartup=true` 或首次创建浏览器后，Editor/客户端在 `FOrionWebBrowserSingleton::Tick()`、`FOrionCEFBrowserApp::TickMessagePump()` 或 `CefDoMessageLoopWork()` 附近崩溃；`cef3.log` 连续出现 `GPU process exited unexpectedly: exit_code=-1073741515`、`Network service crashed or was terminated`，最后出现 `FATAL: GPU process isn't usable. Goodbye.`。

原因：`-1073741515` 对应 Windows `0xC0000135`，通常是子进程启动阶段缺少 DLL。`OrionBrowserHelper.exe` 位于 `Plugins/OrionBrowser/Binaries/Win64`，但 helper 的普通导入依赖可能位于父进程可执行目录，例如引擎或游戏 `Binaries/Win64` 下的 `tbbmalloc.dll`；CEF delay-load 依赖位于 `Plugins/OrionBrowser/ThirdParty/OrionCEF3/Runtime/Win64/<version>`。父进程只 `PushDllDirectory` 不会自动影响新 helper 进程的 Windows loader 搜索路径。

修复：在 Windows 的 `OrionCEF3Utils::LoadCEF3Modules()` 中，解析出 CEF runtime `DllPath` 后、调用 `CefInitialize` 前，把 `FPlatformProcess::BaseDir()` 和 CEF runtime `DllPath` 追加到当前进程 `PATH`。CEF 启动 helper、GPU、network service 等子进程时会继承这个环境变量，从而能解析 helper 普通导入和 CEF delay-load DLL。不要通过把 CEF runtime、`tbbmalloc.dll` 或其他引擎 DLL 复制到插件 `Binaries` 来规避，插件实体库仍应留在 `ThirdParty/OrionCEF3`。

验证：

```powershell
<EngineRoot>\Engine\Build\BatchFiles\Build.bat <EditorTarget> Win64 Development -Project="<ProjectRoot>\<ProjectName>.uproject" -WaitMutex -Module=OrionCEF3Utils
<EngineRoot>\Engine\Binaries\Win64\UnrealEditor.exe <ProjectRoot>\<ProjectName>.uproject -game -NoSplash -Unattended -NoSound -ExecCmds=quit
```

必须使用实际启动 Editor/客户端的同一个引擎构建插件模块。验证通过时，新的 `cef3.log` 不应再包含 `exit_code=-1073741515`、`GPU process isn't usable` 或连续 GPU/network service crash；UE 日志应能看到 `OrionCEF3Utils`、`OrionBrowser` 和 `OrionBrowserWidget` 模块正常加载。

### 打包后找不到 Chromium resources 或 locales

现象：运行打包版时日志报 `Chromium Resources information not found`、`Chromium Locales information not found`，或 CEF 初始化后页面空白。

原因：CEF 149 Windows minimal 包的 `resources.pak`、`chrome_*.pak`、`icudtl.dat` 和 `locales` 被导入到 runtime 根目录，但运行时代码仍指向旧的 `Resources` 子目录，或者 `OrionCEF3.Build.cs` 只 stage 了部分固定文件。

修复：Windows 下让 `CEF3_RESOURCES_DIR` 指向 `ThirdParty/OrionCEF3/Runtime/Win64/<version>`，让 `locales_dir_path` 指向该目录下的 `locales`；同时递归添加 runtime 目录全部文件到 RuntimeDependencies。

验证：打包后检查 staged 插件目录中存在 `libcef.dll`、`resources.pak`、`icudtl.dat`、`v8_context_snapshot.bin`、`vk_swiftshader_icd.json` 和 `locales/zh-CN.pak`。
