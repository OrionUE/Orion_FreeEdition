# UE 5.8 渲染命令表查询指南

本 Skill 把 UE 5.8 渲染命令整理为 CSV 表格。需要查某个具体命令时，优先查最小范围的表；不确定分类时再查全量表。

## 先查索引

入口索引：

```text
references/render-command-tables/table_index.csv
```

索引字段：

- `table_id`：表格编号。
- `path`：相对 Skill 根目录的 CSV 路径。
- `category`：表格分类，例如 `feature`、`prefix`、`config`、`lifecycle`、`platform`。
- `row_count`：该表命令数量。
- `use_when`：什么时候查这张表。

## 常用查表规则

按具体命令查：

```text
references/render-command-tables/all_render_commands.csv
```

按功能模块查：

```text
references/render-command-tables/by_feature/Lumen.csv
references/render-command-tables/by_feature/Nanite.csv
references/render-command-tables/by_feature/shadows.csv
references/render-command-tables/by_feature/post_processing.csv
references/render-command-tables/by_feature/ray_tracing.csv
references/render-command-tables/by_feature/GI.csv
references/render-command-tables/by_feature/materials.csv
references/render-command-tables/by_feature/rhi_low_level_interface.csv
references/render-command-tables/by_feature/render_debug_visualization.csv
```

按前缀查：

```text
references/render-command-tables/by_prefix/r.csv
references/render-command-tables/by_prefix/sg.csv
references/render-command-tables/by_prefix/rhi.csv
references/render-command-tables/by_prefix/d3d12.csv
references/render-command-tables/by_prefix/vulkan.csv
references/render-command-tables/by_prefix/slate.csv
```

按配置位置查：

```text
references/render-command-tables/config/renderer_settings.csv
references/render-command-tables/config/scalability.csv
references/render-command-tables/config/scalability_group_flag.csv
```

按生效时机查：

```text
references/render-command-tables/lifecycle/startup_only.csv
references/render-command-tables/lifecycle/runtime_editable.csv
```

按平台或底层后端查：

```text
references/render-command-tables/by_platform/All.csv
references/render-command-tables/by_platform/DirectX.csv
references/render-command-tables/by_platform/Vulkan.csv
references/render-command-tables/by_platform/OpenGL.csv
references/render-command-tables/by_platform/Android.csv
references/render-command-tables/by_platform/Windows.csv
references/render-command-tables/by_platform/Metal.csv
```

## 字段解释

- `command`：命令或 CVar 名称。
- `kind`：`CVar` 表示控制台变量，`Command` 表示控制台命令。
- `type`：从源码声明或默认值推断的参数类型。
- `default`：源码中可提取到的默认值。
- `prefix`：命令前缀。
- `module`：功能分类。
- `platform_text`：平台或渲染后端标签。
- `runtime_editable`：运行后是否可改。
- `startup_only`：是否应按启动前生效处理。
- `in_default_engine`：是否可放入 `DefaultEngine.ini` 的 `[/Script/Engine.RendererSettings]`。
- `in_scalability`：是否出现在 Scalability 配置中。
- `scalability_group`：源码 flags 是否包含 Scalability 相关标记。
- `usage`：自动生成的使用方式。
- `help`：源码注册时的帮助说明。
- `flags`：源码注册时的 `ECVF_*` 标记。

## 回答要求

回答用户时优先给出：

- 命令名。
- 可设置参数与类型。
- 使用方式。
- 是否可放 `DefaultEngine.ini` 或 `DefaultScalability.ini`。
- 是否运行时可改。
- 支持平台。
- 所属功能模块。
- 需要继续确认行为时，再结合源码导航或渲染框架 Skill。

