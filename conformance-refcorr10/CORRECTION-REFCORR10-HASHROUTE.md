# CORRECTION-REFCORR10-HASHROUTE — keep the route slash in the Freelink auto label (2026-11-23)

Evidence. C-R5C-R2-2 was confirmed in REPORT-ROUND5C-R2.md line 7 and conformance-round5c-r2/CANDIDATES.md lines 9-11 on a valid, stable, saved-source-matching live capture `muse-probe-round5c-r2-r2c-10-freelink-hashroute`: source `[[[foo/#/bar]]]` (source_sha256 f680466a8778566104a9b5bf970982c5768d84609702ec932b502a530c71973f) serves `<p><a class="newpage" href="/foo#/bar">foo/</a></p>` (html_sha256 fb78456199f5088fbe7ea9e0f2f19362aac018e0c0da449d871a97d0d52dcf2d) while the reference at ref.jsonl line 10 served `foo` with an identical href. I re-read those files and re-hashed conformance-round5c-r2/cases.jsonl (014e40c2dec90444089e7c5c226f1a0a209a36f12ddc87adeb54ae5d6124de06), captures.json (398fa27ef217d293c55b49f29c30cb109db16cb0e043a19c8973862274a3e51f) and ref.jsonl (c345129a18b4071e102e84c0611c20dcd9ea854a8e4ad269d007c84e1e219b0d), all matching the report. The adopted REFCORR10 FREELINK general lead rule in canonical Freelink.php:216 and LinkRules.lean `skipDefaultLead` deliberately addresses only material before a leading `_default:` and leaves this auto-label path pending, as SpecRefcorr10.lean line 4 records; no new live probe was fetched.

Mechanism. Live's no-label display text is the authored target up to the route or anchor marker, so the slash that precedes a `/#/` separator belongs to the display text; the page slug and the route extra do not. The canonical PHP at old line 138 used `explode('/#/', $raw, 2)` and assigned `$raw = $base`, consuming that slash for both slug and display, and old line 229 read `$text = $raw`; the mirror did the same with `raw.take i` and the `labelRaw.isEmpty` display branch. The minimal symmetric fix introduces one display-source value: PHP `$textRaw` is `$raw`, becomes `substr($raw, 0, $routePos + 1)` in the `/#/` arm and `substr($raw, 0, $hashPos)` in the plain-anchor arm, and only the no-label branch reads it; the mirror adds a fourth tuple component `textRaw` set to `raw.take (i + 1)` for `/#/`, `raw.take i` for a plain anchor and `raw` otherwise, and only the `labelRaw.isEmpty` branch reads it. Page, slug, `extra`, URL branch, transliteration, `_default:` strip, option map, token wire shape and the whole claimed span are untouched, so the fix is byte-local to the auto display text on the hash-route path and stays symmetric across reference and mirror.

Files changed and byte-identical before-copies. `ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php` is staged as `coord-units/R10-HASHROUTE/Freelink.php` (sha256 53bec5b740d45732256bb093a8e52de2feae1e41e31789b9242dfbadba25d9f2) with byte-identical predecessor `coord-units/R10-HASHROUTE/Freelink.php.before-refcorr10-hash` (sha256 9095f2716fb4d8a55d175de8bd95681df357559a6028b7b0e84fe2e18678b035, equal to the current canonical file and to the adopted R10-FREELINK after-hash); patch `Freelink.php.refcorr10-hash.patch` sha256 6b05959802967ca0b077c29994a57d6d352ab3147f63714d2ee74fb622f06f5b. The mirror `lean-ftml/LeanFtml/LinkRules.lean` is staged as `coord-units/R10-HASHROUTE/LinkRules.lean` (sha256 5e2fff5454aeaa7bb98a13c01f781c6048b62fa491957f1a705158d1a2f308e6) with byte-identical predecessor `coord-units/R10-HASHROUTE/LinkRules.lean.before-refcorr10-hash` (sha256 a81339eefdcf091982ac69f2444df584b147bc31509059450add8246a3321ab5, equal to the current canonical mirror and the adopted R10-FREELINK after-hash); patch `LinkRules.lean.refcorr10-hash.patch` sha256 7600e5e277c88224eff06b9341643af9a9763dfdadfc3ccac6ca602442f774aa. The decisive old PHP snippets are `explode('/#/', $raw, 2); $raw = $base;` at old line 138 and `$text = $raw;` at old line 229; the new snippets are the `$textRaw` initialization and `substr` assignments in the peel block and `$text = $textRaw;` in the no-label branch. The decisive old Lean snippets are the three-component tuple `let (raw1, anchor, extra) : List Nat × List Nat × List Nat :=` and the `raw1`-based display branch; the new snippets are the four-component tuple with `raw.take (i + 1)` and the `textRaw`-based display branch.

Verification. `php -l` on the staged PHP and on the scratch harness copy each returned `No syntax errors detected`; `cmp` confirmed both before-copies byte-identical to their canonical counterparts. The 159-row cached Freelink UNION battery rendered through `php harness/batch.php render` in both trees exited 0 with zero stderr and produced exactly one moved row, U102, with 158 byte-identical rows; no cached-live row newly disagrees. Tokens mode confirmed the single option change `text: foo` to `text: foo/` with `page: foo` and `extra: #/bar` unchanged. The patched mirror rebuilt through the serial wrapper with exit 0 and 176 jobs (`scratch/lean-build.log`, `[lean-build] 1486349 released status=0 10:08:30`), and the uniquely named closed pin `scratch/lean-ftml/R10H_HashRoutePin.lean` elaborated with exit 0 at 10:13:11; its four theorems are proved by `decide` and `#print axioms` lists only `[propext, Classical.choice, Quot.sound]` with no `sorryAx` and no `native_decide`. SpecRefcorr6, 7, 8, 9 and 10 each elaborated unchanged with exit 0 through the same wrapper.

Spec flip. No existing spec assertion about Freelink display text or a hash route exists, and all existing SpecRefcorr6/7/8/9/10 pins remain true, so no assertion is flipped. On adoption the coordinator should replace the PENDING sentence for C-R5C-R2-2 in SpecRefcorr10.lean line 4 with a closed pin; a ready draft, already validated in the scratch pin shape, is:

```lean
private def r10hFreelinkText (s : String) : List Nat :=
  let src := [91, 91, 91] ++ litBytes s ++ [93, 93, 93]
  match freelinkMatchAt src with
  | some (full, raw, labelRaw, _) =>
      let (_, ts) := freelinkProcess full raw labelRaw []
      match ts with
      | [t] =>
          match omGet t.opts "text".toList with
          | some (OptVal.str v) => v.map Char.toNat
          | some (OptVal.bytes bs) => bs
          | _ => []
      | _ => []
  | none => []

theorem refcorr10_freelink_hashroute_auto_label :
    r10hFreelinkText "foo/#/bar" = litBytes "foo/" := by
  decide
```

Scope. No ftml file was edited, no cargo was run, no repository-local git identity, identity environment variable or `-c user.*` override was set, no git stash or commit was made, no canonical file was modified, and no new live probe was fetched: all live bytes come from the already-cached round-5c capture with recorded valid, stable and source-matching status. Every Lean invocation went through the serial queue wrapper with uniquely named scratch files inside `coord-units/R10-HASHROUTE/scratch/`. Canonical adoption, the SpecRefcorr10 pin addition and gate regeneration remain coordinator actions outside this unit's write set. All writes are under `coord-units/R10-HASHROUTE/`.

COMPLETE
