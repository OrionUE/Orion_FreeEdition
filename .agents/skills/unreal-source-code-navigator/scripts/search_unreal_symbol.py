from __future__ import annotations

import argparse

from unreal_nav_common import collect_roots, print_records, search


def main() -> int:
	parser = argparse.ArgumentParser(description="Search Unreal project, plugin, and engine source for a symbol or regex.")
	parser.add_argument("symbol", help="Symbol, function, macro, delegate, or regex to search for.")
	parser.add_argument("--root", action="append", help="Root to search. Can be passed multiple times.")
	parser.add_argument("--engine-root", default=None, help="Optional Unreal Engine root to include.")
	parser.add_argument("--regex", action="store_true", help="Treat symbol as a regular expression.")
	parser.add_argument("--limit", type=int, default=50, help="Maximum matches to print.")
	parser.add_argument("--json", action="store_true", help="Output machine-readable JSON.")
	args = parser.parse_args()

	roots = collect_roots(args.root, args.engine_root)
	records = search(args.symbol, roots, regex=args.regex, limit=args.limit)
	print_records(records, json_output=args.json)
	return 0 if records else 1


if __name__ == "__main__":
	raise SystemExit(main())
