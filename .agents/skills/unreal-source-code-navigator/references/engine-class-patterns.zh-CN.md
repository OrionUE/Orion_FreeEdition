# 引擎基类模式

选择 UE 基类时，不要只看类名，要查生命周期、创建方式、World 上下文、网络语义和模块归属。

## 常见基类

- `AActor`：场景对象，关注 Spawn、BeginPlay、Tick、EndPlay、Replication。
- `UActorComponent`：Actor 组合能力，关注注册、激活、BeginPlay、Owner、Tick。
- `UObject`：轻量对象，关注 Outer、GC、反射、生命周期。
- `UGameInstanceSubsystem`：跨关卡生命周期，关注初始化和关闭。
- `UWorldSubsystem`：World 级生命周期，关注 PIE、多 World 和服务端/客户端。
- `ULocalPlayerSubsystem`：本地玩家生命周期，关注输入和 UI。
- `UUserWidget`：UMG，关注 NativeConstruct、绑定、WidgetTree、生命周期。

## 查法

1. 用 `inspect_unreal_class.py <ClassName>` 找声明、父类和可 override 函数。
2. 搜索同基类的项目内子类，优先学习项目已有写法。
3. 搜索引擎内调用点，确认函数调用时机和线程/World 限制。
4. 如果要新增类型，先确认模块依赖和头文件放置位置。

## 输出代码前必须确认

- 这个类是否应该被反射。
- 是否需要 Blueprint 暴露。
- 是否在运行时模块、Editor 模块或插件模块中。
- 是否需要网络同步、Tick、GC 引用或 World 上下文。
