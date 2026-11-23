import PcreCore
set_option maxRecDepth 100000
open LeanFtml

def findFirst (p : PcreParsed) (subj : List Nat) : Option (Nat × MResult) :=
  let candidates : List (Nat × MResult) :=
    (List.range (subj.length + 1)).filterMap fun s =>
      match pcreFirst p subj s with
      | some r => some (s, r)
      | none => none
  candidates.head?

def fJoin (sep : String) : List String → String
  | [] => ""
  | x :: xs => x ++ xs.foldl (fun acc y => acc ++ sep ++ y) ""

def fNats (bs : List Nat) : String := fJoin "," (bs.map toString)

def fOpt (o : Option (List Nat)) : String :=
  match o with | some bs => "S" ++ fNats bs | none => "N"

def fObs (p : PcreParsed) (subj : List Nat) : String :=
  let found := match findFirst p subj with
    | some (s, r) => "S" ++ toString s ++ "|" ++ toString r.pos ++ "|" ++
        fNats ((subj.drop s).take (r.pos - s)) ++ "|" ++
        fJoin ";" ((matchGroups subj r.caps).map fOpt)
    | none => "N"
  let allm := fJoin ";" ((pregMatchAll p subj).map
    (fun t => toString t.1 ++ "|" ++ toString t.2.1))
  let rep := fNats (pregReplaceCallback p subj (fun _ _ => [88]))
  found ++ "##" ++ allm ++ "##" ++ rep

-- case lit1 (literal)
#eval IO.println ("CASE lit1 " ++ (match parsePcreBytes [47, 97, 98, 99, 47] with
  | some p => fObs p [120, 120, 97, 98, 99, 120, 120]
  | none => "PARSE_FAIL"))
-- case lit2 (literal)
#eval IO.println ("CASE lit2 " ++ (match parsePcreBytes [47, 97, 98, 99, 47] with
  | some p => fObs p [120, 120, 97, 98, 120, 120]
  | none => "PARSE_FAIL"))
-- case ci (flag-i)
#eval IO.println ("CASE ci " ++ (match parsePcreBytes [47, 97, 98, 99, 47, 105] with
  | some p => fObs p [120, 120, 65, 66, 67, 120, 120]
  | none => "PARSE_FAIL"))
-- case dot (dot)
#eval IO.println ("CASE dot " ++ (match parsePcreBytes [47, 97, 46, 98, 47] with
  | some p => fObs p [97, 120, 98]
  | none => "PARSE_FAIL"))
-- case dotnl_off (flag-s)
#eval IO.println ("CASE dotnl_off " ++ (match parsePcreBytes [47, 97, 46, 98, 47] with
  | some p => fObs p [97, 10, 98]
  | none => "PARSE_FAIL"))
-- case dotall (flag-s)
#eval IO.println ("CASE dotall " ++ (match parsePcreBytes [47, 97, 46, 98, 47, 115] with
  | some p => fObs p [97, 10, 98]
  | none => "PARSE_FAIL"))
-- case cls (char-class)
#eval IO.println ("CASE cls " ++ (match parsePcreBytes [47, 91, 97, 45, 122, 93, 43, 47] with
  | some p => fObs p [65, 66, 67, 97, 98, 99, 49, 50, 51]
  | none => "PARSE_FAIL"))
-- case clsneg (negated-class)
#eval IO.println ("CASE clsneg " ++ (match parsePcreBytes [47, 91, 94, 48, 45, 57, 93, 43, 47] with
  | some p => fObs p [97, 98, 49, 50, 99, 100]
  | none => "PARSE_FAIL"))
-- case clsesc (class-escape)
#eval IO.println ("CASE clsesc " ++ (match parsePcreBytes [47, 92, 115, 43, 47] with
  | some p => fObs p [97, 32, 9, 32, 98]
  | none => "PARSE_FAIL"))
-- case grp (captures)
#eval IO.println ("CASE grp " ++ (match parsePcreBytes [47, 40, 97, 41, 40, 98, 41, 47] with
  | some p => fObs p [122, 97, 98, 122]
  | none => "PARSE_FAIL"))
-- case alt (alternation)
#eval IO.println ("CASE alt " ++ (match parsePcreBytes [47, 40, 99, 97, 116, 124, 100, 111, 103, 41, 47] with
  | some p => fObs p [97, 32, 100, 111, 103, 32, 98]
  | none => "PARSE_FAIL"))
-- case qstar (quantifier)
#eval IO.println ("CASE qstar " ++ (match parsePcreBytes [47, 97, 42, 47] with
  | some p => fObs p [97, 97, 97, 98]
  | none => "PARSE_FAIL"))
-- case qplus (quantifier)
#eval IO.println ("CASE qplus " ++ (match parsePcreBytes [47, 97, 43, 47] with
  | some p => fObs p [98, 97, 97, 97, 98]
  | none => "PARSE_FAIL"))
-- case qopt (quantifier)
#eval IO.println ("CASE qopt " ++ (match parsePcreBytes [47, 97, 98, 63, 47] with
  | some p => fObs p [97, 99]
  | none => "PARSE_FAIL"))
-- case qbrace (brace-quantifier)
#eval IO.println ("CASE qbrace " ++ (match parsePcreBytes [47, 97, 123, 50, 44, 51, 125, 47] with
  | some p => fObs p [97, 97, 97, 97]
  | none => "PARSE_FAIL"))
-- case lazy (lazy-quantifier)
#eval IO.println ("CASE lazy " ++ (match parsePcreBytes [47, 97, 43, 63, 47] with
  | some p => fObs p [97, 97, 97]
  | none => "PARSE_FAIL"))
-- case ungreedy (flag-U)
#eval IO.println ("CASE ungreedy " ++ (match parsePcreBytes [47, 97, 43, 47, 85] with
  | some p => fObs p [97, 97, 97]
  | none => "PARSE_FAIL"))
-- case bol_m (flag-m)
#eval IO.println ("CASE bol_m " ++ (match parsePcreBytes [47, 94, 98, 47, 109] with
  | some p => fObs p [97, 10, 98]
  | none => "PARSE_FAIL"))
-- case bol (bol)
#eval IO.println ("CASE bol " ++ (match parsePcreBytes [47, 94, 98, 47] with
  | some p => fObs p [97, 10, 98]
  | none => "PARSE_FAIL"))
-- case eol (eol)
#eval IO.println ("CASE eol " ++ (match parsePcreBytes [47, 97, 36, 47] with
  | some p => fObs p [97, 10]
  | none => "PARSE_FAIL"))
-- case eol_D (flag-D)
#eval IO.println ("CASE eol_D " ++ (match parsePcreBytes [47, 97, 36, 47, 68] with
  | some p => fObs p [97, 10]
  | none => "PARSE_FAIL"))
-- case eol_m (flag-m)
#eval IO.println ("CASE eol_m " ++ (match parsePcreBytes [47, 97, 36, 47, 109] with
  | some p => fObs p [97, 10, 98]
  | none => "PARSE_FAIL"))
-- case la_pos (positive-lookahead)
#eval IO.println ("CASE la_pos " ++ (match parsePcreBytes [47, 97, 40, 63, 61, 98, 41, 47] with
  | some p => fObs p [97, 98]
  | none => "PARSE_FAIL"))
-- case la_neg (negative-lookahead)
#eval IO.println ("CASE la_neg " ++ (match parsePcreBytes [47, 97, 40, 63, 33, 98, 41, 47] with
  | some p => fObs p [97, 99]
  | none => "PARSE_FAIL"))
-- case lb_pos (positive-lookbehind)
#eval IO.println ("CASE lb_pos " ++ (match parsePcreBytes [47, 40, 63, 60, 61, 97, 41, 98, 47] with
  | some p => fObs p [97, 98]
  | none => "PARSE_FAIL"))
-- case lb_neg (negative-lookbehind)
#eval IO.println ("CASE lb_neg " ++ (match parsePcreBytes [47, 40, 63, 60, 33, 97, 41, 98, 47] with
  | some p => fObs p [99, 98]
  | none => "PARSE_FAIL"))
-- case backref (backref)
#eval IO.println ("CASE backref " ++ (match parsePcreBytes [47, 40, 97, 41, 92, 49, 47] with
  | some p => fObs p [97, 97]
  | none => "PARSE_FAIL"))
-- case backref2 (backref)
#eval IO.println ("CASE backref2 " ++ (match parsePcreBytes [47, 40, 97, 98, 41, 92, 49, 47] with
  | some p => fObs p [97, 98, 97, 98]
  | none => "PARSE_FAIL"))
-- case rec1 ((?R)-recursion)
#eval IO.println ("CASE rec1 " ++ (match parsePcreBytes [47, 97, 40, 63, 82, 41, 63, 98, 47] with
  | some p => fObs p [97, 98]
  | none => "PARSE_FAIL"))
-- case rec2 ((?R)-recursion)
#eval IO.println ("CASE rec2 " ++ (match parsePcreBytes [47, 97, 40, 63, 82, 41, 63, 98, 47] with
  | some p => fObs p [97, 97, 98, 98]
  | none => "PARSE_FAIL"))
-- case rec3 ((?R)-recursion)
#eval IO.println ("CASE rec3 " ++ (match parsePcreBytes [47, 97, 40, 63, 82, 41, 63, 98, 47] with
  | some p => fObs p [97, 97, 97, 98, 98, 98]
  | none => "PARSE_FAIL"))
-- case cap_rec ((?R)-recursion)
#eval IO.println ("CASE cap_rec " ++ (match parsePcreBytes [47, 40, 97, 40, 63, 82, 41, 63, 98, 41, 47] with
  | some p => fObs p [97, 97, 98, 98]
  | none => "PARSE_FAIL"))
-- case php_code ((?R)-recursion)
#eval IO.println ("CASE php_code " ++ (match parsePcreBytes [59, 94, 92, 91, 92, 91, 99, 111, 100, 101, 40, 92, 115, 91, 94, 92, 93, 93, 42, 41, 63, 92, 93, 92, 93, 40, 40, 63, 58, 40, 63, 82, 41, 124, 46, 41, 42, 63, 41, 92, 91, 92, 91, 47, 99, 111, 100, 101, 92, 93, 92, 93, 40, 92, 115, 124, 36, 41, 59, 109, 115, 105] with
  | some p => fObs p [91, 91, 99, 111, 100, 101, 93, 93, 120, 91, 91, 47, 99, 111, 100, 101, 93, 93, 10]
  | none => "PARSE_FAIL"))
-- case php_newline (negative-lookahead)
#eval IO.println ("CASE php_newline " ++ (match parsePcreBytes [47, 40, 91, 94, 92, 110, 93, 41, 92, 110, 40, 63, 33, 92, 110, 41, 47, 109] with
  | some p => fObs p [97, 10, 98]
  | none => "PARSE_FAIL"))
-- case php_raw (negative-lookbehind)
#eval IO.println ("CASE php_raw " ++ (match parsePcreBytes [47, 40, 63, 60, 33, 64, 41, 64, 64, 40, 46, 42, 91, 94, 64, 93, 63, 41, 64, 64, 47, 85] with
  | some p => fObs p [120, 64, 64, 121, 121, 64, 64, 122]
  | none => "PARSE_FAIL"))
-- case php_divalign (backref)
#eval IO.println ("CASE php_divalign " ++ (match parsePcreBytes [47, 94, 92, 91, 92, 91, 40, 61, 124, 60, 124, 62, 124, 61, 61, 41, 92, 93, 92, 93, 92, 110, 40, 40, 63, 58, 40, 63, 82, 41, 124, 46, 41, 42, 63, 41, 92, 91, 92, 91, 92, 47, 92, 49, 92, 93, 92, 93, 36, 47, 109, 115, 105] with
  | some p => fObs p [91, 91, 61, 93, 93, 10, 120, 10, 91, 91, 47, 61, 93, 93]
  | none => "PARSE_FAIL"))
-- case replace (pregReplaceCallback)
#eval IO.println ("CASE replace " ++ (match parsePcreBytes [47, 40, 97, 41, 47] with
  | some p => fObs p [97, 98, 97]
  | none => "PARSE_FAIL"))
-- case matchall (pregMatchAll)
#eval IO.println ("CASE matchall " ++ (match parsePcreBytes [47, 40, 97, 41, 47] with
  | some p => fObs p [97, 97, 97]
  | none => "PARSE_FAIL"))
-- case wordb (word-boundary)
#eval IO.println ("CASE wordb " ++ (match parsePcreBytes [47, 92, 98, 102, 111, 111, 92, 98, 47] with
  | some p => fObs p [97, 32, 102, 111, 111, 32, 98]
  | none => "PARSE_FAIL"))
-- case quant_empty (empty-loop-guard)
#eval IO.println ("CASE quant_empty " ++ (match parsePcreBytes [47, 40, 97, 42, 41, 42, 98, 47] with
  | some p => fObs p [98]
  | none => "PARSE_FAIL"))
