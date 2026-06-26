# Build 平台应用图标规则

## 目标范围

本流程只处理 Unreal 项目根目录下的 `Build/<Platform>` 应用图标。不要把它和以下资源混用：

- `Content/Splash` 的编辑器/游戏启动 Splash。
- `Content/UI` 或 GameFeature `Content/UI` 下的运行时图标。
- `Content/Movies` 的启动视频或加载屏视频。

## 默认输出表

| 平台 | 文件 | 输出格式 | 尺寸 |
| --- | --- | --- | --- |
| Windows | `Build/Windows/Application.ico` | ICO | 16、32、48、64、128、256 |
| Mac | `Build/Mac/Application.icns` | ICNS | 16@2x、32@2x、128、128@2x、256、256@2x、512、512@2x |
| Linux | `Build/Linux/Application.png` | PNG | 1024x1024 |
| Android | `Build/Android/res/drawable-ldpi/icon.png` | PNG | 36x36 |
| Android | `Build/Android/res/drawable-mdpi/icon.png` | PNG | 48x48 |
| Android | `Build/Android/res/drawable-hdpi/icon.png` | PNG | 72x72 |
| Android | `Build/Android/res/drawable-xhdpi/icon.png` | PNG | 96x96 |
| Android | `Build/Android/res/drawable-xxhdpi/logo8_small.png` | PNG | 144x144 |
| Android | `Build/Android/res/drawable-xxxhdpi/icon.png` | PNG | 192x192 |
| Android | `Build/Android/res/drawable/icon.png` | PNG | 192x192 |
| Android | `Build/Android/res/drawable/icon_bg.png` | PNG | 108x108 |

Mac ICNS 用 Pillow 保存时会把 1024x1024 表示为 `512x512@2x`；校验时以 ICNS `info["sizes"]` 中的 scale 条目为准。

## 转换规则

- 源图优先使用高分辨率 PNG，建议至少 1024x1024。
- 输出全部是正方形。源图不是正方形时，等比缩放后居中放入透明正方形画布；不要裁切主体，也不要拉伸变形。
- 缩放使用 Lanczos 重采样。
- 覆盖前先确认 `Build` 下现有文件集。若项目已有不同 Android 文件名或 adaptive icon 前景/背景拆分，以当前 XML 引用为准。
- 不主动改 `Build/Android/res/drawable-anydpi-v26/icon.xml`。如果 XML 只有 `<background android:drawable="@drawable/icon_bg" />`，则 `icon_bg.png` 就是 adaptive icon 实际引用图。
- 如果 XML 同时引用 foreground 和 background，分别替换被引用的 PNG，并保留 XML 结构。

## 验证

生成后至少检查：

1. `Application.ico` 的 sizes 是 `16, 32, 48, 64, 128, 256`。
2. `Application.icns` 可被 Pillow 打开，最大显示尺寸是 `1024x1024`，并包含 16 到 512 的 1x/2x 条目。
3. 每个 Android PNG 和 Linux PNG 尺寸与表格一致。
4. 输出文件能被重新打开后再关闭；Windows 上验证 ICO/ICNS 后要显式关闭句柄，避免后续覆盖、删除或清理临时目录失败。

## 常见问题

### 本机没有 ImageMagick

现象：执行 `magick -version` 提示命令不存在。

处理：使用本 Skill 脚本的 Python/Pillow 路线，不依赖 ImageMagick。

### PowerShell 不支持 bash heredoc

现象：在 PowerShell 中运行 `python - <<'PY'` 报 `Missing file specification after redirection operator`。

处理：用 PowerShell here-string 管道执行 Python，或直接运行本 Skill 的 `.ps1` 脚本。

### 参数默认值里解析 `$PSScriptRoot` 失败

现象：在 `.ps1` 的 `param(...)` 默认值中调用 `Join-Path $PSScriptRoot ...`，运行时报 `Cannot bind argument to parameter 'Path' because it is an empty string`。

原因：某些 PowerShell 执行路径下，参数绑定阶段 `$PSScriptRoot` 还不能作为默认值可靠使用。

处理：参数默认值只保留空字符串，在脚本主体进入后再用 `$PSScriptRoot` 推导项目根。

### ICNS 文件被占用

现象：临时目录清理或覆盖 `Application.icns` 时出现 `WinError 32`。

原因：验证时打开的 `Image` 对象没有关闭。

处理：所有 `Image.open(...)` 使用 context manager 或显式 `close()`，验证完成后再清理或覆盖。
