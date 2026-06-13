# 委托与事件

委托代码必须先查声明，再决定绑定方式。不要把原生委托、动态委托、多播委托和事件混用。

## 先选类型

- `DECLARE_DELEGATE...`：原生单播委托，适合纯 C++ 回调；可有返回值。
- `DECLARE_DYNAMIC_DELEGATE...`：动态单播委托，接入 UObject 反射，可序列化，可绑定 Blueprint 实现函数；绑定原生函数时目标函数必须有 `UFUNCTION`。
- `DECLARE_MULTICAST_DELEGATE...`：原生多播委托，适合 C++ 多监听者通知；不能有返回值。
- `DECLARE_DYNAMIC_MULTICAST_DELEGATE...`：动态多播委托，适合 `UPROPERTY(BlueprintAssignable)` 暴露给 Blueprint；不能有返回值。
- `DECLARE_EVENT...`：事件是受拥有者类型约束的多播通知，外部通常只能拿到受限访问接口；需要防止外部任意 `Broadcast` 时优先考虑事件。

## 宏签名规则

- 无参数：`DECLARE_DELEGATE(FOnDone)`、`DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDone)`。
- 原生参数宏只写参数类型：`DECLARE_MULTICAST_DELEGATE_OneParam(FOnChanged, int32)`。
- 动态参数宏必须写参数类型和参数名：`DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoaded, UObject*, LoadedObject)`。
- 返回值宏把返回值类型放在前面：`DECLARE_DELEGATE_RetVal(FString, FGetLabel)`。
- 多播委托和事件不要设计返回值；引擎模板会约束多播返回值必须是 `void`。
- 动态委托类型按 UE 惯例使用 `F` 前缀；如果 UHT 报命名错误，以当前引擎报错为准。

## 绑定方式

- UObject 成员函数：单播用 `BindUObject`，多播用 `AddUObject`。
- 动态委托 / Blueprint 暴露委托：单播用 `BindDynamic`，多播用 `AddDynamic`，目标函数必须是 `UFUNCTION` 且签名匹配。
- Lambda：单播用 `BindLambda`，多播用 `AddLambda`，必须保存 `FDelegateHandle` 或保证捕获对象生命周期安全。
- Shared pointer 对象：查同模块样例后使用 `BindSP` / `AddSP` 或 `CreateSP` 系列。
- Raw 指针和 Slate：查同模块样例后使用 `BindRaw` / `AddRaw` 或 `CreateRaw`，必须确认解绑时机。

## 执行和广播

- 单播有返回值时，先 `IsBound()` 再 `Execute()`；不要用 `ExecuteIfBound()` 取返回值。
- 单播无返回值时，可用 `ExecuteIfBound()`。
- 多播统一用 `Broadcast()`，不要假设监听者调用顺序；绑定增删后顺序可能变化。
- 动态多播的 `Broadcast()` 会跳过已经失效的 UObject 绑定对象。
- 广播期间不要依赖监听者互相修改状态的顺序；需要确定顺序时改成显式调用链。

## 解绑和生命周期

- 多播绑定返回 `FDelegateHandle` 时，保存 handle，并在 `EndPlay`、`Deinitialize`、析构或对应生命周期中 `Remove(Handle)`。
- UObject 绑定可用 `RemoveAll(this)` 做兜底，但更推荐保存精确 handle。
- 单播可用 `Unbind()` / `Clear()`，按实际委托类型查声明。
- Lambda 捕获 `this` 时必须确认委托不会晚于对象销毁触发；否则使用弱指针或显式解绑。
- 绑定引擎全局委托、Subsystem 委托、ASC delegate、HTTP delegate、Timer delegate 时，必须把解绑写进同一个实现计划。

## Blueprint 暴露规则

- 想让 Blueprint 绑定事件，使用动态多播委托并声明为 `UPROPERTY(BlueprintAssignable)`。
- 想让 Blueprint 传入一次性回调，使用动态单播委托参数或属性。
- 不需要 Blueprint / 序列化时，不要默认使用动态委托；动态委托有反射成本，且不能使用 payload variables。
- 动态委托参数类型必须能被反射系统识别；复杂 C++ 类型先查 UHT 支持和项目已有样例。

## 工作流

1. 用 `inspect_unreal_delegate.py <DelegateName>` 或 `rg` 找声明。
2. 确认宏类型、参数、返回值、是否 dynamic、是否 multicast、是否 event。
3. 搜索绑定样例，优先同项目、同模块、同 UE 版本。
4. 确认执行方式：单播 `Execute` / `ExecuteIfBound`，多播 `Broadcast`。
5. 确认解绑方式：`Remove`、`RemoveAll`、`Clear`、`Unbind` 或 handle 保存。
6. 如果绑定对象可能销毁，先设计生命周期，再写绑定代码。
7. 如果要暴露 Blueprint，确认 `UFUNCTION`、`UPROPERTY`、反射参数类型和 UHT 编译。

## 常见误区

- 把动态委托当成默认选择：只有需要 Blueprint、序列化或反射绑定时才优先 dynamic。
- 多播委托里期待返回值：多播返回值没有稳定语义，引擎不支持。
- 依赖多播广播顺序：引擎明确不保证调用顺序。
- 对有返回值的单播用 `ExecuteIfBound()`：当前模板只给 void 返回值提供 `ExecuteIfBound()`。
- `AddLambda([this](){...})` 不解绑：对象销毁后回调可能访问悬空指针。
- 写了 `BindDynamic` 但目标函数没有 `UFUNCTION`：UHT 或运行时绑定会失败。
