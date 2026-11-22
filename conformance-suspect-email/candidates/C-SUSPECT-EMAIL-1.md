# C-SUSPECT-EMAIL-1 — Email renderer emits raw HTML metacharacters and invalid UTF-8

Status: DIVERGENCE, reference correction owed, NOT applied in this lane. Settled by the Antigravity SUSPECT mission (REPORT-ANTIGRAVITY-SUSPECT.md section 2.2) and independently verified here on 2026-11-22.

Reference construct: `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Email.php:29`, `$out .= str_replace('@', '|', strrev($email) . '#' . strrev($text));`. No HTML escaping, no invalid-byte substitution. Mirror counterpart: `renderEmail` in `lean-ftml/LeanFtml/InlineSimpleRules.lean`.

Two predictions before probing (Agy's): live escapes `<`, `>` and `&` in the reversed label, or injects them raw as the fossil does. Verdict: live escapes; the fossil injects raw.

Live evidence (all valid, stable, source-matching; prefix `muse-probe-agy-suspect-`): `p18-email-html` source `[a@b.com >i<]` serves `<p><span class="wiki-email">moc.b|a#&lt;i&gt;</span></p>`; `f02-email-apos-amp` source `[a@b.com a'b&c"d]` serves `<p><span class="wiki-email">moc.b|a#d"c&amp;b'a</span></p>` (quote and apostrophe raw); `p19-email-utf8` source `[a@b.com café]` serves `moc.b|a#EF BF BD EF BF BD fac`; `f01-email-ee` source `[a@b.com éé]` serves `moc.b|a#EF BF BD C3 A9 EF BF BD`. All seven sources were re-run on this tree's PHP 8.5.4 `transform.php`; the reference bytes reproduce Agy's reported reference outputs exactly (`moc.b|a#<i>`, `moc.b|a#d"c&b'a`, `moc.b|a#A9 C3 fac`, `moc.b|a#A9 C3 A9 C3`).

Independent this-lane evidence (prefix `muse-probe-suspect-email-`, all valid/stable/source-matching): `lbl-eacute`, `lbl-emoji`, `lbl-cjk`, `lbl-mixed`, `lbl-acute-only` each serve U+FFFD substitutions where the reference serves raw reversed bytes; `lbl-at`, `lbl-hash`, `lbl-pipe` are raw-byte matches and bound the divergence to the escaping/substitution step, not to `@`→`|` or the `#` join.

Differing bytes: `&lt;`/`&gt;` vs `<`/`>`; `&amp;` vs `&`; `EF BF BD` vs raw `A9`, `C3`, `FF` bytes.

Minimal fix, not applied: wrap the joined reversed string in `htmlspecialchars(..., ENT_NOQUOTES | ENT_SUBSTITUTE, 'UTF-8')` at `Render/Xhtml/Email.php:29` before inserting it in the span. Mirror consequence: `renderEmail` must adopt the same transformation; the worked-example theorems for ASCII reversal remain true of the reversal step but no longer describe live's full span output. No before-copy exists because no edit was made in this lane.
