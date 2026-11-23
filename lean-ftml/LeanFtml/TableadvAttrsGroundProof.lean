import LeanFtml.TableadvChunkBytesProof

/-!
TableadvAttrsGroundProof.lean — bounded evidence for the concrete buildAttrsAdv values formerly pinned by twelve `by decide` theorems. A single such ground reduction (`data-Foo="1" data-foo="2"`) exhausts the wrapper's 22 GB cgroup, so the values are kept as VM-evaluated diagnostics here and in TableadvCertificate.lean instead of kernel proof terms; the universal attribute lemmas remain in TableadvAttrProof.lean and the generic scan law in TableadvScanWitnessProof.lean is unchanged.
-/

open LeanFtml

#eval buildAttrsAdv (litBytes " data-Foo=\"UP\"") "table"
#eval buildAttrsAdv (litBytes " data-Foo.Bar=\"UB\"") "table"
#eval buildAttrsAdv (litBytes " data-Foo_Bar=\"UB\"") "table"
#eval buildAttrsAdv (litBytes " DATA-foo=\"UP\"") "table"
#eval buildAttrsAdv (litBytes " CLASS=\"UP\"") "table"
#eval buildAttrsAdv (litBytes " data-foo+bar=\"UB\"") "table"
#eval buildAttrsAdv (litBytes " data-=\"UB\"") "table"
#eval buildAttrsAdv (litBytes " data-.=\"UB\"") "table"
#eval buildAttrsAdv (litBytes " data-Foo=\"1\" data-foo=\"2\"") "table"
#eval buildAttrsAdv (litBytes " id=\"X\"") "table"
#eval buildAttrsAdv (litBytes " align=\"center\"") "table"
#eval buildAttrsAdv ([] : List Nat) "table"
