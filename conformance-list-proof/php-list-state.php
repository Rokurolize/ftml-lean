<?php
// ListCert rule driver: state-restricted.php with exactly two
// disclosed changes, both in the input stage (see the marked lines):
// the rule list is fixed to List alone, and cases carry raw bytes
// instead of a JSON string so the skeleton alphabet's 0xFF placeholder
// byte reaches the rule byte-exactly (a JSON string channel would
// UTF-8-encode it on both drivers). The wiki construction, parse
// invocation, and state serialization are state-restricted.php's own,
// unchanged. The initial state is the raw source with an empty token
// table, so the alphabet's placeholder symbol is a dangling token
// reference on this side, exactly as on the Lean driver.
error_reporting(E_ALL & ~E_DEPRECATED & ~E_WARNING);
ini_set('display_errors', 'stderr');
define('WIKIDOT_ROOT', dirname(__DIR__) . '/wikidot-root');
$root = dirname(__DIR__) . '/text-wiki';
ini_set('include_path', $root . PATH_SEPARATOR
    . dirname(__DIR__) . '/wikidot-root/lib' . PATH_SEPARATOR
    . ini_get('include_path'));
require_once dirname(__DIR__) . '/wikidot-root/lib/WDStringUtils.php';
require_once __DIR__ . '/ozone-stubs.php';
require_once $root . '/Text/Wiki.php';
require_once $root . '/Text/Wiki/Parse/Default/Math.php';
require_once __DIR__ . '/wiki-config.php';
require_once __DIR__ . '/pages.php';

$GLOBALS['REF_PAGES'] = ref_page_map();
$GLOBALS['REF_EXISTING_PAGES'] = array_keys(ref_page_map());

// R3.3 wire encoding (see the header note): recursively replace any
// string that is not valid UTF-8 with {"$bytes": [byte values]}.
// Array keys are not transformed: every key in the output structure
// is either created by this driver or is a parse rule's option name,
// all ASCII identifiers, hence always valid UTF-8.
function ref_wire_encode($v) {
    if (is_string($v)) {
        if (preg_match('//u', $v) === 1) {
            return $v;
        }
        return array('$bytes' => array_values(unpack('C*', $v)));
    }
    if (is_array($v)) {
        $out = array();
        foreach ($v as $k => $x) {
            $out[$k] = ref_wire_encode($x);
        }
        return $out;
    }
    return $v;
}

$rules = array('List');

while (($line = fgets(STDIN)) !== false) {
    $line = trim($line);
    if ($line === '') continue;
    $case = json_decode($line, true);
    $id = $case['id'];
    // Input stage: line-ending normalization (R2-INCLUDE.md C1), as
    // in batch.php and probe-source.php.
    // ListCert driver change (disclosed): the case carries raw bytes
    // ({"id": ..., "bytes": [...]}); the source string is built byte
    // for byte. Skeleton bytes contain no CR, so the input stage's
    // CRLF normalization is a no-op here and is omitted.
    $src = implode(array_map('chr', $case['bytes']));
    try {
        // R3.12 disclosed driver change: the wiki is constructed
        // through ref_configure_wiki exactly as batch.php,
        // prefix-source.php and probe-source.php construct it,
        // because Interwiki's parse reads the 'sites' parse
        // configuration (the only parse-conf key
        // ref_configure_wiki sets) as its standalone-claim gate;
        // an unconfigured wiki here would silently drop every
        // standalone interwiki claim the configured pipeline
        // makes. No other rule in the pipeline reads a parse-conf
        // key that ref_configure_wiki sets (each reads its own
        // class defaults), so earlier stages' slices are
        // unaffected; the stage's regression runs verify that.
        $wiki = ref_configure_wiki(new Text_Wiki($rules));
        // R3.4 disclosed driver change: the per-case page is constructed
        // exactly as harness/batch.php constructs it (the case's "tags"
        // array, always injected, empty when the case has none), because
        // Iftags reads vars['page']->getTagsAsArray(); an empty page
        // object here would silently drop every positively tagged body.
        // Math's equations map is a process-wide static, reset per case
        // exactly as batch.php resets it, so cases cannot leak into
        // each other.
        $caseTags = (isset($case['tags']) && is_array($case['tags'])) ? $case['tags'] : array();
        $wiki->vars['page'] = new RefPage('', 0, $caseTags);
        Text_Wiki_Parse_Math::$equationsArray = array();
        $wiki->parse($src);
        // Split the post-parse source on the delimiter byte: parts
        // alternate text / token id / text / ... / text.
        $parts = explode($wiki->delim, $wiki->source);
        $segments = array();
        foreach ($parts as $i => $part) {
            if ($i % 2 === 0) {
                $segments[] = array('t' => $part);
            } else {
                $segments[] = array('k' => (int)$part);
            }
        }
        // R3.4 disclosed compared-state extension: Math's equations map
        // (label => id pairs, in insertion order) and the math_id
        // counter join the compared state for this stage, serialized
        // identically on the Lean side. Earlier stages' slices carry
        // the same two fields with their empty values (the map empty,
        // the counter null) because Math never runs there.
        $equations = array();
        foreach (Text_Wiki_Parse_Math::$equationsArray as $label => $mid) {
            $equations[] = array((string) $label, $mid);
        }
        // R3.6 disclosed compared-state extension (second in the R3.4
        // pattern): the NOTES family's document state joins the
        // compared state, serialized identically on the Lean side.
        // "footnotes" is vars['footnotes'] in index order (Footnote
        // appends each claimed body; Footnoteblock reads the list);
        // "bibitems" and "bibitemIds" are vars['bibitems'] and
        // vars['bibitemIds'] as (label, value) pairs in insertion
        // order (Bibitem writes both; Bibliography and Bibcite read
        // them). A var the pipeline never touched reads as the empty
        // list, matching the model's per-document initial values.
        // The state lives in the per-case Text_Wiki instance's vars,
        // so no cross-case reset is needed (the R2 NOTES harness
        // audit verified the family's state does not leak).
        $footnotes = array();
        if (isset($wiki->vars['footnotes']) && is_array($wiki->vars['footnotes'])) {
            foreach ($wiki->vars['footnotes'] as $fnBody) {
                $footnotes[] = $fnBody;
            }
        }
        $bibitems = array();
        if (isset($wiki->vars['bibitems']) && is_array($wiki->vars['bibitems'])) {
            foreach ($wiki->vars['bibitems'] as $label => $content) {
                $bibitems[] = array((string) $label, $content);
            }
        }
        $bibitemIds = array();
        if (isset($wiki->vars['bibitemIds']) && is_array($wiki->vars['bibitemIds'])) {
            foreach ($wiki->vars['bibitemIds'] as $label => $bid) {
                $bibitemIds[] = array((string) $label, $bid);
            }
        }
        // R3.17 disclosed compared-state extension (third in the
        // R3.4 pattern): the Anchor rule's scored-anchor registry
        // joins the compared state, serialized identically on the
        // Lean side. "scoredAnchors" is vars['scored_anchors'] as
        // (end placeholder, start placeholder) pairs in insertion
        // order (Anchor's element pass writes one pair per scored
        // anchor it claims in the simple path; Paragraph's process
        // reads the map for its PG-F1 wrapper suppression). A
        // pipeline in which Anchor never runs leaves the var
        // unset or empty, matching the model's per-document
        // initial value (the empty list).
        $scoredAnchors = array();
        if (isset($wiki->vars['scored_anchors']) && is_array($wiki->vars['scored_anchors'])) {
            foreach ($wiki->vars['scored_anchors'] as $endTok => $startTok) {
                $scoredAnchors[] = array($endTok, $startTok);
            }
        }
        // CAPSTONE disclosed compared-state extension (fourth in the
        // R3.4 pattern): the Include rule's registries join the
        // compared state, serialized identically on the Lean side.
        // "inclusions" is vars['inclusions'] as the ordered list of
        // fired includes' page ids (the var is an id => id map in
        // first-insertion order; Include's refFetch writes it), and
        // "inclusionsNotExist" is vars['inclusionsNotExist'] as the
        // ordered list of missing includes' display names (a
        // display => display map in first-insertion order). A
        // pipeline in which Include never runs leaves both vars
        // unset, matching the model's per-document initial values
        // (the empty lists). Before this extension the driver
        // emitted neither key, which made any comparison that
        // forces the inclusion components (the CAPSTONE retirement
        // check's section 3) unsatisfiable against fresh runs.
        $inclusions = array();
        if (isset($wiki->vars['inclusions']) && is_array($wiki->vars['inclusions'])) {
            foreach ($wiki->vars['inclusions'] as $incId) {
                $inclusions[] = $incId;
            }
        }
        $inclusionsNotExist = array();
        if (isset($wiki->vars['inclusionsNotExist']) && is_array($wiki->vars['inclusionsNotExist'])) {
            foreach ($wiki->vars['inclusionsNotExist'] as $incName) {
                $inclusionsNotExist[] = $incName;
            }
        }
        $out = ref_wire_encode(array('id' => $id, 'segments' => $segments,
            'tokens' => $wiki->tokens, 'equations' => $equations,
            'mathId' => isset($wiki->vars['math_id']) ? $wiki->vars['math_id'] : null,
            'footnotes' => $footnotes, 'bibitems' => $bibitems,
            'bibitemIds' => $bibitemIds, 'scoredAnchors' => $scoredAnchors,
            'inclusions' => $inclusions,
            'inclusionsNotExist' => $inclusionsNotExist));
        $json = json_encode($out);
        if ($json === false) {
            echo json_encode(array('id' => $id,
                'error' => 'json_encode failed: ' . json_last_error_msg())), "\n";
        } else {
            echo $json, "\n";
        }
    } catch (ProcessException $e) {
        // R3.4 PARSE-FATAL protocol: Math's guard throws ProcessException
        // ("Invalid LaTeX expression(s) found.") and the whole parse
        // aborts; the case's record is the fatal record, the same shape
        // the full-pipeline fixture files use, and the Lean driver emits
        // the identical record when the mirror's guard predicate fires.
        echo json_encode(array('id' => $id,
            'fatal' => get_class($e) . ': ' . $e->getMessage())), "\n";
    } catch (Throwable $e) {
        echo json_encode(array('id' => $id,
            'error' => get_class($e) . ': ' . $e->getMessage())), "\n";
    }
}
