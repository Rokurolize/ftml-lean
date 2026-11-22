# VERIFY-COMBINED part 5 — smoke battery

The nine canonical sources in `conformance-refphp/smoke/` (code, collapsible, div, footnote, include, link, math, quote, table) were each rendered through this tree's `ref-php/harness/transform.php render` and compared byte-for-byte with the canonical per-case baselines in `conformance-refcorr5/final-gates/smoke-*.txt`. That harness was confirmed beforehand to reproduce the canonical baseline on the code case, whereas `batch.php render` does not. All nine renders are byte-identical to their baselines: code 60 bytes, collapsible 427, div 41, footnote 419, include 110, link 129, math 147, quote 64, table 118. The footnote and math runs carry 1,426 and 349 bytes respectively of pre-existing PHP warnings on stderr (the same stage-era undefined-key notices recorded by earlier lanes), with zero effect on the compared render bytes. Fresh renders are `vc-scratch/vc-smoke-<name>.txt`, sidecar stderr is `vc-scratch/vc-smoke-<name>.err`, and the verdict log is `vc-scratch/vc-smoke-gate.txt`.

SMOKE RESULT: 9/9 byte-identical, 9 cases, 0 moved.

COMPLETE
