# ADDENDUM 2 (2026-11-20, coordinator): two updates to ADDENDUM-ANTIGRAVITY.md

Short on purpose. Everything in the first addendum stands except point 5, which events have overtaken.

## 1. Point 5 is settled: the colon-edge refs are adjudicated

The live probe has run. Live ACCEPTS [[include ::page]] and [[include :foo]] as includes of the stripped page name (the missing-page error names "page" / "foo"), matching the fossil and contradicting ftml's rejection. Recorded as finding F-R2-1. Authority: GRAMMAR-INCLUDE.md in the canonical record, rule R1 as corrected by the live note, and section L6. If you model include reference resolution, use the corrected rule: a malformed site form (no second colon, empty site, empty page after the site form) falls back to treating the whole ref as a page name and normalizing it, which strips the leading colons. Do not use ftml's rejection as the spec. The parity side has accepted F-R2-1 as a fix-forward item (own PR, same ftml version cycle as the fold fix, after the .23 pin); no action for you.

## 2. The reference's Include stage is complete

Since the first addendum, the coordinator's R2 work on the Include rule finished: scanner rewritten to the adjudicated grammar (quoted consumption included), the resolution layer implemented in the rule with cross-site fetch, input stage refined to CRLF-only normalization. Scores: 101/114 grid cases textual agreement with ftml, 114/114 modulo padding and includer surface; the G1.4b fold set stays 14/14 against live. Record: conformance-refphp/R2-INCLUDE.md in the reference tree (still the coordinator's lane, read-only for you, paths in the first addendum). R2 moves to the next rule in pipeline order; your lane (G1.5, G1.6) is unchanged.

## 3. F-G14B-1 disposition (informational)

The parity side accepted the fold finding: ftml will replace resolve_include_arguments with the source-order fold in its own PR in the same version cycle. When that merges, this loop's G1.4b differential flips to full agreement. No model change on your side; the Lean fold model already states the live rule.
