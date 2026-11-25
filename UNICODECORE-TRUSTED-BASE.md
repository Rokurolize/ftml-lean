# UnicodeCore trusted-base ledger

Base: `585b5a34d26344bae98cd611daafa8fc2cce5211` (`main` / PR #26 merge).
Lane branch: `proof/unicodecore-bridges`.

## Verdict

UnicodeCore's semantic input remains measured PHP/PCRE data. The Lean kernel proves the mirror functions and every bridge theorem, including the two bridges strengthened in this lane, but it does not derive Unicode character-class truth or PCRE behavior from PCRE2/PHP source. After this lane, neither attacked bridge is a remaining measurement boundary: `collapseWsU` now has a maximal-run Unicode recurrence, and `normalizeValueAdv` now has an unconditional exact branch specification whose valid side uses a proved byte-level/character-level UTF-8 trim transport. The remaining trusted base is therefore exactly the measured data tables, the certification/extraction machinery and reference inputs below, plus the validation suites that bound the regex model.

## Direct measured data inputs

All primary exhaustive measurements are recorded in `conformance-unicode/unicode-certification.json` (SHA-256 `aaf53426e1f9c1ea0ba1f163284dc69b8833d420a308ca4732a5bfe1df366157`, 1,727 bytes, 38 lines). The measurement run used PHP `8.5.4` with PCRE `10.46 2025-08-27`, measured every non-surrogate Unicode scalar (`1,112,064` scalars) in pass 1 and independently re-measured them in pass 2, hard-failed on cardinality errors, parse errors, pass mismatches, lead-union mismatches, or transliteration mismatches, and reported `total_mismatches=0` / `verdict=ZERO-MISMATCH`.

The certified tables in `lean-ftml/LeanFtml/UnicodeCore.lean` (SHA-256 `56213e8740c8030bea309b88b008d0df4b7792b799d9c31186909353724815a1`, 29,992 bytes, 157 lines at the base commit) are:

| table / behavior | measured claim | trusted semantics |
|---|---:|---|
| `scalarSpaceRanges` | 26 scalar codepoints in 11 ranges | membership in PHP `/^\s$/u` |
| `scalarCfRanges` | 170 scalar codepoints in 21 ranges | membership in PHP `/^\p{Cf}$/u` |
| `freelinkLeadRanges` | 198 scalar codepoints in 28 ranges | membership in the exact lead character class extracted from snapshot-44 `Freelink.php` |
| `scalarIncNormKeepRanges` | 142,943 scalar codepoints in 773 ranges | membership in the Include normalization keep class, i.e. complement of the replacement class `[^\p{L}\p{N} :\-_]` |
| `scalarTranslitTable` and transliteration classification | 468 table entries; transliteration behavior measured for every scalar | exact output of reference `freelink_transliterate`, including ASCII pass-through and fallback behavior |

The `26/11`, `170/21`, `198/28`, and `142,943/773` pairs are scalar-count/range-count pairs.

### Retained-data re-verification performed in this lane

A local parser re-read the committed Lean ranges and JSON and checked: scalar count `1,112,064`; every per-predicate mismatch count is zero; lead-union and transliteration mismatch counts are zero; verdict is `ZERO-MISMATCH`; table/range cardinalities are exactly `26/11`, `170/21`, `198/28`, `142,943/773`, and `468`; and the JSON hashes match the present `UnicodeCore.lean`, `certify_unicode.php`, and `Freelink.php`. All checks passed.

## Certification machinery that remains trusted, not kernel-proved

`conformance-unicode/certify_unicode.php` (SHA-256 `ffcc5e451b0d6a04fb8f218bf90bf509d4d886870910f62322fa2771193b8c1a`, 22,001 bytes, 464 lines) is trusted for these components:

- scalar iteration over exactly the non-surrogate interval `0x0000..0xD7FF ∪ 0xE000..0x10FFFF`;
- the manual `cp2utf8` encoder used to construct PHP test strings;
- pass-1 PHP/PCRE measurements using `preg_match` and the reference transliterator;
- pass-2 re-measurement using the independent Lean-source table parser;
- `parse_lean_table`, the pass-2 re-parser of emitted Lean range syntax;
- the retyped generic patterns `/^\s$/u`, `/^\p{Cf}$/u`, and `/^[\p{L}\p{N} :\-_]$/u`;
- extraction of the freelink lead regex with `extract_lead_regex` and comparison with the retyped structural hypothesis `[\s\p{Cf}\*]`;
- extraction of the transliteration map with `extract_map` and validation of keys through `utf8cp`;
- range compression through `to_ranges` and Lean emission through `lean_ranges` / `lean_translit`;
- hard-fail cardinality, parse, pass-agreement, union, and transliteration checks, and the final JSON/log emission.

The PHP runtime, PCRE library, regex parser/matcher, lowercase/transliteration implementation in the reference PHP, filesystem I/O, and JSON serialization are execution-platform trusts; none is represented in the Lean kernel.

## Reference inputs and extraction evidence

- `ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php`: SHA-256 `e7674afd0aa0e6d56b78ba5867422e3cee3da4fb8312ee33ef6a58e56cda03cd`, 26,944 bytes, 789 lines. This is the hash recorded in the Unicode certification JSON.
- `ref-php/text-wiki/Text/Wiki/Parse/Default/Include.php`: SHA-256 `948551a863dca240ec92d292047b984dd306b473a306c48ac52aeb87c00e93f4`, 20,606 bytes, 545 lines. Line 509 contains the normalization replacement pattern `/[^\p{L}\p{N} :\-_]/u`; the Include keep table is the complement class after `refNormalize` lowercasing.
- `tools/extract_ref_tables.py`: SHA-256 `32ac6d75fd0996263be334537f9f9309d6772362c8fc736ec36b7c8e22adf524`, 35,708 bytes, 761 lines. In this lane it was rerun with the explicit pinned inputs and exited 0: 73/73 SHA-256 entries verified, manifest re-derived, working copies matched, PHP-resolved dynamic regexes accepted, and canonical digest `5fe4cb429474a36e8c570ea6fccd99c8a7853277ef29393b7ae51f2467e2be73` reproduced byte-identically.
- `RefTables.json` (snapshot-45, root): SHA-256 `02b093233bdcd3f71f9e321813259ec33680912c3293c0917efb8844a5941770`, 97,151 bytes, 2,619 lines; its canonical digest is `5fe4cb429474a36e8c570ea6fccd99c8a7853277ef29393b7ae51f2467e2be73`. `lean-ftml/LeanFtml/RefTables.lean`: SHA-256 `a686f8e667916d7b89a6b9b056c3bf6da201c2ee2af34bf657b45a77e4df5552`, 152,509 bytes, 449 lines.
- `conformance-pcre2/RefTables.json` (snapshot-44 retained conformance input): SHA-256 `33c722d0bc6ba678c593793f4a1be94cc0bcf51d7a207d212d7f766df2b22c62`, 97,025 bytes, 2,615 lines; canonical digest `aee14b655af0f44c5ea7378ee4ab2cded1bddfcc81c09802508b90855dd74188`. The snapshot-44 and snapshot-45 digests are different and are not interchangeable.

## Validation suites bounding the regex model

These suites are measured evidence, not kernel proofs:

- PCRE2 conformance suite: `conformance-pcre2/suite_report.json` (SHA-256 `9c04ef6d724f054dd8acf3c5545926884f7d90a3ecc000e8e04969c86d4902a2`, 678 bytes) records 137,481 cases over 276 patterns, `mismatches_total=0`, `php-error=0`, `parse-gap=0`, `u_boundary_agreements=1,377`, and `both-fail=3,616`, again on PHP 8.5.4 / PCRE 10.46. Its trusted machinery is `gen_cases.py` (SHA-256 `75038e7dce004f1e0357d5fad8df3d9261a6c062ab01b88dc7c88b531f5de346`, 6,801 bytes), `run_suite.py` (`a5076d06dcd78e6e047672b716c431cc40e19f41420fb5e8aaae10e4778e25c0`, 2,158 bytes), `suite_compare.py` (`effe9c5de16f300efc43b0aca65daff618b71b1b71ea6f375a7134dffe9f1a51`, 5,707 bytes), `php_oracle_suite.php` (`73297af366b6fa7503e2b54d245a3832f00b98b8ee9457116a0d15570d47e344`, 2,154 bytes), `patterns.json` (`421b6a33dc5abd8ec01edadb957e641a1cfec48e0a9ae361c52a50bfe313099a`, 134,703 bytes), and `php_results.json` (`2cc7e981431e7f7d22e7f0b6f93b34e7ae7d17b97c4a909129e17d1193b31b6b`, 10,996 bytes).
- `/u` boundary differential: `conformance-unicode/verify_u_boundary.php` (SHA-256 `8399276995a6574d01ef2e7644c36794dfc9f4cba265035df9c250121bba6515`, 7,918 bytes) supports the recorded 17/17 PASS result plus the pinned invalid-UTF-8 scope boundary `div-isolateId-invalid-utf8-0x80`.

## Bridge inventory after this lane

The kernel-proved UnicodeCore bridge list remains the Stage 2(c) list of 15 semantic bridges; two local one-step/definitional facts are additionally retained under explicit compatibility names and are not counted as extra semantic bridges. All are axiom-clean apart from the standard core axioms `[propext, Classical.choice, Quot.sound]` (or a subset).

1. `utf8Valid_contains_ff`
2. `utf8Valid_ascii_all`
3. `utf8Valid_flatMap_utf8Bytes`
4. `linkRules_isDefaultLeadCp_eq_unicodeCore`
5. `linkRules_transTable_eq_scalarTranslit`
6. `linkRules_transliterate_step_eq_translitScalar`
7. `linkRules_transliterate_eq_flatMap`
8. `containRules_isWsU_eq_unicodeCore`
9. `containRules_collapseWsU_step_isSpaceU` — strengthened from one-step unfolding to the maximal-run recurrence: a leading `isSpaceU` character emits exactly one ASCII space after consuming the entire following Unicode-whitespace run.
10. `containRules_isolateId_leading_isSpaceU` — kernel-proves the placeholder-free mirror reduction; the separate PHP `/u` parity scope still requires valid UTF-8 for non-`0xFF` invalid input and is bounded empirically by the pinned invalid-UTF-8 scope case.
11. `tableRules_normalizeValueAdv_contains_ff`
12. `tableRules_normalizeValueAdv_valid` — strengthened from a hypothesis-gated reduction to `trimBytes` into an unconditional exact branch specification: valid stripped input is the UTF-8 encoding of character-level `trimChars` after the Unicode collapse, and invalid stripped input is exactly `[]`; the valid branch uses the new inductive transport theorem `trimBytes_flatMap_utf8Bytes`.
13. `includeRule_isIncNormKeep_eq_unicodeCore`
14. `includeRule_isIncNormKeep_asciiLower` — the uppercase-ASCII exclusion is intentional because `refNormalize` lowercases first.
15. `includeRule_refNormalize_step`

Compatibility corollaries `containRules_collapseWsU_go_step_isSpaceU` and `tableRules_normalizeValueAdv_valid_trimBytesForm` retain the exact old local statements. This is a proof-strength change, not a semantic weakening: the two named Stage 2(c) bridge constants still exist, now with stronger statements.

## Exact remaining measurement boundary

The following statements are the complete non-kernel UnicodeCore trust assumptions:

1. PHP 8.5.4 / PCRE 10.46 semantics for `/u` regex matching and the reference implementation's transliteration behavior are correctly represented by the measured exhaustive scalar data above.
2. The certifier and extraction components enumerated above correctly identify the reference patterns and map, enumerate the intended scalar set, encode test strings, compare behavior across both passes, compress ranges, and emit/re-parse the Lean tables.
3. The pinned PHP reference files are the semantic oracle for the corresponding snapshot, with integrity bounded by the hashes above and RefTables verification where applicable.
4. The conformance and `/u` boundary suites bound the regex model and invalid-input scope empirically but do not become kernel facts. In particular, `ContainRules.isolateId` checks only the `0xFF` placeholder while PHP `/u` fails on other invalid UTF-8 (for example `0x80`), so reference parity outside valid UTF-8 remains a scoped measured boundary rather than a kernel theorem.

Everything else in the UnicodeCore bridge layer is a Lean kernel proof over these tables and the local mirror implementations.
