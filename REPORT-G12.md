# REPORT-G12 — block-end closer equivalence (gap G1.2)

## Vehicle

Dispatched 2026-11-20 to an OpenCode TUI lane in herdr (agent `lean-g12-blockend`, workspace wFF) on opencode/deepseek-v4.1-flash-free per the owner's vehicle order. The lane hit the provider's daily free limit mid-turn ("Free limit reached — You've used today's free messages. Resets at 9:51 AM", pane-verified 03:35 JST) after ~9 minutes, having produced no deliverable files and no report.

Completed by the fallback vehicle from the same owner order: Muse coding directly in the Muse VM, with the WSL side used for lake builds and verification. All results below were verified firsthand by the coordinator on both machines.

vehicle: Muse direct in the Muse VM (fallback vehicle 2), after the OpenCode TUI lane (vehicle 1) stopped on the free usage limit.

## Model design

`lean-ftml/LeanFtml/BlockEnd.lean` (501 lines). The body scan of a paired block is modelled as a walk over a stream of items: openers and closers of the five harness block types (a closer carries the suffix characters that follow it on its line) and opaque text markers. A closer is accepted exactly when its suffix is all spaces/tabs (the end-follower gate in `verify_end_block` / `wikidot_code.rs`). Two scan functions implement the pairing disciplines, dispatched per type by `discipline`:

- counting (code, math): nested same-type openers raise a count; an accepted closer lowers it and ends the block only at zero; an inner accepted closer is recorded in the body in bare form.
- firstCloser (collapsible, footnote, bibliography): the first accepted closer ends the block; nested openers are literal body.

Provenance per discipline: code counting from recorded-pairing.txt's comment ("nesting-aware, the outer block takes the last closer"); math counting from the `nested_wikidot_math` counter in `get_body_generic` (parser.rs ~4781-4870 at 8cb2757c2); collapsible first-closer from the recorded comment; footnote and bibliography first-closer because no same-type counting exists for them in source (bibliography's nested handling in blocks/bibliography.rs converts nested bibitems after body capture and does not count closers). Footnote/bibliography pairing profiles are therefore model predictions, not recorded rows. Scope limit, stated in the file: cross-type balancing (math inside footnote bodies and similar) is not modelled; it belongs to the Tier 2 pairing family.

## Theorems (all in namespace LeanFtml, file BlockEnd.lean)

- `scanFirst_close_accepted`, `scanCount_close_accepted`, `scan_close_accepted` — P0/P2 at the decisive step, all types.
- `scanFirst_close_blank`, `scanCount_close_blank` — a blank-suffixed closer is treated exactly as the bare closer when examined.
- `scanFirst_eraseBlank`, `scanCount_eraseBlank`, `scan_eraseBlank` — P2 full-stream form: erasing every blank closer suffix in the input changes neither body nor rest (up to the same erasure in the tail).
- `scanFirst_tail`, `scanCount_tail`, `scan_tail` — P1: a successful scan's rest is literally a tail of the input.
- `pairing_code_recorded`, `pairing_math_recorded`, `pairing_collapsible_recorded`, combined as `recorded_pairing` — P3: profiles [1,1,1,0], [1,1,1,0], [1,1,0,0], exactly the three rows of recorded-pairing.txt at 8cb2757c2.
- `profile_footnote_model`, `profile_bibliography_model` — the first-closer predictions [1,1,0,0] for the two unrecorded types.

## Build and axioms

- `lake build` green on the Muse VM and on WSL (lane-dir copy, sha256-identical BlockEnd.lean: 6a1bcc93af024481...).
- No `sorry` anywhere in the project (grep-verified both machines).
- Axiom audit (`#print axioms` in Main.lean, identical both sides): `scan_eraseBlank` [propext, Quot.sound]; `scan_tail` [propext, Quot.sound]; `scanCount_close_blank` [propext]; `recorded_pairing` [propext]. No `sorryAx`, no `Classical.choice` in any G1.2 theorem (a stricter audit than G1.1's).

## Conformance (bridge A)

Full record: `conformance-g12/RESULTS.md` in the loop record.

- Model grid (compiled Lean driver `lean-ftml-conformance-g12`): PASS, 85 checks, 0 failures, on VM and WSL.
- Real Rust harness (`verification/block-end/run.sh` through heavy-build.sh): exit 1 against an empty known-findings.txt; 51 finding lines, one family: code with blank-suffixed closers and a following blank line loses the paragraph container around the following text (the code block itself is unaffected; P0/P1 hold).
- Live adjudication (saved-page probes muse-probe-g12-* on sandbox-for-codex, all valid/stable/source-verified): live Wikidot renders the bare and blank forms identically, tail inside a paragraph in both. The model matches live; the current Rust deviates. Recorded as finding F-G12-1 and routed to the Wikijump-side chat (d9ab3b77-87f5-4ece-9c3b-b10619613075); the fix is parity work, not a model change.

## Files

- `lean-ftml/LeanFtml/BlockEnd.lean` (new), `LeanFtml.lean` (import), `Main.lean` (axiom prints), `ConformanceG12.lean` (new driver), `lakefile.toml` (exe target). Canonical copies in the Muse VM project `~/workspace/ftml-lean-equivalence/lean-ftml/`; mirrored to the WSL lane dir for verification. The ftml checkout was not modified.

COMPLETE
