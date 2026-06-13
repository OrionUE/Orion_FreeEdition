# 反射系统

涉及 `UCLASS`、`USTRUCT`、`UENUM`、`UINTERFACE`、`UFUNCTION`、`UPROPERTY`、RPC 或 Replication 时，必须考虑 UHT。

## 检查点

- 反射类型必须包含正确的 `GENERATED_BODY()`。
- `UFUNCTION` 和 `UPROPERTY` 的 specifier 以当前源码和同项目样例为准。
- Blueprint 暴露要确认参数类型、返回类型、引用、指针和容器是否被 UHT 支持。
- RPC 函数需要确认 `_Implementation`、可靠性、权限和声明格式。
- Replication 需要确认 `GetLifetimeReplicatedProps` 和相关 `DOREPLIFETIME` 用法。

## 常见误区

- 普通 C++ 类型不能直接作为 Blueprint 参数。
- 动态委托参数类型比原生委托更受 UHT 限制。
- `TObjectPtr`、裸指针、软引用、弱引用的使用场景不同，先查当前项目约定。
- `BlueprintCallable` 不等于任何上下文都能安全调用。

## 验证

- UHT 错误优先按第一个真实错误处理。
- 如果错误来自 generated 文件，回到对应 `.h` 查宏和声明。
- 修改反射声明后必须构建触发 UHT。
