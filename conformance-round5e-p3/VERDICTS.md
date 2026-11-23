# VERDICTS — R5E-P3 round-5e confirmation pass

Sixteen fresh pre-probe suspicions were written to `LEDGER.md` before any page was created, sixteen probe pages and two run-owned include targets were created under the prefix `muse-probe-round5e-p3-`, and all sixteen pages were captured with a valid, stable and saved-source-matching result. After the standard `probe.norm`, campaign frame and owned-surface mask (wdfiles host and page path, gallery random id, lightbox-only `with-lb` and `gallery-image-size-*` classes, inter-tag whitespace), thirteen rows are byte-equal and three rows disagree at a rule-level attribute value.

| ID | Final verdict | Basis |
|---|---|---|
| P3E-01 | CLEARED | link trailing tab, byte-equal after mask; capture p3e-01 |
| P3E-02 | CLEARED | link mixed space/tab/space run, byte-equal after mask; capture p3e-02 |
| P3E-03 | CLEARED | local link trailing space, byte-equal href `/SomePage`; capture p3e-03 |
| P3E-04 | CLEARED | fragment link trailing space, byte-equal href `#anchor`; capture p3e-04 |
| P3E-05 | CLEARED | star plus external link trailing space, byte-equal href and target; capture p3e-05 |
| P3E-06 | CLEARED | title trailing space, byte-equal `title="T "`; capture p3e-06 |
| P3E-07 | CLEARED | alt trailing space, byte-equal `alt="A "`; capture p3e-07 |
| P3E-08 | CONFIRMED `C-R5E-P3-1` | live `width="10"` against reference `width="10 "`; capture p3e-08; ref.jsonl line 8 |
| P3E-09 | CONFIRMED `C-R5E-P3-2` | live `class="thumb"` against reference `class="thumb "`; capture p3e-09; ref.jsonl line 9 |
| P3E-10 | CONFIRMED `C-R5E-P3-3` | live trims `width` to `"10"` while keeping `title="T "` and `alt="A "`; capture p3e-10; ref.jsonl line 10 |
| P3E-11 | CLEARED | star plus local link trailing space, byte-equal href `/SomePage` and target; capture p3e-11 |
| P3E-12 | CLEARED | two-byte link trailing space run, byte-equal href; capture p3e-12 |
| P3E-13 | CLEARED | slash-qualified local link trailing space, byte-equal href `/Some/Page`; capture p3e-13 |
| P3E-14 | CLEARED (owned serving frame) | gallery size `small ` falls back to the same rule-level `gallery-item thumbnail` class on both sides; the raw difference is only the random gallery-box id, `with-lb` and `gallery-image-size-*` lightbox classes, wdfiles hosts and inter-tag whitespace; capture p3e-14 |
| P3E-15 | CLEARED | include argument-value rtrim folds to `A=[X]` on both sides; capture p3e-15 |
| P3E-16 | CLEARED | include repeated placeholder folds to `A=VV B=VV C={$ab}` on both sides; capture p3e-16 |

Reason categories for the three confirmations: all are rule-level Image attribute-value differences inside the `<img>` tag, not owned surfaces. The wdfiles host difference on `src` is masked and is not part of any claim. The three rows isolate a selective trailing-whitespace behavior on live: `link`, `width` and `class` values are right-trimmed by live, while `title` and `alt` keep their authored trailing space (P3E-06, P3E-07, P3E-10). P3E-10 corroborates the width mechanism of P3E-08 in a multi-attribute context and supplies the discriminating boundary that title and alt are not trimmed; the coordinator may merge C-R5E-P3-1 and C-R5E-P3-3 into one general width correction if it prefers, but they are kept as distinct evidence records here following prior-round one-row-one-candidate convention.

Zero UNTESTABLE. No previously confirmed-and-fixed shape was re-probed verbatim; every Image row carries a ledger reason tied to the REFCORR11 rtrim mechanism, and the Module, Raw and Tableadv mechanisms were not changed in REFCORR11 and were not reopened.
