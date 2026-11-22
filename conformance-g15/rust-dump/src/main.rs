// G15 differential dumper: drives the real ParagraphStack through a JSONL
// operation protocol and serializes into_elements() output trees.
use ftml::g15_shim::{AttributeMap, Container, ContainerType, Element, ParagraphStack};
use ftml::tree::{Alignment, CodeBlock, FileSource, FloatAlignment, ImageSource, ListItem, ListType};
use serde_json::{json, Value};
use std::borrow::Cow;
use std::io::{BufRead, Write};

fn elem(v: &Value) -> Element<'static> {
    match v["kind"].as_str().unwrap_or("?") {
        "text" | "raw" => {
            let s: Cow<'static, str> = Cow::Owned(v["s"].as_str().unwrap_or("").to_owned());
            if v["kind"].as_str() == Some("raw") { Element::Raw(s) } else { Element::Text(s) }
        }
        "linebreak" => Element::LineBreak,
        "hr" => Element::HorizontalRule,
        "code" => Element::Code(CodeBlock {
            contents: Cow::Owned(v["s"].as_str().unwrap_or("").to_owned()),
            language: None, name: None,
            wikidot_block_open_elements: Vec::new(),
            wikidot_label_spans: Vec::new(),
            wikidot_code_format_wrappers: Vec::new(),
        }),
        "list" => Element::List {
            ltype: ListType::Bullet,
            items: Vec::<ListItem<'static>>::new(),
            attributes: AttributeMap::new(),
            wikidot_explicit_block: v["explicit"].as_bool().unwrap_or(false),
            wikidot_unclosed: false,
            wikidot_marker_head_spawn: false,
        },
        "html" => Element::Html {
            contents: Cow::Owned(v["s"].as_str().unwrap_or("").to_owned()),
            attributes: AttributeMap::new(),
        },
        "image" => Element::Image {
            source: ImageSource::Direct(FileSource::File1 { file: Cow::Owned(v["s"].as_str().unwrap_or("img.png").to_owned()) }),
            link: None,
            alignment: if v["aligned"].as_bool().unwrap_or(false) { Some(FloatAlignment { align: Alignment::Right, float: false }) } else { None },
            attributes: AttributeMap::new(),
            target: None,
        },
        "container" => {
            let ctype = match v["ctype"].as_str().unwrap_or("bold") {
                "div" => ContainerType::Div,
                "blockquote" => ContainerType::Blockquote,
                "note" => ContainerType::Note,
                _ => ContainerType::Bold,
            };
            let inner: Vec<Element<'static>> = v["elements"].as_array().unwrap_or(&Vec::new()).iter().map(elem).collect();
            Element::Container(Container::new(ctype, inner, AttributeMap::new()))
        }
        _ => Element::Text(Cow::Owned(format!("<?>{}", v["kind"].as_str().unwrap_or("?")))),
    }
}

fn run(id: &str, ops: &[Value], wikidot: bool) -> Value {
    let mut stack = if wikidot { ParagraphStack::new_wikidot() } else { ParagraphStack::new() };
    for op in ops {
        match op["op"].as_str().unwrap_or("") {
            "push" => {
                let safe = op["safe"].as_bool().unwrap_or(true);
                if let Some(e) = op.get("element") { stack.push_element(elem(e), safe); }
            }
            "push_safe_batch" => {
                let els: Vec<Element<'static>> = op["elements"].as_array().unwrap_or(&Vec::new()).iter().map(elem).collect();
                stack.push_paragraph_safe_elements(els);
            }
            "end" => stack.end_paragraph(),
            "end_break" => stack.end_paragraph_at_break(),
            "unwrap" => stack.mark_current_unwrapped(),
            "next_unwrap" => stack.mark_next_unwrapped(),
            "discarded" => stack.mark_discarded_control(),
            "pop_break" => stack.pop_line_break(),
            "line_start" => stack.record_next_element_line_start(op["value"].as_bool().unwrap_or(false)),
            _ => {}
        }
    }
    let out = stack.into_elements();
    json!({"id": id, "elements": out})
}

fn main() {
    let stdin = std::io::stdin();
    let mut stdout = std::io::stdout().lock();
    for line in stdin.lock().lines() {
        let line = line.unwrap();
        if line.trim().is_empty() { continue; }
        let v: Value = serde_json::from_str(&line).unwrap();
        let id = v["id"].as_str().unwrap_or("?");
        let wikidot = v["wikidot"].as_bool().unwrap_or(true);
        let ops = v["ops"].as_array().cloned().unwrap_or_default();
        let rec = run(id, &ops, wikidot);
        writeln!(stdout, "{}", rec).unwrap();
    }
}
