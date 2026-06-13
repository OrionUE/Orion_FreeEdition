# Unreal Movie / Bink / Media Framework 手册

## 使用边界

本手册处理视频文件放置、启动视频、加载屏视频、Bink `.bk2`、Media Framework 运行时播放和打包 staging。它不是过场编排手册：Level Sequence、Camera Cut、Animation Sequence、Control Rig 等资产仍按 `Content/Cinematics` 和对应动画/过场规则处理。

处理 Movie 任务时先读当前工程真实文件：

1. `.uproject`：确认 `BinkMedia`、平台 Media Player 插件和相关编辑器插件是否启用。
2. `Config/DefaultGame.ini`：确认 `MoviePlayerSettings`、`ProjectPackagingSettings` 和打包 movie 规则。
3. 目标平台配置：确认平台是否覆盖 movie、packaging 或 media 插件行为。
4. `Content/Movies`：只检查任务相关子目录和文件，不要为了泛化任务深扫整个 `Content`。
5. 引擎源码：需要确认 API 行为时查 `MoviePlayer`、`BinkMedia`、`MediaAssets`、`MediaUtils` 和目标平台 Media 插件。

## 文件位置与格式

正式视频源文件和 runtime movie 文件统一放在：

```text
Content/Movies
```

推荐子目录：

```text
Content/Movies/StartUp
Content/Movies/Loading
Content/Movies/UI
Content/Movies/Cinematics
```

含义：

- `StartUp`：启动 logo、开场警告、品牌或发行信息视频。
- `Loading`：加载屏、关卡切换、等待流程视频。
- `UI`：菜单背景、UI 面板、可循环界面视频。
- `Cinematics`：供运行时播放器读取的视频源文件；真正的 Level Sequence 和镜头编排资产仍在 `Content/Cinematics`。

命名规则：

- 文件名使用 ASCII、PascalCase、数字和下划线；不要使用空格、中文、Unicode、连字符或符号。
- 原始视频源可以是 `.mp4`、`.mov` 等，但发布、启动视频和加载屏视频优先使用 `.bk2`。
- `.bk2` 文件由用户使用当前引擎发行版或 BinkMedia 插件附带的 Bink 转换工具从源视频转换。工具路径随引擎安装和发行方式变化，不要在 Skill 或配置里写死本机路径；需要时在当前引擎安装目录或 BinkMedia 插件工具目录中查找。
- 不需要随包发布的原始 `.mp4`、`.mov` 可以留在源素材管理系统；如果放进项目，也必须清楚它是否会被 cook/stage。

## 选择播放方案

### 启动视频和加载屏视频

优先使用 MoviePlayer + Bink `.bk2`。

关键类型：

- `UMoviePlayerSettings`
- `FLoadingScreenAttributes`
- `IGameMoviePlayer`
- `IMovieStreamer`

`UMoviePlayerSettings` 属于 `Game` 配置域，常见 section：

```ini
[/Script/MoviePlayer.MoviePlayerSettings]
bWaitForMoviesToComplete=True
bMoviesAreSkippable=True
+StartupMovies=StartUp/Logo
```

规则：

- `StartupMovies` 和 `FLoadingScreenAttributes.MoviePaths` 都是相对 `Content/Movies` 的路径。
- 使用 Bink startup movie 时，路径通常不要写 `.bk2` 扩展名；Bink movie streamer 会按 movie name 拼接 `.bk2`。
- 示例：文件是 `Content/Movies/StartUp/Logo.bk2`，配置写 `StartUp/Logo`。
- 如果需要强制看完启动视频，使用 `bWaitForMoviesToComplete=True` 并关闭或控制可跳过逻辑。
- loading screen 需要和项目 loading screen 插件、UI policy、map travel 流程一起验证，不要只改配置。

典型 C++ 形态：

```cpp
FLoadingScreenAttributes Attributes;
Attributes.MoviePaths = { TEXT("Loading/TravelLoop") };
Attributes.PlaybackType = MT_LoadingLoop;
Attributes.bMoviesAreSkippable = false;
GetMoviePlayer()->SetupLoadingScreen(Attributes);
```

## Bink Media 运行时播放

Bink 适合可控的跨平台视频播放、启动视频、循环 UI 视频和高码率视频素材。

关键类型：

- `UBinkMediaPlayer`
- `UBinkMediaTexture`
- `UBinkMoviePlayerSettings`

常用设置：

- `URL`：运行时 Bink 文件路径。相对路径通常写成 `Movies/<Folder>/<Name>.bk2`，以 `Content` 为根；避免写本机绝对路径。
- `Looping`：是否循环。
- `StartImmediately`：打开后是否自动播放。
- `DelayedOpen`：是否延迟打开。
- `BinkBufferMode`：`Stream`、`PreloadAll`、`StreamUntilResident`。
- `BinkSoundTrack`：选择无声、普通、语言覆盖、5.1 或 7.1 等轨道模式。
- `BinkDrawStyle` / layer depth：决定 Bink 直接绘制或参与材质/UI 的方式，实际行为以当前插件版本为准。

常见实现：

1. 创建 Bink Media Player 资产。
2. 创建 Bink Media Texture，并绑定到 Bink Media Player。
3. 用材质、UMG brush 或直接绘制方式显示 texture。
4. 蓝图或 C++ 调用 `OpenUrl`、`Play`、`Pause`、`Stop`、`Seek`、`SetLooping`、`SetRate`、`SetVolume`。
5. 监听 `OnMediaOpened`、`OnMediaReachedEnd`、`OnMediaOpenFailed` 或 Bink 对应事件，处理失败和循环逻辑。

调试：

- 控制台命令 `bink.List` 可用于查看当前 Bink Media Player 状态。
- 失败时先查 URL 是否为空、文件是否实际 staged、是否错误写成绝对路径、是否把 startup path 写成了带 `.bk2` 后缀的形式。

字幕：

- Bink 插件可能按同名视频和语言后缀寻找 `.srt` 文件。是否接入项目字幕系统，需要继续读取字幕/UI 相关 Skill 和真实源码。

## Media Framework 播放普通视频

如果任务不是启动/加载屏视频，也不要求 Bink，可以使用 UE Media Framework。

关键类型：

- `UFileMediaSource`
- `UMediaPlayer`
- `UMediaTexture`
- `UMediaSoundComponent`

规则：

- 普通文件源仍应放在 `Content/Movies`。
- `UFileMediaSource` 支持把项目 `Content` 内的完整路径折叠为 `./Movies/...` 形式；资产里不要保留本机绝对路径。
- `UMediaPlayer` 打开 `UFileMediaSource` 后，用 `UMediaTexture` 渲染画面，用 `UMediaSoundComponent` 播放音频。
- `.mp4`、`.mov` 等格式依赖目标平台 Media 插件，例如桌面平台可能依赖 WMF/AVF 等插件；不要假设所有平台行为一致。
- 需要发布稳定性、启动视频或加载屏时，优先转换为 `.bk2`。

## 打包与 Staging

`UProjectPackagingSettings` 中 Movie 相关字段会影响最终包：

- `bSkipMovies=False`：非 dedicated server 构建通常会 stage `Content/Movies` 下非 `.uasset`、非 `.umap` 的 movie 文件。
- `bSkipMovies=True`：默认跳过 movie，只 stage `UFSMovies` 和 `NonUFSMovies` 中明确列出的 movie。
- `UFSMovies`：将指定 movie 作为 UFS 内容进入 pak/io store。
- `NonUFSMovies`：将指定 movie 作为 loose/non-UFS 文件复制到 staged build。
- `MovieDenyList`：用于从自动 movie staging 中排除特定文件。
- Dedicated Server 目标通常不 stage movie；不要把 server 运行逻辑依赖视频文件存在。

排查 packaged build 缺视频：

1. 确认文件在 `Content/Movies` 下，扩展名和大小正确。
2. 确认 `bSkipMovies` 是否为 false；如果为 true，检查 `UFSMovies` 或 `NonUFSMovies` 是否包含目标 movie。
3. 检查 staging 或 UAT 日志中是否出现 movie 文件。
4. 确认配置里 startup movie 没有把 Bink 路径写成 `Name.bk2` 导致查找 `Name.bk2.bk2`。
5. 确认当前目标不是 Dedicated Server。
6. 如果使用普通 Media Framework，确认平台 media 插件已启用并随目标平台可用。

## 常见错误

### 把视频放进 UI 或 Cinematics

现象：`.mp4`、`.mov`、`.bk2` 放到 `Content/UI` 或 `Content/Cinematics`。

修复：视频文件移动到 `Content/Movies`；UI Widget 仍在 `Content/UI`，Level Sequence 和镜头资产仍在 `Content/Cinematics`。

### StartupMovies 写了扩展名

现象：配置写 `StartUp/Logo.bk2`，启动时 Bink 找不到文件。

修复：Bink startup movie 通常写 `StartUp/Logo`；文件本体是 `Content/Movies/StartUp/Logo.bk2`。

### 发布包里没有视频

现象：编辑器里能播，打包后黑屏或跳过。

修复：检查 `bSkipMovies`、`UFSMovies`、`NonUFSMovies`、`MovieDenyList`、目标平台 staging 日志和文件是否实际进入包或 staged 目录。

### 资产保存了本机绝对路径

现象：其他机器或 packaged build 找不到视频。

修复：`UFileMediaSource` 使用 `./Movies/...`，Bink runtime URL 使用 `Movies/...`；不要保存盘符、用户名或引擎安装路径。

### 直接发布 mp4/mov 当作启动视频

现象：某些平台无法播放，或加载屏/启动屏行为不稳定。

修复：将源视频用当前引擎附带的 Bink 转换工具转为 `.bk2`，并使用 MoviePlayer/Bink 流程。

## 验证清单

- `.uproject` 中相关 Media/Bink 插件状态已确认。
- 视频文件放在 `Content/Movies`，命名无空格、无中文、无机器路径。
- `.bk2` 已由当前引擎的 Bink 转换工具生成。
- startup/loading movie 路径相对 `Content/Movies`，Bink 配置未写多余 `.bk2` 扩展名。
- runtime Bink URL 或 `UFileMediaSource` 路径为相对路径。
- 打包配置中的 `bSkipMovies`、`UFSMovies`、`NonUFSMovies` 和 `MovieDenyList` 已确认。
- packaged build 或 staged 目录中已验证目标视频文件存在。
