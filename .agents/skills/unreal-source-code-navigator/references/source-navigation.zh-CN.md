# 源码导航

目标是在写代码前找到当前机器上的真实声明和调用样例，而不是凭通用记忆推断。

## 基本顺序

1. 用 `find_unreal_context.py` 定位项目、插件、模块和可见引擎源码。
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

## 判断可信度

- 头文件声明比文档摘要可信。
- 当前项目和插件里的既有调用比孤立网上示例可信。
- 同 UE 版本源码比跨版本记忆可信。
- Generated、Intermediate、Binaries、Saved 目录里的内容通常不作为设计依据。
