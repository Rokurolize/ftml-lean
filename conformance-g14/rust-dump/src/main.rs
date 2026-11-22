use ftml::data::PageRef;
use ftml::includes::{FetchedPage, IncludeRef, Includer};
use ftml::layout::Layout;
use ftml::settings::{WikitextMode, WikitextSettings};
use std::borrow::Cow;
use std::collections::HashMap;
use std::io::{BufRead, Write};

struct MapIncluder {
    pages: HashMap<String, String>,
}

impl<'t> Includer<'t> for MapIncluder {
    type Error = String;

    fn include_pages(
        &mut self,
        includes: &[IncludeRef<'t>],
    ) -> Result<Vec<FetchedPage<'t>>, String> {
        let mut out = Vec::new();
        for inc in includes {
            let key = inc.page_ref().to_string();
            let content = self.pages.get(&key).map(|c| Cow::Owned(c.clone()));
            out.push(FetchedPage {
                page_ref: inc.page_ref().clone(),
                content,
            });
        }
        Ok(out)
    }

    fn no_such_include(&mut self, page_ref: &PageRef) -> Result<Cow<'t, str>, String> {
        Ok(Cow::Owned(format!("<MISSING-PAGE {}>", page_ref)))
    }
}

fn main() {
    let mut pages = HashMap::new();
    pages.insert(
        "muse-probe-g14-target".to_string(),
        "TARGET-CONTENT-START\nValue is {$marker}.\nTARGET-CONTENT-END".to_string(),
    );
    pages.insert(
        "other-page".to_string(),
        "OTHER-PAGE-CONTENT\nSecond value is {$marker}.\nOTHER-END".to_string(),
    );
    pages.insert("empty-page".to_string(), "".to_string());
    pages.insert(":sandbox:other-page".to_string(), "SITE-PAGE-CONTENT".to_string());
    pages.insert(
        "muse-probe-g14b-target".to_string(),
        "A is {$a}.\nB is {$b}.\nM is {$marker}.\nTARGET-END".to_string(),
    );

    let settings = WikitextSettings::from_mode(WikitextMode::Page, Layout::Wikidot);
    let stdin = std::io::stdin();
    let mut stdout = std::io::stdout().lock();
    for line in stdin.lock().lines() {
        let line = line.unwrap();
        if line.trim().is_empty() {
            continue;
        }
        let v: serde_json::Value = serde_json::from_str(&line).unwrap();
        let id = v["id"].as_str().unwrap();
        let source = v["source"].as_str().unwrap();
        let includer = MapIncluder {
            pages: pages.clone(),
        };
        let (output, fetched) = match ftml::includes::include(source, &settings, includer, || {
            "invalid-return".to_string()
        }) {
            Ok(pair) => pair,
            Err(e) => {
                let rec = serde_json::json!({"id": id, "error": e});
                writeln!(stdout, "{}", rec).unwrap();
                continue;
            }
        };
        let page_strs: Vec<String> = fetched.iter().map(|p| p.to_string()).collect();
        let rec = serde_json::json!({"id": id, "output": output, "pages": page_strs});
        writeln!(stdout, "{}", rec).unwrap();
    }
}
