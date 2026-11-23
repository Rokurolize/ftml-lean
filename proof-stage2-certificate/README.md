# proof-stage2-certificate — TCB-5 bounded skeleton oracle certificate (unit u3)

STATUS: PARTIAL. The exhaustive differential was run over the full declared domain with no narrowing and no sampling. It found 1,023,010 model-vs-oracle divergences out of 1,058,060 cases, so the zero-gap condition of G6 is NOT met on this domain. Per the brief, the divergences are recorded below; the model is not modified here, and fixes belong to the coordinator lane. This is an external certificate, not a Lean theorem and not a universal proof.

## 1. Declared domain and alphabet

The 12 tag classes are span, strong, em, a, div, p, table, td, ul, li, br, code, chosen from the structural classes of stage2/G2-SCOPE.md: span for T2/T3/T4/T10; strong and em for T3/T4/T10; a for the T3 anchor bound (q10); div for T5/T7/T10; p for T6/T7/T8/T10; table and td for the T5 table-cell scope wall; ul and li for T5 list-item boundaries; br (void) for T11; code for T9/T10. The single text terminal X is the character x; it is a terminal, not a 13th tag class, and does not count toward the 12.

A canonical skeleton is a token string in which each of the 11 closable classes appears zero times or exactly once as a matched <t>...</t> pair (open before close), the void class br appears at most once as <br />, the text terminal x or br is the only leaf (at most one leaf token in total), the token count is at most 8, and the open-stack depth is at most 4 at every prefix. Closing a class removes it from the stack wherever it sits, which is what permits multi-level crossings. A string is admitted exactly when its stack is empty at the end. The generator deduplicates and sorts by (UTF-8 byte length, UTF-8 bytes).

The bound d=4, L=8 is the smallest one exposing T4 multi-level crossings: a crossing of k elements above a target needs k+1 distinct matched pairs, hence 2(k+1) tokens and depth k+1; k=2 (the minimum T4 case) needs 6 tokens and depth 3, and the documented three-element crossing (p15/q04) needs 4 pairs = 8 tokens and depth 4. L=7 cannot hold four pairs and d=3 cannot hold a four-deep crossing stack.

## 2. Exact recorded facts

Generator version: 1.0.0. Exact cardinality: 1,058,060 canonical skeletons. SHA-256 of the canonical sorted corpus (skeletons.txt, one newline-terminated UTF-8 skeleton per line): 0c01780e3ac0b30a1984e9bb5b1969a70ce7ec04a859ab0a043aebce62c64281. Mismatch count: 1,023,010. Agreement count: 35,050. SHA-256 of certificate.jsonl: 88f4920b2d491cf90c92885bbbddac3d6beb5ddfe91b05c0b82546034ff8449f.

## 3. Method

generate.py enumerates the domain exhaustively with a depth-first walk over (tokens, open stack, used-class mask, leaf flag) and writes skeletons.txt. oracle_batch.c is a byte-for-byte reproduction of the wrapper, libtidy options, two tidySaveBuffer calls, no tidyCleanAndRepair, and PHP explode/str_replace extraction of conformance-tidy-oracle/tidy_oracle.c, batching one fragment per input line; it was cross-checked against the single-file oracle on representative fragments before the full run. The model side is lean-ftml-stage2-cli --framed running Stage2TidyCore.transformTotal, with sentinel @@S2CERT-SEP-7f3a9c@@ framing because model outputs contain internal newlines. compare.py compares model and oracle outputs byte-for-byte after the same outer-whitespace strip used by conformance-tidy-oracle/three_way.py, namely strip of space, tab, CR and LF on both sides, with no other normalization. Fidelity of the freshly rebuilt CLI was checked first against 18 newline-free settled battery cases (18/18 match after the same strip).

## 4. Divergences (not fixed here)

The 10 minimal witnesses, ordered by (token count, byte length, bytes), are below. The full 1,058,060 per-case results are in certificate.jsonl.

- <a></a> -> model '<a></a>' ; oracle '\n\n'
- <li></li> -> model '<li></li>' ; oracle '\n\n<ul>'
- <td></td> -> model '<td></td>' ; oracle '\n\n<table>\n<tr>\n<td></td>\n</tr>\n</table>\n'
- <ul></ul> -> model '<ul></ul>' ; oracle '\n\n'
- <div></div> -> model '<div></div>' ; oracle '\n\n'
- <table></table> -> model '<table></table>' ; oracle '\n\n'
- <a></a>x -> model '<a></a>x' ; oracle '\n\nx'
- x<a></a> -> model 'x<a></a>' ; oracle '\n\nx'
- <li></li>x -> model '<li></li>\nx' ; oracle '\n\n<ul>\n<li style="list-style: none">x '
- <li>x</li> -> model '<li>x</li>' ; oracle '\n\n<ul>\n<li>x</li>\n'

The divergences are dominated by libtidy implicit structural repair on bare fragments that Stage 1 would not emit: a bare <li> is wrapped in <ul>, a bare <td> is wrapped in <table><tr>, and empty a/ul/div/table elements are trimmed to nothing, while the Stage 2 model operates on already-Stage-1-shaped HTML and preserves those tags. Empty inline classes account for a further group. All of these cases remain in the declared domain and are counted in the mismatch count; none was excluded.

## 5. Explicit remainder

Above depth 4 and length 8 sit unbounded global rescans and cascading multi-level crossings. The full behavior of libtidy.so.58 (about 50,000 lines of external C) is not a theorem and cannot be one inside Lean; the certificate plus the 266-case conformance record is the honest maximum for this external boundary. The named Stage 2 remainders U1 (p15 tail after a dropped span), U2 (paragraph unwrap boundary between p09 and in2-x48), U3 (break-drop bounds), U4 (anchor boundary beyond depth 1) and U5 (lone image/hr paragraphs) from stage2/REPORT-STAGE2.md are settled by separate probe batteries but sit outside this certificate domain and are not claimed here.

## 6. Files and reproduction

generate.py (generator source), skeletons.txt (frozen corpus), oracle_batch.c and oracle_batch (batch oracle driver and binary), oracle.bin (all 1,058,060 oracle results), model.out (all 1,058,060 framed model results), compare.py (differential driver), certificate.jsonl (per-case results), compare-summary.json (aggregate), manifest.json (all recorded facts), README.md (this file). The Lean module lean-ftml/LeanFtml/Proof/Stage2Certificate.lean exposes the 12-class alphabet, the bound constants, the cardinality and the recorded corpus hash with axiom-free, #eval-free definitions and theorems; the exhaustive differential fact is deliberately not asserted as a Lean theorem.

Regenerate and replay: python3 generate.py --emit skeletons.txt; gcc -O2 -Wall -Wextra -I../conformance-tidy-oracle/include -o oracle_batch oracle_batch.c /usr/lib/x86_64-linux-gnu/libtidy.so.58; ./oracle_batch skeletons.txt oracle.bin 2> oracle-run.log; lean-build.sh <repo>/lean-ftml ./.lake/build/bin/lean-ftml-stage2-cli --framed < skeletons.txt > model.out; python3 compare.py --compare --framed sep. Every Lean build and CLI invocation used tools/lean-build.sh with workdir lean-ftml, one at a time. The bulky regenerable intermediates (skeletons.txt, model.out, oracle.bin, oracle-run.log, certificate.jsonl, the compiled oracle_batch and __pycache__) are listed in .gitignore and are not committed; the durable small artifacts are generate.py, oracle_batch.c, compare.py, generate-run.json, compare-summary.json, manifest.json, README.md and skeletons.sample.txt (the first 100 corpus lines).
