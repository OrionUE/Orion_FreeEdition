# Unreal Source Index 指南

Source Index 的目标是把“我要找某个 UE 模块或插件在哪”从全引擎文本搜索变成小 CSV 查询。它适合定位模块归属、插件描述符、source root 和 `Build.cs` 起点，不替代真实源码阅读。

## 适用场景

- 不知道一个 API、模块或插件属于 `Engine/Source` 还是 `Engine/Plugins`。
- 要找某个 module 的 `*.Build.cs`。
- 要找某个 plugin 的 `.uplugin` 和模块列表。
- 要判断模块是 Runtime、Editor、Developer、ThirdParty，或 plugin descriptor 里的 module type/loading phase。
- 要在写 include 和 `*.Build.cs` 依赖前缩小源码搜索范围。
- 要为不同机器、不同 UE 版本生成可复用的相对路径索引。

不适合的场景：

- 查函数签名、虚函数 override、委托参数、UHT 宏、调用样例：回到 `../../unreal-source-code-navigator/SKILL.md`。
- 查某个具体系统的行为：先用索引定位源码，再路由到对应专项 Skill。

## 生成索引

推荐输出到 `<ProjectRoot>/Saved/OrionUE/UnrealEngine/SourceIndex`，也可以为当前任务指定临时目录：

```bash
python scripts/generate_unreal_source_index.py --engine-root <EngineRoot> --out <IndexDir>
```

如果不传 `--engine-root`，脚本会先读取 `<ProjectRoot>/Saved/OrionUE/UnrealEngine/InstallDirectory.txt`；也可以使用环境变量：

```bash
UE_ENGINE_ROOT=<EngineRoot> python scripts/generate_unreal_source_index.py --out <IndexDir>
```

支持的环境变量按顺序为：

- `UE_ENGINE_ROOT`
- `UNREAL_ENGINE_ROOT`
- `UE_ROOT`

## 缓存位置

- 搜索、扫描和索引类缓存统一写入 `<ProjectRoot>/Saved/OrionUE`。
- Source Index 默认输出目录是 `<ProjectRoot>/Saved/OrionUE/UnrealEngine/SourceIndex`。
- 不要把生成的 CSV、扫描日志或本机路径缓存写进 `.agents/skills`；Skill 目录只保存规则、脚本和可发布文档。
- 缓存中可以保存本机绝对路径；Skill 文档中只写 `<ProjectRoot>`、`<EngineRoot>` 这类占位符。

生成文件：

- `engine-modules.csv`：`Engine/Source` 下的所有 `*.Build.cs` 模块。
- `engine-plugins.csv`：`Engine/Plugins` 下的 `.uplugin` 描述符。
- `engine-plugin-modules.csv`：`Engine/Plugins` 下的所有 plugin module `*.Build.cs`，包含 descriptor-backed 和非 descriptor-backed 模块。
- `source-index-overview.md`：生成时间、计数、分类统计和常用查询命令。

## CSV Schema

`engine-modules.csv`：

- `module_name`
- `source_category`
- `module_group`
- `relative_build_cs`
- `relative_source_dir`
- `has_public`
- `has_private`
- `has_classes`

`engine-plugins.csv`：

- `plugin_name`
- `friendly_name`
- `category`
- `path_category`
- `relative_descriptor`
- `relative_plugin_dir`
- `enabled_by_default`
- `can_contain_content`
- `is_beta_version`
- `is_experimental_version`
- `installed`
- `module_count`
- `module_names`

`engine-plugin-modules.csv`：

- `plugin_name`
- `module_name`
- `has_descriptor`
- `descriptor_type`
- `loading_phase`
- `relative_build_cs`
- `relative_source_dir`
- `relative_plugin_dir`
- `path_category`
- `has_public`
- `has_private`
- `has_classes`

所有 `relative_*` 路径都应以 `Engine/...` 开头。不要把它们改成本机绝对路径。

## 查询索引

使用查询脚本：

```bash
python scripts/query_unreal_source_index.py GameplayAbilities --index-dir <IndexDir>
python scripts/query_unreal_source_index.py UMG --index-dir <IndexDir> --kind modules
python scripts/query_unreal_source_index.py CommonUI --index-dir <IndexDir> --kind plugins
```

也可以直接用 `rg`：

```bash
rg -n "^Core," <IndexDir>/engine-modules.csv
rg -n "EnhancedInput|CommonInput|InputCore" <IndexDir>/engine-modules.csv <IndexDir>/engine-plugins.csv <IndexDir>/engine-plugin-modules.csv
rg -n ",Runtime,|,Editor," <IndexDir>/engine-plugin-modules.csv
```

命中后，拼接路径：

```text
<EngineRoot> + relative_build_cs
<EngineRoot> + relative_descriptor
<EngineRoot> + relative_source_dir
```

然后打开真实 `Build.cs`、`.uplugin`、Public/Private/Classes 下的源码继续分析。

## 与 Source Navigator 的关系

推荐顺序：

1. `unreal-source-index`：模块、插件、source root 粗定位。
2. `unreal-source-code-navigator`：真实类、函数、宏、委托、调用点和依赖确认。
3. 专项 Skill：EnhancedInput、CommonInput、InputCore、GameFeatures、GameplayAbilities、ReplicationGraph 等领域行为。

如果一个符号在索引里找不到，不代表源码不存在。索引只覆盖 `Build.cs` 和 `.uplugin` 层级；具体类名仍要用源码搜索。

## 过期判断

遇到这些情况要重新生成：

- 引擎版本、分支或插件集合变化。
- engine checkout 更新或同步。
- 查询结果明显找不到已知模块。
- 用户切换到另一个 `<EngineRoot>`。
- 新增、删除或移动 Engine plugin/module。

## 约束

- 索引文件必须保持机器无关：只保存相对路径；本机缓存目录可以位于 `Saved/OrionUE`。
- 不在 Skill 中发布某个具体 UE 小版本的完整 CSV 快照。
- 不把索引结果当成最终 API 事实；写代码前必须打开源码。
- 查询结果如果指向 Editor 模块，runtime 代码不能直接依赖它。
