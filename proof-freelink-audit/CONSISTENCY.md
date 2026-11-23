# Freelink proof-lane consistency audit

Read-only audit of the current branch at audit time. No lake/lean invocation was performed for this audit; the integrator owns the final build and axiom gate. All prose is single-line by project convention.

## 1. Working tree

`git status --short` at audit time: 245 tracked `lean-ftml/.lake/` build artifacts are modified by the mandated wrapper builds. The complete non-.lake status is exactly:

```
 D lean-ftml/LeanFtml/FreelinkProof.lean
?? REPORT-DSH-PROOF-FREELINK.md
?? lean-ftml/LeanFtml/Proof/
```

The audit directory `proof-freelink-audit/` is the only other path introduced by this task. No mirror rule source is modified: an explicit `git status --short` restricted to `lean-ftml/LeanFtml/LinkRules.lean`, `lean-ftml/LeanFtml/ServingRules.lean`, `lean-ftml/Main.lean`, `lean-ftml/LeanFtml.lean`, and `lean-ftml/lakefile.toml` returned empty. The removed `lean-ftml/LeanFtml/FreelinkProof.lean`, the report, and the proof directory account for every non-.lake entry.

## 2. Proof-file inventory

Counts are for all 12 files in `lean-ftml/LeanFtml/Proof/`. The theorem column counts lines beginning with `theorem` or `lemma` declarations; the print column counts `#print axioms` commands. Digests are SHA-256 of the exact file bytes.

| File | SHA-256 | Lines | Theorems/lemmas | #print axioms |
| --- | --- | ---: | ---: | ---: |
| FreelinkDefaultAllLeads.lean | 1255490de0541d5d564632cf7def84df83ed2b480e5763cba5218200ba2e9141 | 262 | 22 | 4 |
| FreelinkDefault.lean | db1b8ceb0bd4b2178baa20ab8e513a56ad0b15d19745ce9c111c29b968000a0a | 201 | 17 | 2 |
| FreelinkDefaultToken.lean | 1472b10f555d29b7d209f265c2fc08f69f3ba3fdf17444adf7711e0ee1e092ad | 480 | 39 | 2 |
| FreelinkGuards.lean | b964f7a1b0cbbf55b72b62a309dedbe7456208174c4d3104c4504c39e5cbf6cb | 142 | 7 | 7 |
| FreelinkLabel.lean | b3df8e92bf3de88acb08c1e5e82e67ec5c37d315e0d846f8dc433d853043b3ef | 137 | 11 | 5 |
| FreelinkLead.lean | c60c1e55fe95af01e6ad154cc1d381d639d76cff7c1c014d7837c04b54c941b3 | 152 | 16 | 7 |
| Freelink.lean | df6960f96e6cb5f6ae403f86cb50e38e92d146747b4bd62620e8846767989a5e | 13 | 0 | 0 |
| FreelinkMatch.lean | fd2947fcbfa5cf8e812604673e861927fb724935b1211f56e65c043e24f69877 | 340 | 19 | 5 |
| FreelinkRender.lean | b8bac03da3ac2128c424b171ef272ec6c2d07a528321a871de60efd44a56ee1b | 104 | 8 | 7 |
| FreelinkRoute.lean | 6c24f6a390b9401e98e568e0e928215701d1c61a52613b2f9e87bdf7cdba59b2 | 182 | 12 | 5 |
| FreelinkSkip.lean | 407f6e0129462c233b91cd640bcf3365ed51df5759a0a644a06a600e4cace7f8 | 267 | 17 | 5 |
| FreelinkSlug.lean | dd0204a6191a814e9837030eb5221e82a500177c02f0e555d45f1b87947e04a7 | 270 | 10 | 5 |

`Freelink.lean` is a 13-line namespace/import stub with no declarations of its own.

## 3. Forbidden-token scan

Pattern scan across all proof files for `sorry`, `admit`, `axiom `, `native_decide`, `bv_decide`, `Lean.ofReduceBool`: zero forbidden declarations or tactic uses. The five substring matches are all benign and listed explicitly:

- `FreelinkLead.lean:135`, `:136`, `:150`: `regLeadCf_200B_admitted` / `regLeadCf_2060_admitted` are regression-witness names containing the substring `admit`; the declarations are `theorem ... := by decide`.
- `FreelinkRender.lean:2` and `FreelinkLead.lean:2`: the word `axiom` occurs only inside the prose phrase `axiom-free` in header comments, not in any declaration.

A word-boundary rescan for the tokens `sorry`, `admit`, `axiom`, `native_decide`, `bv_decide` and for `Lean.ofReduceBool` returned exactly the same two "axiom-free" comment lines and no other hits.

## 4. Build-artifact and identity notes

The tracked `.lake/` modifications (245 entries under `lean-ftml/.lake/build/`, including `.olean`, `.ilean`, `.trace`, `.c`, `.c.hash`, and `.setup.json` files) are side effects of the mandated wrapper builds. They must be restored by the integrator before commit; this audit did not touch them. No repo-local git identity was set: `git config --local --get user.name` and `git config --local --get user.email` both return no value with a nonzero exit code.

## Verdict

Consistent: only the intended proof/report/deletion paths are pending, no mirror rule source was modified, all proof files carry `#print axioms` coverage where they carry theorems, and there are zero forbidden-token declarations. The integrator must restore the tracked `.lake/` artifacts before committing and run the final build/axiom gate.
