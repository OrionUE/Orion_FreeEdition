# 开发者面板控制台命令使用说明

## 功能入口

- 控制台命令：`Orion.ShowDevelopmentHUD 1`。
- 隐藏命令：`Orion.ShowDevelopmentHUD 0`、`Orion.ShowDevelopmentHUD false`、`Orion.ShowDevelopmentHUD off`。
- 运行时入口：`UGameUIManagerSubsystem::SetDevelopmentHUDRequestedVisible()`。
- Widget 入口：`UDevelopmentHUDLayout::SetDevelopmentHUDVisible()`。

## 可创建的蓝图或数据资产

- 开发者面板 Widget Blueprint 继续使用 `UDevelopmentHUDLayout` 作为父类。
- `Config/DefaultGame.ini` 的 `DevelopmentHUDSoftClass` 指向实际 Widget Blueprint，例如 `/Game/UI/Development/W_DevelopmentHUDLayout.W_DevelopmentHUDLayout_C`。

## 关键属性配置

- `DevelopmentHUDSoftClass`：开发者面板 Widget Blueprint 类。
- `DevelopmentHUDZOrder`：添加到 Player Screen 时的层级。
- `ShouldShowDevelopmentHUDInPackage`：没有显式控制台请求前，运行时默认是否显示开发者 HUD。
- `DevelopmentActionKeys`：开发者面板 Widget Blueprint 上配置的快捷键组合，例如 `LeftControl + F2`。快捷键会先恢复外层 Widget 可见性，再按当前真实可见状态切换面板激活状态。

## 运行时触发方式

执行 `Orion.ShowDevelopmentHUD 1` 时，系统会：

1. 解析当前游戏世界和本地 `APlayerController`。
2. 获取 `UGameUIManagerSubsystem`。
3. 如果开发者 HUD 不存在、被移除、OwningPlayer 失配或 World 失配，则重新创建。
4. 如果 Widget 不在屏幕上，则重新 `AddToPlayerScreen()`。
5. 强制设置 Widget 可见、透明度为 1、启用状态为 true。
6. 强制激活 `bDevelopmentHUDActivated`，并调用 `K2_HandleDevelopmentAction` 刷新 Widget Blueprint 子面板显示。

执行 `Orion.ShowDevelopmentHUD 0` 时，系统会隐藏 Widget、关闭激活状态并恢复 GameOnly 输入模式。快捷键触发时，如果外层 Widget 已经隐藏、透明或禁用，会先强制打开；只有面板已经真实可见并处于激活状态时，快捷键才会关闭它。

## 验证步骤

1. 进入 PIE 或 Development 包。
2. 执行 `Orion.ShowDevelopmentHUD 1`，确认面板显示并进入可交互状态。
3. 执行 `Orion.ShowDevelopmentHUD 0`，确认面板隐藏并恢复游戏输入。
4. 手动触发 `RemoveFromParent()`、切换快捷键关闭子面板或重启玩家后，再执行 `Orion.ShowDevelopmentHUD 1`，确认面板重新出现。
5. 切换关卡或重新生成 PlayerController 后，再执行 `Orion.ShowDevelopmentHUD 1`，确认会按新 OwningPlayer 重建 Widget。

## 常见扩展点

- 如果需要更多开发者命令，不要再写只控制透明度的 CVar；优先注册带 World/Args 的控制台命令，然后调用 GameUI Subsystem。
- 如果 Widget Blueprint 增加新子面板，必须在 `K2_HandleDevelopmentAction` 中按 `bDevelopmentHUDActivated` 设置确定状态，而不是做盲目 Toggle。
- 如果要支持多本地玩家，需要把 `UGameUIManagerSubsystem` 中单个 `DevelopmentHUD` 扩展为按 `APlayerController` 或 `ULocalPlayer` 管理的实例表。
