# BRIEF-G12 — Lean proof of block-end closer equivalence (gap G1.2)

You are an OpenCode TUI lane in herdr working on the ftml Lean equivalence loop. Your working directory is your lane dir: `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-g12/` It contains a copy of the Lean project `lean-ftml/` (Lean 4.36.0; G1.1 process_depths is already PROVEN in `lean-ftml/LeanFtml/Depth.lean` — read it first as the house style: model the Rust machine faithfully, prove for ALL inputs, no `sorry`, conformance against the real Rust).

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## The claim to prove (G1.2)

ftml's paired blocks (`[[code]]`, `[[math]]`, `[[footnote]]`, `[[collapsible]]`, `[[bibliography]]`) scan forward for their closer. The verify-block-end harness (in the ftml repo, read-only, at `/home/roku/src/Rokurolize/ftml`, HEAD 8cb2757c2) establishes on a bounded grid (~1,980 parses: 5 block types x 4 contexts x 7 bodies x 5 blank variants x 3 line endings):

- P0 recognition: with a closer followed only by spaces/tabs to end of line, the block is parsed as a block, as with a bare closer.
- P1 termination: text after such a closer is never inside the block.
- P2 closer equivalence: the parse summary equals the bare-closer summary.
- P3 pairing: for `OPEN A OPEN B CLOSE C CLOSE D`, the nesting depths match `/home/roku/src/Rokurolize/ftml/verification/block-end/recorded-pairing.txt` (read the file itself; do not assume a row count).

Lift these to Lean, for all inputs at the model's level of abstraction:

1. Model the closer scan in a new file `lean-ftml/LeanFtml/BlockEnd.lean`: a closer token followed by any string of spaces/tabs (including empty) and then end-of-line is accepted exactly as the bare closer is, and anything else after the closer token is not that closer. Prove P2 as a theorem (scan outcome with blank-suffixed closer = scan outcome with bare closer, for every blank string), and P1 as a theorem (the scan's remainder begins exactly after the accepted closer line; following text is outside the block).
2. Model each block type's nested-pairing discipline as the Rust actually implements it (derive it from source, see below; the recorded file's comments name the mechanisms: code is nesting-aware with the outer block taking the last closer, math counts nested openers, collapsible closes at the first closer leaving the inner opener literal — check footnote and bibliography in source too). Prove that the model reproduces every row of recorded-pairing.txt for the OPEN A OPEN B CLOSE C CLOSE D shape.
3. P0 follows from P2 in the model; say so in the file header rather than proving a duplicate.

## Evidence and source discipline

- Read first: `/home/roku/src/Rokurolize/ftml/.claude/skills/verify-block-end/SKILL.md`, `/home/roku/src/Rokurolize/ftml/src/block_end_closers.rs`, `/home/roku/src/Rokurolize/ftml/verification/block-end/recorded-pairing.txt`, and the closer logic in `/home/roku/src/Rokurolize/ftml/src/parsing/rule/impls/block/parser.rs` (`verify_end_block`, `get_body_generic`) and `/home/roku/src/Rokurolize/ftml/src/wikidot_code.rs`.
- The ftml repo is READ-ONLY for you: do not edit, commit, or stash anything there. Live Wikidot behavior is definitionally correct; the recorded pairing file is live-evidence-bound — a mismatch between your model and the record means your model is wrong, never edit the record.
- Every spec rule in BlockEnd.lean carries a comment citing its evidence (harness property, recorded row, or source location).

## Conformance (bridge A, same shape as G1.1)

A proof alone does not close the gap; the model must be checked against the real Rust. In the lane dir, build `conformance-g12/` in the shape of the G1.1 harness, a copy of which sits beside your project at `conformance/` in the lane dir (read its README.md first; the Lean driver pattern is `lean-ftml/Conformance.lean`): an executable Lean driver for your BlockEnd model run over the abstract grid (5 block types x the recorded pairing shapes x blank variants `""`, `" "`, `"\t"`, `"  "`, `" \t"`, `"\t "` x line endings), plus the real-Rust side evidence: run `verification/block-end/run.sh` in the ftml repo (cargo ONLY through `/home/roku/.local/state/wikijump/muse-bhl/tools/heavy-build.sh` with `HEAVY_BUILD_NO_SPLIT=1` in the environment of the cargo invocation — the script calls cargo itself, so wrap the whole script call: `HEAVY_BUILD_NO_SPLIT=1 /home/roku/.local/state/wikijump/muse-bhl/tools/heavy-build.sh bash verification/block-end/run.sh`) and record its verdict. Write counts and the verdict into `conformance-g12/RESULTS.md`. A model/Rust mismatch invalidates the model, not the proof.

## Acceptance gates (all required)

- `cd lean-ftml && lake build` is green.
- No `sorry` anywhere: `grep -rn sorry lean-ftml/LeanFtml/ lean-ftml/*.lean` returns nothing (the word inside comments explaining absence is fine — remove ambiguity by not writing it at all).
- `#print axioms` for the new main theorems, recorded in the report (G1.1 audited as [propext, Classical.choice, Quot.sound]; match or better that, and name any extra axiom).
- Deliverable report at lane-dir root: `REPORT-G12.md`, whose LAST non-empty line is exactly `COMPLETE` or `BLOCKED: <one-line reason>`. The report states: the model design and where each pairing discipline came from in source, theorem names, build result, axiom audit, conformance counts and the run.sh verdict, and the vehicle note "vehicle: OpenCode TUI (herdr), opencode/deepseek-v4.1-flash-free".

## Vehicle and limits (owner order 2026-11-20)

- You run on the persisted TUI model setting; never pass `--model` to opencode and never switch models. If you hit a 429 / usage-limit / rate-limit banner, stop work, write REPORT-G12.md ending with `BLOCKED: usage limit` and end your turn. The coordinator will resume the work on the fallback vehicle; do not route around the limit.
- No commits are required; leave all files in the lane dir. If you do commit anything anywhere, never set repo-local `user.name`/`user.email`, `GIT_AUTHOR_*`/`GIT_COMMITTER_*` env, or `-c user.*` overrides; the WSL global identity (Rokurolize <1701388+Rokurolize@users.noreply.github.com>) is the only identity.
- Do not touch the ftml checkout, the specimens workspace, or any other lane's directory.
