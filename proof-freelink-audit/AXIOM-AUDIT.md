# Freelink proof-lane axiom audit

Build hygiene: before this gate, a fresh full `lake build LeanFtml` was run from this branch's own source through the mandated serial wrapper (exit 0, 116 jobs, 17:13). This matters because the tree carries tracked `.lake` oleans from an older commit; no axiom line produced before that rebuild is trusted. All the lines below come from the gate run after the rebuild.

Gate command (one invocation, wrapper, workdir `lean-ftml`): `LAKE_JOBS=2 ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh <clone>/lean-ftml lake build LeanFtml.Proof.Freelink` — exit 0, 65 jobs, 17:16. This compiles every file in `LeanFtml/Proof/` plus the family aggregator, so no proof file is left unimported within the family.

Result: 53 `#print axioms` commands, 51 reports with axiom sets, 2 reports axiom-free, 0 axiom sets outside `[propext, Classical.choice, Quot.sound]`, 0 `sorryAx`, 0 `native_decide`, 0 `bv_decide`, 0 `Lean.ofReduceBool`. AUDIT-VERDICT: PASS. The checker paired every command name with exactly one report and rejected unexpected reports; it also scanned every proof source for forbidden tokens and found none.

Verbatim axiom reports from the gate log:

```
LeanFtml/Proof/FreelinkRoute.lean:176:0: 'LeanFtml.freelinkRoute_findSub_route' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkRoute.lean:177:0: 'LeanFtml.freelinkRoute_findSub_anchor' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkRoute.lean:178:0: 'LeanFtml.freelinkRoute_route_components' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkRoute.lean:179:0: 'LeanFtml.freelinkRoute_anchor_components' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkRoute.lean:180:0: 'LeanFtml.freelinkRoute_plain_components' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkDefault.lean:198:0: 'LeanFtml.freelinkDefault_slug_law' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkDefault.lean:199:0: 'LeanFtml.freelinkDefault_slug_law_cps' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkLabel.lean:131:0: 'LeanFtml.freelinkLabel_barePipe' depends on axioms: [propext]
LeanFtml/Proof/FreelinkLabel.lean:132:0: 'LeanFtml.freelinkLabel_nonbare' depends on axioms: [propext]
LeanFtml/Proof/FreelinkLabel.lean:133:0: 'LeanFtml.freelinkLabel_barePipe_opts' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkLabel.lean:134:0: 'LeanFtml.freelinkLabel_nonbare_opts' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkLabel.lean:135:0: 'LeanFtml.freelinkLabel_urlText_nonempty' does not depend on any axioms
LeanFtml/Proof/FreelinkSkip.lean:261:0: 'LeanFtml.freelink_leadCpLen_bound' depends on axioms: [propext, Quot.sound]
LeanFtml/Proof/FreelinkSkip.lean:262:0: 'LeanFtml.freelink_leadCpLen_encodeCp' depends on axioms: [propext]
LeanFtml/Proof/FreelinkSkip.lean:263:0: 'LeanFtml.freelink_skipFuel_ge' depends on axioms: [propext, Quot.sound]
LeanFtml/Proof/FreelinkSkip.lean:264:0: 'LeanFtml.freelink_skipDefaultLead_run' depends on axioms: [propext, Quot.sound]
LeanFtml/Proof/FreelinkSkip.lean:265:0: 'LeanFtml.freelink_skipDefaultLead_default' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkMatch.lean:334:0: 'LeanFtml.freelinkMatch_no_opener' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkMatch.lean:335:0: 'LeanFtml.freelinkMatch_some_shape' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkMatch.lean:336:0: 'LeanFtml.freelinkMatch_candidate_present_priority' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkMatch.lean:337:0: 'LeanFtml.freelinkMatch_regression_labeled' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkMatch.lean:338:0: 'LeanFtml.freelinkMatch_regression_unlabeled' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkRender.lean:100:0: 'LeanFtml.freelinkRender_prefix_a' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkRender.lean:101:0: 'LeanFtml.freelinkRender_url_shape' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkRender.lean:102:0: 'LeanFtml.freelinkRender_local_existing_shape' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkRender.lean:103:0: 'LeanFtml.freelinkRender_local_newpage_shape' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkRender.lean:104:0: 'LeanFtml.freelinkRender_local_newpage_prefix' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkRender.lean:105:0: 'LeanFtml.freelinkRender_congr_readKeys' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkDefaultToken.lean:477:0: 'LeanFtml.freelinkDefaultToken_process' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkDefaultToken.lean:478:0: 'LeanFtml.freelinkDefaultToken_process_cps' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkDefaultAllLeads.lean:342:0: 'LeanFtml.fda_skipDefaultLead' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkDefaultAllLeads.lean:343:0: 'LeanFtml.fda_strip' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkDefaultAllLeads.lean:344:0: 'LeanFtml.fda_url_false' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkDefaultAllLeads.lean:345:0: 'LeanFtml.freelinkDefaultAll_pieces' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkLead.lean:144:0: 'LeanFtml.isDefaultLeadCp_iff_mem' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkLead.lean:145:0: 'LeanFtml.isDefaultLeadCp_not_asciiLetter' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkLead.lean:146:0: 'LeanFtml.freelinkSchemes_heads_asciiLetter' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkLead.lean:147:0: 'LeanFtml.byteCiEq_false_of_nonLetter_of_letter' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkLead.lean:148:0: 'LeanFtml.isUrlTarget_false_of_nonLetter_head' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkLead.lean:149:0: 'LeanFtml.isUrlTarget_nil' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkLead.lean:150:0: 'LeanFtml.regLeadCf_200B_admitted' does not depend on any axioms
LeanFtml/Proof/FreelinkGuards.lean:134:0: 'LeanFtml.any_false_of' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkGuards.lean:135:0: 'LeanFtml.filter_ne_length' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkGuards.lean:136:0: 'LeanFtml.findSub_missing' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkGuards.lean:137:0: 'LeanFtml.freelinkProcess_placeholder' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkGuards.lean:138:0: 'LeanFtml.freelinkProcess_multi_hash' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkGuards.lean:139:0: 'LeanFtml.freelinkProcess_hashhash' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkGuards.lean:140:0: 'LeanFtml.freelinkProcess_hash_lead' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkSlug.lean:264:0: 'LeanFtml.freelinkSlug_dropWhile' depends on axioms: [propext, Quot.sound]
LeanFtml/Proof/FreelinkSlug.lean:265:0: 'LeanFtml.freelinkSlug_underscorePass' depends on axioms: [propext, Classical.choice, Quot.sound]
LeanFtml/Proof/FreelinkSlug.lean:266:0: 'LeanFtml.freelinkSlug_collapseRun' depends on axioms: [propext, Quot.sound]
LeanFtml/Proof/FreelinkSlug.lean:267:0: 'LeanFtml.freelinkSlug_replace2' depends on axioms: [propext, Quot.sound]
LeanFtml/Proof/FreelinkSlug.lean:268:0: 'LeanFtml.freelinkSlug_bytes' depends on axioms: [propext, Classical.choice, Quot.sound]
```
