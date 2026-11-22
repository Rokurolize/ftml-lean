<?php
// Workstream 2 local PHP execution harness for the 10 untestable/unreachable constructs.
// Read-only with respect to ref-php/: invokes ref-php classes locally under conformance-agy-spec2/.

error_reporting(E_ALL & ~E_DEPRECATED);
define('WIKIDOT_ROOT', dirname(__DIR__) . '/ref-php/wikidot-root');
$twRoot = dirname(__DIR__) . '/ref-php/text-wiki';
ini_set('include_path', $twRoot . PATH_SEPARATOR . WIKIDOT_ROOT . '/lib' . PATH_SEPARATOR . ini_get('include_path'));

require_once WIKIDOT_ROOT . '/lib/WDStringUtils.php';
require_once dirname(__DIR__) . '/ref-php/harness/ozone-stubs.php';
require_once $twRoot . '/Text/Wiki.php';
require_once $twRoot . '/Text/Wiki/Parse/Default/Math.php';
require_once dirname(__DIR__) . '/ref-php/harness/wiki-config.php';
require_once dirname(__DIR__) . '/ref-php/harness/pages.php';

$capturedWarnings = array();
set_error_handler(function($errno, $errstr, $errfile, $errline) use (&$capturedWarnings) {
    $capturedWarnings[] = array(
        'errno' => $errno,
        'errstr' => $errstr,
        'file' => basename($errfile),
        'line' => $errline,
    );
    return true;
});

function fresh_wiki() {
    Text_Wiki_Parse_Math::$equationsArray = array();
    $w = ref_configure_wiki(new Text_Wiki());
    $w->vars['footnotes'] = array();
    $w->vars['bibitems'] = array();
    $w->vars['bibitemIds'] = array();
    $w->vars['externalLinks'] = array();
    $w->vars['internalLinksExist'] = array();
    $w->vars['page'] = new RefPage('', 0, array());
    $w->vars['pageTitle'] = 'Sample Title';
    $w->vars['pageName'] = 'sample-page';
    return $w;
}

function get_renderer($wiki, $rule) {
    $wiki->loadRenderObj('Xhtml', $rule);
    return $wiki->renderObj[$rule];
}

$results = array();

// 1. Typography --- shadowed by --
$capturedWarnings = array();
$w = fresh_wiki();
$typo_out = $w->transform("a --- b\n\na -- b", 'Xhtml');
$w2 = fresh_wiki();
$typo_r = get_renderer($w2, 'Typography');
$results['1_typography_dash'] = array(
    'full_pipeline' => $typo_out,
    'direct_renderer_dash3' => $typo_r->token(array('char' => '---')),
    'direct_renderer_dash2' => $typo_r->token(array('char' => '--')),
    'warnings' => $capturedWarnings,
);

// 2. Render/Xhtml/Include type=missing
$capturedWarnings = array();
$w = fresh_wiki();
$inc_r = get_renderer($w, 'Include');
$inc_p = $w->transform('[[include nonexistent-page-xyz]]', 'Xhtml');
$results['2_render_include_missing'] = array(
    'token_missing_local' => $inc_r->token(array('type' => 'missing', 'page' => 'foo')),
    'token_missing_site' => $inc_r->token(array('type' => 'missing', 'page' => 'foo', 'site' => 'bar')),
    'token_missing_escape' => $inc_r->token(array('type' => 'missing', 'page' => 'a<b>"c\'d')),
    'full_pipeline_nonexistent' => $inc_p,
    'warnings' => $capturedWarnings,
);

// 3. Parse/Default/Delimiter & Render/Xhtml/Delimiter (\xFF)
$capturedWarnings = array();
$w = fresh_wiki();
$delim_render = $w->transform("a\xFFb", 'Xhtml');
$w2 = fresh_wiki();
$w2->parse("a\xFFb");
$w3 = fresh_wiki();
$delim_tok = $w3->transform("**a\xFF0\xFFb**", 'Xhtml');
$results['3_delimiter_xff'] = array(
    'render_a_xff_b_hex' => bin2hex($delim_render),
    'render_a_xff_b_raw' => $delim_render,
    'parse_tokens' => $w2->tokens,
    'render_fake_tok0_hex' => bin2hex($delim_tok),
    'render_fake_tok0_raw' => $delim_tok,
    'warnings' => $capturedWarnings,
);

// 4. Render/Xhtml/Footnote dead $options['label'] & $refs
$capturedWarnings = array();
$w = fresh_wiki();
$fn_out = $w->transform("text[[footnote]]body[[/footnote]]\n\n[[footnoteblock]]", 'Xhtml');
$results['4_footnote_dead_reads'] = array(
    'full_pipeline' => $fn_out,
    'warnings' => $capturedWarnings,
);

// 5. Render/Xhtml/Heading collapsible / $jsOutput
$capturedWarnings = array();
$w = fresh_wiki();
$hd_r = get_renderer($w, 'Heading');
$s1 = $hd_r->token(array('type' => 'startContent', 'id' => 'toc0', 'level' => 1));
$e1 = $hd_r->token(array('type' => 'endContent', 'id' => 'toc0', 'level' => 1));
$s_norm = $hd_r->token(array('type' => 'start', 'id' => 'toc0', 'level' => 1));
$results['5_heading_collapse'] = array(
    'startContent' => $s1,
    'endContent' => $e1,
    'start' => $s_norm,
    'warnings' => $capturedWarnings,
);

// 6. Render/Xhtml/Freelink cross-site $site branch (GlobalProperties)
$capturedWarnings = array();
$w = fresh_wiki();
$fl_r = get_renderer($w, 'Freelink');
$fl_err = null;
$fl_ret = null;
try {
    $fl_ret = $fl_r->token(array('page' => 'p', 'text' => 't', 'site' => 'other', 'anchor' => '', 'extra' => '', 'type' => ''));
} catch (\Throwable $e) {
    $fl_err = get_class($e) . ': ' . $e->getMessage();
}
$results['6_freelink_site_branch'] = array(
    'output' => $fl_ret,
    'exception' => $fl_err,
    'warnings' => $capturedWarnings,
);

// 7. Render/Xhtml/Embed $this->patterns vs $this->_patterns
$capturedWarnings = array();
$embedFiles = glob(WIKIDOT_ROOT . '/conf/wikiparser/embed/*.php');
$sim_patterns = array();
$sim_empty_prop = array();
$sim_out = array();
foreach (array(array('/foo/'), array('/bar/')) as $patterns) {
    $sim_out = array_merge($sim_empty_prop, $patterns);
}
$results['7_embed_multi_pattern_bug'] = array(
    'embed_conf_files' => array_map('basename', $embedFiles),
    'simulated_buggy_merge_count' => count($sim_out),
    'simulated_buggy_merge_values' => $sim_out,
    'expected_merge_count' => 2,
    'warnings' => $capturedWarnings,
);

// 8. Render/Xhtml/Social: unreachable due to Social parse \xFE + 3 render bugs
$capturedWarnings = array();
$w = fresh_wiki();
$soc_parse_out = $w->transform('[[social digg,rawsugar,yahoomyweb,Digg]]', 'Xhtml');
$w2 = fresh_wiki();
$soc_r = get_renderer($w2, 'Social');
// Provide minimal mock site for getDomain()/getName()
$saved_site = $GLOBALS['site'];
$GLOBALS['site'] = new class {
    public function getDomain() { return 'example.wikidot.com'; }
    public function getName() { return 'Example'; }
};
$soc_all = $soc_r->token(array('sites' => ''));
$soc_upper = $soc_r->token(array('sites' => 'Digg'));
$soc_rawsugar_yahoo = $soc_r->token(array('sites' => 'rawsugar, yahoomyweb'));
$GLOBALS['site'] = $saved_site;
$results['8_social_bookmarks'] = array(
    'full_pipeline_hex' => bin2hex($soc_parse_out),
    'full_pipeline' => $soc_parse_out,
    'render_all_contains_TITTLE' => (strpos($soc_all, 'TITTLE') !== false),
    'render_all_contains_blank_yahoo_param' => (strpos($soc_all, '&amp;=TITLE') !== false || strpos($soc_all, '&=TITLE') !== false),
    'render_rawsugar_yahoo' => $soc_rawsugar_yahoo,
    'render_Digg_uppercase' => $soc_upper,
    'warnings' => $capturedWarnings,
);

// 9. Parse/Default/Url inline regex (.*?) and $matches[6]
$capturedWarnings = array();
$w = fresh_wiki();
$url_p = new Text_Wiki_Parse_Url($w);
$tmp_regex = '/(^|[^A-Za-z])(\*)?(' . $url_p->regex . ')(.*?)/';
preg_match_all($tmp_regex, 'see http://example.com tail', $m, PREG_SET_ORDER);
$results['9_parse_url_matches6'] = array(
    'match_count' => count($m),
    'group_keys' => isset($m[0]) ? array_keys($m[0]) : array(),
    'group_3' => isset($m[0][3]) ? $m[0][3] : null,
    'group_4' => isset($m[0][4]) ? $m[0][4] : null,
    'group_6_isset' => isset($m[0][6]),
    'warnings' => $capturedWarnings,
);

// 10. Render/Xhtml/Table (caption, rowspan>1) & Render/Xhtml/Url (images=true, footnote)
$capturedWarnings = array();
$w = fresh_wiki();
$tab_r = get_renderer($w, 'Table');
$tab_cap_s = $tab_r->token(array('type' => 'caption_start', 'attr' => null, 'span' => 1, 'rowspan' => 1));
$tab_cap_e = $tab_r->token(array('type' => 'caption_end', 'attr' => null, 'span' => 1, 'rowspan' => 1));
$tab_cell_rs = $tab_r->token(array('type' => 'cell_start', 'attr' => '', 'span' => 1, 'rowspan' => 2));
$w2 = fresh_wiki();
$url_r = get_renderer($w2, 'Url');
$url_r->conf['images'] = true;
$url_img_auto = $url_r->token(array('type' => 'inline', 'href' => 'http://example.com/a.png', 'text' => ''));
$url_img_apos = $url_r->token(array('type' => 'inline', 'href' => "http://example.com/a'b.png", 'text' => ''));
$url_fn = $url_r->token(array('type' => 'footnote', 'href' => 'http://example.com', 'text' => '1'));
$results['10_table_and_url_unreachable'] = array(
    'table_caption_start' => $tab_cap_s,
    'table_caption_end' => $tab_cap_e,
    'table_cell_rowspan2' => $tab_cell_rs,
    'url_img_auto' => $url_img_auto,
    'url_img_apos_stale_htmlchars_check' => $url_img_apos,
    'url_footnote' => $url_fn,
    'warnings' => $capturedWarnings,
);

file_put_contents(__DIR__ . '/ws2-results.json', json_encode($results, JSON_PRETTY_PRINT | JSON_INVALID_UTF8_SUBSTITUTE));
echo "WS2_OK\n";
foreach ($results as $k => $v) {
    echo "=== $k ===\n";
    echo json_encode($v, JSON_UNESCAPED_SLASHES | JSON_INVALID_UTF8_SUBSTITUTE) . "\n";
}
