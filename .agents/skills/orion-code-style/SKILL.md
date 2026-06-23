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
- For project modules, `PublicDependencyModuleNames` must only contain `"Core"`, `"CoreUObject"`, and `"Engine"` unless the user explicitly authorizes otherwise. Put all other dependencies in `PrivateDependencyModuleNames`, and do not delete or rewrite existing business logic just to satisfy dependency placement.
- Do not add `#include "CoreMinimal.h"` as a default template include. Include it only when the touched file already depends on that style or compilation proves it is needed.
- Separate top-level code sections with a blank line, including copyright header, pragma, include block, forward declarations, and class/struct declarations.
- In Unreal headers, place the `.generated.h` include after all other includes, separated from the regular include block by a blank line; do not put any include after `.generated.h`.
- Treat installed Unreal Engine code as read-only. Do not edit, patch, instrument, format, chmod/attrib, or otherwise modify files under an installed engine root; only read them for API/reference lookup. If engine-level diagnostics seem necessary, stop and ask for an explicit source-engine workspace or another project-local approach.
- Only generate the configured copyright header for code files newly created by this task. Existing code files are not header-fill targets unless the user explicitly asks; if an existing code file already has any copyright header, keep it unchanged even when it differs from the current template.
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
- 修改本 Skill、校验脚本、版权头配置或格式规范时，配合 `../orion-framework-skill-authoring/SKILL.md` 和系统 `skill-creator`。
- 创建蓝图、UMG、GameFeature、GAS、输入或其他领域代码时，先按本 Skill 处理代码格式，再读取对应领域 Skill。
