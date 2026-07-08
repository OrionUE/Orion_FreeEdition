# AGENTS.md instructions

## 智能处理

1. 每次回答或思考时，先查看有没有可用的 Plugin 或 Skill 可以调用；有的话自动调用处理。
2. `Saved/OrionUE` 是存放Agents缓存、日志、记录的文件夹

## 游戏架构强制规则

1. 用户要求写代码、改代码、修代码、重构代码、审查代码、写功能、加系统、做玩法、改架构、实现 Gameplay、生成 C++、生成 Blueprint 相关逻辑、修改 Blueprint-facing API 或调整配置驱动逻辑前，必须先读取并遵守 `.agents/skills/orion-framework-architecture/SKILL.md`。
2. 不管是新增代码还是修改既有代码，都必须先完成抽象架构分析，再开始编辑代码、蓝图相关逻辑、资产或配置；禁止先动手改文件再补架构说明。
3. 实现前必须以大厂高级游戏程序架构师的视角，先把用户的自然语言需求转化为架构分析，并先写出架构分析摘要，至少覆盖：需求语义、核心用例、模块或插件归属、领域抽象、架构模式、扩展点、数据/资产、通信方式、网络权威和验证目标。
4. 架构分析必须体现解耦、可扩展、抽象和可替换策略；禁止直接按当前场景写流程化函数、临时管理器或场景专用类型，例如把“启动弹窗”直接实现成 `ShowStartupPopups` 或 `UStartupPopupDefinition` 这类不可扩展命名。必须先抽象通用能力，再用上下文、策略、Provider、Definition 子类或数据配置表达具体场景。
5. 新增或修改任何 C++ 类、接口、Subsystem、Component、DataAsset、Definition、Policy、Provider、Presenter、Flow Action 或 Blueprint 父类前，必须先判断它是“通用领域能力抽象”还是“某个场景的具体实现”。能被多个系统复用的类名不能携带当前页面、当前时机或当前业务场景；例如通用流程动作必须抽象为 `UOrionFlowAction`，具体前端弹窗才命名为 `UGameUIFrontendPopupFlowAction`。
6. 实现前必须先选择一个或多个架构模式，并判断代码/资产/配置落点、模块或插件归属、通信方式、网络权威、数据资产和验证目标；不能直接把功能写进当前文件或临时管理器。
7. 如果该 Skill 路由到更具体的领域 Skill，例如 GameFeature、GAS、输入、UI、网络复制、资产管理或源码导航，必须继续读取对应 Skill 后再改代码。

## 代码格式强制规则

1. 修改、创建、重构、格式化或审查任何代码文件前，必须先读取并遵守 `.agents/skills/orion-code-style/SKILL.md`。
2. 代码文件包括但不限于 `.h`、`.cpp`、`.Build.cs`、`.Target.cs`、`.cs`、`.ini`、`.uproject`、`.uplugin`、脚本和其他项目源码文本文件。
3. 改完代码后，必须对本次 touched code files 运行 `.agents/skills/orion-code-style/scripts/check-code-style.ps1`。
4. 如果校验脚本发现问题，必须修复后重新运行，直到通过；如果某类文件不适用该脚本，必须在最终回复中明确说明未校验原因。

## 功能使用说明强制规则

1. 写完功能代码、系统代码、Gameplay 逻辑、GameUI 逻辑、Blueprint-facing API 或配置驱动功能后，必须同步编写该功能的使用说明。
2. 使用说明保存到该功能代码文件夹目录，文件名使用英文或拼音短横线命名，内容使用简体中文。
3. 使用说明至少覆盖：功能入口、可创建哪些蓝图或数据资产、父类选择、关键属性如何配置、配置文件入口、运行时触发方式、验证步骤和常见扩展点。
4. 如果本次只做纯分析、代码审查、构建验证或无功能落地的临时排查，可以在最终回复中说明不生成使用说明的原因。

## 生成文件格式

Windows 操作系统下生成的代码文件必须是 CRLF 格式，不要 LF 格式。
