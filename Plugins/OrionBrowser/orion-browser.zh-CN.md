# Orion浏览器插件使用说明

## 功能入口

- 插件入口：`Plugins/OrionBrowser/OrionBrowser.uplugin`。
- 浏览器运行时模块：`OrionBrowser`，负责 CEF 初始化、子进程、URL/HTML 加载、JS 执行和消息循环。
- 蓝图控件模块：`OrionBrowserWidget`，提供 `UOrionBrowserWidget`。
- GameUI 兼容入口：`UGameUIWebBrowser`，旧 HTML 弹窗蓝图可以继续使用。
- CEF 子进程：`OrionBrowserHelper`，打包时必须 staged 到插件 `Binaries/Win64`。
- C++ 预热入口：`IOrionBrowserModule::Get().Prewarm()`，只初始化浏览器运行时，不创建可见网页窗口。

## 可创建的蓝图或数据资产

- 普通网页控件：创建 Widget Blueprint，在设计器中添加 `Orion Browser` 控件。
- GameUI HTML 弹窗：创建 `UUI_HtmlPopupContent` 子类 Widget Blueprint，并放置名为 `WebBrowser_Html` 的 `UGameUIWebBrowser` 或 `UOrionBrowserWidget`。
- 弹窗数据：继续使用 GameUI popup definition / descriptor，把内容类型设置为 HTML URL 或 HTML String。

## 关键属性

- `InitialURL`：控件创建时默认打开的 URL。
- `bSupportsTransparency`：网页背景是否支持透明。
- `BrowserFrameRate`：浏览器离屏渲染帧率。`0` 表示不使用控件级帧率上限，交给 `[OrionBrowser]` 的 `UnrestrictedFrameRateTarget` 驱动；默认值为 `0`。
- `UOrionBrowserWidget.CursorPolicy`：`PageControlled` 表示网页可以改变鼠标形态，`GameControlled` 表示网页只处理输入但不能改变项目鼠标光标。
- `UGameUIWebBrowser.CursorPolicy`：HTML 弹窗默认使用 `ForceDefault`，内部会把 OrionBrowser 设置为 `GameControlled`，同时注入默认 CSS cursor 作为页面内兜底。

## 蓝图 API

- `LoadURL`：加载远程或本地 URL。
- `LoadString`：加载 HTML 字符串，第二个参数填写 base URL。
- `Reload` / `StopLoad` / `GoBack` / `GoForward`：浏览控制。
- `ExecuteJavascript`：执行页面脚本。
- `GetUrl` / `GetTitle`：读取当前 URL 和标题。

## 蓝图事件

- `OnUrlChanged`
- `OnTitleChanged`
- `OnLoadStarted`
- `OnLoadCompleted`
- `OnLoadError`
- `OnBeforePopup`
- `OnConsoleMessage`

## 配置入口

配置写在 `DefaultEngine.ini` 或 Steam CustomConfig 的 `[OrionBrowser]` 段。旧 `[Browser]` 段仍作为兼容回退。

```ini
[OrionBrowser]
bEnabled=true
bPrewarmOnStartup=true
StartupPrewarmDelaySeconds=0.0
StartupPrewarmMaxWaitSeconds=30.0
bUseUnrestrictedFrameRate=true
UnrestrictedFrameRateTarget=1000
bForceMessageLoop=true
MinMessageLoopHertz=1
MaxForcedMessageLoopHertz=0
bAllowFileDialogsInClientBuilds=false
CloseWaitTimeout=0.1
CloseWaitTimeoutAppExit=0.1
```

`MaxForcedMessageLoopHertz=0` 表示 message pump 不使用固定 Hz 上限，而是映射到 `UnrestrictedFrameRateTarget`；实际刷新仍受游戏线程、Slate、页面复杂度和 GPU 能力限制。

`bPrewarmOnStartup=true` 表示引擎初始化完成后自动预热 CEF。预热发生在 `OnFEngineLoopInitComplete` 后的下一帧 Ticker，并等待 `GDynamicRHI` 可用；这样可以把 DLL 加载、`CefInitialize`、helper 子进程和默认材质同步加载成本前移到启动加载阶段，避免第一次打开网页时集中卡顿。`StartupPrewarmDelaySeconds` 可以延后预热，`StartupPrewarmMaxWaitSeconds=0` 表示一直等待运行时条件满足。

## 浏览器内核导入

项目要求 H.264/AAC，因此不要把官方标准 CEF 包当作最终运行库。

1. 使用 `Scripts/Resolve-OrionCEFVersion.ps1` 查询当前锁定的 CEF 149 Win64 包信息。
2. 使用 `Scripts/Build-OrionCEF.ps1` 自建启用 `proprietary_codecs=true` 和 `ffmpeg_branding=Chrome` 的 CEF 包，或准备项目已批准的同版本 codec-enabled 分发包。
3. 使用 `Scripts/Import-OrionCEF.ps1 -Source <CEF分发包目录> -ProprietaryCodecsApproved` 导入。
4. 导入后 CEF 实体库位于 `ThirdParty/OrionCEF3/cef_binary_<CEF版本>_windows64`，运行库位于 `ThirdParty/OrionCEF3/Runtime/Win64/<CEF版本>`；`Source/ThirdParty/OrionCEF3` 只保留 External 模块声明。

## 打包要求

- Win64 非 Server 构建会启用 `OrionBrowser` 和 `OrionBrowserWidget`。
- Dedicated Server 不链接浏览器模块。
- 打包前先构建 `OrionBrowserHelper`，确保 `Plugins/OrionBrowser/Binaries/Win64/OrionBrowserHelper.exe` 存在。
- Steam 包体中必须包含 `OrionBrowserHelper.exe`、`libcef.dll`、`resources.pak`、`icudtl.dat`、`v8_context_snapshot.bin`、`vk_swiftshader_icd.json` 和 `locales/*.pak`。
- 不要把 CEF runtime、`tbbmalloc.dll` 或引擎 DLL 复制到插件 `Binaries` 目录。`OrionCEF3Utils` 会在初始化时把父进程 `Binaries/Win64` 和插件 CEF runtime 目录追加到 `PATH`，让 helper、GPU、network service 子进程继承正确 DLL 搜索路径。

## 源码版和安装版引擎兼容

- `OrionBrowserHelper.Target.cs` 是项目本地 CEF 子进程 Program target。它显式使用 `TargetBuildEnvironment.Shared`，避免安装版引擎生成工程时报 `Targets with a unique build environment cannot be built with an installed engine`。
- 源码版引擎或 CI 机器负责构建 `OrionBrowserHelper.exe`。
- 只使用安装版引擎的团队机器应直接消费已提交或已分发的 `Plugins/OrionBrowser/Binaries/Win64/OrionBrowserHelper.exe`，不需要本机自建 helper。该文件在 `.gitignore` 中有专用白名单，并在 `.gitattributes` 中按 LFS 管理。
- `.gitignore` 只允许放开 `OrionBrowserHelper.exe` 单文件：先 `!` 放开 `Plugins/OrionBrowser/Binaries/` 和 `Win64/` 供 Git 下钻，再立刻重新忽略 `Plugins/OrionBrowser/Binaries/*` 与 `Plugins/OrionBrowser/Binaries/Win64/*`，最后只白名单 `Plugins/OrionBrowser/Binaries/Win64/OrionBrowserHelper.exe`。不要放开整个 `Binaries` 或 `Win64` 目录，避免 `.pdb`、`.modules`、编辑器 DLL 等编译产物进入 Git。
- 如果安装版机器生成工程仍失败，先确认 `Source/OrionBrowserHelper.Target.cs` 中保留 `BuildEnvironment = TargetBuildEnvironment.Shared;`。

## 验证步骤

1. 编译 `OrionBrowserHelper`。
2. 编译 Editor、Steam Game 和 Server 目标，确认 Server 不链接 CEF。
3. PIE 或 Standalone 加载本地 HTML 页面，验证 CSS、JS、输入、弹窗拦截和控制台消息。
4. 加载 H.264/AAC MP4 测试页，验证视频画面、声音、暂停、seek 和循环。
5. HTML 页面里放一个按钮或链接，点击后确认项目光标没有变成 Hand/GrabHand，也没有额外抓手图标。
6. 启动日志应出现 `Prewarming Orion CEF browser runtime`，表示 CEF 已在首次创建网页前完成预热。
7. 检查新的 `Saved/Logs/cef3.log` 不包含 `exit_code=-1073741515`、`GPU process isn't usable` 或连续 GPU/network service crash。
8. 打包 Steam Development 和 Shipping，检查 staged CEF runtime 和 helper。

## 常见扩展点

- 需要统一网页请求头时，在 OrionBrowser runtime 的 resource load delegate 层扩展。
- 需要网页调用 UE 对象时，使用底层 `BindUObject` 能力扩展包装 API。
- 需要不同光标策略时，优先配置 `UOrionBrowserWidget.CursorPolicy` 或 `UGameUIWebBrowser.CursorPolicy`；不要在具体弹窗 Definition 或启动 Flow 里处理鼠标形态。
- 需要升级 CEF 版本时，同步版本常量、导入脚本、ThirdParty 目录和打包 staged 清单。
