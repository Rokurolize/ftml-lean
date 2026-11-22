#!/usr/bin/env python3
"""Generate abstract-element operation grids for the G1.5 bridge-A differential.

Each case is a JSONL object {"id","wikidot":true,"ops":[...]} driving both
the Lean model and the real ParagraphStack through the same operation protocol.
Only the scoped core operations are emitted; element-internal compatibility
marks are deliberately out of scope (see REPORT-G15.md).
"""
import itertools, json, random, sys

def txt(s, safe=True): return {"op":"push","element":{"kind":"text","s":s},"safe":safe}
def raw(s): return {"op":"push","element":{"kind":"raw","s":s},"safe":True}
def lb(safe=True): return {"op":"push","element":{"kind":"linebreak"},"safe":safe}
def hr(): return {"op":"push","element":{"kind":"hr"},"safe":False}
def code(s="c"): return {"op":"push","element":{"kind":"code","s":s},"safe":False}
def lst(): return {"op":"push","element":{"kind":"list","explicit":True},"safe":False}
def html(s="h"): return {"op":"push","element":{"kind":"html","s":s},"safe":False}
def bold(): return {"op":"push","element":{"kind":"container","ctype":"bold","elements":[]},"safe":True}
def div(): return {"op":"push","element":{"kind":"container","ctype":"div","elements":[]},"safe":False}
def batch(es): return {"op":"push_safe_batch","elements":es}
def end(): return {"op":"end"}
def brk(): return {"op":"end_break"}
def unwrap(): return {"op":"unwrap"}
def nextunwrap(): return {"op":"next_unwrap"}
def discard(): return {"op":"discarded"}
def poplb(): return {"op":"pop_break"}
def line_start(v): return {"op":"line_start","value":v}

cases = []
def add(name, ops): cases.append({"id": name, "wikidot": True, "ops": ops})

# Hand-pinned core shapes, mirroring the ftml unit tests in stack.rs.
add("t01_safe_then_hr", [txt("alpha"), hr()])
add("t02_pop_break", [txt("alpha"), lb(), poplb()])
add("t03_unsafe_consecutive", [txt("alpha"), hr(), code(), txt("beta")])
add("t04_bulk_leading_breaks", [batch([{"kind":"linebreak"},{"kind":"text","s":"alpha"},{"kind":"linebreak"}])])
add("t05_bulk_all_breaks", [batch([{"kind":"linebreak"},{"kind":"linebreak"}])])
add("t06_bulk_append", [txt("alpha"), batch([{"kind":"linebreak"},{"kind":"text","s":"beta"}])])
add("t07_trailing_space", [txt("alpha"), txt(" "), end()])
add("t08_trailing_space_break", [txt("alpha"), txt(" "), lb(), txt("beta")])
add("t09_unwrapped_existing", [txt("alpha"), unwrap(), txt("beta"), end()])
add("t10_unwrapped_empty", [unwrap(), txt("alpha"), end()])
add("t11_next_unwrapped", [nextunwrap(), txt("alpha"), end()])
add("t12_discarded_control", [discard(), txt(" "), lb(), txt("omega"), end()])
add("t13_unwrapped_break_sep", [txt("alpha"), unwrap(), brk(), txt("beta"), end()])
add("t14_wrapped_break", [txt("alpha"), brk(), txt("beta"), end()])
add("t15_space_indent_line_start", [line_start(True), txt(" "), txt("alpha"), end()])
add("t16_space_after_space", [txt(" "), txt(" "), txt("alpha"), end()])
add("t17_space_after_break", [txt("alpha"), lb(), txt(" "), txt("beta"), end()])
add("t18_empty_end", [end()])
add("t19_only_break_unsafe", [lb(False), txt("alpha"), end()])
add("t20_hr_then_wrapped", [hr(), txt("alpha"), end()])
add("t22_code_then_prose", [code(), txt("alpha"), end()])
add("t24_div_then_prose", [div(), txt("alpha"), end()])
add("t25_bold_safe", [txt("a"), bold(), txt("b"), end()])
add("t26_break_seen_reset", [txt("a"), brk(), lb(), txt("b"), end()])
add("t27_raw_preserve", [raw("x y"), end()])
add("t28_whitespace_unwrapped_break", [txt("alpha"), unwrap(), txt("  "), brk(), txt("beta"), end()])
add("t29_bulk_then_unsafe", [batch([{"kind":"linebreak"},{"kind":"text","s":"a"}]), hr(), txt("b"), end()])
add("t30_multiple_breaks", [txt("a"), lb(), lb(), txt("b"), end()])

# Corpus-derived abstract shapes (ftml test/ tree), at the stack API layer.
# Each maps the corpus's paragraph formation to the abstract operations the
# driver actually issues at this layer; the rule-level token consumption is
# a different family and is not claimed here.
add("corpus_paragraph_basic_two", [txt("First paragaph"), brk(), txt("Second paragraph"), end()])
add("corpus_paragraph_basic_three", [txt("Mango"), brk(), txt("Blueberry"), brk(), txt("Gooseberry"), end()])
add("corpus_comment_line_single_break", [txt("A"), lb(), txt("B"), end()])
add("corpus_comment_blank_line_two_paras", [txt("x"), brk(), txt("z"), end()])
add("corpus_whitespace_line_no_demotion", [txt("x"), brk(), txt("z"), end()])
add("corpus_blockquote_blank_splits", [txt("Apple"), brk(), txt("Banana"), end()])
add("corpus_blockquote_nested_rows", [txt("Cherry"), lb(), txt("Pineapple"), txt("Mango"), end()])
add("corpus_list_item_middle_paragraphs", [txt("a"), brk(), txt("b"), brk(), txt("c"), end()])
add("corpus_table_followed_by_prose", [hr(), txt("Plain paragraph after table"), end()])
add("corpus_span_break_reopens", [txt("A1"), brk(), txt("B2"), end()])
add("corpus_scored_alias_trailing_space", [txt("x"), txt(" "), end()])

# Systematic short sequences over a representative alphabet.
ops_pool = [txt("a"), txt(" "), lb(), hr(), code(), bold(), end(), brk(), unwrap(), poplb()]
for n in (2, 3):
    for i, combo in enumerate(itertools.product(range(len(ops_pool)), repeat=n)):
        add(f"g{n}_{i:04d}", [ops_pool[k] for k in combo])

# Mark combinations with a fixed element skeleton.
skeleton = [txt("x"), lb(), txt("y")]
marks = [unwrap(), nextunwrap(), discard(), brk(), end(), poplb(), line_start(True), line_start(False)]
for i, combo in enumerate(itertools.product(range(len(marks)), repeat=2)):
    add(f"m2_{i:03d}", [marks[combo[0]], skeleton[0], marks[combo[1]], skeleton[1], skeleton[2], end()])

# Seeded random longer streams.
rng = random.Random(6150)
for i in range(400):
    n = rng.randint(4, 12)
    ops = []
    for _ in range(n):
        k = rng.randrange(14)
        if k == 0: ops.append(txt(rng.choice(["a","b"," ","  ","x"])))
        elif k == 1: ops.append(lb())
        elif k == 2: ops.append(hr())
        elif k == 3: ops.append(code())
        elif k == 4: ops.append(bold())
        elif k == 5: ops.append(end())
        elif k == 6: ops.append(brk())
        elif k == 7: ops.append(unwrap())
        elif k == 8: ops.append(nextunwrap())
        elif k == 9: ops.append(poplb())
        elif k == 10: ops.append(discard())
        elif k == 11: ops.append(code())
        elif k == 12: ops.append(batch([{"kind":"linebreak"},{"kind":"text","s":"q"}]))
        else: ops.append(line_start(rng.choice([True, False])))
    add(f"r_{i:03d}", ops)

with open(sys.argv[1] if len(sys.argv) > 1 else "inputs.jsonl", "w") as f:
    for case in cases:
        f.write(json.dumps(case, separators=(",", ":")) + "\n")
print(f"generated {len(cases)} cases")
