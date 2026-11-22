//! G1.6 seam-typography check, lifted verbatim from the read-only ftml
//! checkout's `src/delayed/seam_equivalence.rs`. Only the visibility needed
//! from outside `delayed` was changed in the surrounding copied source.

use super::preproc::typography::{
    substitute_wikidot, substitute_wikidot_deferring_conditionals,
};
use crate::delayed::seam::resolve_static_suppressions;
use crate::delayed::DelayedElement;
use crate::tree::Element;
use std::borrow::Cow;
use std::collections::BTreeMap;

pub const BLOCK: &str = "[[iftags +zz-no-such-tag]]x[[/iftags]]";

pub const TOKENS: &[&str] = &[
    "\"", "'", "a", " ", ".", "...", "<", ">", "<<", ">>", "\u{e9}",
];

#[derive(Debug)]
pub struct CheckResult {
    pub segments: Vec<String>,
    pub got: String,
    pub expected: String,
    pub class: Option<String>,
    pub message: String,
}

fn typography(raw: &str) -> String {
    let mut text = raw.to_owned();
    substitute_wikidot(&mut text);
    text
}

fn preprocess_pieces(source: &str) -> Vec<String> {
    let mut text = source.to_owned();
    substitute_wikidot_deferring_conditionals(&mut text);
    text.split(BLOCK).map(str::to_owned).collect()
}

fn difference_class(got: &str, expected: &str) -> String {
    let mut counts: BTreeMap<char, i64> = BTreeMap::new();
    for c in got.chars() {
        *counts.entry(c).or_default() += 1;
    }
    for c in expected.chars() {
        *counts.entry(c).or_default() -= 1;
    }
    let mut class = String::from("text-differs:");
    for (c, n) in counts {
        if n != 0 {
            class.push_str(&format!(" {c}{}", if n > 0 { "+" } else { "-" }));
        }
    }
    class
}

fn pick_has_right_angle(pick: &[usize]) -> bool {
    pick.iter()
        .any(|&p| p < TOKENS.len() && matches!(TOKENS[p], ">" | ">>"))
}

pub fn check(pick: &[usize]) -> CheckResult {
    let seam = TOKENS.len();
    let mut segments: Vec<String> = vec![String::new()];
    for &p in pick {
        if p == seam {
            segments.push(String::new());
        } else {
            segments.last_mut().unwrap().push_str(TOKENS[p]);
        }
    }
    let description = segments
        .iter()
        .map(|s| format!("{s:?}"))
        .collect::<Vec<_>>()
        .join(" | ");

    let with_blocks = segments.join(BLOCK);
    let pieces = preprocess_pieces(&with_blocks);
    debug_assert_eq!(pieces.len(), segments.len());

    let mut elements: Vec<Element<'static>> = Vec::new();
    for (i, piece) in pieces.iter().enumerate() {
        if i > 0 {
            elements.push(Element::Delayed(DelayedElement::typography_boundary()));
        }
        if !piece.is_empty() {
            elements.push(Element::Text(Cow::Owned(piece.clone())));
        }
    }

    let outcome = std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| {
        resolve_static_suppressions(&mut elements, true);
        elements
    }));
    let Ok(elements) = outcome else {
        return CheckResult {
            segments,
            got: String::new(),
            expected: String::new(),
            class: Some("panic".into()),
            message: format!("segments {}: panicked", description),
        };
    };
    if elements.iter().any(|e| matches!(e, Element::Delayed(_))) {
        return CheckResult {
            segments,
            got: String::new(),
            expected: String::new(),
            class: Some("seam-survived".into()),
            message: format!("segments {}: a seam survived", description),
        };
    }
    let mut got = String::new();
    for element in &elements {
        match element {
            Element::Text(text) => got.push_str(text),
            other => {
                return CheckResult {
                    segments,
                    got,
                    expected: String::new(),
                    class: Some("unexpected-element".into()),
                    message: format!("segments {}: unexpected element {other:?}", description),
                };
            }
        }
    }
    let expected = typography(&segments.concat());
    let class = if got == expected {
        None
    } else {
        let mut class = difference_class(&got, &expected);
        if pick_has_right_angle(pick) {
            class = format!("right-angle:{class}");
        }
        Some(class)
    };
    let message = format!(
        "segments {}: got {got:?} but typography of the joined text is {expected:?}",
        description
    );
    CheckResult {
        segments,
        got,
        expected,
        class,
        message,
    }
}
