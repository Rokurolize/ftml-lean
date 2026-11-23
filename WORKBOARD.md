# WORKBOARD — ftml Lean equivalence programme, suspicion round 5

Coordinator: `lead`. Tree: `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator`. Base at mission start: `e53e7234008860a92e53b93d851c49a0e2b04043` (fetch + hard reset done 2026-11-23T05:5x+09:00; BRIEF-ROUND5.md, WORKBOARD.md, COORD-UNITS/ and coord-units/ preserved as untracked). Mission: close WBS package 2.1 BY EVIDENCE with a fresh full suspicion round on post-REFCORR7 ground, cycling through corrections until a full round returns zero confirmations.

## Prior state (closed before this mission)

16 fleet lanes adopted; 894 audit lines; P01 `d7e00d3..b181bfa`; REFCORR7 closed 11 SUSPECT4 shapes, snapshot-31 `7fb7055`; P03 `01c9f15`; audit cross-check `bb8ae1a`; upstream wording fix `e53e723`. REPORT-COMPLETION.md exists and ends COMPLETE with package 2.1 as the single reasoned standing item.

## Round 5 hunt units (current)

| Unit | Family seam | Owner | State | Verdict |
|---|---|---|---|---|
| R5-P1 | Parse-side blocks: paragraph, newline, blockquote, div/container, tabview/collapsible, list post-REFCORR7 | r5p1 | ADOPTED | 4 CONFIRMED (C-R5-P1-1..4): whitespace-only div class, duplicate data-* case key, scored UL_ unclosed, uppercase degraded opener; 25/25 valid captures; evidence adopted |
| R5-P2 | Parse-side inline: url, email, freelink, interwiki, emphasis family, colortext, code/math | r5p2 | ADOPTED | 4 CONFIRMED (C-R5-P2-1..4): VT/NBSP prefix, Math TYPE attribute, Mathinline Date suppression; 19/19 valid captures; evidence adopted |
| R5-P3 | Parse-side structural: include, module, raw/form, table/tableadv, image/gallery/file | r5p3 | ADOPTED | 2 CONFIRMED (C-R5-P3-1/2): Raw 4+3 run and Tableadv uppercase data-* key; 20/20 valid captures; evidence adopted |
| R5-P4 | Prefilter, whitespace, typography, tight, U+FFFD preprocessor and encoding edges | r5p4 | ADOPTED | ZERO CONFIRMED: 22 suspicions, 21 valid captures + 1 save-normalized UNTESTABLE, 21 matches incl. all U+FFFD siblings; evidence adopted |
| R5-R1 | Render-side block/container: div, span, size, collapsible, tabview, quote, list render | (pending) | PENDING | — |
| R5-R2 | Render-side inline/link: url, email, freelink, interwiki, image, embed, math render | r5r2 | ADOPTED | ZERO CONFIRMED: 19 suspicions, 19/19 valid captures, 17 byte-clear + 2 Stage 2 frame clearances; evidence adopted |
| R5-R3 | Notes/footnote/bibitem, heading/toc/anchor render around the REFCORR7 fixes | r5r3 | ADOPTED | 2 CONFIRMED (C-R5-R3-1/2): empty-Raw strip leaves un-retrimmed whitespace separator in footnote and bibitem; 21 valid captures; evidence adopted |
| R5-S1 | Cross-rule seams of the REFCORR7 corrections and their siblings | r5s1 | ADOPTED | 4 CONFIRMED (C-R5-S1-01/02/08/16): nested list attr/closer, U+3000 prefix, four-adjacent-U+FFFD run; 23/23 valid captures; evidence adopted |
| R5-S2 | Stage 2 / serving surfaces, entity spellings, date/timestamp and untestable classification | r5s2 | ADOPTED | ZERO CONFIRMED: 14 suspicions, 14/14 valid/stable/source-matching, 11 byte-clear + 3 routed serving surfaces; evidence hashes re-checked |
| A-R5-01…09 | Coordinator adoption writes for verified evidence units | lead | DONE (9/9) | all nine reports and conformance-round5-* trees adopted after hash/capture verification |
| R5-SYNTH | Round-5 synthesis and cycle decision | lead | DONE | 17 confirmations => REFCORR8 required; tallies: suspicions 26+19+20+22+21+19+20+16+14 = 177, valid captures 170, untestable 2 |

## REFCORR8 cycle units (active)

| Unit | Purpose | Owner | State | Verdict |
|---|---|---|---|---|
| R8-A | list family (4 shapes) | (pending) | PENDING | — |
| R8-B | Freelink whitespace family (3 shapes) | (pending) | PENDING | — |
| R8-C | empty-Raw re-trim (2 shapes) | (pending) | PENDING | — |
| R8-D | Math TYPE + Mathinline Date (2 shapes) | (pending) | PENDING | — |
| R8-E | four-adjacent U+FFFD run (1 shape) | r8e | DECISION ADOPTED | canonization decision: digit difference is a token-id numbering permutation, not +1 residue; coordinator rules the shape an OWNED token-counter class (CLEARED, no patch) because PROTOCOL-R5 owns token-id digits and no safe patch is derivable from cached evidence; decision to be recorded in REPORT-ROUND5 |
| R8-F | Raw 4+3 run (1 shape) | (pending) | PENDING | — |
| R8-G | Tableadv uppercase data-* (1 shape) | (pending) | PENDING | — |
| R8-H | Div parse whitespace/duplicate data (2 shapes) | (pending) | PENDING | — |
| R8-I | Div render whitespace-only id (1 shape) | (pending) | PENDING | — |
| R8-S | spec/pin inventory | (pending) | PENDING | — |
| R8-DOC | intake/design/report drafts | (pending) | PENDING | — |
| R8-VERIFY | full gates, pooled, smoke, movement | (pending) | PENDING | — |
| P32 | Publish snapshot-32 | lead | PENDING | — |
| R8-PINS | 16 pins + flip validation | r8pins | ADOPTED | SpecRefcorr8.lean 16 pins, all in standard axioms; three proposed Math flips REJECTED by artifacts (dedicated uppercase-TYPE branch, absent type still align) |
| R8-FIX | CoverageNotes integration repair | r8fix | ADOPTED | bibiPair mirrors re-trim; build green 176 jobs, audit 899 literal/898 reports |
| R8-GATE | PHP-side regeneration + all gates + pooled + smoke | r8gate | RUNNING | — |
| R5B-P1..S2 | Fresh full confirmation round (9 lanes, post-REFCORR8 ground, prefix muse-probe-round5b-*) | r5bp1,r5bp2,r5bp3,r5bp4,r5br1,r5br2,r5br3,r5bs1,r5bs2 | RUNNING | ground announced ready; parity-side Email index candidate assigned to P2/R2/S1, uppercase-[[LI]]-after-failed-closer to P1/S1; R3 has no parity candidate |

## Round 5b result (2026-11-23T07:35+09:00)

Nine lanes complete; all evidence adopted and committed (5d56d32). Raw confirmations 18, unique 16 after dedupe: C-R5B-P1-1 = C-R5B-S1-01 (same capture hash), C-R5B-R3-1 = C-R5B-P4-1 (same footnote newline shape). Per-lane: P1 5, P2 6, P3 3, P4 1, R1 1, R2 0, R3 1, S1 1, S2 0. Parity-side Email index family returned ZERO confirmations (owned +1 counter digits only); parity-side uppercase-[[LI]] candidate returned a CONFIRMED reference divergence. REFCORR9 is CLOSED: 16 fixes with .before-refcorr9 copies and CORRECTION records adopted, SpecRefcorr9.lean 16 pins, build green 176 jobs, r43-r48/pooled/smoke PASS with zero artifact movement; snapshot-33 published (commit d28c8e9, tag e091ced) and ftml-lean main pushed to cfb792e. Shared board tasks 1-9 completed. Round 5c (task-10) is RUNNING on the post-REFCORR9 ground.

## Round 5c result and REFCORR10 (2026-11-23T09:00+09:00)

Nine lanes complete; evidence adopted and committed (77a1937). Confirmations by lane: P1 9, P2 4, P3 2, P4 3, R1 3, R2 2, R3 2, S1 4, S2 0 = 29. Narrow per-shape corrections are not converging: every correction spawns new siblings. Strategy change ordered by the coordinator: REFCORR10 (shared tasks 12-16) implements GENERAL mechanisms per family — raw-case list stack, Unicode lead class for Freelink, token-aware footnote emptiness, general Div attribute/id handling, and general Tableadv/Module/Raw rules — validated against the union of all cached shapes. After adoption: full gates, snapshot-34, and a fresh full pass (round 5d) before 2.1 can close.

## Round 5d result and REFCORR11 (2026-11-23T11:00+09:00)

Nine lanes complete; evidence adopted and committed (ef5974b). Confirmations by lane: P1 6, P2 4, P3 1, P4 3, R1 0, R2 2, R3 2, S1 1, S2 0 = 19 raw, about 16 unique after dedupe (multi-hash Freelink class; form-feed C0 class). REFCORR11 (shared tasks 23-28) applies general mechanisms to the six remaining families: post-failed-close adjacency, Freelink leads/multi-hash, absent-type Math, C0 in notes, Concatlines/Tighten C0, and Image href trimming. Publication hole repaired via PR #1 as snapshot-34 (main 42281b6, tag 34c2da0); AUDIT tasks 17-19 completed. After R11 adoption: gates, snapshot-35 via PR, then round 5e full pass.

## REFCORR11, snapshot-35 and round 5e (2026-11-23T12:25+09:00)

REFCORR11 landed six general corrections (notes C0, list adjacency, Freelink leads/multi-hash, Math absent-type, Concatlines/Tighten, Image href trim); R11-GATE caught two omitted draft files (TokenState/CoverageProse) which were adopted and the build restored; R11-RECON adjudicated the remaining gate drift against cached live (PHP wrong on clDivOpen, stale artifacts elsewhere), regenerated PHP gate artifacts and restored all baselines. Snapshot-35 published via PR #2 (main bd8ac0c, tag dccebe5). Round 5e (nine lanes) is running on the post-REFCORR11 ground; package 2.1 remains open until a full round returns zero.

## Round 5e result and REFCORR12 (2026-11-23T12:50+09:00)

Nine lanes complete; evidence adopted and committed (f7a117c). Confirmations by lane: P1 2, P2 2, P3 3, P4 1, R1 3, R2 5, R3 1, S1 3, S2 0 = 20 raw (~14 unique after cross-lane dedupe: Freelink Cf leads, footnote ESC, list adjacency). Cross-lane overlap on scored-div was resolved by artifacts: CLEARED as owned Stage 2 tidy frame by both P1 and P4. REFCORR12 (four units R12-FREELINK/NOTES/ATTR/LIST) is active on the post-REFCORR11 ground; after adoption, gates, snapshot-36 via PR, then round 5f. Empirical note: five successive full rounds have each returned new rule-level siblings; the coordinator is tracking this non-convergence and will report it if a zero round cannot be reached.

## Proof-policy phase and round 5f (2026-11-23T14:25+09:00)

REFCORR12 cycle complete: final gates PASS with zero drift, snapshot-36 published via PR #3 (reference main 13113aa5, tag 582f1069), and proof-base-v1 frozen on ftml-lean main at 4bf28f7 (tag object ab8da940). ADVISOR-PROOF-POLICY adopted; COMPLETION-WBS 1.2.6 now carries the seven-gate G1-G7 criterion, with ground pins reclassified as regression tests. Foundation sprint F1/F2/F3 is active (shared tasks 30-32, agents f1kernel/f2pcre/f3unicode); F1's ProofInterface is the shared dependency. Boundary A round 5f (nine lanes) runs in parallel on the post-REFCORR12 ground; package 2.1 stays open until a full zero round. Owner calibration: proof only where decisive, no scope beyond the seven gates, Class C bounded certificates accepted honestly.

## Proof-lane handover (2026-11-23, owner order)

Owner plan change: seven dedicated DSH lanes now own the handed-over proof packages (module remainders, email, tableadv, freelink, notes, divattr, raw) with their own clones and report to the coordinator side chat by review ping. Board tasks 33-36 were deleted to avoid duplication. Only P-INCLUDE (task 37) stays with this team because proof/include had no draft; proof/list remains closed by policy decision and is not revived. F1-F3 foundation has landed (F1 partially: two UTF-8 round-trip obligations remain honestly unproved), so task 37 is ready. The side chat coordinates the proof branches' rebase onto proof-base-v1.

## REFCORR13 and round 5g (2026-11-23T17:20+09:00)

REFCORR13 adopted 39 corrections (25 from round 5f plus 14 from the Antigravity hunt), with coupled list mirror follow-up, AGY hunt fixes, and proof handoff packets. Final gates PASS with zero drift; snapshot-37 published via PR #4 (reference main 55fbb6e, tag c6cd4c5), RefTables extractor repinned to snapshot-37 with byte-identical regeneration and --verify OK. ProofEmail adopted (umbrella left unimported due to ByteCore decBytes collision; two F2-held remainders registered), ProofInclude adopted PARTIAL (18 connected theorems, 119/119 grid), ProofNotes adopted PARTIAL after rebase on narrowed C0 ground (0 sorryAx across 77 axiom reports). DivAttr rebase still in flight. Round 5g (nine lanes) is running on the post-REFCORR13 ground; 2.1 remains open until a full zero round.

## R14 and proof-package wave (2026-11-23T19:00+09:00)

Round 5g returned 21 confirmations (P1 3, P2 7, P3 4, P4 0, R1 2, R2 3, R3 0, S1 2, S2 0) — the seventh successive non-zero round. R14 landed the cross-side Raw fixes (W-WIT mirror, W-EQ reference), retired two RawCert divergence theorems into seven agreement pins, adopted rebased PARTIAL Freelink proofs (198-point lead class, 187 theorems, build 278 jobs), and published snapshot-38 via PR #5 with extractor repinned and --verify OK. Adopted proof packages so far: Email PARTIAL, Include PARTIAL, Notes PARTIAL (rebase), Raw PARTIAL, DivAttr PARTIAL, Freelink PARTIAL. In flight: R14 gate verification, frame-include-code and next-final proof rebases, D-NF dispatch witness probe. Non-convergence of Boundary A remains recorded; under the brief the cycle continues until a full zero round.

## Closeout (after a zero round)

| Unit | Purpose | Owner | State | Verdict |
|---|---|---|---|---|
| C-R5-1 | REPORT-ROUND5.md with per-round tallies and final zero verdict | lead | PENDING | — |
| C-R5-2 | COMPLETION-WBS.md 2.1 -> CLOSED BY EVIDENCE | lead | PENDING | — |
| C-R5-3 | GAP-LEDGER.md and STATE.md round-5 entries | lead | PENDING | — |
| P-R5 | Push to ftml-lean main, verify ls-remote | lead | PENDING | — |

## Notes

- Every Lean invocation through `~/.local/state/wikijump/muse-bhl/tools/lean-build.sh`, one at a time, uniquely named scratch files in the owning tree. Live probes through the standard wikidot-probe tool with prefix `muse-probe-round5-<lane>-`, fetched once and cached.
- Coordinator adoption writes are serial; everything else parallelizes across slots. Refill finished slots with the next unit while divisible work remains.
- A subagent's claim is never evidence: verify by hash, tally, diff or firsthand elaboration before adopting.
- Probe-tool smoke test passed at 2026-11-23T05:5x+09:00: one run-owned page `muse-probe-round5-lead-smoke` created on sandbox-for-codex, captured valid/stable/source-matching; left in place and listed here per sandbox boundaries.
- Write deliverables to disk as each part completes; keep this board current.

## FINAL STATE (2026-11-23T19:55+09:00)

Eight full rounds (5, 5b, 5c, 5d, 5e, 5f, 5g, 5h) ran on corrected ground; none returned zero. REFCORR8-14 and snapshots 32-38 are published; proof-base-v1 frozen; F1-F3 foundation and ten PARTIAL proof packages adopted; canonical build green at 371 jobs. REPORT-ROUND5.md holds the register-by-register result and ends with NAMED REMAINDERS: WBS 2.1 (empirical non-convergence), mirror R46 dispatch correction, F1 UTF-8 bridges, G4/G5 proof bundles. Records and final push at a5aa648. Cycle stopped by the coordinator's recorded decision under the owner's means-not-an-end calibration; no human was attached to resolve the strategic question.
