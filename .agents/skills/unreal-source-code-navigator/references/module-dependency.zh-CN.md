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
- 本项目有更严格的约定：除非用户本次明确授权，项目模块的 `PublicDependencyModuleNames` 只放 `"Core"`、`"CoreUObject"`、`"Engine"`；其他依赖一律放 `PrivateDependencyModuleNames`。
- 遇到 Public 头需要非基础模块类型时，也先把依赖放到 `PrivateDependencyModuleNames` 并验证编译；不要为了依赖位置规则删除、隐藏或重构现有 API，除非用户明确要求。
- 运行时模块不要随意依赖 Editor 模块。
- Editor 代码应放在 Editor 模块或受 `WITH_EDITOR` 保护的位置。

## 工作习惯

- 先用 `inspect_unreal_module.py` 查看当前模块已有依赖。
- 再用 `inspect_unreal_class.py` 找目标类型所属模块。
- 只补最小必要依赖，不顺手添加无关模块。
- 添加依赖后用目标模块构建验证，而不是只看 include 是否消红。

## 常见问题

### include path 有但链接 `.rsp` 缺库

现象：代码能编译到链接阶段，但报 `LNK2019`，例如 `EKeys::LeftMouseButton` 或 `FSlateApplication::CurrentApplication` 无法解析；对应模块的 `*.Build.cs` 看起来已经有依赖。

排查：不要只看 `Build.cs`。打开失败模块的 `Intermediate/Build/.../<Module>/UnrealEditor-<Module>.dll.rsp`，确认里面是否真的有 `UnrealEditor-InputCore.lib`、`UnrealEditor-Slate.lib` 或目标模块 import lib。再打开 `<Module>.Shared.rsp`，确认 include path 是否只是进入了编译环境而没有进入链接环境。

修复：如果当前模块的 Public 头文件暴露了外部模块类型，例如 `FKey`、`FSlateBrush`、`UEnhancedPlayerInput`，应把这些类型所属模块提升到 `PublicDependencyModuleNames`；只在 `.cpp` 使用的模块继续放 `PrivateDependencyModuleNames`。修完后重新构建目标模块，并复查 `.dll.rsp` 已出现对应 import lib。

### `RuntimeNoCommandlet` 模块在 Editor Target 下缺 include

现象：`*.Build.cs` 已添加某个 Runtime 插件模块依赖，但 Editor target 编译 `.cpp` 仍报找不到该模块 Public 头，例如 `Cannot open include file: '<ModuleHeader>.h'`；实际引擎源码里能找到该头。

排查：读取该插件 `.uplugin`。如果模块类型是 `RuntimeNoCommandlet` 或其他受 host type 限制的类型，再看失败 `.cpp.obj.rsp` 和 `<Module>.Shared.rsp` 是否缺少该插件 `Source/<Module>/Public` include path。模块存在不代表当前 target host 一定可用。

修复：不要把引擎插件源码复制进项目，也不要硬写 include path。按 target gate 依赖，在项目 `Build.cs` 里为可用 target 添加模块依赖并定义项目侧宏；不可用 target 定义宏为 0。源码中用该宏包住插件 include 和插件 API，提供 no-op 或 fallback 实现。重新构建 Editor target 验证不可用路径能编译，再按需要构建 Game/Client target 验证启用路径。
