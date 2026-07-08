# Orion浏览器插件使用说明

## 功能入口

- 插件入口：`Plugins/OrionBrowser/OrionBrowser.uplugin`。
- C++/蓝图控件：`UOrionBrowserWidget`。
- GameUI 兼容控件：`UGameUIWebBrowser`，已有 HTML 弹窗蓝图可以继续使用这个类。
- HTML 弹窗内容入口：`UUI_HtmlPopupContent`，会优先使用 OrionBrowser 运行时加载 URL 或 HTML 字符串。

## 可创建的蓝图或数据资产

- 普通网页控件：创建 Widget Blueprint，在设计器中添加 `Orion Browser` 控件。
- GameUI HTML 弹窗：创建 `UUI_HtmlPopupContent` 子类 Widget Blueprint，并放置名为 `WebBrowser_Html` 的 `UGameUIWebBrowser` 或 `UOrionBrowserWidget`。
- 弹窗数据：继续使用已有 popup definition / descriptor，把内容类型设置为 HTML URL 或 HTML String。

## 关键属性

- `InitialURL`：控件创建时默认打开的 URL。
- `bSupportsTransparency`：网页背景是否支持透明。
- `BrowserFrameRate`：浏览器离屏渲染帧率。`0` 表示不使用控件级帧率上限，交给 `[OrionBrowser]` 的 `UnrestrictedFrameRateTarget` 驱动；默认值为 `0`。
- `UOrionBrowserWidget.CursorPolicy`：`PageControlled` 表示网页可以改变鼠标形态，`GameControlled` 表示网页只处理输入但不能改变项目鼠标光标。
- `UGameUIWebBrowser.CursorPolicy`：HTML 弹窗默认使用 `ForceDefault`，内部会把 OrionBrowser 设置为 `GameControlled`，同时注入默认 CSS cursor 作为页面内兜底。

## 配置入口

配置写在 `[OrionBrowser]` 段；旧 `[Browser]` 段仍作为兼容回退。

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
```

`MaxForcedMessageLoopHertz=0` 表示 message pump 不使用固定 Hz 上限，而是映射到 `UnrestrictedFrameRateTarget`；实际刷新仍受游戏线程、Slate、页面复杂度和 GPU 能力限制。

`bPrewarmOnStartup=true` 表示启动时自动初始化 CEF Singleton，但不创建可见网页窗口。预热会在引擎初始化完成后的下一帧执行，并等待 `GDynamicRHI` 可用；这样首次调用 `LoadURL` 或创建浏览器控件时不会再承担完整的 CEF 初始化成本。

## 浏览器内核导入

项目要求 H.264/AAC，因此不要把官方标准 CEF 包当作最终运行库。

1. 使用 `Scripts/Resolve-OrionCEFVersion.ps1` 查询当前锁定的 CEF 149 Win64 包信息。
2. 使用 `Scripts/Build-OrionCEF.ps1` 自建启用 `proprietary_codecs=true` 和 `ffmpeg_branding=Chrome` 的 CEF 包，或准备项目已批准的同版本 codec-enabled 分发包。
3. 使用 `Scripts/Import-OrionCEF.ps1 -Source <CEF分发包目录> -ProprietaryCodecsApproved` 导入。
4. 导入后 CEF 实体库位于 `ThirdParty/OrionCEF3/cef_binary_<CEF版本>_windows64`，运行库位于 `ThirdParty/OrionCEF3/Runtime/Win64/<CEF版本>`；`Source/ThirdParty/OrionCEF3` 只保留 External 模块声明。

## 运行时触发方式

- 蓝图中调用 `LoadURL` 加载远程页面。
- 蓝图中调用 `LoadString` 加载 HTML 字符串，第二个参数填写 base URL。
- 调用 `ExecuteJavascript` 执行页面脚本。
- 监听 `OnLoadStarted`、`OnLoadCompleted`、`OnLoadError`、`OnUrlChanged`、`OnTitleChanged`、`OnBeforePopup`、`OnConsoleMessage`。
- C++ 需要手动预热时调用 `IOrionBrowserModule::Get().Prewarm()`；这不依赖具体 Widget 或弹窗。

## 验证步骤

1. 编译 `OrionBrowserHelper`。
2. 编译 Editor 或 Game 目标，确认 `OrionBrowser`、`OrionBrowserWidget`、`GameUI` 都通过。
3. 启动日志应出现 `Prewarming Orion CEF browser runtime`，表示 CEF 已在首次创建网页前完成预热。
4. 在 PIE 或 Standalone 中加载本地 HTML 页面，验证 CSS、JS、输入、弹窗拦截和控制台消息。
5. HTML 页面里放一个按钮或链接，点击后确认项目光标没有变成 Hand/GrabHand，也没有额外抓手图标。
6. 加载 H.264/AAC MP4 测试页，验证视频画面、声音、暂停、seek 和循环。
7. 打包 Steam Win64 后检查 `OrionBrowserHelper.exe`、`libcef.dll`、`resources.pak`、`icudtl.dat`、`v8_context_snapshot.bin`、`vk_swiftshader_icd.json` 和 `locales/*.pak` 是否 staged。

## 常见扩展点

- 需要统一网页请求头时，在 OrionBrowser runtime 的 resource load delegate 层扩展。
- 需要网页调用 UE 对象时，使用底层 `BindUObject` 能力扩展包装 API。
- 需要不同光标策略时，优先配置 `UOrionBrowserWidget.CursorPolicy` 或 `UGameUIWebBrowser.CursorPolicy`；不要在具体弹窗 Definition 或启动 Flow 里处理鼠标形态。
- 需要非 Win64 平台时，先扩展 `OrionCEF3.Build.cs`、运行库导入脚本和 helper 打包路径。
