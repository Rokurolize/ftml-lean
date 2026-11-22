//! Conformance dumper for gap ledger G1.1 (see ../../README.md).
//!
//! Compiles ftml's real `process_depths` by path inclusion, exactly the
//! way ftml's own verification/process-depths crate does, reads the
//! harness text format, and writes output trees in the canonical format
//! the Lean driver (lean-ftml/Conformance.lean) also uses.
//!
//! The #[path] values are absolute because this crate only ever builds
//! on the WSL box, next to the ftml checkout it measures.

#[path = "/home/roku/src/Rokurolize/ftml/src/non_empty_vec.rs"]
pub mod non_empty_vec;

#[path = "/home/roku/src/Rokurolize/ftml/src/parsing/depth.rs"]
pub mod depth;

use depth::{process_depths, DepthItem, DepthList};

fn ser_forest(list: &DepthList<u32, usize>) -> String {
    if list.is_empty() {
        return "-".to_string();
    }
    list.iter()
        .map(|node| match node {
            DepthItem::Item(id) => format!("i{}", id),
            DepthItem::List(l, sub) => format!("L{}({})", l, ser_forest(sub)),
        })
        .collect::<Vec<_>>()
        .join(" ")
}

fn ser_trees(trees: &[(u32, DepthList<u32, usize>)]) -> String {
    if trees.is_empty() {
        return "EMPTY".to_string();
    }
    trees
        .iter()
        .map(|(l, f)| format!("T{}[{}]", l, ser_forest(f)))
        .collect::<Vec<_>>()
        .join(" ")
}

fn main() {
    let args: Vec<String> = std::env::args().collect();
    let input = std::fs::read_to_string(&args[1]).expect("read input");
    let mut out = String::new();
    for line in input.lines() {
        let rows: Vec<(usize, u32, usize)> = if line.is_empty() {
            Vec::new()
        } else {
            line.split(';')
                .map(|part| {
                    let mut it = part.split(',');
                    (
                        it.next().unwrap().parse().unwrap(),
                        it.next().unwrap().parse().unwrap(),
                        it.next().unwrap().parse().unwrap(),
                    )
                })
                .collect()
        };
        let trees = process_depths(9u32, rows);
        out.push_str(&ser_trees(&trees));
        out.push('\n');
    }
    std::fs::write(&args[2], out).expect("write output");
}
