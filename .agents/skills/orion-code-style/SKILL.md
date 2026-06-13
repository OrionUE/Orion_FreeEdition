---
name: orion-code-style
description: "Use when editing, creating, refactoring, formatting, especially Unreal C++ .h .cpp, ModuleRules .Build.cs, TargetRules .Target.cs, comments, includes, lambdas, naming, copyright headers, custom copyright header config, author/date header fields, CRLF, and Tab indentation."
---

# Orion Code Style

Use this skill for all code creation, refactoring, and formatting in this project. Before touching `.h`, `.cpp`, `.Build.cs`, `.Target.cs`, or other code files, read the detailed Simplified Chinese reference:

`references/orion-code-style.zh-CN.md`

Core rules:

- Use CRLF for Windows text code files.
- Use Tab indentation for all code files. Do not use spaces for indentation, including C++, `.Build.cs`, and `.Target.cs`.
- Generate file copyright headers from `config/copyright-header.json` when it exists; missing or empty `CopyrightNotice` falls back to `Config/DefaultGame.ini` `CopyrightNotice=`.
- Only add `Author`, `Date`, `Website`, or other custom header lines when the header config template explicitly requests them; do not add ad hoc author lines.
- Match `Source/GameCore` style for naming, spacing, comments, includes, lambdas, long-call wrapping, and alignment.
- For existing historical files, format only newly added or touched code unless the user explicitly asks for full-file formatting.

Optional validation:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .agents\skills\orion-code-style\scripts\check-code-style.ps1 -Path Source\GameCore\Public\System\CoreAssetManager.h
```

## 路由

- 修改或生成任何代码文件前，先使用本 Skill；改完后对 touched code files 运行 `scripts/check-code-style.ps1`。
- 批量机械格式化、重写 CRLF、修复 LF-only 或处理 Tab/空格混合缩进时，配合 `../crlf-mechanical-formatting/SKILL.md`。
- 修改本 Skill、校验脚本、版权头配置或格式规范时，配合 `../ue-framework-skill-authoring/SKILL.md` 和系统 `skill-creator`。
- 创建蓝图、UMG、GameFeature、GAS、输入或其他领域代码时，先按本 Skill 处理代码格式，再读取对应领域 Skill。
