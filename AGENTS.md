# AGENTS.md instructions

## 智能处理

1. 每次回答或思考时，先查看有没有可用的 Plugin 或 Skill 可以调用；有的话自动调用处理。

## 代码格式强制规则

1. 修改、创建、重构、格式化或审查任何代码文件前，必须先读取并遵守 `.agents/skills/orion-code-style/SKILL.md`。
2. 代码文件包括但不限于 `.h`、`.cpp`、`.Build.cs`、`.Target.cs`、`.cs`、`.ini`、`.uproject`、`.uplugin`、脚本和其他项目源码文本文件。
3. 改完代码后，必须对本次 touched code files 运行 `.agents/skills/orion-code-style/scripts/check-code-style.ps1`。
4. 如果校验脚本发现问题，必须修复后重新运行，直到通过；如果某类文件不适用该脚本，必须在最终回复中明确说明未校验原因。

## 生成文件格式

Windows 操作系统下生成的代码文件必须是 CRLF 格式，不要 LF 格式。
