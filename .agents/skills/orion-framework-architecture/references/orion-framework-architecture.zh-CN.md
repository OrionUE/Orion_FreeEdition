# Unreal 框架架构导航

## 目录

- 使用边界
- 决策工作流
- 高级架构分析模板
- 架构模式总表
- 模式组合范例
- 功能落点矩阵
- 根目录职责
- Source 模块职责
- Target 与构建变体
- 核心插件地图
- 代码落点决策
- 资产与配置落点
- 通信与同步选择
- 验证清单
- 常见错误
- 官方资料

## 使用边界

本 Skill 解决“新代码、改代码、新资产、新配置应该用什么架构、放在哪里、依赖谁、用哪个目标验证”的问题。它不是具体 UE API 手册；当任务进入生命周期、反射、委托、网络、UMG、GAS、输入或 OnlineSubsystem 细节时，继续读取对应专项 Skill 和真实源码。

不要把宿主项目名、绝对路径或机器路径写进 Skill、示例代码或新文档。需要说明路径时使用相对路径，例如 `Source/<ModuleName>`、`Plugins/<PluginName>`、`Content/UI`、`Plugins/GameFeatures/<FeatureName>/Content/UI`。

用户让写代码、改代码、修代码、重构代码、审查代码、写功能、做系统、做玩法、改架构时，必须先从“架构模式总表”选择一个或多个模式。不要直接把新功能或修复塞进当前文件、Widget、角色类、全局管理器或临时蓝图。

## 决策工作流

1. 读取当前事实：`.uproject`、目标 `*.Target.cs`、目标模块 `*.Build.cs`、目标插件 `.uplugin`、已有父类、调用点、配置节和资产引用。
2. 把用户描述转换成架构问题：识别核心用例、变化点、业务边界、运行时上下文、是否可复用、是否需要 Blueprint 配置、是否多人权威。
3. 判断功能原型：玩法模式、战斗能力、武器、背包交互、UI、输入、AI、在线、存档、编辑器工具、配置、性能优化、网络复制或资产管线。
4. 从“架构模式总表”选择主模式和辅助模式。多数真实功能需要 2 到 5 个模式组合，不要强行只用一种模式。
5. 选择代码和资产落点：框架 Runtime、宿主 Game Runtime、GameFeature、UI、Anim、BBL、Editor、横向插件、Content、Config。
6. 明确通信方式和网络权威：直接引用、接口、委托、GameplayMessage、RPC、RepNotify、FastArray、GameplayCue、UIExtension。
7. 进入具体领域 Skill：GAS、GameFeature、输入、UMG、资产、网络、存档、队伍、Steam、编辑器工具等。
8. 实现后用对应目标验证：Editor/Game/Client/Server/Steam、GameFeature 激活、资产保存、配置 staging、代码风格和构建。

非平凡功能在实现前形成这个决策：

```text
架构分析:
- 需求语义:
- 核心用例:
- 变化点:
- 模块/插件归属:
- 领域抽象:
- 主架构模式:
- 辅助架构模式:
- 代码落点:
- 数据/资产:
- 通信方式:
- 网络权威:
- 扩展点:
- 需要联动的 Skill:
- 验证目标:
```

## 高级架构分析模板

每次写功能、写代码、改代码、修 Bug、重构、审查或生成蓝图相关逻辑前，先以高级游戏程序架构师视角输出一段架构分析。目标不是写长篇设计文档，而是在动手前证明实现不是临时流程代码。

必须回答：

1. 需求语义：用户真正要的是一个“能力”还是一个“场景流程”。能力必须抽象，场景只能作为配置或上下文。
2. 核心用例：列出当前用例和可预见后续用例，至少考虑“同类功能增加第二种实现”时是否需要改 C++ 主流程。
3. 领域抽象：命名必须来自领域能力，而不是当前页面、当前按钮或当前时机。优先考虑 Base Definition、Provider、Policy、Presenter、Context、DataAsset、Subsystem service、Interface。
4. 类抽象层级：新增任何 C++ 类、接口或 Blueprint 父类前，必须判断它是“通用领域能力抽象”还是“当前场景实现”。能被其他系统复用的类名不能携带当前页面、当前时机或当前业务场景。
5. 模块归属：判断放在框架模块、宿主游戏模块、GameFeature、UI 模块、Editor 模块还是 BBL。
6. 解耦方式：说明谁依赖谁，如何通过接口、软类、DataAsset、GameplayTag、消息或委托降低耦合。
7. 扩展点：说明新增一种业务类型、展示类型、验证策略或数据来源时，是新增子类/资产/策略，还是需要改已有 C++。
8. 网络和生命周期：说明 LocalPlayer、World、GameInstance、Actor、Widget、GameFeature 激活/卸载和 Dedicated Server 的行为。
9. 验证：说明最小构建、运行时路径、资产保存、配置读取和回归点。

禁止模式：

- 用当前场景命名通用系统：`ShowStartupPopups`、`ShowShopPopups`、`ShowRewardPopups`。
- 为每个场景复制 Definition 类：`UStartupPopupDefinition`、`UShopPopupDefinition`、`UEndMatchPopupDefinition`。
- 用当前使用场景命名可复用基类：例如把通用流程动作命名为 `UOrionFrontendFlowAction`，后续结算、商店、登录流程就会继续复制场景专用基类。应先抽象为 `UOrionFlowAction`，再用子类表达具体前端或 UI 行为。
- 一个 Definition 同时堆满所有表现字段，例如 HTML、奖励、图片、视频、任意 Widget，导致基类承担所有业务。
- 把验证用户是否有弹窗、弹窗排序、弹窗展示、弹窗内容类型、弹窗结果处理全部塞进同一个函数。

推荐模式：

- 用通用请求入口表达场景，例如 `ShowPopupsForContext(FGameplayTag PopupContext)` 或 `EvaluatePopupQueue(Context)`。
- 用 Provider/Source 获取候选弹窗，用 Policy/Rule 判断是否展示，用 Definition 描述具体弹窗，用 Presenter/PopupScreen 负责展示。
- 基类只保留所有弹窗共有字段：启用状态、上下文、优先级、分组、展示类、通用动作和虚函数扩展点。
- 内容类型走子类或组合策略，例如 HTML 弹窗、奖励弹窗、图片弹窗、纯文本弹窗各自维护自己的内容字段。
- 需要蓝图配置时，让蓝图继承具体 Definition 子类；不要让蓝图直接填一个无边界的万能基类。

## 架构模式总表

本表覆盖本工程后续写代码时应优先选择的主要架构模式。它不是把所有软件工程流派强行搬进 UE，而是列出在 Unreal 游戏代码中可落地、可验证、可组合的模式。

| 架构模式 | 适用原型 | 优点 | 缺点/风险 | 本项目默认落点 |
| --- | --- | --- | --- | --- |
| Gameplay Framework 生命周期分层 | GameMode、GameState、PlayerState、Controller、Pawn、重生、回合规则 | UE 原生生命周期清晰，多人职责天然分开，适合长期维护 | 容易把规则全塞进 GameMode 或 Pawn；客户端/服务器边界不清会返工 | `GameCore` 基类、`<GameModule>` 派生、GameFeature Experience |
| Module/Plugin 分层 | 中大型项目、可复用框架、团队协作、平台/在线/渲染/音频隔离 | 编译依赖清楚，可发布和复用，减少跨域耦合 | 过早拆插件会增加构建和依赖成本；Public 依赖误用会污染边界 | `Source/*`、`Plugins/*`、`*.Build.cs` |
| GameFeature + Experience | 多玩法模式、DLC 式玩法、训练模式、地图包、活动模式、插件化 HUD/Input/Ability | 可按 Experience 装配功能，内容隔离，激活/卸载路径明确，贴近 Lyra | 需要正确处理激活/反激活/卸载；共享内容误放会散乱 | `Plugins/GameFeatures/<FeatureName>`、Experience、ActionSet |
| PawnData + AbilitySet | 玩家 Pawn 配置、职业/角色、模式默认能力、输入配置 | 数据化装配 PawnClass、AbilitySet、InputConfig，减少硬编码 | 如果 PawnData 粒度过细，会形成资产组合爆炸 | `GameCore`/`<GameModule>` PawnData、GameFeature Player 内容 |
| GAS 规则层 | 技能、伤害、治疗、死亡、冷却、Buff、属性、GameplayCue | 规则、状态、预测、复制和表现分层，适合多人战斗 | 学习成本高；简单交互过度 GAS 化会变重 | `GameCore` ASC/AbilitySet，`<GameModule>` 或 `AnimFramework` Ability |
| ActorComponent 组合 | Health、Inventory、Interact、WeaponState、Aim、Team、局部能力 | 组合优先，减少继承树，便于复用和测试 | 组件之间互相硬引用会变成隐形巨型类 | Pawn/Actor 组件、`ModularGameplayActors` |
| Subsystem 服务 | 匹配、统计、存档、全局注册、战斗验证、音频路由、UI/输入服务 | 生命周期由引擎管理，适合做组合根和跨对象服务 | 容易变成全局单例垃圾桶；不要承载高频逐对象规则 | GameInstance/World/LocalPlayer/Editor Subsystem |
| DataAsset / PrimaryAsset 数据驱动 | 武器定义、物品定义、关卡元数据、角色配置、AbilitySet、经验配置 | 设计师可配置，软引用友好，可接 Asset Manager 审计 | 资产依赖和版本迁移需要治理；过度数据化会难排错 | `Content/System`、`Content/GamePlay`、GameFeature Content |
| Asset Manager / Soft Reference | 大资源、皮肤、武器包、地图包、异步加载、平台裁剪 | 降低硬引用加载链，便于 cook/审计/按需加载 | 需要配置 PrimaryAssetType 和加载时机；运行期缺资源更隐蔽 | AssetManager 配置、PrimaryDataAsset |
| GameplayTag 状态分类 | 输入标签、Ability 阻断、消息频道、状态机、UI 插槽、队伍/规则标记 | 低耦合、可配置、跨系统统一语言 | Tag 命名失控会变成字符串地狱；必须集中治理 | `Config/Tags`、代码中 native tag |
| GameplayMessage 发布订阅 | 击杀播报、UI 通知、低耦合跨模块语义事件、战报、提示 | 发布者不依赖订阅者，适合 UI/统计/播报/弱耦合事件 | 不适合核心高频规则或长期状态；调试链路更间接 | `GameplayMessageRouter`、tag channel、消息结构 |
| Delegate / Observer | 模块内部一对多通知、组件状态变化、Attribute 变化、UI controller 订阅 | 简洁直接，生命周期和类型明确 | 跨模块滥用会形成强依赖；忘记解绑会出问题 | ActorComponent、Subsystem、ASC delegate |
| Interface / Dependency Inversion | 交互目标、可伤害对象、平台服务适配、跨模块能力调用 | 调用方依赖能力而非具体类，适合替换实现 | 过多接口会降低可读性；接口不应隐藏复杂生命周期 | C++ Interface、Blueprint Interface、服务接口 |
| Facade / BBL 桥接 | 蓝图友好 API、编辑器/设计师入口、封装复杂 C++ 类型 | 保持蓝图易用，隔离底层复杂度 | 业务逻辑塞进 BBL 会破坏架构 | `Source/BBL` |
| UIExtension 插槽式 UI | 模式专属 HUD、插件化菜单、活动入口、动态 UI 区块 | GameFeature 可注册 UI，不需要全局 HUD 写死所有面板 | 插槽 Tag 和上下文管理需要规范 | `UIExtension`、`GameUI`、GameFeature UI |
| MVVM / Viewmodel UI | HUD 数值、背包列表、设置页、状态面板、低轮询 UI | Widget 与游戏域解耦，变量变化驱动刷新 | 小 UI 过度 Viewmodel 会增加文件数；同步链路需清晰 | `GameUI`、UMG、Viewmodel、UI controller |
| State Machine / GameplayTag State | 死亡/复活、武器状态、装备流程、Match Phase、AI 小状态 | 状态转换明确，可验证非法转换 | 状态太多会爆炸；不要把所有逻辑写成一个大状态机 | Component、GAS Tag、StateTree、Experience Phase |
| Behavior Tree / Blackboard | 传统 AI 行为、敌人巡逻、战斗决策 | UE 成熟工具链，设计师友好 | 大型行为树难维护；与 GAS/StateTree 混用需定边界 | AI 模块、GameFeature AI 内容 |
| StateTree | 任务/交互流程、AI 状态、SmartObject、模式阶段 | 比大行为树更结构化，适合状态+任务组合 | 需要团队熟悉工具；复杂数据绑定要谨慎 | GameFeature AI/Interaction 内容 |
| Strategy / Policy | 武器射击模式、伤害修正、掉落概率、寻路/选择策略 | 差异封装在策略对象或数据中，避免继承爆炸 | 策略粒度过细会抽象过度 | DataAsset、UObject policy、Component |
| Command / InputTag 驱动 | 输入动作、Ability 触发、菜单命令、可重绑定操作 | 输入、UI、Ability 可解耦，适合 CommonInput/EnhancedInput | 命令链路过长会难追踪 | InputConfig、InputTag、AbilitySet |
| Pipeline / Chain of Responsibility | 伤害计算、物品生成、数据校验、命中后处理、奖励结算 | 每步职责清晰，可插拔，可测试 | 过度链式会隐藏控制流；错误处理要统一 | ExecutionCalculation、Validator、Subsystem pipeline |
| Object Pool | 弹壳、命中特效、伤害数字、本地假投射物、大量短命对象 | 降低分配和 GC 抖动，适合高频短生命周期表现对象 | 复制 Actor 和复杂生命周期对象不宜盲目池化 | FX/Projectile/Widget Pool、本地表现组件 |
| Server Authority | 伤害、击杀、复活、背包、拾取、分数、交易 | 安全、可抗作弊、多人一致性好 | 需要预测和反馈补手感；服务器负载增加 | GameMode/GameState/PlayerState/GAS/Server RPC |
| Client Prediction + Server Validation | 射击、移动、短窗口命中、技能输入反馈 | 手感好，延迟隐藏，仍保留服务器最终权威 | 实现复杂，需要纠错和可重建数据 | GAS prediction、WeaponState、CharacterMovement |
| Replicated State / RepNotify | 血量、弹药、队伍、阶段、装备状态、UI 所需状态 | late join 可恢复，状态一致 | 复制过多会浪费带宽；不要用 RPC 当状态存储 | PlayerState、ActorComponent、FastArray |
| FastArray | 背包、装备栏、队伍成员、任务列表、可变集合 | 集合增删改复制高效，适合局部变化 | 实现细节比普通数组复杂；需要正确 dirty 标记 | Inventory/Equipment/Team collection |
| ReplicationGraph | 大地图、多玩家、大量 Actor、拾取物/投射物/AI 密集场景 | 降低服务器复制 CPU，按空间/规则裁剪 | 小项目过早引入会增加调试成本 | RepGraph 配置和节点 |
| SaveGame / Snapshot | 玩家存档、世界状态、设置、关卡元数据、自动保存 | 数据持久化清晰，便于版本化 | 需要版本迁移和引用稳定性；不要保存瞬时对象指针 | SaveGame 框架、ArchiveManager |
| Adapter / Platform Abstraction | Steam/在线服务、语音、平台成就、支付、文件系统 | 隔离平台差异，便于替换后端 | 包装层过薄没意义，过厚会阻碍平台能力 | Online/Steam/Voice 插件、接口+Subsystem |
| Editor Tool / DataValidation | 资产检查、批量修复、内容治理、CI 校验、MCP 工具 | 把规则前移到编辑器/CI，减少运行期错误 | 工具需维护；不要让 Editor 依赖进 Runtime | `OrionEditor`、插件 Editor 模块、DataValidation |
| Mass / ECS / Data-Oriented | 海量 AI、人群、远距离代理、批量传感器、环境仿真 | 数据局部性好，大规模批处理强 | 不适合替代主角、武器、GAS、动画和普通 Gameplay Framework | Mass 插件、专门仿真模块 |
| Layered / Clean Boundary | 大系统重构、跨模块业务、框架对外发布 | 依赖方向清晰，测试和替换更容易 | 在 UE 中过度纯化会和 UObject 生命周期冲突 | 接口、Subsystem、模块 Public/Private 边界 |

## 模式组合范例

| 功能原型 | 推荐组合 |
| --- | --- |
| 新射击武器 | DataAsset + Strategy/Policy + GAS Ability + WeaponState + Client Prediction + Server Validation + GameplayMessage/UI |
| 新玩法模式 | GameFeature + Experience + ActionSet + PawnData + AbilitySet + UIExtension + GameState replicated phase |
| 新 HUD 面板 | UIExtension + MVVM/Viewmodel + GameplayMessage/Delegate + CommonUI + InputTag command |
| 新背包物品 | DataAsset + Inventory Component + FastArray + GameplayTag + UI Viewmodel + Server Authority |
| 新交互物 | ActorComponent composition + Interface + Interaction AbilityTask + GameplayMessage + Server Authority |
| 新设置项 | GameSettings + LocalPlayer/UserSettings + Config layering + MVVM settings UI |
| 新队伍规则 | Team subsystem + GameplayTag + GAS damage filter + replicated PlayerState + UI message |
| 新 AI 敌人 | Gameplay Framework Pawn + ActorComponent + BehaviorTree/StateTree + GAS/Tag state + GameplayMessage |
| 新存档功能 | SaveGame/Snapshot + Subsystem service + DataAsset stable IDs + version migration |
| 大量拾取物/投射物优化 | Object Pool + ReplicationGraph + soft references + server authority |
| 新平台服务 | Adapter + Interface + Subsystem composition root + Config + platform plugin module |
| 编辑器资产检查 | Editor Tool + DataValidation + Pipeline + Asset Manager rules |

## 功能落点矩阵

| 用户需求 | 首选架构 | 典型落点 | 继续读取 |
| --- | --- | --- | --- |
| 新玩法模式、地图模式、训练模式、玩法包 | GameFeature + Experience + ActionSet | `Plugins/GameFeatures/<FeatureName>` | `orion-gamefeatures` |
| 新角色出生规则、默认 Pawn、模式装配 | Experience/PawnData/GameMode | `<GameModule>` 或 GameFeature 内容 | `orion-gamemode-experience-framework` |
| 新 Ability、技能消耗、伤害、死亡、属性 | GAS + GameplayTag + AttributeSet | `<GameModule>`、`AnimFramework` 或 GameFeature | `unreal-gameplayabilities` |
| 新武器、射击、换弹、命中验证 | DataAsset + Strategy + GAS + WeaponState + Server Authority | `AnimFramework`、背包/装备插件或 GameFeature | `orion-inventory-interaction-framework`、`unreal-gameplayabilities` |
| 新输入动作或按键绑定 | Command/InputTag + EnhancedInput/CommonInput | PawnData、GameFeature Input 内容、输入配置 | `orion-input-framework` |
| 新 HUD 面板、设置页、菜单、提示 | UIExtension + MVVM/Viewmodel + CommonUI | `GameUI`、`Content/UI`、GameFeature UI | `orion-umg`、`orion-ui-blueprint-framework` |
| 跨系统通知、击杀播报、UI 提示、弱耦合事件 | GameplayMessage 或 Delegate | 消息结构、GameplayTag channel、监听组件 | `orion-gameplay-message-router` |
| 需要长期保存的数据 | SaveGame/Snapshot + Subsystem | SaveGame 框架或 Settings 框架 | `orion-savegame-framework`、`orion-game-settings-framework` |
| 团队、敌友、伤害过滤 | Team subsystem + GameplayTag + GAS filter | Team 框架、GAS 过滤 | `orion-teams-framework` |
| 多人复制、RPC、专用服行为 | Server Authority + Replicated State + RPC | 当前模块或 GameFeature Runtime | `orion-network-replication-framework` |
| 大量 replicated actors | ReplicationGraph + spatial/rule nodes | RepGraph 配置和节点 | `unreal-replicationgraph` |
| 配置、平台覆盖、打包读取 | Config layering + Target/CustomConfig | `Config/Default*.ini`、平台 Config、CustomConfig | `orion-project-config`、`orion-packaging` |
| 编辑器批处理或资产校验 | Editor Tool + DataValidation + Pipeline | `<EditorModule>` 或插件 Editor 模块 | `orion-editor-extension-framework` |

## 根目录职责

| 目录 | 职责 |
| --- | --- |
| `Build` | 平台构建资源、应用图标、Pak 黑名单、文件打开顺序、平台 PipelineCaches。Windows 应用图标默认是 `Build/Windows/Application.ico`；替换各平台应用 Logo 时读取 `../orion-build-platform-icons/SKILL.md`。 |
| `CollectedPSOs` | PSO 收集输出和后续整理入口。正式 PSO 缓存也可能进入 `Build/<Platform>/PipelineCaches`。 |
| `Config` | 引擎、游戏、输入、GameplayTags、Scalability、Crypto、Niagara、平台覆盖、本地化 gather/import/export/compile 配置。 |
| `Content` | 正式资产根。只做顶层 taxonomy 判断，不为泛化任务深扫整个目录。 |
| `Plugins` | 框架插件、第三方插件、GameFeature 插件和可插拔系统。 |
| `Source` | C++ 模块和 Target 定义。先读 `*.Build.cs` 与 `*.Target.cs` 再判断依赖和构建目标。 |
| `.gitattributes` / `.gitignore` | Git LFS、忽略规则和 `Build` 内白名单。不要假设 `Build` 全部被忽略。 |

## Source 模块职责

| 层级 | 默认职责 |
| --- | --- |
| `GameCore` | 可复用运行时核心：角色/玩家/会话/设置/Experience/GameFeature 接口、消息、基础 UI 支撑、框架级 Gameplay 入口。默认 protected base layer，除非用户明确允许，否则不要新增或修改业务代码。 |
| `GameUI` | UI 框架：HUD、Frontend、Menu、Settings、Theme、UI Subsystem、CommonUI/UMG 基类和可复用控件。 |
| `AnimFramework` | 动画、第一人称、武器、相机、动画 Ability 辅助和角色表现框架。 |
| `BBL` | Blueprint Bridge Layer。只做蓝图友好的 facade、子类、桥接类型和暴露入口；不要把主要业务逻辑写在这里。 |
| `<GameModule>` | 宿主游戏特定运行时逻辑：游戏规则、具体角色、输入封装、存档、团队、渲染/平台集成和项目专属 UI glue。 |
| `<EditorModule>` | 编辑器扩展、EditorEngine、资产校验、模板、details customization、命令和编辑器-only 工具。 |

选模块前先回答：该能力是否应该被多个游戏复用？是否只服务当前宿主游戏？是否只在编辑器运行？是否只是为了让 Blueprint 能调用已有 C++？答案决定落点。

## Target 与构建变体

Target 文件在 `Source/*.Target.cs`。不要在 Skill 或脚本里写死具体 Target 名；从当前工程读取：

- `Game`：普通客户端/本地游戏目标。
- `Client`：网络客户端目标。
- `Server`：Dedicated Server 目标，重点检查 server-only 平台限制和 Shipping checks。
- `Editor`：编辑器目标，可以依赖 Editor 模块和 UnrealEd。
- `Steam` 或平台变体：通常通过 `CustomConfig`、`GlobalDefinitions` 或派生 Target 开启平台/渠道宏。

共享 Target 设置可能负责 IncludeOrder、DefaultBuildSettings、Shipping 日志/检查、禁止生成 ini、GameFeature 插件扫描和插件启停。改构建行为前必须读共享函数，不要只改单个 Target。

## 核心插件地图

| 插件或插件组 | 典型用途 |
| --- | --- |
| `CommonGame` / `CommonUser` / `CommonLoadingScreen` / `CommonInputSystem` | CommonGame 风格基础框架、用户、加载屏、输入设备和 UI 输入集成。 |
| `ModularGameplayActors` | 模块化 Actor/GameState/Controller/Component 扩展。 |
| `GameplayMessageRouter` | 基于 GameplayTag channel 的运行时消息总线、verb message、异步监听和 Blueprint 节点；具体收发、委托对比和网络桥接规则继续读取 `../orion-gameplay-message-router/SKILL.md`。 |
| `GameInventorySystem` / `InteractionSystem` | 交互目标、交互查询、交互 AbilityTask 和附近交互授权。 |
| `GameSettings` | 设置注册表、设置值、条件、数据源和设置 UI 支撑。 |
| `GameReplaysSystem` | 回放子系统和 replay 入口。 |
| `GameSubtitles` | 字幕显示、媒体字幕和 SubtitleDisplaySubsystem。 |
| `UIExtension` | UI extension point、动态注册和插槽式 UI 扩展。 |
| `OrionSteam` 相关模块 | Steam SDK、OnlineSubsystem、Sockets、WebAPI、shared types。按真实 `.uplugin` 和 `Build.cs` 确认模块名；实现或排查时继续读取 `../orion-online-steam-framework/SKILL.md`。 |
| `OrionVoiceChat` | 语音聊天运行时封装。 |
| `ProjectAcoustics` / `SteamAudio` | 空间音频、烘焙、spatializer 和音频插件集成。 |
| `DLSS` / `NIS` / `Streamline` | NVIDIA 图形增强、Reflex、DLSSG、Blueprint 支撑和 RHI/shader 模块。 |

第三方或平台插件如果同时有 Runtime、Editor、SDK、WebAPI、Sockets 子模块，新增依赖时只依赖所需层，不要把 Editor 或 WebAPI 依赖误加到普通 Runtime 模块。

## 代码落点决策

1. 可复用框架能力：优先确认是否已有 GameCore 抽象；不要默认修改 GameCore。需要框架级变更时先读取 `../orion-gamecore-framework/SKILL.md` 并等待用户明确允许。
2. 游戏特定规则、存档、团队、具体 pawn/player 行为：优先 `<GameModule>`，通常从对应派生层继续继承。
3. UI 基类、UI 子系统、通用控件、设置界面基础能力：优先 `GameUI`；具体 Widget 资产仍走 `Content/UI` 或 GameFeature `Content/UI`。
4. 动画、武器表现、第一人称表现、动画驱动 Ability 支撑：优先 `AnimFramework`。
5. 只是为了让 Blueprint 继承或调用已有 C++：放 `BBL`，并保持薄桥接。
6. 只在编辑器中使用：放 `<EditorModule>` 或插件 Editor 模块，并用 `WITH_EDITOR` 保护跨边界代码。
7. 某个独立玩法模式或 DLC 式玩法：放 `Plugins/GameFeatures/<FeatureName>`，代码和资产都走 GameFeature 生命周期。
8. 跨系统通信：先考虑 `GameplayMessageRouter` 或已有框架消息类型，不要直接做硬引用链；如果消息需要跨 server/client，继续读取 `../orion-gameplay-message-router/SKILL.md` 和复制相关 Skill。
9. 玩家设置：优先接入 `GameSettings` 和 UI 设置框架。
10. UI 插槽/插件化 UI：优先 `UIExtension`，不要在宿主 HUD 中写死所有 Widget。

## 资产与配置落点

资产命名和目录以 `../orion-asset-management/SKILL.md` 为准。架构层面只做入口判断：

- ProjectAcoustics 内容：`Content/Acoustics`。
- 音频 Blueprint、Sound、Cue、Attenuation、Mix：`Content/Audio`。
- Animation Sequence、Level Sequence、过场资产：`Content/Cinematics`。
- 主要 Gameplay 蓝图和玩法数据：`Content/GamePlay`。
- 基础 Gameplay Ability：`Content/GamePlay/AbilitySystem/Abilities`。
- 本地化：项目根 `Localization`，不要放进 `Content`。
- 视频源文件和 movie 资产：`Content/Movies`；`.bk2`、Bink、启动/加载屏视频、Media Framework 和 movie staging 继续读取 `../orion-movie-media-framework/SKILL.md`。
- 系统性、全局配置、框架运行时资产：`Content/System`。
- UI、UMG、CommonUI、Font、Brush、Style：`Content/UI`。
- 特定玩法：`Plugins/GameFeatures/<FeatureName>/Content/Experiences|Game|Player|System|UI`。

配置文件先查 `Config/Default*.ini` 和平台目录，例如 `Config/Windows`、`Config/Linux`、`Config/Android`。修改配置时确认是否应该是默认配置、平台覆盖、用户设置，还是插件自带 config。

## 通信与同步选择

| 场景 | 首选方式 | 避免 |
| --- | --- | --- |
| 稳定父子或持有关系 | 直接引用或组件查找 | 为简单一对一关系上消息总线 |
| 不关心具体类，只关心能力 | C++/Blueprint Interface | 到处 Cast 到具体类 |
| 模块内部一对多通知 | Delegate/Event Dispatcher | Widget 每帧轮询 |
| 跨模块语义事件 | GameplayMessage + GameplayTag channel | 用全局单例硬连所有系统 |
| 网络瞬时动作 | Server/Client/NetMulticast RPC | 用 RPC 同步长期状态 |
| 长期状态 | Replicated/RepNotify/FastArray | 用消息或 RPC 当状态存储 |
| 设计师扩展点 | BlueprintImplementableEvent、Anim Notify、GameplayCue | 在 C++ 写死所有表现 |

多人默认规则：

- 服务器拥有伤害、击杀、复活、背包权威、拾取授权和分数结算。
- 客户端可以预测输入反馈、瞄准表现、准星、枪口火焰、本地 hit marker，但必须能被服务器纠正。
- 复制最小必要状态，不复制能本地重建的纯表现。
- Owner-only 数据、观战数据、队伍可见性和专用服路径要在设计阶段说明。

## 验证清单

实现或生成代码前：

1. 已读 `.uproject` 或 `.uplugin`，确认插件启用状态。
2. 已读目标模块 `*.Build.cs`，确认依赖层级。
3. 已读相关 `*.Target.cs`，确认构建变体和共享设置。
4. 已按“架构模式总表”选出主模式和辅助模式。
5. 已用源码导航确认父类、生命周期和调用点。
6. 已按资产管理 Skill 校验新资产路径和命名。

实现后：

1. C++ 改动至少用对应 Editor/Game target 做一次构建提示或实际构建。
2. Server、Client、Steam、Editor-only 行为涉及变体时，分别确认宏、Target、插件和模块依赖。
3. Blueprint/UMG/MCP 资产创建后必须保存并验证 `.uasset` 落盘。
4. GameFeature 改动验证加载、激活、反激活、卸载和 cook/打包可见性。
5. 配置改动验证目标平台实际读取的 config 层级。

## 常见错误

### 把业务逻辑写进 BBL

现象：Blueprint bridge 类越来越厚，开始持有核心状态或复杂流程。

修复：把业务逻辑移到 `<GameModule>`、GameFeature 插件或相应领域模块；只有用户明确允许框架级改动时，才考虑修改 `GameCore`。BBL 只暴露继承点、函数入口或 Blueprint-friendly 类型。

### Editor 依赖进入 Runtime

现象：Runtime 模块依赖 `UnrealEd`、Editor-only 类或编辑器插件，导致 Game/Server 构建失败。

修复：移动到 `<EditorModule>` 或插件 Editor 模块；共享类型放 Runtime，编辑器操作放 Editor，并使用 `WITH_EDITOR` 保护必要声明。

### GameFeature 内容散落到全局 Content

现象：某个玩法的 UI、Ability、Experience 或 Actor 放进全局 `Content/GamePlay`，导致玩法难以拆分。

修复：玩法特定内容放 `Plugins/GameFeatures/<FeatureName>/Content` 固定子目录；只有框架基础资产留在全局 Content。

### 只看源码目录不看 Target

现象：在 Editor 里可编译，但 Client/Server/Steam 变体失败。

修复：先读共享 Target 设置和派生 Target；涉及平台、OnlineSubsystem、Steam、Server-only 或 Shipping 行为时，用对应目标验证。

### 巨型管理器

现象：CombatManager、GameManager 或 WeaponManager 持有所有规则、UI、网络、音效和资源。

修复：按生命周期拆到 GameMode/GameState/PlayerState/Pawn/Component，规则进 GAS，服务进 Subsystem，跨模块语义用 GameplayMessage。

### 客户端权威伤害

现象：客户端 trace 到目标后直接扣血或判定击杀。

修复：客户端只做反馈和预测；服务器重建或验证 TargetData 后应用 GameplayEffect 或权威规则。

### 过早上 Mass/ECS

现象：为了“统一架构”把角色、武器、Ability、动画全部改成 ECS。

修复：主角、武器、GAS、动画保持 Gameplay Framework；Mass 只用于海量同构实体、远距离简化代理、AI 群体或批处理仿真。

## 官方资料

优先使用这些 Epic 官方资料校正架构判断：

- [Lyra Sample Game](https://dev.epicgames.com/documentation/en-us/unreal-engine/lyra-sample-game-in-unreal-engine)
- [Game Features and Modular Gameplay](https://dev.epicgames.com/documentation/en-us/unreal-engine/game-features-and-modular-gameplay-in-unreal-engine)
- [Gameplay Ability System](https://dev.epicgames.com/documentation/en-us/unreal-engine/gameplay-ability-system-for-unreal-engine)
- [Gameplay Framework](https://dev.epicgames.com/documentation/en-us/unreal-engine/gameplay-framework-in-unreal-engine)
- [Programming Subsystems](https://dev.epicgames.com/documentation/en-us/unreal-engine/programming-subsystems-in-unreal-engine)
- [Networking Overview](https://dev.epicgames.com/documentation/en-us/unreal-engine/networking-overview-for-unreal-engine)
- [Replication Graph](https://dev.epicgames.com/documentation/en-us/unreal-engine/replication-graph-in-unreal-engine)
- [Asset Management](https://dev.epicgames.com/documentation/en-us/unreal-engine/asset-management-in-unreal-engine)
- [UMG Viewmodel](https://dev.epicgames.com/documentation/en-us/unreal-engine/umg-viewmodel-for-unreal-engine)
