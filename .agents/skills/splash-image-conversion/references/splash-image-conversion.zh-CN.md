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
- 替换正式启动图后，优先运行 UE Python 导入脚本，把 `Splash.png` 与 `EdSplash.png` 导入为 `/Game/Splash/Splash` 和 `/Game/Splash/EdSplash`，保存 `.uasset`，并把 Texture 的 `LODGroup` 设置为 `TEXTUREGROUP_UI`。
- 如果 UE 命令行或 Editor 自动化不可用，必须提醒用户打开 Unreal Editor，把 `Splash` 和 `EdSplash` 重新导入/保存一次，并在 Texture 详情里把 Texture Group 设为 `UI`。

## UE 导入步骤

1. 先完成 PNG/BMP 四件套替换，确认 `Content/Splash/Splash.png` 和 `Content/Splash/EdSplash.png` 存在。
2. 使用当前项目对应的 `UnrealEditor-Cmd.exe` 执行：

```powershell
& <UnrealEditor-Cmd.exe> <Project.uproject> -run=PythonScript -Script=".\.agents\skills\splash-image-conversion\scripts\import_splash_to_ue.py" -unattended -nop4 -nosplash -NullRHI
```

3. 导入脚本只导入 PNG，不导入 BMP；BMP 作为启动图源文件继续保留在 `Content/Splash`。
4. 脚本会覆盖并保存 `/Game/Splash/Splash` 与 `/Game/Splash/EdSplash` 两个 Texture2D 资产，验证 `LODGroup=TEXTUREGROUP_UI`。
5. 完成后检查 `Content/Splash/Splash.uasset` 和 `Content/Splash/EdSplash.uasset` 已落盘。

## PowerShell 环境细节

- 这个环境中 `New-Item -LiteralPath` 可能不可用；创建目录时改用 `New-Item -Path ... -ItemType Directory -Force`。
- `quick_validate.py` 在 Windows 默认 GBK 代码页下读取中文 `SKILL.md` 可能报 `UnicodeDecodeError`；运行前设置 `$env:PYTHONUTF8='1'`。
- PowerShell 不支持 Bash 风格的 `python - <<'PY'` heredoc；需要临时执行多行 Python 时，优先用 PowerShell here-string 赋值给 `$code`，再执行 `python -c $code`，避免复杂内联引号被截断。
