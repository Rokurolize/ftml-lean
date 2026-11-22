/-
  LeanFtml.Depth — gap ledger G1.1: `process_depths` (ftml src/parsing/depth.rs).

  The Rust function turns flat rows `(depth, list type, item)` collected by
  the list rule, the blockquote rule, and the TOC builder into nested
  `DepthItem` trees. The exhaustive harness in the ftml repo
  (verification/process-depths) checks five properties on the real code for
  all inputs up to 6 rows, depths 0..=3, 3 list types:

    1. it does not panic;
    2. every row comes out exactly once, in input order;
    3. a row's nesting depth in its tree equals its input depth;
    4. a row sits directly in a list of its own list type;
    5. no empty tree and no empty sub-list is returned.

  This file proves the same properties for ALL inputs, for a Lean model of
  the Rust stack machine. Properties 2–4 are proved together as one
  equality: the placed-rows list of the output (each item paired with the
  nesting and list type the harness's `walk` would report) equals the
  input rows placed at their stated depth and type. Property 1 is
  totality: the model is a total function (the one Rust panic site,
  popping an empty stack in `decrease_depth`, is unreachable in the model
  exactly where the stack-length invariant says it is unreachable in the
  Rust; the model's fallback branch for it is dead code, see `decrease`).
  Property 5 is `processDepths_good`.

  The link from this model to the Rust code is NOT proved here; per the
  spec-layer proposal (bridge option A, owner-approved 2026-11-19) it is
  established by the differential conformance harness in ../conformance/,
  which compares the model's full output trees against the real
  `process_depths` on the harness's whole bounded box and beyond.

  Representation note: ftml's `DepthList<L, T> = Vec<DepthItem<L, T>>` is
  modelled by `Forest`, the same data with the list spine folded into the
  type (nil / item / list-with-rest). This makes every recursion
  structural on one type. The conformance harness performs the translation
  when it serialises both sides.
-/

namespace LeanFtml

/-- A forest of depth items: the defunctionalised form of ftml's
    `DepthList<L, T>`. `list l sub rest` is a `DepthItem::List(l, sub)`
    node followed by `rest` siblings. -/
inductive Forest (L T : Type) where
  | nil : Forest L T
  | item : T → Forest L T → Forest L T
  | list : L → Forest L T → Forest L T → Forest L T
  deriving DecidableEq, Repr

namespace Forest

/-- Concatenation of forests (Rust: `Vec` append on `DepthList`). -/
def appendForest : Forest L T → Forest L T → Forest L T
  | .nil, b => b
  | .item t rest, b => .item t (appendForest rest b)
  | .list l sub rest, b => .list l sub (appendForest rest b)

@[simp] theorem appendForest_nil (b : Forest L T) : appendForest .nil b = b := rfl

theorem appendForest_nil_right : ∀ (a : Forest L T), appendForest a .nil = a
  | .nil => rfl
  | .item _ rest => by simp [appendForest, appendForest_nil_right rest]
  | .list _ _ rest => by simp [appendForest, appendForest_nil_right rest]

theorem appendForest_assoc : ∀ (a b c : Forest L T),
    appendForest (appendForest a b) c = appendForest a (appendForest b c)
  | .nil, _, _ => rfl
  | .item _ rest, b, c => by simp [appendForest, appendForest_assoc rest b c]
  | .list _ _ rest, b, c => by simp [appendForest, appendForest_assoc rest b c]

theorem appendForest_eq_nil : ∀ {a b : Forest L T},
    appendForest a b = .nil → a = .nil ∧ b = .nil
  | .nil, _, h => ⟨rfl, h⟩
  | .item _ _, _, h => by simp [appendForest] at h
  | .list _ _ _, _, h => by simp [appendForest] at h

/-- The harness's `walk` (verification/process-depths/tests/exhaustive.rs):
    every item in the forest, in order, paired with the nesting depth and
    the list type of the list it sits directly in. -/
def walk : Forest L T → L → Nat → List (T × Nat × L)
  | .nil, _, _ => []
  | .item t rest, l, n => (t, n, l) :: walk rest l n
  | .list l' sub rest, l, n => walk sub l' (n + 1) ++ walk rest l n

@[simp] theorem walk_nil (l : L) (n : Nat) : walk (.nil : Forest L T) l n = [] := rfl

theorem walk_append : ∀ (a b : Forest L T) (l : L) (n : Nat),
    walk (appendForest a b) l n = walk a l n ++ walk b l n
  | .nil, _, _, _ => by simp [appendForest, walk]
  | .item _ rest, b, l, n => by simp [appendForest, walk, walk_append rest b l n]
  | .list _ _ rest, b, l, n => by
      simp [appendForest, walk, walk_append rest b l n, List.append_assoc]

/-- Property 5's predicate: no `list` node has an empty child forest. -/
def GoodForest : Forest L T → Prop
  | .nil => True
  | .item _ rest => GoodForest rest
  | .list _ sub rest => sub ≠ .nil ∧ GoodForest sub ∧ GoodForest rest

theorem goodForest_append : ∀ {a b : Forest L T},
    GoodForest a → GoodForest b → GoodForest (appendForest a b)
  | .nil, _, _, hb => hb
  | .item _ rest, b, ha, hb => goodForest_append (a := rest) ha hb
  | .list _ _ rest, b, ha, hb =>
      ⟨ha.1, ha.2.1, goodForest_append (a := rest) ha.2.2 hb⟩

theorem goodForest_item (t : T) {rest : Forest L T} (h : GoodForest rest) :
    GoodForest (.item t rest) := h

end Forest

open Forest

/-- One stack frame of the Rust `DepthStack`: a list type and the items
    collected at that depth so far. -/
structure Frame (L T : Type) where
  ltype : L
  items : Forest L T
  deriving DecidableEq, Repr

/-- The Rust `DepthStack` state: finished top-level trees, plus the stack
    of open frames. The stack is stored bottom-first (the Rust `Vec` order);
    its last element is the top frame. -/
structure DState (L T : Type) where
  finished : List (L × Forest L T)
  stack : List (Frame L T)
  deriving DecidableEq, Repr

/-- Placed rows of a whole forest list (the harness's outer walk). -/
def placedForest (trees : List (L × Forest L T)) : List (T × Nat × L) :=
  trees.flatMap (fun p => walk p.2 p.1 0)

/-- Placed rows of a frame stack whose bottom frame sits at nesting `i`. -/
def placedStack : List (Frame L T) → Nat → List (T × Nat × L)
  | [], _ => []
  | f :: rest, i => walk f.items f.ltype i ++ placedStack rest (i + 1)

/-- Placed rows of a whole machine state. The main invariant of the proof
    is that this always equals the rows consumed so far, placed at their
    stated depths and types. -/
def placedState (s : DState L T) : List (T × Nat × L) :=
  placedForest s.finished ++ placedStack s.stack 0

/-- The last (top) frame of a bottom-first stack. -/
def lastFrame : List (Frame L T) → Option (Frame L T)
  | [] => none
  | [f] => some f
  | _ :: rest => lastFrame rest

/-- Apply a function to the top frame of a bottom-first stack. -/
def modifyTop (g : Frame L T → Frame L T) : List (Frame L T) → List (Frame L T)
  | [] => []
  | [f] => [g f]
  | f :: rest => f :: modifyTop g rest

/-- Rust `decrease_depth`: pop the top frame and append it, wrapped as a
    list node, to the new top frame. On a stack of fewer than two frames
    the Rust panics (`expect("No depth to pop off!")` on an empty pop, or
    indexes an absent frame); the invariant `stack.length = prev + 1`
    makes that unreachable, and the model returns the stack unchanged
    there as a total-function fallback. -/
def decrease : List (Frame L T) → List (Frame L T)
  | [] => []
  | [f] => [f]
  | f :: g :: rest =>
      match rest with
      | [] => [{ f with items := appendForest f.items (.list g.ltype g.items .nil) }]
      | _ :: _ => f :: decrease (g :: rest)

/-- `n` fresh empty frames of the given type (Rust: the `increase_depth`
    loop in `process_depths`). -/
def framesOf (n : Nat) (l : L) : List (Frame L T) := List.replicate n ⟨l, .nil⟩

/-- Rust: the depth-adjustment loops, `for _ in depth..previous decrease`. -/
def adjustDown : Nat → List (Frame L T) → List (Frame L T)
  | 0, s => s
  | n + 1, s => adjustDown n (decrease s)

/-- Rust `new_list` together with `finish_depth_list`: if the stack is a
    single frame, finish its tree into `finished` (unless empty) and start
    a fresh bottom frame of the new type; otherwise close the top frame
    and open a new one of the new type. -/
def newList [DecidableEq (Forest L T)] (s : DState L T) (l : L) : DState L T :=
  match s.stack with
  | [f] =>
      { finished := s.finished ++ (if f.items = .nil then [] else [(f.ltype, f.items)]),
        stack := [⟨l, .nil⟩] }
  | _ => { s with stack := decrease s.stack ++ [⟨l, .nil⟩] }

/-- Rust `push_item`. -/
def pushItem (s : DState L T) (t : T) : DState L T :=
  { s with stack := modifyTop (fun f => { f with items := appendForest f.items (.item t .nil) }) s.stack }

/-- One input row of `process_depths`. -/
structure Row (L T : Type) where
  depth : Nat
  ltype : L
  item : T
  deriving DecidableEq, Repr

/-- The placed form of a row: what the harness expects to find in the
    output for that row. -/
def rowPlaced (r : Row L T) : T × Nat × L := (r.item, r.depth, r.ltype)

/-- The depth adjustment at the head of one loop iteration: open fresh
    frames of the row's type when the row is deeper than the previous
    one, close frames when it is shallower. -/
def adjustStack (s : DState L T) (prev : Nat) (r : Row L T) : DState L T :=
  if r.depth ≥ prev then { s with stack := s.stack ++ framesOf (r.depth - prev) r.ltype }
  else { s with stack := adjustDown (prev - r.depth) s.stack }

/-- One iteration of the Rust `process_depths` loop body. -/
def step [DecidableEq L] [DecidableEq (Forest L T)] (s : DState L T) (prev : Nat)
    (r : Row L T) : DState L T :=
  let s1 := adjustStack s prev r
  pushItem (if (lastFrame s1.stack).map Frame.ltype = some r.ltype then s1
            else newList s1 r.ltype) r.item

/-- The Rust loop, threading the state and the previous row's depth. -/
def runRows [DecidableEq L] [DecidableEq (Forest L T)] :
    DState L T → Nat → List (Row L T) → DState L T × Nat
  | s, prev, [] => (s, prev)
  | s, prev, r :: rest => runRows (step s prev r) r.depth rest

/-- Wrap the frames above the bottom one into nested list nodes
    (the effect of Rust's `finish_depth_list` decrease loop, stated
    directly: decreasing all the way produces exactly this forest). -/
def wrapFrames : List (Frame L T) → Forest L T
  | [] => .nil
  | f :: rest => .list f.ltype (appendForest f.items (wrapFrames rest)) .nil

/-- Rust `into_trees` / `finish_depth_list(None)`: close the stack into
    one last tree (unless it is empty) and return all finished trees. -/
def intoTrees [DecidableEq (Forest L T)] (s : DState L T) : List (L × Forest L T) :=
  s.finished ++ match s.stack with
    | [] => []
    | f :: rest =>
        let items := appendForest f.items (wrapFrames rest)
        if items = .nil then [] else [(f.ltype, items)]

/-- The model of ftml's `process_depths`. -/
def processDepths [DecidableEq L] [DecidableEq (Forest L T)] (top : L)
    (rows : List (Row L T)) : List (L × Forest L T) :=
  intoTrees (runRows ⟨[], [⟨top, .nil⟩]⟩ 0 rows).1

/-! ## Proof infrastructure -/

theorem placedForest_append (a b : List (L × Forest L T)) :
    placedForest (a ++ b) = placedForest a ++ placedForest b := by
  simp [placedForest, List.flatMap_append]

theorem placedStack_append : ∀ (a b : List (Frame L T)) (i : Nat),
    placedStack (a ++ b) i = placedStack a i ++ placedStack b (i + a.length)
  | [], _, _ => by simp [placedStack]
  | f :: rest, b, i => by
      simp only [List.cons_append, placedStack, List.length_cons]
      rw [placedStack_append rest b (i + 1), List.append_assoc]
      congr 1
      have h : i + 1 + rest.length = i + (rest.length + 1) := by
        rw [Nat.add_assoc, Nat.add_comm 1 rest.length]
      rw [h]

theorem placedStack_framesOf : ∀ (n : Nat) (l : L) (i : Nat),
    placedStack (framesOf n l : List (Frame L T)) i = []
  | 0, _, _ => by simp [framesOf, placedStack]
  | n + 1, l, i => by
      have : framesOf (n + 1) l = (⟨l, .nil⟩ : Frame L T) :: framesOf n l := by
        simp [framesOf, List.replicate_succ]
      rw [this]
      simp [placedStack, placedStack_framesOf n l (i + 1)]

theorem lastFrame_cons {x : Frame L T} {xs : List (Frame L T)} (h : xs ≠ []) :
    lastFrame (x :: xs) = lastFrame xs := by
  cases xs with
  | nil => exact absurd rfl h
  | cons y ys =>
      cases ys with
      | nil => rfl
      | cons z zs => rfl

theorem lastFrame_append {a b : List (Frame L T)} (hb : b ≠ []) :
    lastFrame (a ++ b) = lastFrame b := by
  induction a with
  | nil => simp
  | cons x xs ih =>
      have h : xs ++ b ≠ [] := fun hh => hb (List.append_eq_nil_iff.mp hh).2
      rw [List.cons_append, lastFrame_cons h, ih]

theorem modifyTop_length (g : Frame L T → Frame L T) :
    ∀ (s : List (Frame L T)), (modifyTop g s).length = s.length
  | [] => rfl
  | [f] => rfl
  | f :: g' :: rest => by
      have ih := modifyTop_length g (g' :: rest)
      have e : modifyTop g (f :: g' :: rest) = f :: modifyTop g (g' :: rest) := rfl
      rw [e]
      simp [List.length_cons, ih]

theorem modifyTop_ne_nil {g : Frame L T → Frame L T} {s : List (Frame L T)}
    (h : s ≠ []) : modifyTop g s ≠ [] := by
  cases s with
  | nil => exact absurd rfl h
  | cons f rest =>
      cases rest with
      | nil => simp [modifyTop]
      | cons g' rs => simp [modifyTop, modifyTop_ne_nil (s := g' :: rs) (by simp)]

theorem lastFrame_modifyTop (g : Frame L T → Frame L T) :
    ∀ (s : List (Frame L T)), lastFrame (modifyTop g s) = (lastFrame s).map g
  | [] => rfl
  | [f] => rfl
  | f :: g' :: rest => by
      cases rest with
      | nil =>
          simp only [modifyTop, lastFrame, Option.map_some]
      | cons h hs =>
          have e1 : modifyTop g (f :: g' :: h :: hs) = f :: modifyTop g (g' :: h :: hs) := rfl
          have e2 : lastFrame (f :: modifyTop g (g' :: h :: hs))
              = lastFrame (modifyTop g (g' :: h :: hs)) :=
            lastFrame_cons (modifyTop_ne_nil (by simp))
          have e3 : lastFrame (f :: g' :: h :: hs) = lastFrame (g' :: h :: hs) :=
            lastFrame_cons (by simp)
          rw [e1, e2, lastFrame_modifyTop g (g' :: h :: hs), e3]

/-- Pushing an item onto the top frame appends exactly that item, placed at
    the top frame's depth and type, to the placed list. -/
theorem placedStack_modifyTop_push (t : T) :
    ∀ (s : List (Frame L T)) (i : Nat) (f : Frame L T), lastFrame s = some f →
      placedStack (modifyTop (fun f => { f with items := appendForest f.items (.item t .nil) }) s) i
        = placedStack s i ++ [(t, i + s.length - 1, f.ltype)] := by
  intro s
  induction s with
  | nil => intro i f hf; simp [lastFrame] at hf
  | cons f rest ih =>
      intro i top htop
      cases rest with
      | nil =>
          have hft : f = top := by simpa [lastFrame] using htop
          subst hft
          simp [modifyTop, placedStack, walk_append, Forest.walk]
      | cons g rs =>
          have e2 : lastFrame (f :: g :: rs) = lastFrame (g :: rs) := lastFrame_cons (by simp)
          have htop' : lastFrame (g :: rs) = some top := by rw [← htop, e2]
          have e1 : modifyTop (fun f => { f with items := appendForest f.items (.item t .nil) }) (f :: g :: rs)
              = f :: modifyTop (fun f => { f with items := appendForest f.items (.item t .nil) }) (g :: rs) := rfl
          rw [e1]
          simp only [placedStack]
          rw [ih (i + 1) top htop']
          have hidx : (i + 1) + (g :: rs).length - 1 = i + (f :: g :: rs).length - 1 := by
            simp only [List.length_cons]
            rw [Nat.add_assoc, Nat.add_comm 1 (rs.length + 1)]
          rw [hidx]
          exact (List.append_assoc _ _ _).symm

/-- All frames in the stack have good item forests. -/
def GoodStack (s : List (Frame L T)) : Prop := ∀ f ∈ s, GoodForest f.items

/-- The top frame's item forest is non-empty. This is the cascade
    condition that makes `decrease` safe: the first frame popped in a
    decrease sequence is non-empty, and every later frame in the sequence
    has just received a wrapped list node, so it is non-empty too. -/
def TopNe (s : List (Frame L T)) : Prop :=
  ∀ f, lastFrame s = some f → f.items ≠ .nil

theorem decrease_length : ∀ (s : List (Frame L T)), 2 ≤ s.length →
    (decrease s).length = s.length - 1 := by
  intro s
  induction s with
  | nil => intro h; simp at h
  | cons f rest ih =>
      intro h
      cases rest with
      | nil => simp at h
      | cons g rs =>
          cases rs with
          | nil =>
              have e : decrease [f, g] = [{ f with items := appendForest f.items (.list g.ltype g.items .nil) }] := rfl
              rw [e]; simp
          | cons x xs =>
              have e : decrease (f :: g :: x :: xs) = f :: decrease (g :: x :: xs) := rfl
              have hlen : 2 ≤ (g :: x :: xs).length := by simp
              have ih' := ih hlen
              rw [e]
              simp only [List.length_cons] at ih' ⊢
              rw [ih', Nat.add_sub_cancel, Nat.add_sub_cancel]

theorem decrease_ne_nil : ∀ (s : List (Frame L T)), s ≠ [] → decrease s ≠ [] := by
  intro s hs
  cases s with
  | nil => exact absurd rfl hs
  | cons f rest =>
      cases rest with
      | nil => simp [decrease]
      | cons g rs =>
          cases rs with
          | nil =>
              have e : decrease [f, g] = [{ f with items := appendForest f.items (.list g.ltype g.items .nil) }] := rfl
              rw [e]; simp
          | cons x xs =>
              have e : decrease (f :: g :: x :: xs) = f :: decrease (g :: x :: xs) := rfl
              rw [e]; simp

theorem decrease_placed : ∀ (s : List (Frame L T)) (i : Nat), 2 ≤ s.length →
    placedStack (decrease s) i = placedStack s i := by
  intro s
  induction s with
  | nil => intro i h; simp at h
  | cons f rest ih =>
      intro i h
      cases rest with
      | nil => simp at h
      | cons g rs =>
          cases rs with
          | nil =>
              have e : decrease [f, g] = [{ f with items := appendForest f.items (.list g.ltype g.items .nil) }] := rfl
              rw [e]
              simp [placedStack, walk_append, Forest.walk]
          | cons x xs =>
              have e : decrease (f :: g :: x :: xs) = f :: decrease (g :: x :: xs) := rfl
              have hlen : 2 ≤ (g :: x :: xs).length := by simp
              rw [e]
              show walk f.items f.ltype i ++ placedStack (decrease (g :: x :: xs)) (i + 1)
                  = placedStack (f :: g :: x :: xs) i
              rw [ih (i + 1) hlen]
              simp only [placedStack]

theorem goodStack_cons {f : Frame L T} {s : List (Frame L T)} :
    GoodStack (f :: s) ↔ GoodForest f.items ∧ GoodStack s := by
  constructor
  · intro h
    exact ⟨h f (by simp), fun g hg => h g (by simp [hg])⟩
  · intro h g hg
    simp at hg
    cases hg with
    | inl hge => rw [hge]; exact h.1
    | inr hg' => exact h.2 g hg'

theorem decrease_good : ∀ (s : List (Frame L T)),
    GoodStack s → TopNe s → 2 ≤ s.length → GoodStack (decrease s) := by
  intro s
  induction s with
  | nil => intro _ _ h; simp at h
  | cons f rest ih =>
      intro hgood htop h
      cases rest with
      | nil => simp at h
      | cons g rs =>
          cases rs with
          | nil =>
              have e : decrease [f, g] = [{ f with items := appendForest f.items (.list g.ltype g.items .nil) }] := rfl
              rw [e]
              rw [goodStack_cons]
              have hf : GoodForest f.items := (goodStack_cons.mp hgood).1
              have hg : GoodForest g.items := (goodStack_cons.mp hgood).2 g (by simp)
              have hgne : g.items ≠ .nil := htop g (by rfl)
              refine ⟨?_, fun x hx => by simp at hx⟩
              apply goodForest_append hf
              exact ⟨hgne, hg, trivial⟩
          | cons x xs =>
              have e : decrease (f :: g :: x :: xs) = f :: decrease (g :: x :: xs) := rfl
              rw [e, goodStack_cons]
              have hf : GoodForest f.items := (goodStack_cons.mp hgood).1
              have hrest : GoodStack (g :: x :: xs) := (goodStack_cons.mp hgood).2
              have htop' : TopNe (g :: x :: xs) := by
                intro y hy
                apply htop y
                rw [lastFrame_cons (x := f) (by simp : (g :: x :: xs) ≠ [])]
                exact hy
              have hlen : 2 ≤ (g :: x :: xs).length := by simp
              exact ⟨hf, ih hrest htop' hlen⟩

theorem decrease_topNe : ∀ (s : List (Frame L T)), 2 ≤ s.length → TopNe (decrease s) := by
  intro s
  induction s with
  | nil => intro h; simp at h
  | cons f rest ih =>
      intro h
      cases rest with
      | nil => simp at h
      | cons g rs =>
          cases rs with
          | nil =>
              have e : decrease [f, g] = [{ f with items := appendForest f.items (.list g.ltype g.items .nil) }] := rfl
              rw [e]
              intro y hy
              have hy' : y = { f with items := appendForest f.items (.list g.ltype g.items .nil) } := by
                have : lastFrame [{ f with items := appendForest f.items (.list g.ltype g.items .nil) }] = some { f with items := appendForest f.items (.list g.ltype g.items .nil) } := rfl
                rw [this] at hy
                exact (Option.some.inj hy).symm
              rw [hy']
              intro hnil
              exact (by simp : (.list g.ltype g.items .nil : Forest L T) ≠ .nil)
                (appendForest_eq_nil hnil).2
          | cons x xs =>
              have hlen : 2 ≤ (g :: x :: xs).length := by simp
              have ih' := ih hlen
              have e : decrease (f :: g :: x :: xs) = f :: decrease (g :: x :: xs) := rfl
              rw [e]
              intro y hy
              apply ih' y
              have e2 : lastFrame (f :: decrease (g :: x :: xs))
                  = lastFrame (decrease (g :: x :: xs)) :=
                lastFrame_cons (decrease_ne_nil _ (by simp))
              rw [e2] at hy
              exact hy

theorem adjustDown_spec : ∀ (n : Nat) (s : List (Frame L T)) (i : Nat),
    n < s.length → GoodStack s → (n > 0 → TopNe s) →
    placedStack (adjustDown n s) i = placedStack s i
      ∧ (adjustDown n s).length = s.length - n
      ∧ GoodStack (adjustDown n s)
      ∧ (n > 0 → TopNe (adjustDown n s)) := by
  intro n
  induction n with
  | zero =>
      intro s i _ hgood _
      refine ⟨rfl, ?_, hgood, fun h => by simp at h⟩
      show s.length = s.length - 0
      rw [Nat.sub_zero]
  | succ n ih =>
      intro s i hlen hgood htop
      have h2 : 2 ≤ s.length := Nat.le_trans (Nat.succ_le_succ (Nat.succ_le_succ (Nat.zero_le n))) hlen
      have e : adjustDown (n + 1) s = adjustDown n (decrease s) := rfl
      rw [e]
      have hdeclen := decrease_length s h2
      have hdecne : n < (decrease s).length := by
        rw [hdeclen]
        exact Nat.lt_sub_of_add_lt hlen
      have hdecgood := decrease_good s hgood (htop (by simp)) h2
      have hdectop : TopNe (decrease s) := decrease_topNe s h2
      have hdecplaced := decrease_placed s i h2
      obtain ⟨hp, hl, hg, ht⟩ := ih (decrease s) i hdecne hdecgood (fun _ => hdectop)
      refine ⟨?_, ?_, hg, ?_⟩
      · rw [hp, hdecplaced]
      · rw [hl, hdeclen, Nat.sub_sub, Nat.add_comm 1 n]
      · intro _
        cases n with
        | zero => exact hdectop
        | succ m => exact ht (by simp)

theorem lastFrame_replicate : ∀ (n : Nat) (f : Frame L T),
    lastFrame (List.replicate n f) = if n = 0 then none else some f := by
  intro n
  induction n with
  | zero => intro f; rfl
  | succ n ih =>
      intro f
      cases n with
      | zero => rfl
      | succ m =>
          have e : List.replicate (m + 2) f = f :: List.replicate (m + 1) f := List.replicate_succ
          have hne : List.replicate (m + 1) f ≠ [] := by
            rw [List.replicate_succ]; simp
          rw [e, lastFrame_cons hne, ih]
          simp

theorem goodStack_framesOf (n : Nat) (l : L) : GoodStack (framesOf n l : List (Frame L T)) := by
  intro f hf
  have : f = ⟨l, .nil⟩ := List.eq_of_mem_replicate hf
  rw [this]
  trivial

theorem goodStack_append {a b : List (Frame L T)} :
    GoodStack a → GoodStack b → GoodStack (a ++ b) := by
  intro ha hb f hf
  rw [List.mem_append] at hf
  cases hf with
  | inl h => exact ha f h
  | inr h => exact hb f h

/-- The full state invariant's quality component: finished trees are
    non-empty and good, and every frame's items are good. -/
def GoodState (s : DState L T) : Prop :=
  (∀ p ∈ s.finished, p.2 ≠ .nil ∧ GoodForest p.2) ∧ GoodStack s.stack

theorem goodStack_modifyTop (g : Frame L T → Frame L T)
    (hg : ∀ f, GoodForest f.items → GoodForest (g f).items) :
    ∀ (s : List (Frame L T)), GoodStack s → GoodStack (modifyTop g s) := by
  intro s
  induction s with
  | nil => intro h; exact h
  | cons f rest ih =>
      intro h
      cases rest with
      | nil =>
          have e : modifyTop g [f] = [g f] := rfl
          rw [e, goodStack_cons]
          exact ⟨hg f (goodStack_cons.mp h).1, fun x hx => by simp at hx⟩
      | cons g' rs =>
          have e : modifyTop g (f :: g' :: rs) = f :: modifyTop g (g' :: rs) := rfl
          rw [e, goodStack_cons]
          exact ⟨(goodStack_cons.mp h).1, ih (goodStack_cons.mp h).2⟩

theorem newList_single [DecidableEq (Forest L T)] (fin : List (L × Forest L T))
    (f : Frame L T) (l : L) :
    newList ⟨fin, [f]⟩ l
      = ⟨fin ++ (if f.items = .nil then [] else [(f.ltype, f.items)]), [⟨l, .nil⟩]⟩ := rfl

theorem newList_of_ne_single [DecidableEq (Forest L T)] (s : DState L T) (l : L)
    (h : s.stack.length ≠ 1) :
    newList s l = { s with stack := decrease s.stack ++ [⟨l, .nil⟩] } := by
  obtain ⟨fin, stk⟩ := s
  cases stk with
  | nil => rfl
  | cons f rest =>
      cases rest with
      | nil => simp at h
      | cons g rs => rfl

theorem newList_placed [DecidableEq (Forest L T)] (s : DState L T) (l : L) :
    placedState (newList s l) = placedState s := by
  by_cases h1 : s.stack.length = 1
  · obtain ⟨f, hf⟩ : ∃ f, s.stack = [f] := by
      have := List.length_eq_one_iff.mp h1
      obtain ⟨f, hf⟩ := this
      exact ⟨f, hf⟩
    obtain ⟨fin, stk⟩ := s
    simp at hf
    subst hf
    rw [newList_single]
    by_cases hnil : f.items = .nil
    · simp [hnil, placedState, placedForest_append, placedStack]
    · simp [hnil, placedState, placedForest_append, placedStack, Forest.walk, placedForest]
  · rw [newList_of_ne_single s l h1]
    by_cases hnil : s.stack = []
    · have hd : decrease s.stack = [] := by rw [hnil]; rfl
      show placedForest s.finished ++ placedStack (decrease s.stack ++ [⟨l, .nil⟩]) 0
          = placedForest s.finished ++ placedStack s.stack 0
      rw [hd, hnil]
      simp [placedStack]
    · have h2 : 2 ≤ s.stack.length := by
        cases hstk : s.stack with
        | nil => exact absurd hstk hnil
        | cons a as =>
            cases as with
            | nil => exact absurd (by simp [hstk]) h1
            | cons b bs => simp
      simp only [placedState]
      congr 1
      rw [placedStack_append, decrease_placed s.stack 0 h2]
      simp [placedStack]

theorem newList_length [DecidableEq (Forest L T)] (s : DState L T) (l : L)
    (hne : s.stack ≠ []) :
    (newList s l).stack.length = s.stack.length := by
  by_cases h1 : s.stack.length = 1
  · obtain ⟨f, hf⟩ : ∃ f, s.stack = [f] := List.length_eq_one_iff.mp h1
    obtain ⟨fin, stk⟩ := s
    simp at hf
    subst hf
    rw [newList_single]
    simp [h1]
  · have h2 : 2 ≤ s.stack.length := by
      cases hstk : s.stack with
      | nil => exact absurd hstk hne
      | cons a as =>
          cases as with
          | nil => exact absurd (by simp [hstk]) h1
          | cons b bs => simp
    rw [newList_of_ne_single s l h1]
    simp only [List.length_append, List.length_singleton, decrease_length s.stack h2]
    exact Nat.sub_add_cancel (Nat.le_trans (Nat.le_succ 1) h2)

theorem newList_good [DecidableEq (Forest L T)] (s : DState L T) (l : L)
    (hgood : GoodState s) (htop : s.stack.length = 1 ∨ TopNe s.stack) :
    GoodState (newList s l) := by
  by_cases h1 : s.stack.length = 1
  · obtain ⟨f, hf⟩ : ∃ f, s.stack = [f] := List.length_eq_one_iff.mp h1
    obtain ⟨fin, stk⟩ := s
    simp at hf
    subst hf
    rw [newList_single]
    constructor
    · intro p hp
      rw [List.mem_append] at hp
      cases hp with
      | inl h => exact hgood.1 p h
      | inr h =>
          by_cases hnil : f.items = .nil
          · simp [hnil] at h
          · simp [hnil] at h
            obtain ⟨rfl, rfl⟩ : p = (f.ltype, f.items) := by simpa using h
            exact ⟨hnil, hgood.2 f (by simp)⟩
    · intro x hx
      simp at hx
      rw [hx]
      trivial
  · rw [newList_of_ne_single s l h1]
    by_cases hnil : s.stack = []
    · have hd : decrease s.stack = [] := by rw [hnil]; rfl
      refine ⟨hgood.1, ?_⟩
      show GoodStack (decrease s.stack ++ [⟨l, .nil⟩])
      rw [hd]
      intro x hx
      simp at hx
      rw [hx]
      trivial
    · have h2 : 2 ≤ s.stack.length := by
        cases hstk : s.stack with
        | nil => exact absurd hstk hnil
        | cons a as =>
            cases as with
            | nil => exact absurd (by simp [hstk]) h1
            | cons b bs => simp
      have htop' : TopNe s.stack := match htop with
        | .inl hh => absurd hh h1
        | .inr hh => hh
      exact ⟨hgood.1, goodStack_append (decrease_good s.stack hgood.2 htop' h2)
        (fun x hx => by
          simp at hx
          rw [hx]
          trivial)⟩

theorem newList_lastFrame [DecidableEq (Forest L T)] (s : DState L T) (l : L) :
    lastFrame (newList s l).stack = some ⟨l, .nil⟩ := by
  by_cases h1 : s.stack.length = 1
  · obtain ⟨f, hf⟩ : ∃ f, s.stack = [f] := List.length_eq_one_iff.mp h1
    obtain ⟨fin, stk⟩ := s
    simp at hf
    subst hf
    rw [newList_single]
    rfl
  · rw [newList_of_ne_single s l h1]
    have : lastFrame (decrease s.stack ++ [⟨l, .nil⟩]) = lastFrame [⟨l, .nil⟩] :=
      lastFrame_append (by simp)
    rw [this]
    rfl

theorem pushItem_placed (s : DState L T) (t : T) (top : Frame L T)
    (htop : lastFrame s.stack = some top) :
    placedState (pushItem s t)
      = placedState s ++ [(t, s.stack.length - 1, top.ltype)] := by
  have e1 : (pushItem s t).finished = s.finished := rfl
  have e2 : (pushItem s t).stack
      = modifyTop (fun f => { f with items := appendForest f.items (.item t .nil) }) s.stack := rfl
  simp only [placedState, e1, e2]
  rw [placedStack_modifyTop_push t s.stack 0 top htop]
  simp [List.append_assoc]

theorem pushItem_length (s : DState L T) (t : T) :
    (pushItem s t).stack.length = s.stack.length := modifyTop_length _ s.stack

theorem pushItem_good (s : DState L T) (t : T) (hgood : GoodState s) :
    GoodState (pushItem s t) := by
  refine ⟨hgood.1, ?_⟩
  have e2 : (pushItem s t).stack
      = modifyTop (fun f => { f with items := appendForest f.items (.item t .nil) }) s.stack := rfl
  rw [e2]
  apply goodStack_modifyTop _ _ s.stack hgood.2
  intro f hf
  exact goodForest_append hf trivial

theorem pushItem_topNe (s : DState L T) (t : T) : TopNe (pushItem s t).stack := by
  intro y hy
  have e2 : (pushItem s t).stack
      = modifyTop (fun f => { f with items := appendForest f.items (.item t .nil) }) s.stack := rfl
  rw [e2, lastFrame_modifyTop] at hy
  cases hlast : lastFrame s.stack with
  | none => simp [hlast] at hy
  | some x =>
      rw [hlast] at hy
      simp at hy
      have hy' : y = { x with items := appendForest x.items (.item t .nil) } := hy.symm
      rw [hy']
      intro hnil
      exact (by simp : (.item t .nil : Forest L T) ≠ .nil) (appendForest_eq_nil hnil).2

theorem pushItem_lastFrame_ltype (s : DState L T) (t : T) :
    (lastFrame (pushItem s t).stack).map Frame.ltype
      = (lastFrame s.stack).map Frame.ltype := by
  have e2 : (pushItem s t).stack
      = modifyTop (fun f => { f with items := appendForest f.items (.item t .nil) }) s.stack := rfl
  rw [e2, lastFrame_modifyTop]
  cases lastFrame s.stack with
  | none => rfl
  | some x => rfl

/-- The loop invariant. After consuming `done` rows, with `prev` the last
    row's depth (0 before the first row):
    1. the state's placed rows are exactly `done`, placed;
    2. the stack has `prev + 1` frames (so the top frame sits at depth
       `prev`, and every `decrease` the Rust performs is in bounds);
    3. the state is good (no empty list nodes anywhere);
    4. once a row has been consumed, the top frame is non-empty (the
       cascade condition for the next decrease sequence);
    5. before the first row, `prev = 0`. -/
def Inv (s : DState L T) (done : List (Row L T)) (prev : Nat) : Prop :=
  placedState s = done.map rowPlaced
  ∧ s.stack.length = prev + 1
  ∧ GoodState s
  ∧ (done ≠ [] → TopNe s.stack)
  ∧ (done = [] → prev = 0)

theorem framesOf_length (n : Nat) (l : L) : (framesOf n l : List (Frame L T)).length = n := by
  simp [framesOf]

theorem framesOf_ne_nil {n : Nat} (hn : 0 < n) (l : L) :
    (framesOf n l : List (Frame L T)) ≠ [] := by
  intro hh
  have h0 := congrArg List.length hh
  simp [framesOf_length] at h0
  rw [h0] at hn
  exact Nat.lt_irrefl 0 hn

theorem lastFrame_framesOf {n : Nat} (hn : 0 < n) (l : L) :
    lastFrame (framesOf n l : List (Frame L T)) = some ⟨l, .nil⟩ := by
  have hn0 : ¬ n = 0 := Nat.ne_of_gt hn
  show lastFrame (List.replicate n (⟨l, .nil⟩ : Frame L T)) = some ⟨l, .nil⟩
  rw [lastFrame_replicate]
  simp [hn0]

theorem adjust_spec [DecidableEq L] [DecidableEq (Forest L T)] (s : DState L T)
    (done : List (Row L T)) (prev : Nat) (r : Row L T) (h : Inv s done prev) :
    placedState (adjustStack s prev r) = placedState s
    ∧ (adjustStack s prev r).stack.length = r.depth + 1
    ∧ GoodState (adjustStack s prev r)
    ∧ ((lastFrame (adjustStack s prev r).stack).map Frame.ltype ≠ some r.ltype
        → (adjustStack s prev r).stack.length = 1 ∨ TopNe (adjustStack s prev r).stack) := by
  obtain ⟨hplaced, hlen, hgood, htopne, hprev0⟩ := h
  by_cases hge : r.depth ≥ prev
  · have e : adjustStack s prev r
        = { s with stack := s.stack ++ framesOf (r.depth - prev) r.ltype } := by
      simp [adjustStack, hge]
    rw [e]
    have hplaced' : placedState { s with stack := s.stack ++ framesOf (r.depth - prev) r.ltype }
        = placedState s := by
      show placedForest s.finished ++ placedStack (s.stack ++ framesOf (r.depth - prev) r.ltype) 0
          = placedState s
      rw [placedStack_append, placedStack_framesOf]
      simp [placedState]
    have hlen' : ({ s with stack := s.stack ++ framesOf (r.depth - prev) r.ltype } : DState L T).stack.length
        = r.depth + 1 := by
      show (s.stack ++ framesOf (r.depth - prev) r.ltype).length = r.depth + 1
      rw [List.length_append, framesOf_length, hlen, Nat.add_right_comm, Nat.add_sub_of_le hge]
    have hgood' : GoodState { s with stack := s.stack ++ framesOf (r.depth - prev) r.ltype } := by
      refine ⟨hgood.1, ?_⟩
      show GoodStack (s.stack ++ framesOf (r.depth - prev) r.ltype)
      exact goodStack_append hgood.2 (goodStack_framesOf _ _)
    refine ⟨hplaced', hlen', hgood', ?_⟩
    intro hcheck
    by_cases hn : r.depth - prev = 0
    · have hstk : s.stack ++ framesOf (r.depth - prev) r.ltype = s.stack := by
        rw [hn]
        simp [framesOf]
      show (({ s with stack := s.stack ++ framesOf (r.depth - prev) r.ltype } : DState L T).stack.length = 1
          ∨ TopNe ({ s with stack := s.stack ++ framesOf (r.depth - prev) r.ltype } : DState L T).stack)
      rw [hstk]
      by_cases hdone : done = []
      · left
        rw [hlen, hprev0 hdone]
      · right
        exact htopne hdone
    · have hn' : 0 < r.depth - prev := Nat.pos_of_ne_zero hn
      exfalso
      apply hcheck
      show (lastFrame (s.stack ++ framesOf (r.depth - prev) r.ltype)).map Frame.ltype = some r.ltype
      rw [lastFrame_append (framesOf_ne_nil hn' _), lastFrame_framesOf hn']
      rfl
  · have hlt : r.depth < prev := Nat.lt_of_not_le hge
    have e : adjustStack s prev r
        = { s with stack := adjustDown (prev - r.depth) s.stack } := by
      simp [adjustStack, hge]
    rw [e]
    have hdone : done ≠ [] := by
      intro hd
      have hp0 := hprev0 hd
      rw [hp0] at hlt
      exact Nat.not_lt_zero r.depth hlt
    have hspec := adjustDown_spec (prev - r.depth) s.stack 0 (by
      rw [hlen]
      exact Nat.lt_succ_of_le (Nat.sub_le prev r.depth)) hgood.2 (fun _ => htopne hdone)
    obtain ⟨hp, hl, hg, ht⟩ := hspec
    have hplaced' : placedState { s with stack := adjustDown (prev - r.depth) s.stack }
        = placedState s := by
      show placedForest s.finished ++ placedStack (adjustDown (prev - r.depth) s.stack) 0
          = placedState s
      rw [hp]
      rfl
    have hlen' : ({ s with stack := adjustDown (prev - r.depth) s.stack } : DState L T).stack.length
        = r.depth + 1 := by
      show (adjustDown (prev - r.depth) s.stack).length = r.depth + 1
      rw [hl, hlen, Nat.add_comm prev 1, Nat.add_sub_assoc (Nat.sub_le prev r.depth) 1,
          Nat.sub_sub_self (Nat.le_of_lt hlt), Nat.add_comm 1 r.depth]
    have hgood' : GoodState { s with stack := adjustDown (prev - r.depth) s.stack } :=
      ⟨hgood.1, hg⟩
    refine ⟨hplaced', hlen', hgood', ?_⟩
    intro _
    right
    show TopNe (adjustDown (prev - r.depth) s.stack)
    exact ht (Nat.sub_pos_of_lt hlt)

theorem finish_step [DecidableEq L] [DecidableEq (Forest L T)] (s1 : DState L T)
    (done : List (Row L T)) (r : Row L T)
    (hplaced : placedState s1 = done.map rowPlaced)
    (hlen : s1.stack.length = r.depth + 1)
    (hgood : GoodState s1)
    (hcond : (lastFrame s1.stack).map Frame.ltype ≠ some r.ltype
        → s1.stack.length = 1 ∨ TopNe s1.stack) :
    Inv (pushItem (if (lastFrame s1.stack).map Frame.ltype = some r.ltype then s1
            else newList s1 r.ltype) r.item) (done ++ [r]) r.depth := by
  by_cases hcheck : (lastFrame s1.stack).map Frame.ltype = some r.ltype
  · rw [if_pos hcheck]
    obtain ⟨top, htop, htopl⟩ : ∃ f, lastFrame s1.stack = some f ∧ f.ltype = r.ltype := by
      cases hlast : lastFrame s1.stack with
      | none => simp [hlast] at hcheck
      | some f =>
          refine ⟨f, rfl, ?_⟩
          have : (some f).map Frame.ltype = some r.ltype := by rw [← hcheck, hlast]
          simpa using this
    have hidx : s1.stack.length - 1 = r.depth := by rw [hlen, Nat.add_sub_cancel]
    refine ⟨?_, ?_, pushItem_good s1 r.item hgood, fun _ => pushItem_topNe s1 r.item, ?_⟩
    · rw [pushItem_placed s1 r.item top htop, hidx, htopl, hplaced]
      simp [List.map_append, rowPlaced]
    · rw [pushItem_length, hlen]
    · intro hh
      simp at hh
  · rw [if_neg hcheck]
    have hne : s1.stack ≠ [] := by
      intro hh
      rw [hh] at hlen
      cases hlen
    have hlen2 : (newList s1 r.ltype).stack.length = r.depth + 1 := by
      rw [newList_length s1 r.ltype hne, hlen]
    have hidx : (newList s1 r.ltype).stack.length - 1 = r.depth := by rw [hlen2, Nat.add_sub_cancel]
    refine ⟨?_, ?_, ?_, fun _ => pushItem_topNe _ r.item, ?_⟩
    · rw [pushItem_placed _ r.item ⟨r.ltype, .nil⟩ (newList_lastFrame s1 r.ltype),
        hidx, newList_placed, hplaced]
      simp [List.map_append, rowPlaced]
    · rw [pushItem_length, hlen2]
    · exact pushItem_good _ r.item (newList_good s1 r.ltype hgood (hcond hcheck))
    · intro hh
      simp at hh

theorem step_inv [DecidableEq L] [DecidableEq (Forest L T)] (s : DState L T)
    (done : List (Row L T)) (prev : Nat) (r : Row L T) (h : Inv s done prev) :
    Inv (step s prev r) (done ++ [r]) r.depth := by
  obtain ⟨hp, hl, hg, hc⟩ := adjust_spec s done prev r h
  have := finish_step (adjustStack s prev r) done r (hp.trans h.1) hl hg hc
  exact this

theorem runRows_spec [DecidableEq L] [DecidableEq (Forest L T)] :
    ∀ (rows done : List (Row L T)) (s : DState L T) (prev : Nat),
      Inv s done prev → Inv (runRows s prev rows).1 (done ++ rows) (runRows s prev rows).2 := by
  intro rows
  induction rows with
  | nil =>
      intro done s prev h
      have e : runRows s prev ([] : List (Row L T)) = (s, prev) := rfl
      rw [e]
      simpa using h
  | cons r rest ih =>
      intro done s prev h
      have e : runRows s prev (r :: rest) = runRows (step s prev r) r.depth rest := rfl
      rw [e]
      have h' := ih (done ++ [r]) (step s prev r) r.depth (step_inv s done prev r h)
      have happ : (done ++ [r]) ++ rest = done ++ (r :: rest) := by simp [List.append_assoc]
      rw [happ] at h'
      exact h'

theorem walk_wrapFrames : ∀ (fs : List (Frame L T)) (n : Nat) (l : L),
    walk (wrapFrames fs) l n = placedStack fs (n + 1)
  | [], _, _ => rfl
  | f :: rest, n, l => by
      show walk (.list f.ltype (appendForest f.items (wrapFrames rest)) .nil) l n
          = placedStack (f :: rest) (n + 1)
      simp only [Forest.walk, Forest.walk_nil, List.append_nil, walk_append]
      rw [walk_wrapFrames rest (n + 1) f.ltype]
      rfl

theorem intoTrees_placed [DecidableEq (Forest L T)] (s : DState L T) :
    placedForest (intoTrees s) = placedState s := by
  cases hstk : s.stack with
  | nil =>
      have e : intoTrees s = s.finished := by
        simp [intoTrees, hstk]
      rw [e]
      simp [placedState, hstk, placedStack]
  | cons f rest =>
      have e : intoTrees s
          = s.finished ++ (if appendForest f.items (wrapFrames rest) = .nil then []
            else [(f.ltype, appendForest f.items (wrapFrames rest))]) := by
        simp [intoTrees, hstk]
      rw [e, placedForest_append]
      by_cases hnil : appendForest f.items (wrapFrames rest) = .nil
      · rw [if_pos hnil]
        simp [placedForest, placedState, hstk]
        have hw : walk (appendForest f.items (wrapFrames rest)) f.ltype 0 = [] := by
          rw [hnil]; rfl
        rw [walk_append, walk_wrapFrames] at hw
        have : placedStack (f :: rest) 0
            = walk f.items f.ltype 0 ++ placedStack rest 1 := rfl
        rw [this]
        exact hw
      · rw [if_neg hnil]
        simp [placedForest, placedState, hstk]
        rw [walk_append, walk_wrapFrames]
        simp only [placedStack]

theorem wrapFrames_good : ∀ (fs : List (Frame L T)),
    GoodStack fs → (fs ≠ [] → TopNe fs) → GoodForest (wrapFrames fs)
  | [], _, _ => trivial
  | [f], hgood, htop => by
      show GoodForest (.list f.ltype (appendForest f.items (wrapFrames [])) .nil)
      refine ⟨?_, ?_, trivial⟩
      · rw [show wrapFrames ([] : List (Frame L T)) = .nil from rfl, appendForest_nil_right]
        exact htop (by simp) f rfl
      · exact goodForest_append (goodStack_cons.mp hgood).1 (by
          show GoodForest (wrapFrames ([] : List (Frame L T)))
          trivial)
  | f :: g :: rest, hgood, htop => by
      show GoodForest (.list f.ltype
        (appendForest f.items (wrapFrames (g :: rest))) .nil)
      have hfrest : GoodForest (wrapFrames (g :: rest)) :=
        wrapFrames_good (g :: rest) (goodStack_cons.mp hgood).2 (fun _ y hy => by
          apply htop (by simp) y
          rw [lastFrame_cons (x := f) (by simp : (g :: rest) ≠ [])]
          exact hy)
      have hne : appendForest f.items (wrapFrames (g :: rest)) ≠ .nil := by
        intro hh
        have h2 := (appendForest_eq_nil hh).2
        have : wrapFrames (g :: rest)
            = .list g.ltype (appendForest g.items (wrapFrames rest)) .nil := rfl
        rw [this] at h2
        simp at h2
      refine ⟨hne, goodForest_append (goodStack_cons.mp hgood).1 hfrest, trivial⟩

theorem intoTrees_good [DecidableEq (Forest L T)] (s : DState L T)
    (hgood : GoodState s) (htop : 2 ≤ s.stack.length → TopNe s.stack) :
    ∀ p ∈ intoTrees s, p.2 ≠ .nil ∧ GoodForest p.2 := by
  intro p hp
  cases hstk : s.stack with
  | nil =>
      have e : intoTrees s = s.finished := by simp [intoTrees, hstk]
      rw [e] at hp
      exact hgood.1 p hp
  | cons f rest =>
      have e : intoTrees s
          = s.finished ++ (if appendForest f.items (wrapFrames rest) = .nil then []
            else [(f.ltype, appendForest f.items (wrapFrames rest))]) := by
        simp [intoTrees, hstk]
      rw [e] at hp
      rw [List.mem_append] at hp
      cases hp with
      | inl h => exact hgood.1 p h
      | inr h =>
          by_cases hnil : appendForest f.items (wrapFrames rest) = .nil
          · simp [hnil] at h
          · simp [hnil] at h
            obtain ⟨rfl, rfl⟩ : p = (f.ltype, appendForest f.items (wrapFrames rest)) := by
              simpa using h
            refine ⟨hnil, ?_⟩
            apply goodForest_append (hgood.2 f (by simp [hstk]))
            apply wrapFrames_good rest
            · intro x hx
              apply hgood.2 x
              simp [hstk, hx]
            · intro hne2 y hy
              have hlen2 : 2 ≤ s.stack.length := by
                rw [hstk]
                cases rest with
                | nil => exact absurd rfl hne2
                | cons a as => simp
              have htopS := htop hlen2
              apply htopS y
              rw [hstk, lastFrame_cons hne2]
              exact hy

/-- Properties 2, 3 and 4 of the harness, for all inputs: the placed rows
    of the output are exactly the input rows, in order, each at its stated
    depth and in a list of its stated type. (Property 1, no panic, is the
    totality of `processDepths` as a Lean function.) -/
theorem processDepths_placed [DecidableEq L] [DecidableEq (Forest L T)] (top : L)
    (rows : List (Row L T)) :
    placedForest (processDepths top rows) = rows.map rowPlaced := by
  have hinv : Inv (⟨[], [⟨top, .nil⟩]⟩ : DState L T) [] 0 := by
    refine ⟨?_, rfl, ?_, ?_, ?_⟩
    · simp [placedState, placedForest, placedStack]
    · constructor
      · intro p hp; simp at hp
      · intro x hx
        simp at hx
        rw [hx]
        trivial
    · intro h; simp at h
    · intro _; rfl
  have hfinal := runRows_spec rows [] ⟨[], [⟨top, .nil⟩]⟩ 0 hinv
  have e : processDepths top rows = intoTrees (runRows ⟨[], [⟨top, .nil⟩]⟩ 0 rows).1 := rfl
  rw [e, intoTrees_placed]
  have := hfinal.1
  simpa using this

/-- Property 5 of the harness, for all inputs: no returned tree is empty
    and no list node anywhere in the output has an empty child forest. -/
theorem processDepths_good [DecidableEq L] [DecidableEq (Forest L T)] (top : L)
    (rows : List (Row L T)) :
    ∀ p ∈ processDepths top rows, p.2 ≠ .nil ∧ GoodForest p.2 := by
  have hinv : Inv (⟨[], [⟨top, .nil⟩]⟩ : DState L T) [] 0 := by
    refine ⟨?_, rfl, ?_, ?_, ?_⟩
    · simp [placedState, placedForest, placedStack]
    · constructor
      · intro p hp; simp at hp
      · intro x hx
        simp at hx
        rw [hx]
        trivial
    · intro h; simp at h
    · intro _; rfl
  by_cases hrows : rows = []
  · subst hrows
    intro p hp
    simp [processDepths, runRows, intoTrees, wrapFrames, Forest.appendForest] at hp
  · have hfinal := runRows_spec rows [] ⟨[], [⟨top, .nil⟩]⟩ 0 hinv
    have e : processDepths top rows = intoTrees (runRows ⟨[], [⟨top, .nil⟩]⟩ 0 rows).1 := rfl
    rw [e]
    obtain ⟨-, -, hgoodF, htopF, -⟩ := hfinal
    exact intoTrees_good _ hgoodF (fun _ => htopF (by simp [hrows]))

end LeanFtml
