import json

cases = [
    # S-EMAIL-1: bytewise reversal of non-ASCII label bytes
    ("lbl-eacute", "[u@example.com café]"),
    ("lbl-emoji", "[u@example.com A\U0001f600B]"),
    ("lbl-cjk", "[u@example.com 日本]"),
    ("lbl-mixed", "[u@example.com éX]"),
    ("lbl-acute-only", "[u@example.com é]"),
    # S-EMAIL-2/3: render replacements over the whole concatenation
    ("lbl-at", "[u@example.com foo@bar]"),
    ("lbl-hash", "[u@example.com foo#bar]"),
    ("lbl-pipe", "[u@example.com foo|bar]"),
    # S-EMAIL-4: lazy unbounded described label vs X44-style bounded class
    ("lbl-close-inner", "[u@example.com a]b]"),
    ("lbl-open-bracket", "[u@example.com a[b]"),
    ("lbl-url", "[u@example.com http://example.org/x]"),
    ("lbl-email", "[u@example.com other@example.net]"),
    ("lbl-strong", "[u@example.com **bold**]"),
    ("lbl-newline", "[u@example.com Line1\nLine2]"),
    ("lbl-bracket-lead", "[u@example.com ]x]"),
    ("lbl-two-forms", "[u@example.com First] and [v@example.net Second]"),
    # S-EMAIL-5/6: separator whitespace and the trailing-space frame question
    ("gap-tab", "[u@example.com\tLabel]"),
    ("gap-nbsp", "[u@example.com\u00a0Label]"),
    ("gap-three", "[u@example.com   Label]"),
    ("gap-trail", "[u@example.com Label ]"),
    ("gap-two-trail", "[u@example.com  Label ]"),
    ("gap-control", "[u@example.com Label]"),
    ("frame-trail-inline", "[u@example.com  Label] X"),
    ("frame-trail-bracket", "([u@example.com  Label])"),
    # S-EMAIL-7: address grammar boundaries
    ("addr-minimal", "a@b.c"),
    ("addr-localhost", "u@localhost"),
    ("addr-underscore-dom", "u@example_com.net"),
    ("addr-double-dot", "u@example..com"),
    ("addr-label-leading-dot", ".u@example.com"),
    ("addr-label-trailing-dot", "u.@example.com"),
    ("addr-double-at", "u@@example.com"),
    ("addr-trailing-dash", "u@example-.com"),
    ("addr-leading-dash", "u@-example.com"),
    ("addr-plus", "u+tag@example.com"),
    ("addr-tld-digit", "u@example.1"),
    ("addr-upper", "U@EXAMPLE.COM"),
    ("addr-dots", "a.b@example.com"),
    ("addr-trailing-dot", "u@example.com."),
    # S-EMAIL-8: /i byte semantics and non-ASCII adjacency
    ("addr-kelvin", "\u212a@example.com"),
    ("addr-acute-local", "\u00e9u@example.com"),
    ("adj-acute-before", "\u00e9 u@example.com"),
    ("adj-acute-after", "u@example.com \u00e9"),
]

with open("cases.jsonl", "w", encoding="utf-8") as f:
    for cid, src in cases:
        assert "\r" not in src and not src.endswith("\n"), cid
        f.write(json.dumps({"id": cid, "source": src}, ensure_ascii=False) + "\n")
print(len(cases), "cases")
