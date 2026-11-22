#!/bin/sh
# G1.1 conformance run, driven from the Muse VM.
# Usage: ./run.sh [MAXLEN]   (default 5; 6 reproduces the ftml harness's
# full bounded box of 3,257,437 cases and takes correspondingly longer)
set -eu
MAXLEN="${1:-5}"
HERE="$(cd "$(dirname "$0")" && pwd)"
ROOT="$(dirname "$HERE")"
WSL_SSH="$HOME/workspace/native-stack/bin/wsl-ssh.sh"
REMOTE_DIR='.local/state/wikijump/muse-bhl/lean-ftml-conformance'

echo "== VM: build canonical lean project (proofs + conformance exe) =="
export PATH="$HOME/.elan/bin:$PATH"
(cd "$ROOT/lean-ftml" && lake build 2>&1 | tail -n 2 && lake build lean-ftml-conformance 2>&1 | tail -n 2)

echo "== sync sources to WSL =="
"$WSL_SSH" "mkdir -p ~/$REMOTE_DIR/lean-ftml/LeanFtml ~/$REMOTE_DIR/rust-dumper/src"
for f in "$ROOT"/lean-ftml/LeanFtml/*.lean "$ROOT"/lean-ftml/*.lean \
         "$ROOT"/lean-ftml/lakefile.toml "$ROOT"/lean-ftml/lean-toolchain; do
  rel="${f#"$ROOT"/lean-ftml/}"
  "$WSL_SSH" "cat > ~/$REMOTE_DIR/lean-ftml/$rel" < "$f"
done
for f in "$HERE/gen_inputs.py" "$HERE/run-wsl.sh"; do
  "$WSL_SSH" "cat > ~/$REMOTE_DIR/$(basename "$f")" < "$f"
done
"$WSL_SSH" "cat > ~/$REMOTE_DIR/rust-dumper/Cargo.toml" < "$HERE/rust-dumper/Cargo.toml"
"$WSL_SSH" "cat > ~/$REMOTE_DIR/rust-dumper/src/main.rs" < "$HERE/rust-dumper/src/main.rs"
"$WSL_SSH" "chmod +x ~/$REMOTE_DIR/run-wsl.sh"

echo "== WSL: build, generate, run, compare =="
"$WSL_SSH" "sh ~/$REMOTE_DIR/run-wsl.sh $MAXLEN"
