#!/usr/bin/env sh
set -eu

SCRIPT_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
COMMAND=${1:-}
if [ -z "$COMMAND" ]; then
	echo "Usage: run.sh <context|search|class|module|delegate|build> [args...]" >&2
	exit 2
fi
shift

case "$COMMAND" in
	context) SCRIPT="find_unreal_context.py" ;;
	search) SCRIPT="search_unreal_symbol.py" ;;
	class) SCRIPT="inspect_unreal_class.py" ;;
	module) SCRIPT="inspect_unreal_module.py" ;;
	delegate) SCRIPT="inspect_unreal_delegate.py" ;;
	build) SCRIPT="build_command_hint.py" ;;
	*)
		echo "Unknown command '$COMMAND'." >&2
		exit 2
		;;
esac

if command -v python3 >/dev/null 2>&1; then
	PYTHON=python3
elif command -v python >/dev/null 2>&1; then
	PYTHON=python
else
	echo "Python 3.10+ was not found on PATH." >&2
	exit 127
fi

exec "$PYTHON" "$SCRIPT_DIR/$SCRIPT" "$@"
