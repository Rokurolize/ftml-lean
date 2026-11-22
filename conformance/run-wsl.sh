#!/bin/sh
# WSL side of the G1.1 conformance run. Executed by run.sh via wsl-ssh.
# Working directory: ~/.local/state/wikijump/muse-bhl/lean-ftml-conformance
# (synced from ~/workspace/ftml-lean-equivalence on the Muse VM).
set -eu
cd "$HOME/.local/state/wikijump/muse-bhl/lean-ftml-conformance"
export PATH="$HOME/.elan/bin:$HOME/.cargo/bin:$PATH"
MAXLEN="${1:-5}"

echo "== build rust dumper (real ftml process_depths) =="
~/.local/state/wikijump/muse-bhl/tools/heavy-build.sh \
  cargo build --release --manifest-path rust-dumper/Cargo.toml 2>&1 | tail -n 2

echo "== build lean conformance exe (model) =="
(cd lean-ftml && lake build lean-ftml-conformance 2>&1 | tail -n 2)

echo "== generate inputs (box length <= $MAXLEN + 20000 LCG cases) =="
python3 gen_inputs.py "$MAXLEN" > inputs.txt
wc -l inputs.txt
sha256sum inputs.txt

echo "== run both =="
./rust-dumper/target/release/lean-ftml-depth-dumper inputs.txt out-rust.txt
./lean-ftml/.lake/build/bin/lean-ftml-conformance inputs.txt out-lean.txt
wc -l out-rust.txt out-lean.txt

echo "== compare =="
if cmp -s out-rust.txt out-lean.txt; then
  echo "CONFORMANCE MATCH: $(wc -l < out-rust.txt) cases, outputs identical"
else
  echo "CONFORMANCE MISMATCH (first 5 differing lines):"
  diff out-rust.txt out-lean.txt | head -n 20 || true
  exit 1
fi
