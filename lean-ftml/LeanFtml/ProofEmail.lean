import LeanFtml.ProofEmailKeepers
import LeanFtml.ProofEmailDigits
import LeanFtml.ProofEmailRenumber
import LeanFtml.ProofEmailObserver

/-!
ProofEmail umbrella: the Email family proof module set. The coordinator wires this file (or the four siblings) into LeanFtml.lean at adoption.
-/

namespace LeanFtml

#print axioms LeanFtml.decBytes_safe
#print axioms LeanFtml.htmlSubst_safe
#print axioms LeanFtml.renderEmail_claimed_placeholder
#print axioms LeanFtml.digitsVal_decBytes
#print axioms LeanFtml.tokRenumberBytes_phBytes
#print axioms LeanFtml.email_tok_equiv_base_shift
#print axioms LeanFtml.email_index_observer_law
#print axioms LeanFtml.email_index_observer_plus_one
#print axioms LeanFtml.email_renumber_index_injective

end LeanFtml
