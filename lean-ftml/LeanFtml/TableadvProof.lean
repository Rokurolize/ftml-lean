import LeanFtml.TableadvHeadProof
import LeanFtml.TableadvCellProof
import LeanFtml.TableadvAttrProof
import LeanFtml.TableadvScanProof

/-!
TableadvProof.lean — umbrella for the Tableadv family proof modules. The former single 885-line file was split into TableadvHeadProof (universal head-run laws), TableadvCellProof (one-cell scan), TableadvAttrProof (REFCORR8/10 attribute lemmas) and TableadvScanProof (named heads and quote-trick witness) so that each elaboration stays within the wrapper's scope budget; no theorem statement changed. The bounded head-group certificate is in TableadvCertificate.lean, and the coordinator wires imports at adoption. The universal recursive (?R) equivalence waits for the PcreCore kernel and is out of this lane's scope.
-/

#print axioms LeanFtml.go_ge
#print axioms LeanFtml.advHeadRuns_quote_front
#print axioms LeanFtml.advHeadRuns_plain_prefix
#print axioms LeanFtml.advHeadRuns_chunks
#print axioms LeanFtml.enum_match_chunks
#print axioms LeanFtml.tableadvScanGo_chunks
