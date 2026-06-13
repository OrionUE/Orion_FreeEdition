# 模块依赖

Unreal 的 include 错误经常是模块依赖错误。写代码前先确认目标类型属于哪个模块，再修改当前模块的 `*.Build.cs`。

## 判断模块

1. 如果只知道模块名、插件名或大概 API 名，先用 `../../unreal-source-index/SKILL.md` 定位候选 `Build.cs`、`.uplugin` 或 source root。
2. 找到目标类型声明文件。
3. 向上查找最近的 `<ModuleName>.Build.cs`。
4. 如果文件在 `Public` 下，通常可以被其他模块公开 include。
5. 如果文件在 `Private` 下，通常不应从其他模块直接 include。

## Build.cs 规则

- 当前模块 Public 头文件使用的外部类型，通常放 `PublicDependencyModuleNames`。
- 只在 `.cpp` 或 Private 头文件使用的外部类型，通常放 `PrivateDependencyModuleNames`。
- 运行时模块不要随意依赖 Editor 模块。
- Editor 代码应放在 Editor 模块或受 `WITH_EDITOR` 保护的位置。

## 工作习惯

- 先用 `inspect_unreal_module.py` 查看当前模块已有依赖。
- 再用 `inspect_unreal_class.py` 找目标类型所属模块。
- 只补最小必要依赖，不顺手添加无关模块。
- 添加依赖后用目标模块构建验证，而不是只看 include 是否消红。
