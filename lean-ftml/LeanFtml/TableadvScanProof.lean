import LeanFtml.TableadvScanWitnessProof

/-!
TableadvScanProof.lean — umbrella for the split named-head and witness modules. The former single witness module was divided into TableadvScanHeadProof (ground chunk/attribute pins) and TableadvScanWitnessProof (scan and quote-trick witness theorems) so that each elaboration stays inside the wrapper's scope budget; no theorem statement changed.
-/
