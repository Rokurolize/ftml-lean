# Stage 2 totalization notes (unit U1)

All 21 `partial def`s of `stage2/stage2-model/Stage2.lean` are total in the delivered modules. Every port keeps the original recursion equations, accumulator and reverse order; the only change is an explicit `fuel : Nat` with a total fuel-0 fallback, or structural recursion on an existing Nat/stack argument. The original-named wrapper feeds a safe default fuel that is strictly larger than the number of recursive steps, so the fallback is unreachable through the public names. A `T`-suffixed twin exposes the raw fueled definition for induction.

## 21-row old-name -> new-total-def mapping

1. `scanQuoted` -> `LeanFtml.Proof.Stage2TidyCore.scanQuotedT (fuel) (q) (cs) (acc)` plus original-named wrapper. Device: fuel decreases by one per consumed char, default `cs.length + 1`, fuel-0 fallback `none`.
2. `scanTagRest` -> `Stage2TidyCore.scanTagRestT (fuel) (cs) (acc)` plus wrapper. Device: every branch consumes at least one char (quoted branches consume the whole quote run), default `cs.length + 1`, fallback `none`.
3. `parseAndNormAttrs` -> `Stage2TidyCore.parseAndNormAttrsT (fuel) (cs) (acc)` plus wrapper. Device: each branch shortens `cs`, default `cs.length + 1`, fallback `acc.reverse`.
4. `scanUntilCloseTag` -> `Stage2TidyCore.scanUntilCloseTagT (fuel) (targetTag) (cs) (bodyAcc)` plus wrapper. Device: one char per step, default `cs.length + 1`, fallback `(bodyAcc.reverse, "</" ++ targetTag ++ ">", [])`.
5. `pass1Loop` -> `Stage2TidyCore.pass1LoopT (fuel) (cs) (acc)` plus wrapper. Device: one consumed char per step, default `cs.length + 1`, fallback `String.intercalate "" acc.reverse`.
6. `containsUnwrapTrigger` -> `LeanFtml.Proof.Stage2FrameComp.containsUnwrapTriggerT (fuel) (cs)` plus wrapper, re-exported from `Stage2TidyCore`. Device: strict-suffix recursion, default `cs.length + 1`, fallback `false`.
7. `unwrapScopeScan` -> `Stage2FrameComp.unwrapScopeScanT (fuel) (cs) (depth) (sawPair)` plus wrapper, re-exported from `Stage2TidyCore`. Device: strict-suffix recursion, default `cs.length + 1`, fallback `(depth, sawPair)`.
8. `findFirstCloseP` -> `Stage2FrameComp.findFirstClosePT (fuel) (cs) (acc)` plus wrapper, re-exported from `Stage2TidyCore`. Device: strict-suffix recursion, default `cs.length + 1`, fallback `none`.
9. `pass2Loop` -> `Stage2FrameComp.pass2LoopT (fuel) (cs) (acc)` plus wrapper, re-exported from `Stage2TidyCore`. Device: each branch consumes a prefix, default `cs.length + 1`, fallback `String.ofList acc.reverse`.
10. `tokenizeHtmlLoop` -> `Stage2TidyCore.tokenizeHtmlLoopT (fuel) (cs) (acc)` plus wrapper. Device: one char per step, default `cs.length + 1`, fallback `acc.reverse`.
11. `closeInlinesForBlockEnd` -> `Stage2TidyCore.closeInlinesForBlockEndT (fuel) (st) (keepOnIstack)` plus wrapper. Device: one popped inline per step, default `st.openStack.length + 1`, fallback `st`.
12. `popDepthPopInline` -> `Stage2TidyCore.popDepthPopInline (st) (count)` made total in place. Device: structural recursion on the pre-existing `count : Nat`, fallback `st` at count 0 or empty stack.
13. `popDepthNoIstack` -> `Stage2TidyCore.popDepthNoIstack (st) (count)` made total in place. Device: structural recursion on `count`, fallback `st`.
14. `popDepthDeferIstack` -> `Stage2TidyCore.popDepthDeferIstack (st) (count)` made total in place. Device: structural recursion on `count`, fallback `st`.
15. `popCrossedForReopen` -> `Stage2TidyCore.popCrossedForReopen (st) (count) (acc)` made total in place. Device: structural recursion on `count`, fallback `(st, acc)`.
16. `repairInlineEnd` -> `Stage2TidyCore.repairInlineEnd (st) (tname) (fuel)` made total in place. Device: structural recursion on the pre-existing `fuel : Nat`, fallback `st` at fuel 0.
17. `unwindTreeFrames` -> `Stage2TidyCore.unwindTreeFramesT (fuel) (frames)` plus wrapper. Device: one frame per step via `addNodeToStack rest node`, default `frames.length + 1`, fallback `HtmlNode.root []`.
18. `processNodePass4` -> `Stage2TidyCore.processNodePass4T (fuel) (node)` plus wrapper over `processNodePass4CoreT (applyFrameComp) (fuel) (node)`. Device: one tree level per step, default `nodeHeight node + 1`, fallback `some node` (identity). The flag gates T11.
19. `serializeTreeRaw` -> `Stage2TidyCore.serializeTreeRawT (fuel) (node)` plus wrapper. Device: one tree level per step, default `nodeHeight node + 1`, fallback `""`.
20. `serializeChildrenPass5` -> `Stage2TidyCore.serializeChildrenPass5T (fuel) (children)` plus wrapper. Device: mutual with entry 21; a Node->Children->Node descent spends two fuel units, so default `2 * nodesHeight children + 2`, fallback `""`.
21. `serializeNodePass5` -> `Stage2TidyCore.serializeNodePass5T (fuel) (node)` plus wrapper. Device: same mutual pair, default `2 * nodeHeight node + 1`, fallback `""`.

The two `T`-suffixed pass-5 defaults are deliberately larger than `height + 1`: a leaf at depth d is reached with `fuel - 2*d`, so a leaf needs `2*height + 1` at the node wrapper. An earlier `height + 1` and then `height + 2` default dropped leaf text; both were corrected and re-validated before delivery.

## Quarantine and binding interface

T6 (`pass2ParagraphUnwrap`, `containsUnwrapTrigger`, `unwrapScopeScan`, `unwrapBalanced`, `findFirstCloseP`, `pass2Loop`, `consumeTrailingDoubleNl`) and T11 (`dropBlockSandwichedBrs`, via the predicate-parametric `dropBlockSandwichedBrsWith`) live in `LeanFtml.Proof.Stage2FrameComp`. `Stage2TidyCore` imports it and exposes original-named re-exports, but applies T6/T11 only when `Stage2Config.applyFrameComp = true`. `transformTotal` always applies them and is the byte-faithful port of `Stage2.transform`. `stage2TidyCore (cfg) (html)` is the decoupled core. `LeanFtml.Proof.Stage2` is an umbrella that re-exports both modules; `LeanFtml.lean` and `Main.lean` were not touched.

## Differential validation

Harness `proof-stage2-artifacts/DiffHarness.lean` pastes the unmodified `Stage2.lean` verbatim next to the port and compares `runWithPasses` field by field (pass1, pass2, pass3, pass4, pass5, output) on 1557 inputs: 37 hand probes from G2-SCOPE, 20 single-tag skeletons, and 1500 deterministic generated skeletons over 20 tag classes. Result: `corpus=1557 mismatches=0`.

Harness `proof-stage2-artifacts/BatteryHarness.lean` runs the exact 266 settled battery inputs from `stage2/stage2-evidence/battery-a-results.jsonl`, `battery-b-results.jsonl` and `battery-c-results.jsonl` with embedded newlines intact. Result: `cases=266 portVOriginal=0 portVRecorded=0 origVRecorded=0`, i.e. `transformTotal` equals the original `Stage2.transform` and the recorded model output on every settled case.

The rebuilt `lean-ftml-stage2-cli` was checked with `--framed` on u3's exact witnesses: `<div >body</div>` gives `<div>body</div>`; the styled paragraph keeps both `b` and `i` text nodes; the p34 nested-div case keeps `plain-scored`. CLI modes: default plain line mode, `--core` for the decoupled core, `--framed` to emit the exact `@@S2CERT-SEP-7f3a9c@@` sentinel line after each result.

No `partial`, `sorry`, `axiom`, `unsafe`, `native_decide` or `bv_decide` declarations were introduced in any delivered file; all builds used `~/.local/state/wikijump/muse-bhl/tools/lean-build.sh` with workdir `lean-ftml`.
