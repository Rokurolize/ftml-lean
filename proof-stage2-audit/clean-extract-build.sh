#!/usr/bin/env bash
# Stage 2 clean-extraction build gate: archives the committed tree, removes build caches, builds from source only.
# Usage: clean-extract-build.sh [ref]   (ref defaults to HEAD; a branch name or commit is accepted)
# Refuses to run when the worktree has any uncommitted or untracked file that git archive would silently omit.
set -uo pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(git -C "$SCRIPT_DIR/.." rev-parse --show-toplevel)" || exit 2
AUDIT="$SCRIPT_DIR"
WRAPPER="$HOME/.local/state/wikijump/muse-bhl/tools/lean-build.sh"
LOG="$AUDIT/clean-extract-build.log"

if [ "$#" -gt 1 ]; then echo "usage: clean-extract-build.sh [ref]" >&2; exit 2; fi
REF="${1:-HEAD}"
if [ ! -f "$WRAPPER" ]; then echo "DRIFT wrapper missing: $WRAPPER" >&2; exit 2; fi
COMMIT="$(git -C "$ROOT" rev-parse --verify "${REF}^{commit}")" || { echo "DRIFT not a commit: $REF" >&2; exit 2; }

DIRTY="$(git -C "$ROOT" status --porcelain=v1 --untracked-files=all)"
if [ -n "$DIRTY" ]; then
  echo "REFUSING: worktree has uncommitted changes that git archive would silently omit:" >&2
  echo "$DIRTY" >&2
  echo "Commit or stash everything (including proof-stage2-audit scripts and .gitignore) and rerun." >&2
  exit 2
fi

EXTRACT="$(mktemp -d "$AUDIT/fresh-extract-XXXXXX")" || exit 2
: > "$LOG" || exit 2
{
  echo "===== clean-extract-build ref=$REF commit=$COMMIT extract=$EXTRACT ====="
  echo "===== worktree clean: git status empty ====="
} >> "$LOG"

if ! git -C "$ROOT" archive "$COMMIT" | tar -x -C "$EXTRACT" >> "$LOG" 2>&1; then
  echo "DRIFT git archive or extraction failed (see $LOG)" >&2
  exit 1
fi
echo "===== archive extracted =====" >> "$LOG"

if [ ! -f "$EXTRACT/lean-ftml/lakefile.toml" ]; then
  echo "DRIFT no lean-ftml/lakefile.toml in archive $COMMIT" >&2
  exit 1
fi

CACHED_DIRS="$(find "$EXTRACT" -type d -name .lake -print)"
if [ -n "$CACHED_DIRS" ]; then
  echo "NOTICE: archive contains committed .lake caches; stripping them before build:" >> "$LOG"
  echo "$CACHED_DIRS" >> "$LOG"
  while IFS= read -r cached; do [ -n "$cached" ] && rm -rf -- "$cached"; done <<< "$CACHED_DIRS"
fi

STALE="$(find "$EXTRACT" \( \( -type d -name .lake \) -o \( -type f \( -name '*.olean' -o -name '*.ilean' -o -name '*.trace' \) \) \) -print)"
if [ -n "$STALE" ]; then
  echo "DRIFT stale build inputs survived extraction:" >&2
  echo "$STALE" >&2
  exit 1
fi
echo "===== verified: no .lake directory and no *.olean/*.ilean/*.trace in extraction =====" >> "$LOG"

echo "===== full Lean build via wrapper, workdir $EXTRACT/lean-ftml =====" >> "$LOG"
"$WRAPPER" "$EXTRACT/lean-ftml" lake build >> "$LOG" 2>&1
BUILD_ST=$?
echo "===== BUILD EXIT=$BUILD_ST =====" >> "$LOG"
echo "CLEAN-EXTRACT-BUILD EXIT=$BUILD_ST"
echo "CLEAN-EXTRACT-BUILD LOG=$LOG"
echo "CLEAN-EXTRACT-BUILD TREE=$EXTRACT"
exit "$BUILD_ST"
