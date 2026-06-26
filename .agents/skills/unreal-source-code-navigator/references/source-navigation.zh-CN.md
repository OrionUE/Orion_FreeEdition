# 源码导航

目标是在写代码前找到当前机器上的真实声明和调用样例，而不是凭通用记忆推断。

## 基本顺序

1. 用 `find_unreal_context.py` 定位项目、插件、模块和可见引擎源码。没有显式 `--engine-root` 时，先读取 `<ProjectRoot>/Saved/OrionUE/UnrealEngine/InstallDirectory.txt`，其中保存本机 UE 安装目录的一行绝对路径。
2. 如果目标是找模块、插件、`Build.cs`、`.uplugin` 或 source root，先读取 `../../unreal-source-index/SKILL.md`，用索引缩小范围。
3. 用 `search_unreal_symbol.py` 搜索目标类、函数、宏、委托或错误文本。
4. 优先查看头文件声明，再看 `.cpp` 实现和调用点。
5. 如果同名符号很多，先按模块、路径和 include 关系缩小范围。
6. 写代码前记录：声明文件、所属模块、需要的 include、函数签名、生命周期限制。

## 搜索策略

- 查类：搜索完整类名，例如 `UActorComponent`。
- 查函数：先搜索函数名，再查看所属类声明，避免调用同名错误 overload。
- 查宏：搜索 `UCLASS`、`USTRUCT`、`UFUNCTION`、`UPROPERTY` 附近的真实用法。
- 查调用样例：搜索函数名和类名组合，优先使用引擎或同项目已有代码。
- 查错误：直接搜索 UHT 或编译错误里的类型名、模块名、头文件名。
- 查模块或插件归属：先用 `../../unreal-source-index/SKILL.md` 定位 `Build.cs` 或 `.uplugin`，再打开源码确认。

## 本机缓存

- 重复性本机事实、搜索结果、扫描结果、索引和临时诊断日志写入 `<ProjectRoot>/Saved/OrionUE`，不要写进 Skill 正文里的绝对路径。
- UE 安装目录缓存文件固定为 `<ProjectRoot>/Saved/OrionUE/UnrealEngine/InstallDirectory.txt`。
- 源码搜索或扫描如果会重复使用，优先按领域放到 `<ProjectRoot>/Saved/OrionUE/<Domain>`，例如 `<ProjectRoot>/Saved/OrionUE/UnrealEngine/SourceIndex`。
- 缓存文件内容使用一行本机绝对路径；Skill 文档中只写 `<EngineRoot>` 占位符，不硬编码盘符。读取后必须验证该目录存在 `Engine/Build/Build.version`。
- 如果缓存路径不存在、无效或用户显式传入 `--engine-root`，按显式参数或原有探测逻辑继续处理。

## 判断可信度

- 头文件声明比文档摘要可信。
- 当前项目和插件里的既有调用比孤立网上示例可信。
- 同 UE 版本源码比跨版本记忆可信。
- Generated、Intermediate、Binaries、Saved 目录里的内容通常不作为设计依据。
