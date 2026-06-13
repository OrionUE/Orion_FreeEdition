# Splash 图片转换注意事项

## 本地工具选择

- 先检查 `magick` 和 `python`。本机可能没有 ImageMagick；没有 `magick` 时不要阻塞，优先使用 Python + Pillow。
- `Get-Command magick, python -ErrorAction SilentlyContinue` 可能因为其中一个命令不存在而返回非零退出码，即使输出里已经显示 Python 可用；判断时看输出内容，不要只看退出码。
- 当前项目环境已验证 Python 可用，Pillow 可打开 JPG 并导出 PNG/BMP。

## 裁剪规则

- 用户没有指定裁剪锚点时，默认居中裁剪。
- 先按目标宽高比裁掉多余区域，再缩放到最终像素尺寸，避免横向或纵向拉伸。
- BMP 输出使用 RGB，适合 Unreal 启动 Splash 配套文件。

## 项目 Splash 规则

- 正式启动图固定属于 `Content/Splash`，不是普通 UI 贴图。
- 固定文件名是 `Splash.png` / `Splash.bmp` 和 `EdSplash.png` / `EdSplash.bmp`。
- 如果 `Content/Splash` 已经有同名文件，除非用户明确要求替换，否则不要覆盖；可以先在源图同目录生成结果让用户确认。
- 如果用户要求直接替换正式启动图，先删除 `Content/Splash/Splash.uasset` 和 `Content/Splash/EdSplash.uasset`，再用同一张源图生成并覆盖四个 PNG/BMP。
- 替换正式启动图后，必须提醒用户打开 Unreal Editor，把 `Splash` 和 `EdSplash` 重新导入/保存一次，让 `.uasset` 文件重新生成并替换。

## PowerShell 环境细节

- 这个环境中 `New-Item -LiteralPath` 可能不可用；创建目录时改用 `New-Item -Path ... -ItemType Directory -Force`。
- `quick_validate.py` 在 Windows 默认 GBK 代码页下读取中文 `SKILL.md` 可能报 `UnicodeDecodeError`；运行前设置 `$env:PYTHONUTF8='1'`。
