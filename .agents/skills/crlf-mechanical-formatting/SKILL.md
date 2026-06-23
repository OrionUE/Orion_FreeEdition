---
name: crlf-mechanical-formatting
description: "Use when bulk-formatting or mechanically rewriting Windows text/code files in this repo with PowerShell, especially to preserve CRLF line endings, normalize Tab indentation, avoid LF-only output, protect copyright header blocks, and validate touched Unreal plugin/source files after formatting."
---

# CRLF Mechanical Formatting

用于批量格式化或机械重写 Windows 文本文件时，可靠保持 CRLF、Tab 缩进和项目版权头格式。特别适合处理 `.h`、`.cpp`、`.Build.cs`、`.Target.cs`、`.uplugin`、`.uproject`、`.xml`、`.ps1` 这类项目源码文本。

## 工作流

1. 修改代码文件前先读取 `../orion-code-style/SKILL.md`；涉及 Unreal 领域时继续读取对应领域 Skill。
2. 明确格式化范围，只包含项目自有源码；排除 `ThirdParty`、SDK、生成目录和用户未要求的文件。
3. 批量重写时优先使用 `scripts/normalize-windows-text-format.ps1`，不要依赖 `Set-Content`、默认编码或隐式换行。
4. 脚本写文件必须通过 UTF-8 bytes 和显式 CRLF 字符串完成，避免产生 LF-only 文件。
5. 代码文件格式化后运行 `../orion-code-style/scripts/check-code-style.ps1 -Path <touched-code-files>`。
6. 对 `.uplugin`、`.uproject`、`.xml` 等脚本未覆盖的文本，再检查 LF-only、行首空格缩进和 Tab+空格混合缩进。

## 路由

- 格式化 Unreal C++、Build.cs、Target.cs 或插件源码时，先配合 `../orion-code-style/SKILL.md`。
- 批量处理 Steam、语音、音频、输入、UMG、GameFeature 等领域代码时，继续读取对应领域 Skill，只用本 Skill 处理文本重写和 CRLF 可靠性。
- 创建或更新本 Skill、脚本或参考文档时，配合系统 `skill-creator` 和 `../orion-framework-skill-authoring/SKILL.md`。

## Reference

读取 `references/crlf-mechanical-formatting.zh-CN.md` 获取 PowerShell 安全写回模式、常见失败、验证命令和脚本参数说明。
