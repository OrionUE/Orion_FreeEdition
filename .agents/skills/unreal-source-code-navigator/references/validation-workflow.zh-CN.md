# 验证工作流

验证目标是确认代码在当前 UE 版本、当前模块和当前平台下成立。

## 构建

- 先构建最小相关 Target 或模块，不要直接扩大到全项目。
- 修改反射声明后必须触发 UHT。
- 修改 Build.cs 后必须重新构建目标模块。
- Editor 代码和 Runtime 代码要分别验证模块边界。

## 命令提示

用 `build_command_hint.py` 生成建议命令，再按本机实际路径执行。

```bash
python scripts/build_command_hint.py --root <ProjectRoot> --target <TargetName> --config Development
```

## 日志

- 编译错误：优先处理第一个真实 C++ 或 UHT 错误。
- 链接错误：通常检查模块依赖、导出宏、未实现函数。
- 运行时错误：查日志里的类名、模块名、对象路径和 subsystem 初始化顺序。

## 降级处理

- 找不到 `<EngineRoot>` 时，只分析项目和插件源码，并明确说明缺少引擎源码限制。
- 没有 `rg` 时，脚本会使用 Python 遍历，速度较慢。
- 只有 `.uplugin` 没有 `.uproject` 时，以插件根和插件模块为上下文。
