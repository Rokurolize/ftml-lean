// G16 differential dumper: regenerates the seam-equivalence harness's whole
// input space (all words of length 0..=5 over 11 tokens plus a seam token)
// and records the real ftml seam resolution, the naive joined-string oracle,
// and the difference class for every input. The check itself is the harness
// code lifted into ftml-shim/src/g16_shim.rs.
use ftml::g16_shim::{check, TOKENS};
use serde_json::{json, Value};
use std::io::{BufWriter, Write};

fn main() {
    let stdout = std::io::stdout();
    let mut out = BufWriter::new(stdout.lock());
    let choices = TOKENS.len() + 1;
    let max_tokens: usize = 5;
    let mut id = 0u64;
    for len in 0..=max_tokens {
        let mut pick = vec![0usize; len];
        loop {
            let r = check(&pick);
            let mut record: Value = json!({
                "id": id,
                "pick": pick,
                "got": r.got,
                "expected": r.expected,
                "class": r.class,
            });
            if let Some(ref class) = r.class {
                record["message"] = Value::String(r.message.clone());
            }
            writeln!(out, "{}", record).unwrap();
            id += 1;
            let mut pos = 0;
            while pos < len {
                pick[pos] += 1;
                if pick[pos] < choices {
                    break;
                }
                pick[pos] = 0;
                pos += 1;
            }
            if pos == len {
                break;
            }
        }
    }
    out.flush().unwrap();
    eprintln!("G16-DUMP checked={id} bound={max_tokens}");
}
