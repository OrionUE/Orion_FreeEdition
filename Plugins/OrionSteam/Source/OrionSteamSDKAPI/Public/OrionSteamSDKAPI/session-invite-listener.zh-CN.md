# Steam Session 邀请监听使用说明

## 功能入口

- 发送邀请：`UOrionSteamSessionLibrary::SendGameSessionInviteToFriend(LocalUserNum, FriendSteamId)`。
- 监听接受邀请：`UOrionSteamUtilities::ListenForSessionInviteAccepted(Callback)`。
- 监听收到邀请：`UOrionSteamUtilities::ListenForSessionInviteRecieved(Callback)`。
- 停止监听：`StopListeningForSessionInviteAccepted()` 和 `StopListeningForSessionInviteRecieved()`。
- 前端触发：`UOrionSystemStatics::ActivateListenSessionInvite(WorldContextObject)` 发送 `GameplayEvent.Online.ListenSessionInvite`，由在线 Ability 绑定 Steam invite delegate。

## 蓝图和数据资产

- 前端或大厅 Experience 需要授予包含监听 Ability 的 AbilitySet。
- 监听 Ability 建议继承 `UOrionGameplayAbility_ListenForSessionInvites` 或项目蓝图桥接子类。
- Session 组件继续使用 `UCoreSessionComponent` / `UOrionGameSessionComponent` 的 `JoinInvitedSession` 入口，不要在 UI 中直接拼接 travel URL。

## 关键配置

- Steam 运行必须使用 Steam CustomConfig，并确保 OnlineSubsystem 是 `OrionSteam`。
- `Config/Custom/Steam/DefaultEngine.ini` 需要包含 `DefaultPlatformService=OrionSteam`、`NativePlatformService=OrionSteam`、`AdditionalModulesToLoad=OrionOnlineSubsystemSteam` 和 Steam NetDriver。
- 发送邀请前必须已经存在有效的 `NAME_GameSession`，否则底层会拒绝发送。

## 运行时触发方式

1. 前端或大厅加载完成后调用 `ActivateListenSessionInvite`。
2. 如果本地 PlayerState、ASC 或 AbilitySet 尚未就绪，系统会进行短时间有限重试。
3. 监听函数重复调用时会先清理旧 delegate handle，再绑定新回调，避免旧监听残留。
4. 接受邀请后，把 `FBlueprintSessionResult` 传给监听 Ability，再由 Session 组件执行加入流程。

## 验证步骤

1. 用 Steam Development 包启动两个客户端，确认日志中创建的是 `OrionSteam` OnlineSubsystem。
2. 客户端 A 创建或进入有效 session。
3. 客户端 A 对客户端 B 调用邀请。
4. 客户端 B 在前端和大厅两种状态下分别确认能收到 Steam 邀请、接受邀请并进入加入流程。
5. 检查日志中不应出现 `Missing or invalid session GameSession for invite request`、`OrionSteam session interface is unavailable` 或 `no gameplay ability handled event`。

## 常见扩展点

- 如果需要支持多个监听 owner，不要复用静态单 handle；应为每个 owner 保存自己的 `FDelegateHandle` 并在 owner 销毁时解绑。
- 如果需要 UI 提示收到邀请，可在监听 Ability 中转发到 UI 层或 GameplayMessageRouter。
- 如果需要跨玩法定制加入前检查，在 `UOrionGameSessionComponent::JoinInvitedSession` 或玩法专属 Session 组件子类中扩展。
