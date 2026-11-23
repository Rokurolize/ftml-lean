# CANDIDATE-C-R5F-S1-3 — Image technical attribute must drop interior live-discarded C0 bytes (S13)

## Witness

S13 `s13-image-class-ff`, capture `muse-probe-round5f-s1-s13-image-class-ff`, html_sha256 1068c5ff1677282bd1390e09ba3a59c3f0d1c14027478fa79bb1ff2f1a032dbe, ref.jsonl row 13, first_diff 29. Minimal source `[[image IMG.png class="thi\fck"]]cap` with FF 0x0C in the interior of the class value. Decisive live bytes are `class="thick"` — the form feed is discarded — while the reference emits `class="thi\x0cck"` with the FF retained. After the campaign norm the reference reads `class="thi ck"`, so the byte difference is a rule-level attribute value, not an inter-tag or serving-frame artifact. The capture is valid=true, stable=true and saved_source_matches=true; the wdfiles host in the src is an owned serving surface and is not part of the divergence.

## Owning reference file and mechanism

`ref-php/text-wiki/Text/Wiki/Parse/Default/Image.php`, the REFCORR12 consumer loop at lines 225-230. It right-trims a trailing W run from `link`, `width` and `class` but never removes a live-discarded C0 byte from the interior of an accepted technical value. REFCORR12-NOTES established the live-discarded set D as every byte below 0x20 except TAB 9, LF 10, CR 13 and ESC 27, and showed that FF is dropped unconditionally in notes bodies before any whitespace fold. The same live C0 handling reaches an Image technical attribute, so the consumer must drop D from `link`, `width` and `class` after the acceptance guards and before token emission; the text/label family (title, alt, style, height, size) must keep its current verbatim behavior, as S12 confirms title with ESC is byte-identical on both sides.

## Mirror consequence (inferred by source reading, no elaboration run)

`lean-ftml/LeanFtml/ParaRules.lean::imageTrimAttr` lines 286-288 only calls `rtrimImageAttrWs` for the three technical keys, and `rtrimImageAttrWs` (line 277) strips a trailing W run only. The mirror therefore keeps an interior FF and reproduces the divergence. The symmetric repair is to filter the live-discarded C0 set D from the same three values, reusing the narrowed predicate already present in `NotesRules.isLiveDroppedControl` (NotesRules.lean line 213) so the two families cannot drift again. One wrapped closed pin over this witness is recommended; no Lean invocation was run in this unit.

## Scope

Single-witness candidate class. No ftml edit, cargo, Lean invocation, git identity override, git stash or canonical write was made. Full evidence: LEDGER.md S13, LEDGER-TABLE.md, comparison.json, verdicts.json, CAPTURE-INDEX.md, captures.json, ref.jsonl.
