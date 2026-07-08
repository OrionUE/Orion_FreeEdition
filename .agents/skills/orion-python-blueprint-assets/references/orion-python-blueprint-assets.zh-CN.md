# UnrealEditor-Cmd Python 创建蓝图资产流程

## 适用场景

- UE MCP 返回 HTTP 502、未启动或工具 schema 不足以创建/保存资产。
- 需要创建普通 Blueprint、DataAsset、Widget Blueprint 或配置 Blueprint CDO 默认值。
- 需要在无可见编辑器窗口的情况下保存 `.uasset`，并从日志验证结果。

## 命令模板

```powershell
cmd.exe /d /s /c ""<EngineRoot>\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" "<ProjectRoot>\<Project>.uproject" -run=pythonscript -script="<ProjectRoot>\Saved\OrionUE\Agents\<script>.py" -unattended -nop4 -nosplash -NullRHI -NoSound -NoLiveCoding"
```

说明：

- `<EngineRoot>` 从 `.uproject` 的 `EngineAssociation` 和 `HKCU\Software\Epic Games\Unreal Engine\Builds` 解析。
- 临时脚本放 `Saved/OrionUE/Agents`；这是项目约定的 Agents 缓存区。
- `-NullRHI -NoSound` 适合只做资产写入；需要截图或 Slate 交互时不要用隐藏/NullRHI。

## Python 脚本要点

### 创建 Blueprint 子类

```python
import unreal

asset_dir = "/Game/UI/Foundation/Popups"
asset_name = "BP_StartupAdPopup"
asset_path = asset_dir + "/" + asset_name
parent_class = unreal.load_class(None, "/Script/GameUI.GameUIHtmlPopupDefinition")

unreal.EditorAssetLibrary.make_directory(asset_dir)

if unreal.EditorAssetLibrary.does_asset_exist(asset_path):
	blueprint = unreal.EditorAssetLibrary.load_asset(asset_path)
else:
	factory = unreal.BlueprintFactory()
	factory.set_editor_property("parent_class", parent_class)
	asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
	blueprint = asset_tools.create_asset(asset_name, asset_dir, unreal.Blueprint, factory)
```

不要直接对不存在资产调用 `load_asset`；它会向日志写 `LogEditorAssetSubsystem: Error`，命令行验证会被污染。

### 获取 GeneratedClass

UE Python 绑定会随版本或加载状态变化，`generated_class` 可能是 editor property，也可能是方法：

```python
def get_blueprint_generated_class(blueprint):
	try:
		generated_class = blueprint.get_editor_property("generated_class")
		if generated_class:
			return generated_class
	except Exception:
		pass

	generated_class = getattr(blueprint, "generated_class", None)
	if callable(generated_class):
		generated_class = generated_class()

	return generated_class
```

本项目里把 `blueprint.generated_class` 当普通属性传给 `unreal.get_default_object` 会报：

```text
TypeError: NativizeClass: Cannot nativize 'builtin_function_or_method_with_closure' as 'Class'
```

### 编译 Blueprint

不要假设 `unreal.KismetCompilerLibrary` 一定存在。优先尝试这些入口：

```python
def compile_blueprint_if_available(blueprint):
	for library_name in ("BlueprintEditorLibrary", "KismetCompilerLibrary", "KismetEditorUtilities"):
		library = getattr(unreal, library_name, None)
		if not library:
			continue

		compile_blueprint = getattr(library, "compile_blueprint", None)
		if not compile_blueprint:
			continue

		compile_blueprint(blueprint)
		unreal.log("已通过 " + library_name + ".compile_blueprint 编译蓝图")
		return True

	unreal.log_warning("当前 UE Python 环境没有可用的 Blueprint 编译入口，将直接保存蓝图")
	return False
```

本项目 UE 5.8 命令行环境已验证可用的是 `BlueprintEditorLibrary.compile_blueprint`。

### 设置 CDO 默认值

属性名优先用 Python snake_case，布尔变量通常会去掉 `b` 前缀。为了跨版本稳妥，可以用候选属性名：

```python
def set_first_property(obj, names, value):
	for name in names:
		try:
			obj.set_editor_property(name, value)
			return name
		except Exception:
			pass

	raise RuntimeError("无法设置属性: " + ", ".join(names))

cdo = unreal.get_default_object(get_blueprint_generated_class(blueprint))
set_first_property(cdo, ("enabled", "b_enabled", "bEnabled"), True)
set_first_property(cdo, ("popup_contexts", "PopupContexts"), [unreal.Name("Startup")])
set_first_property(cdo, ("popup_group", "PopupGroup"), unreal.Name("StartupAdvertisement"))
set_first_property(cdo, ("html_url", "HtmlURL", "htmlURL"), "https://orionue.com")
```

枚举名也可能被 Python 改写。先探测再使用：

```python
for name in ("HTML_URL", "HTMLURL", "HtmlUrl"):
	if hasattr(unreal.GameUIPopupContentKind, name):
		content_kind = getattr(unreal.GameUIPopupContentKind, name)
		break
```

## 保存和验证

保存：

```python
compile_blueprint_if_available(blueprint)
if not unreal.EditorAssetLibrary.save_loaded_asset(blueprint):
	raise RuntimeError("保存蓝图失败: " + asset_path)
```

命令行输出必须包含：

- `LogBlueprint: Compiling Blueprint '/Game/...`
- `LogFileHelpers: Saving Package: /Game/...`
- `LogPythonScriptCommandlet: Display: Python script executed successfully`
- `Success - 0 error(s)`

本地文件验证：

```powershell
Get-Item -LiteralPath Content\UI\Foundation\Popups\BP_StartupAdPopup.uasset
rg -n "BP_StartupAdPopup|Saving Package|Python script executed successfully" Saved\Logs -g "*.log"
rg -a -n "StartupAdvertisement|https://orionue.com" Content\UI\Foundation\Popups\BP_StartupAdPopup.uasset
```

`rg -a` 只能证明字符串已写入包，不替代编辑器加载验证；如果资产类型、父类或 CDO 值高风险，继续用 Python commandlet 重新 `load_asset` 并读取 CDO。
不要在验证脚本里假设普通 `Blueprint` 一定暴露 `parent_class` editor property；UE Python 可能报 `Failed to find property 'parent_class' for attribute 'parent_class' on 'Blueprint'`。验证父类时优先通过 GeneratedClass/CDO 的新字段可读性、`NativeParentClass` 二进制字符串、或可用的 Blueprint editor API 间接确认。

## 常见失败

### MCP HTTP 502

现象：`mcp__unreal_mcp.list_toolsets` 返回 HTTP 502。

处理：不要继续猜工具 schema。改用本命令行 Python 流程，完成后把失败和兜底命令记录到本 Skill 或具体领域 Skill。

### generated_class 方法/属性差异

现象：`blueprint.generated_class` 传入 `get_default_object` 后报 `builtin_function_or_method_with_closure`。

处理：用 `get_editor_property("generated_class")` 优先，失败后判断 `generated_class` 是否 callable 并调用。

### KismetCompilerLibrary 缺失

现象：`AttributeError: module 'unreal' has no attribute 'KismetCompilerLibrary'`。

处理：尝试 `BlueprintEditorLibrary.compile_blueprint`。本项目这一路径已验证可以编译并保存 Blueprint。

### Blueprint parent_class 读取失败

现象：验证脚本调用 `blueprint.get_editor_property("parent_class")`，报 `Failed to find property 'parent_class' for attribute 'parent_class' on 'Blueprint'`。

原因：UE Python 的 `Blueprint` 对象可以用 factory 或 `BlueprintEditorLibrary.reparent_blueprint` 设置父类，但不保证把 `parent_class` 作为可读 editor property 暴露。

处理：重设父类优先用 `BlueprintEditorLibrary.reparent_blueprint(blueprint, parent_class)`；验证时先读取 `generated_class` 和 CDO 上新父类才有的属性，或用 `rg -a` 查 `.uasset` 中的 `NativeParentClass` / 父类名字符串。

验证：只读 commandlet 能 `load_asset`、读取 GeneratedClass、读取 CDO 的目标属性，并输出 `Python script executed successfully`。

### 命令行加载会产生无关资产 warning

现象：启动日志里出现动画蓝图、静态网格、AbilitySystem 等历史 warning。

处理：只要 `Warning/Error Summary` 里是 `Success - 0 error(s)`，且目标资产保存日志存在，这些无关 warning 不阻塞当前资产创建。不要顺手修无关资产。
