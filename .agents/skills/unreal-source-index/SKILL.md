---
name: unreal-source-index
description: "Use when Codex needs to generate, refresh, or query a portable Unreal Engine source index before broad engine searches: Engine/Source modules, Engine/Plugins descriptors, plugin modules, Build.cs files, uplugin files, module ownership, source roots, public/private/classes folders, runtime/editor module type, loading phase, plugin category, stale index detection, and relative-path source lookup across Windows, macOS, and Linux."
---

# Unreal Source Index

本 Skill 用于快速定位 Unreal Engine 源码里的模块、插件、`Build.cs`、`.uplugin` 和 source root。它是 `unreal-source-code-navigator` 的前置加速器：先用索引缩小搜索范围，再打开本机真实源码确认声明、依赖和调用样例。

详细说明：

`references/source-index.zh-CN.md`

## 工作流

1. 先识别 `<EngineRoot>`。如果已有 `unreal-source-code-navigator` 上下文，沿用它发现的 engine root。
2. 如果没有索引或索引可能过期，运行 `scripts/generate_unreal_source_index.py` 生成当前机器的相对路径索引。
3. 用 `scripts/query_unreal_source_index.py` 或 `rg` 查询 module/plugin/API 关键词，定位 `Build.cs`、`.uplugin` 或 source root。
4. 把匹配到的 `relative_*` 路径与当前 `<EngineRoot>` 拼接，再打开真实源码。
5. 如果进入具体子系统实现，路由到对应 Skill；如果只是查声明和调用点，回到 `../unreal-source-code-navigator/SKILL.md`。

## 脚本

```bash
python scripts/generate_unreal_source_index.py --engine-root <EngineRoot> --out <IndexDir>
python scripts/query_unreal_source_index.py EnhancedInput --index-dir <IndexDir>
python scripts/query_unreal_source_index.py ReplicationGraph --index-dir <IndexDir> --kind all
```

如果未传 `--engine-root`，生成脚本会尝试读取 `UE_ENGINE_ROOT`、`UNREAL_ENGINE_ROOT` 或 `UE_ROOT`。

如果未传 `--out`，默认写入本 Skill 的 `references/generated/`。生成结果只使用 `Engine/...` 相对路径，不写入本机绝对路径。

## 路由

- 需要查类、函数、委托、宏、调用点和真实签名：配合 `../unreal-source-code-navigator/SKILL.md`。
- 查到 EnhancedInput、CommonInput、InputCore、GameFeatures、GameplayAbilities、ReplicationGraph 等领域后，按源码导航 Skill 的 `references/routing.zh-CN.md` 继续路由。
- 只需要判断模块归属、插件描述符、source root 或 include/Build.cs 起点时，优先使用本 Skill。

## 约束

- 不发布固定 UE 小版本 CSV 快照；索引应由每台机器按当前引擎源码生成。
- 不把项目名、项目绝对路径或引擎绝对路径写入 Skill 内容或生成索引。
- 索引不是 API 文档；写代码前仍必须打开真实源码。
