# CORRECTION-C-R5H-P3-2 — Raw three-byte short closer reassociates across a trailing newline (R5H-P3)

Candidate: C-R5H-P3-2. Ledger row P3H-05 (Raw REFCORR14 line-confinement sibling at a three-byte later run). The suspicion was written before any live probe with the CONFIRM byte "live reassociates across the newline into a span" and the CLEAR byte "live serves a@@@b<br /> then @@@ with no span"; the CONFIRM byte is what was observed.

Minimal source: `@@@@a@@@b\n@@@` — a four-byte @ opener, body `a`, a three-byte short closer, then body `b`, a newline and a three-byte later @ run. This is the three-byte sibling of C-R5H-P3-1 and shows the cross-line reassociation is not specific to a two-byte run.

Decisive live bytes: capture `muse-probe-round5h-p3-p3h-05-raw-4op-3cl-nextline` (html_sha256 `61868697626c9e767e3ec9843578fd986ca73e929598036ea4deaeb3e8267d0c`) serves `<p>a<span style="white-space: pre-wrap;">@b</span> @</p>`. Capture flags are valid=true, stable=true, saved_source_matches=true. The three-byte short closer re-associates across the newline: its first byte becomes the leading `@` of the span body, the remaining two bytes close the span, and the three-byte later run leaves one surplus literal `@` after the span.

Reference bytes: `ref.jsonl` line 5 emits `<p>a@@@b<br />\n@@@</p>\n\n`. After the standard mask the comparison row is `<p>a@@@b<br> @@@</p>` against the live `<p>a<span style="white-space: pre-wrap;">@b</span> @</p>`, a rule-level disagreement in the reassociation and its surplus-@ shaping, not a serving surface.

Owning reference file: `ref-php/text-wiki/Text/Wiki/Parse/Default/Raw.php`, lines 53-54 (`$lineEnd`) and the `$p < $lineEnd` term of the later-run scan at line 81, exactly the line-confinement guard owned by C-R5H-P3-1. REFCORR14 lowered the later-run length threshold to two and left the line-confinement term intact; the live ftml reassociation crosses the newline at both two- and three-byte later runs.

Mirror consequence inferred by source reading, no Lean elaboration run: `lean-ftml/LeanFtml/FormRawRules.lean::hasLaterQuad.go` line 195 (`| 10 :: _ => false`) and the newline-bearing preOk arm lines 308-316 (`c < l && !laterQuad` with `laterQuad` from the newline-halting `hasLaterQuad`) confine reassociation to the opener's line exactly as the reference does, so the mirror is inferred to emit the non-reassociated reference shape and to diverge from live here too. Source-reading inference only.

Adjudication: CONFIRMED. Together with C-R5H-P3-1 this shows the REFCORR14 fix is incomplete for cross-line later runs and that the line-confinement term, not the two-byte threshold, is the remaining defect; route a correction cycle. No source file is adopted by this unit.
