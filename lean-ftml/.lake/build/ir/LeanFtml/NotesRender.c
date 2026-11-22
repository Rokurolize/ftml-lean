// Lean compiler output
// Module: LeanFtml.NotesRender
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.NotesRules public import LeanFtml.RenderCore public import LeanFtml.ProseRules public import LeanFtml.InlineSimpleRules public import LeanFtml.RawHeadingRules public import LeanFtml.ListTableRules public import LeanFtml.InteractiveRules public import LeanFtml.CodeEmbedRules public import LeanFtml.ServingRules public import LeanFtml.Pipeline
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_stripEmptyRawPhNotes_go_spec__0(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_digitPrefix_spec__1(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optNat(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderOptValBytes(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_phpEmptyOpt(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_natBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph(lean_object*);
extern lean_object* lp_lean_x2dftml_LeanFtml_renderNewline;
extern lean_object* lp_lean_x2dftml_LeanFtml_renderBreak;
lean_object* lp_lean_x2dftml_LeanFtml_renderCenter(lean_object*);
extern lean_object* lp_lean_x2dftml_LeanFtml_renderHoriz;
extern lean_object* lp_lean_x2dftml_LeanFtml_renderSeparator;
lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderBlockquote(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderNote(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderDelimiter(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderUrl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderEmail(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderColortext(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderStrong(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderEmphasis(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderUnderline(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderStrikethrough(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderTt(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderSuperscript(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderSubscript(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderTypography(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderRaw(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderRawold(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderForm(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderHeading(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderToc(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderList(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderDeflist(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderTable(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderTableadv(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderEquationreference(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderAnchor(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderCollapsible(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderTabview(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderButton(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderIframe(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderDate(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderFile(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderSize(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderSpan(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderDiv(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderCode(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderEmbed(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderFreelink(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderModule(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderMath(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderImage(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderGallery(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderUser(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_convCRLF(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_ParseState_ofSource(lean_object*);
extern lean_object* lp_lean_x2dftml_LeanFtml_pipelineR36;
lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_runRules_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibLookup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibLookup___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_optTypeIs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_optTypeIs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_optTypeIs___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_optTypeIs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_optTypeIs___closed__1;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_optTypeIs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optTypeIs___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnote___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "<sup class=\"footnoteref\"><a id=\"footnoteref-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnote___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnote___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "\" href=\"javascript:;\" class=\"footnoteref\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnote___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnote___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = " onclick=\"WIKIDOT.page.utils."};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnote___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnote___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "scrollToReference('footnote-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnote___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnote___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "')\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnote___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "</a></sup>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnote___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___closed__13;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_footnotePhIds_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_footnotePhIds(lean_object*);
static const lean_string_object lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteVisibleBody(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "parabreak"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "<div class=\"footnote-footer\" id=\"footnote-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "\"><a href=\"javascript:;\" onclick=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "WIKIDOT.page.utils.scrollToReference("};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "'footnoteref-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "</a>."};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__17;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__19_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Footnotes"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "<div class=\"footnotes-footer\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "<div class=\"title\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__7;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibitem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "<div class=\"bibitem\" id=\"bibitem-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibitem___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibitem___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibitem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibitem___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibitem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem___closed__3;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderBibitem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibitem___closed__4_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibitem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "empty"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibitem___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibitem___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem___closed__6;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Bibliography"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibliography___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "<div class=\"bibitems\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibliography___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibliography___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibliography___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibliography___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "nl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibliography___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibliography___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibliography___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibcite___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "label"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibcite___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "<span class=\"error-inline\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibcite___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Bibliography item <em>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibcite___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "</em> not found.</span>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibcite___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "<a href=\"javascript:;\" class=\"bibcite\" "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibcite___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "id=\"bibcite-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibcite___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "\" onclick=\"WIKIDOT.page.utils."};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibcite___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "scrollToReference('bibitem-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBibcite___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "</a>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBibcite___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___closed__19;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41___lam__0___boxed(lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_dispatchRenderR41___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_dispatchRenderR41___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_dispatchRenderR41___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41TokenAware(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41TokenAware___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderWithR41(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR41___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR41___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR41(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderNotesE2E___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderNotesE2E___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderNotesE2E___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderNotesE2E___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*13 + 0, .m_other = 13, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_renderNotesE2E___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderNotesE2E___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderNotesE2E___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderNotesE2E(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Raw"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__0_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__1 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__2;
static const lean_ctor_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__3 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__4;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__5;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__6;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__7;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__8;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__1;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__2;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__3;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__4;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__5;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__6;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Footnote"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__0_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Footnoteitem"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__1 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__1_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Footnoteblock"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__2_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Bibitem"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__3 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Bibliography"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__4_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Bibcite"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__5 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__5_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Paragraph"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__6_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Newline"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__7 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__7_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Break"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__8_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Center"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__9 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__9_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Horiz"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__10 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__10_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Separator"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__11 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__11_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Clearfloat"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__12 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__12_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Blockquote"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__13 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__13_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Note"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__14 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__14_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Divalign"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__15 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__15_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Comment"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__16 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__16_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Delimiter"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__17 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__17_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Url"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__18 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__18_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Email"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__19 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__19_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Mathinline"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__20 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__20_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Interwiki"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__21 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__21_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Colortext"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__22 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__22_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Strong"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__23 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__23_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Emphasis"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__24 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__24_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Underline"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__25 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__25_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Strikethrough"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__26 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__26_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Tt"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__27 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__27_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Superscript"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__28 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__28_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Subscript"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__29 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__29_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Typography"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__30 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__30_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Tighten"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__31 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__31_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Raw"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__32 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__32_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Rawold"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__33 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__33_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Form"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__34 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__34_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Heading"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__35 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__35_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Toc"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__36 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__36_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__37 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__37_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Deflist"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__38 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__38_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Table"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__39 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__39_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Tableadv"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__40 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__40_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Equationreference"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__41 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__41_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Anchor"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__42 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__42_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Collapsible"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__43 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__43_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Tabview"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__44 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__44_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Button"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__45 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__45_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Iframe"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__46 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__46_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Date"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__47 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__47_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "File"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__48 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__48_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Size"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__49 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__49_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Span"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__50 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__50_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Div"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__51 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__51_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Code"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__52 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__52_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Embed"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__53 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__53_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Freelink"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__54 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__54_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__55 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__55_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Module654"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__56 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__56_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Math"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__57 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__57_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Image"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__58 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__58_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Gallery"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__59 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__59_value;
static const lean_string_object lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "User"};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__60 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__60_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_dispatchRenderR41TokenAware_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_dispatchRenderR41TokenAware_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_dispatchRenderR41TokenAware_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_dispatchRenderR41TokenAware_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibLookup(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_3_; 
v___x_3_ = lean_box(0);
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v_fst_6_; lean_object* v_snd_7_; uint8_t v___x_8_; 
v_head_4_ = lean_ctor_get(v_x_1_, 0);
v_tail_5_ = lean_ctor_get(v_x_1_, 1);
v_fst_6_ = lean_ctor_get(v_head_4_, 0);
v_snd_7_ = lean_ctor_get(v_head_4_, 1);
v___x_8_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v_fst_6_, v_x_2_);
if (v___x_8_ == 0)
{
v_x_1_ = v_tail_5_;
goto _start;
}
else
{
lean_object* v___x_10_; 
lean_inc(v_snd_7_);
v___x_10_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_10_, 0, v_snd_7_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibLookup___boxed(lean_object* v_x_11_, lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = lp_lean_x2dftml_LeanFtml_bibLookup(v_x_11_, v_x_12_);
lean_dec(v_x_12_);
lean_dec(v_x_11_);
return v_res_13_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_optTypeIs___closed__1(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_optTypeIs___closed__0));
v___x_16_ = l_String_toListImpl(v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_optTypeIs(lean_object* v_opts_17_, lean_object* v_expected_18_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; uint8_t v___x_21_; 
v___x_19_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_optTypeIs___closed__1, &lp_lean_x2dftml_LeanFtml_optTypeIs___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_optTypeIs___closed__1);
v___x_20_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_17_, v___x_19_);
v___x_21_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_mEnds_spec__1(v___x_20_, v_expected_18_);
lean_dec(v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optTypeIs___boxed(lean_object* v_opts_22_, lean_object* v_expected_23_){
_start:
{
uint8_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_22_, v_expected_23_);
lean_dec(v_expected_23_);
lean_dec(v_opts_22_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnote___closed__0));
v___x_28_ = l_String_toListImpl(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__3(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnote___closed__2));
v___x_31_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__5(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnote___closed__4));
v___x_34_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__7(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnote___closed__6));
v___x_37_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__9(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnote___closed__8));
v___x_40_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnote___closed__10));
v___x_43_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__13(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnote___closed__12));
v___x_46_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote(lean_object* v_conf_47_, lean_object* v_opts_48_){
_start:
{
lean_object* v_footnoteIdPrefix_49_; lean_object* v___x_50_; lean_object* v_idBytes_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v_footnoteIdPrefix_49_ = lean_ctor_get(v_conf_47_, 0);
lean_inc_n(v_footnoteIdPrefix_49_, 2);
lean_dec_ref(v_conf_47_);
v___x_50_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1);
v_idBytes_51_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_48_, v___x_50_);
v___x_52_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__3, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__3);
v___x_53_ = l_List_appendTR___redArg(v___x_52_, v_footnoteIdPrefix_49_);
lean_inc_n(v_idBytes_51_, 2);
v___x_54_ = l_List_appendTR___redArg(v___x_53_, v_idBytes_51_);
v___x_55_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__5, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__5);
v___x_56_ = l_List_appendTR___redArg(v___x_54_, v___x_55_);
v___x_57_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__7, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__7);
v___x_58_ = l_List_appendTR___redArg(v___x_56_, v___x_57_);
v___x_59_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__9, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__9);
v___x_60_ = l_List_appendTR___redArg(v___x_58_, v___x_59_);
v___x_61_ = l_List_appendTR___redArg(v___x_60_, v_footnoteIdPrefix_49_);
v___x_62_ = l_List_appendTR___redArg(v___x_61_, v_idBytes_51_);
v___x_63_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11);
v___x_64_ = l_List_appendTR___redArg(v___x_62_, v___x_63_);
v___x_65_ = l_List_appendTR___redArg(v___x_64_, v_idBytes_51_);
v___x_66_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__13, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__13);
v___x_67_ = l_List_appendTR___redArg(v___x_65_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnote___boxed(lean_object* v_conf_68_, lean_object* v_opts_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = lp_lean_x2dftml_LeanFtml_renderFootnote(v_conf_68_, v_opts_69_);
lean_dec(v_opts_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_footnotePhIds_go(lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
if (lean_obj_tag(v_a_71_) == 0)
{
lean_dec(v_a_72_);
return v_a_71_;
}
else
{
lean_object* v_head_73_; lean_object* v_tail_74_; lean_object* v_zero_75_; uint8_t v_isZero_76_; 
v_head_73_ = lean_ctor_get(v_a_71_, 0);
lean_inc(v_head_73_);
v_tail_74_ = lean_ctor_get(v_a_71_, 1);
lean_inc(v_tail_74_);
lean_dec_ref_known(v_a_71_, 2);
v_zero_75_ = lean_unsigned_to_nat(0u);
v_isZero_76_ = lean_nat_dec_eq(v_a_72_, v_zero_75_);
if (v_isZero_76_ == 1)
{
lean_object* v___x_77_; 
lean_dec(v_tail_74_);
lean_dec(v_head_73_);
lean_dec(v_a_72_);
v___x_77_ = lean_box(0);
return v___x_77_;
}
else
{
lean_object* v_one_78_; lean_object* v_n_79_; lean_object* v___x_80_; uint8_t v___x_81_; 
v_one_78_ = lean_unsigned_to_nat(1u);
v_n_79_ = lean_nat_sub(v_a_72_, v_one_78_);
lean_dec(v_a_72_);
v___x_80_ = lean_unsigned_to_nat(255u);
v___x_81_ = lean_nat_dec_eq(v_head_73_, v___x_80_);
lean_dec(v_head_73_);
if (v___x_81_ == 0)
{
v_a_71_ = v_tail_74_;
v_a_72_ = v_n_79_;
goto _start;
}
else
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v_snd_85_; 
v___x_83_ = lean_box(0);
lean_inc(v_tail_74_);
v___x_84_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_stripEmptyRawPhNotes_go_spec__0(v_tail_74_, v___x_83_);
v_snd_85_ = lean_ctor_get(v___x_84_, 1);
lean_inc(v_snd_85_);
if (lean_obj_tag(v_snd_85_) == 1)
{
lean_object* v_fst_86_; lean_object* v_head_87_; lean_object* v_tail_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_103_; 
v_fst_86_ = lean_ctor_get(v___x_84_, 0);
lean_inc(v_fst_86_);
lean_dec_ref(v___x_84_);
v_head_87_ = lean_ctor_get(v_snd_85_, 0);
v_tail_88_ = lean_ctor_get(v_snd_85_, 1);
v_isSharedCheck_103_ = !lean_is_exclusive(v_snd_85_);
if (v_isSharedCheck_103_ == 0)
{
v___x_90_ = v_snd_85_;
v_isShared_91_ = v_isSharedCheck_103_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_tail_88_);
lean_inc(v_head_87_);
lean_dec(v_snd_85_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_103_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___y_93_; uint8_t v___x_96_; 
v___x_96_ = lean_nat_dec_eq(v_head_87_, v___x_80_);
lean_dec(v_head_87_);
if (v___x_96_ == 0)
{
lean_del_object(v___x_90_);
lean_dec(v_tail_88_);
lean_dec(v_fst_86_);
v_a_71_ = v_tail_74_;
v_a_72_ = v_n_79_;
goto _start;
}
else
{
uint8_t v___x_98_; 
lean_dec(v_tail_74_);
v___x_98_ = l_List_isEmpty___redArg(v_fst_86_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; lean_object* v___x_101_; 
v___x_99_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_digitPrefix_spec__1(v_zero_75_, v_fst_86_);
lean_dec(v_fst_86_);
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 1, v___x_83_);
lean_ctor_set(v___x_90_, 0, v___x_99_);
v___x_101_ = v___x_90_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v___x_83_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
v___y_93_ = v___x_101_;
goto v___jp_92_;
}
}
else
{
lean_del_object(v___x_90_);
lean_dec(v_fst_86_);
v___y_93_ = v___x_83_;
goto v___jp_92_;
}
}
v___jp_92_:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_footnotePhIds_go(v_tail_88_, v_n_79_);
v___x_95_ = l_List_appendTR___redArg(v___y_93_, v___x_94_);
return v___x_95_;
}
}
}
else
{
lean_dec(v_snd_85_);
lean_dec_ref(v___x_84_);
v_a_71_ = v_tail_74_;
v_a_72_ = v_n_79_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_footnotePhIds(lean_object* v_bs_105_){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = l_List_lengthTR___redArg(v_bs_105_);
v___x_107_ = lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_footnotePhIds_go(v_bs_105_, v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0(lean_object* v_lookup_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
if (lean_obj_tag(v_a_113_) == 0)
{
lean_object* v___x_115_; 
lean_dec_ref(v_lookup_112_);
v___x_115_ = l_List_reverse___redArg(v_a_114_);
return v___x_115_;
}
else
{
lean_object* v_head_116_; lean_object* v_tail_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_130_; 
v_head_116_ = lean_ctor_get(v_a_113_, 0);
v_tail_117_ = lean_ctor_get(v_a_113_, 1);
v_isSharedCheck_130_ = !lean_is_exclusive(v_a_113_);
if (v_isSharedCheck_130_ == 0)
{
v___x_119_ = v_a_113_;
v_isShared_120_ = v_isSharedCheck_130_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_tail_117_);
lean_inc(v_head_116_);
lean_dec(v_a_113_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_130_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___y_122_; lean_object* v___x_127_; 
lean_inc_ref(v_lookup_112_);
v___x_127_ = lean_apply_1(v_lookup_112_, v_head_116_);
if (lean_obj_tag(v___x_127_) == 0)
{
lean_object* v___x_128_; 
v___x_128_ = ((lean_object*)(lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0___closed__1));
v___y_122_ = v___x_128_;
goto v___jp_121_;
}
else
{
lean_object* v_val_129_; 
v_val_129_ = lean_ctor_get(v___x_127_, 0);
lean_inc(v_val_129_);
lean_dec_ref_known(v___x_127_, 1);
v___y_122_ = v_val_129_;
goto v___jp_121_;
}
v___jp_121_:
{
lean_object* v___x_124_; 
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 1, v_a_114_);
lean_ctor_set(v___x_119_, 0, v___y_122_);
v___x_124_ = v___x_119_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___y_122_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_a_114_);
v___x_124_ = v_reuseFailAlloc_126_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
v_a_113_ = v_tail_117_;
v_a_114_ = v___x_124_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks(lean_object* v_lookup_131_, lean_object* v_body_132_){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v_bound_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_133_ = lean_unsigned_to_nat(0u);
v___x_134_ = lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_footnotePhIds(v_body_132_);
v___x_135_ = lp_lean_x2dftml_List_foldl___at___00List_max_x3f___at___00LeanFtml_rawCodeShape_spec__1_spec__1(v___x_133_, v___x_134_);
lean_dec(v___x_134_);
v___x_136_ = lean_unsigned_to_nat(1u);
v_bound_137_ = lean_nat_add(v___x_135_, v___x_136_);
lean_dec(v___x_135_);
v___x_138_ = l_List_range(v_bound_137_);
v___x_139_ = lean_box(0);
v___x_140_ = lp_lean_x2dftml_List_mapTR_loop___at___00__private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks_spec__0(v_lookup_131_, v___x_138_, v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteVisibleBody(lean_object* v_lookup_141_, lean_object* v_body_142_){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
lean_inc(v_body_142_);
v___x_143_ = lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_footnoteToks(v_lookup_141_, v_body_142_);
v___x_144_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes(v_body_142_, v___x_143_);
lean_dec(v___x_143_);
v___x_145_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_144_);
lean_dec(v___x_144_);
return v___x_145_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__1(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__0));
v___x_148_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_147_);
return v___x_148_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__2));
v___x_151_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_150_);
return v___x_151_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__4));
v___x_154_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_153_);
return v___x_154_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__6));
v___x_157_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__9(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__8));
v___x_160_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_159_);
return v___x_160_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__11(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__10));
v___x_163_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__13(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__12));
v___x_166_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_165_);
return v___x_166_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__15(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__14));
v___x_169_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_168_);
return v___x_169_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__17(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__16));
v___x_172_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem(lean_object* v_conf_179_, lean_object* v_doc_180_, lean_object* v_opts_181_, lean_object* v_lookup_182_){
_start:
{
lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_183_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__1, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__1);
v___x_184_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_181_, v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3);
v___x_186_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_181_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; uint8_t v___x_188_; 
lean_dec_ref(v_lookup_182_);
lean_dec_ref(v_conf_179_);
v___x_187_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5);
v___x_188_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_181_, v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; 
v___x_189_ = lean_box(0);
return v___x_189_;
}
else
{
lean_object* v___x_190_; 
v___x_190_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7);
return v___x_190_;
}
}
else
{
lean_object* v___x_191_; lean_object* v_idBytes_192_; lean_object* v___y_194_; lean_object* v___y_195_; lean_object* v___y_214_; lean_object* v___y_215_; lean_object* v___y_221_; lean_object* v___x_232_; 
v___x_191_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1);
v_idBytes_192_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_181_, v___x_191_);
v___x_232_ = lp_lean_x2dftml_LeanFtml_optNat(v_opts_181_, v___x_191_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v___x_233_; 
v___x_233_ = lean_unsigned_to_nat(0u);
v___y_221_ = v___x_233_;
goto v___jp_220_;
}
else
{
lean_object* v_val_234_; 
v_val_234_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_val_234_);
lean_dec_ref_known(v___x_232_, 1);
v___y_221_ = v_val_234_;
goto v___jp_220_;
}
v___jp_193_:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_196_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__9, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__9);
lean_inc(v___y_194_);
v___x_197_ = l_List_appendTR___redArg(v___x_196_, v___y_194_);
lean_inc_n(v_idBytes_192_, 2);
v___x_198_ = l_List_appendTR___redArg(v___x_197_, v_idBytes_192_);
v___x_199_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__11, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__11);
v___x_200_ = l_List_appendTR___redArg(v___x_198_, v___x_199_);
v___x_201_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__13, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__13);
v___x_202_ = l_List_appendTR___redArg(v___x_200_, v___x_201_);
v___x_203_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__15, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__15);
v___x_204_ = l_List_appendTR___redArg(v___x_202_, v___x_203_);
v___x_205_ = l_List_appendTR___redArg(v___x_204_, v___y_194_);
v___x_206_ = l_List_appendTR___redArg(v___x_205_, v_idBytes_192_);
v___x_207_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11);
v___x_208_ = l_List_appendTR___redArg(v___x_206_, v___x_207_);
v___x_209_ = l_List_appendTR___redArg(v___x_208_, v_idBytes_192_);
v___x_210_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__17, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__17);
v___x_211_ = l_List_appendTR___redArg(v___x_209_, v___x_210_);
lean_inc(v___y_195_);
v___x_212_ = l_List_appendTR___redArg(v___x_211_, v___y_195_);
return v___x_212_;
}
v___jp_213_:
{
lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = lp_lean_x2dftml_LeanFtml_footnoteVisibleBody(v_lookup_182_, v___y_215_);
v___x_217_ = l_List_isEmpty___redArg(v___x_216_);
lean_dec(v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; 
v___x_218_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__18));
v___y_194_ = v___y_214_;
v___y_195_ = v___x_218_;
goto v___jp_193_;
}
else
{
lean_object* v___x_219_; 
v___x_219_ = lean_box(0);
v___y_194_ = v___y_214_;
v___y_195_ = v___x_219_;
goto v___jp_193_;
}
}
v___jp_220_:
{
lean_object* v_footnoteIdPrefix_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v_footnoteIdPrefix_222_ = lean_ctor_get(v_conf_179_, 0);
lean_inc(v_footnoteIdPrefix_222_);
lean_dec_ref(v_conf_179_);
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_224_ = lean_nat_dec_lt(v___x_223_, v___y_221_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; 
lean_dec(v___y_221_);
v___x_225_ = lean_box(0);
v___y_214_ = v_footnoteIdPrefix_222_;
v___y_215_ = v___x_225_;
goto v___jp_213_;
}
else
{
lean_object* v_footnotes_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v_footnotes_226_ = lean_ctor_get(v_doc_180_, 4);
v___x_227_ = lean_unsigned_to_nat(1u);
v___x_228_ = lean_nat_sub(v___y_221_, v___x_227_);
lean_dec(v___y_221_);
v___x_229_ = l_List_get_x3fInternal___redArg(v_footnotes_226_, v___x_228_);
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v___x_230_; 
v___x_230_ = lean_box(0);
v___y_214_ = v_footnoteIdPrefix_222_;
v___y_215_ = v___x_230_;
goto v___jp_213_;
}
else
{
lean_object* v_val_231_; 
v_val_231_ = lean_ctor_get(v___x_229_, 0);
lean_inc(v_val_231_);
lean_dec_ref_known(v___x_229_, 1);
v___y_214_ = v_footnoteIdPrefix_222_;
v___y_215_ = v_val_231_;
goto v___jp_213_;
}
}
}
}
}
else
{
lean_object* v___x_235_; 
lean_dec_ref(v_lookup_182_);
lean_dec_ref(v_conf_179_);
v___x_235_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__19));
return v___x_235_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteitem___boxed(lean_object* v_conf_236_, lean_object* v_doc_237_, lean_object* v_opts_238_, lean_object* v_lookup_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = lp_lean_x2dftml_LeanFtml_renderFootnoteitem(v_conf_236_, v_doc_237_, v_opts_238_, v_lookup_239_);
lean_dec(v_opts_238_);
lean_dec_ref(v_doc_237_);
return v_res_240_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0___closed__1(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0___closed__0));
v___x_243_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0(lean_object* v_00___244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0___closed__1, &lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0___closed__1);
return v___x_245_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__1(void){
_start:
{
lean_object* v___x_247_; lean_object* v_head_248_; 
v___x_247_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__0));
v_head_248_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_247_);
return v_head_248_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__3(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__2));
v___x_251_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__4(void){
_start:
{
lean_object* v___x_252_; lean_object* v_head_253_; lean_object* v___x_254_; 
v___x_252_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__3, &lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__3);
v_head_253_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__1, &lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__1);
v___x_254_ = l_List_appendTR___redArg(v_head_253_, v___x_252_);
return v___x_254_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__6(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__5));
v___x_257_ = l_String_toListImpl(v___x_256_);
return v___x_257_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__7(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_box(0);
v___x_259_ = lp_lean_x2dftml_LeanFtml_renderFootnoteblock___lam__0(v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock(lean_object* v_doc_260_, lean_object* v_opts_261_){
_start:
{
lean_object* v___y_263_; lean_object* v_footnotes_271_; uint8_t v___x_272_; 
v_footnotes_271_ = lean_ctor_get(v_doc_260_, 4);
v___x_272_ = l_List_isEmpty___redArg(v_footnotes_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3);
v___x_274_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_261_, v___x_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5);
v___x_276_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_261_, v___x_275_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; 
v___x_277_ = lean_box(0);
return v___x_277_;
}
else
{
lean_object* v___x_278_; 
v___x_278_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7);
return v___x_278_;
}
}
else
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__6, &lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__6);
v___x_280_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_261_, v___x_279_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v___x_281_; 
v___x_281_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__7, &lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__7);
v___y_263_ = v___x_281_;
goto v___jp_262_;
}
else
{
lean_object* v_val_282_; 
v_val_282_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_val_282_);
lean_dec_ref_known(v___x_280_, 1);
if (lean_obj_tag(v_val_282_) == 3)
{
lean_object* v___x_283_; 
v___x_283_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__7, &lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__7);
v___y_263_ = v___x_283_;
goto v___jp_262_;
}
else
{
lean_object* v___x_284_; 
v___x_284_ = lp_lean_x2dftml_LeanFtml_renderOptValBytes(v_val_282_);
lean_dec(v_val_282_);
v___y_263_ = v___x_284_;
goto v___jp_262_;
}
}
}
}
else
{
lean_object* v___x_285_; 
v___x_285_ = lean_box(0);
return v___x_285_;
}
v___jp_262_:
{
lean_object* v_head_264_; uint8_t v___x_265_; 
v_head_264_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__1, &lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__1);
v___x_265_ = l_List_isEmpty___redArg(v___y_263_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_266_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__4, &lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__4);
v___x_267_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___y_263_);
v___x_268_ = l_List_appendTR___redArg(v___x_266_, v___x_267_);
v___x_269_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7);
v___x_270_ = l_List_appendTR___redArg(v___x_268_, v___x_269_);
return v___x_270_;
}
else
{
lean_dec(v___y_263_);
return v_head_264_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderFootnoteblock___boxed(lean_object* v_doc_286_, lean_object* v_opts_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = lp_lean_x2dftml_LeanFtml_renderFootnoteblock(v_doc_286_, v_opts_287_);
lean_dec(v_opts_287_);
lean_dec_ref(v_doc_286_);
return v_res_288_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibitem___closed__1(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibitem___closed__0));
v___x_291_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_290_);
return v___x_291_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibitem___closed__3(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibitem___closed__2));
v___x_294_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_293_);
return v___x_294_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibitem___closed__6(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibitem___closed__5));
v___x_300_ = l_String_toListImpl(v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem(lean_object* v_conf_301_, lean_object* v_opts_302_){
_start:
{
lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_303_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3);
v___x_304_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_302_, v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; uint8_t v___x_306_; 
lean_dec_ref(v_conf_301_);
v___x_305_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5);
v___x_306_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_302_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; 
v___x_307_ = lean_box(0);
return v___x_307_;
}
else
{
lean_object* v___x_308_; 
v___x_308_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7);
return v___x_308_;
}
}
else
{
lean_object* v_bibitemIdPrefix_309_; lean_object* v___x_310_; lean_object* v_idBytes_311_; lean_object* v___y_313_; lean_object* v___x_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v_bibitemIdPrefix_309_ = lean_ctor_get(v_conf_301_, 1);
lean_inc(v_bibitemIdPrefix_309_);
lean_dec_ref(v_conf_301_);
v___x_310_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__1);
v_idBytes_311_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_302_, v___x_310_);
v___x_323_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibitem___closed__6, &lp_lean_x2dftml_LeanFtml_renderBibitem___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderBibitem___closed__6);
v___x_324_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_302_, v___x_323_);
v___x_325_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v___x_324_);
lean_dec(v___x_324_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; 
v___x_326_ = lean_box(0);
v___y_313_ = v___x_326_;
goto v___jp_312_;
}
else
{
lean_object* v___x_327_; 
v___x_327_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__18));
v___y_313_ = v___x_327_;
goto v___jp_312_;
}
v___jp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_314_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibitem___closed__1, &lp_lean_x2dftml_LeanFtml_renderBibitem___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderBibitem___closed__1);
v___x_315_ = l_List_appendTR___redArg(v___x_314_, v_bibitemIdPrefix_309_);
lean_inc(v_idBytes_311_);
v___x_316_ = l_List_appendTR___redArg(v___x_315_, v_idBytes_311_);
v___x_317_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibitem___closed__3, &lp_lean_x2dftml_LeanFtml_renderBibitem___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderBibitem___closed__3);
v___x_318_ = l_List_appendTR___redArg(v___x_316_, v___x_317_);
v___x_319_ = l_List_appendTR___redArg(v___x_318_, v_idBytes_311_);
v___x_320_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibitem___closed__4));
v___x_321_ = l_List_appendTR___redArg(v___x_319_, v___x_320_);
lean_inc(v___y_313_);
v___x_322_ = l_List_appendTR___redArg(v___x_321_, v___y_313_);
return v___x_322_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibitem___boxed(lean_object* v_conf_328_, lean_object* v_opts_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = lp_lean_x2dftml_LeanFtml_renderBibitem(v_conf_328_, v_opts_329_);
lean_dec(v_opts_329_);
return v_res_330_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0___closed__1(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0___closed__0));
v___x_333_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0(lean_object* v_00___334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0___closed__1, &lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0___closed__1);
return v___x_335_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibliography___closed__1(void){
_start:
{
lean_object* v___x_337_; lean_object* v_head_338_; 
v___x_337_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibliography___closed__0));
v_head_338_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_337_);
return v_head_338_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibliography___closed__2(void){
_start:
{
lean_object* v___x_339_; lean_object* v_head_340_; lean_object* v___x_341_; 
v___x_339_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__3, &lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__3);
v_head_340_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibliography___closed__1, &lp_lean_x2dftml_LeanFtml_renderBibliography___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderBibliography___closed__1);
v___x_341_ = l_List_appendTR___redArg(v_head_340_, v___x_339_);
return v___x_341_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibliography___closed__4(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibliography___closed__3));
v___x_344_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibliography___closed__5(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_box(0);
v___x_346_ = lp_lean_x2dftml_LeanFtml_renderBibliography___lam__0(v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography(lean_object* v_opts_347_){
_start:
{
lean_object* v___y_349_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_357_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibliography___closed__4, &lp_lean_x2dftml_LeanFtml_renderBibliography___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_renderBibliography___closed__4);
v___x_358_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_347_, v___x_357_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_359_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__3);
v___x_360_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_347_, v___x_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_361_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__5);
v___x_362_ = lp_lean_x2dftml_LeanFtml_optTypeIs(v_opts_347_, v___x_361_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; 
v___x_363_ = lean_box(0);
return v___x_363_;
}
else
{
lean_object* v___x_364_; 
v___x_364_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7);
return v___x_364_;
}
}
else
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__6, &lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteblock___closed__6);
v___x_366_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_347_, v___x_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v___x_367_; 
v___x_367_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibliography___closed__5, &lp_lean_x2dftml_LeanFtml_renderBibliography___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderBibliography___closed__5);
v___y_349_ = v___x_367_;
goto v___jp_348_;
}
else
{
lean_object* v_val_368_; 
v_val_368_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_val_368_);
lean_dec_ref_known(v___x_366_, 1);
if (lean_obj_tag(v_val_368_) == 3)
{
lean_object* v___x_369_; 
v___x_369_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibliography___closed__5, &lp_lean_x2dftml_LeanFtml_renderBibliography___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderBibliography___closed__5);
v___y_349_ = v___x_369_;
goto v___jp_348_;
}
else
{
lean_object* v___x_370_; 
v___x_370_ = lp_lean_x2dftml_LeanFtml_renderOptValBytes(v_val_368_);
lean_dec(v_val_368_);
v___y_349_ = v___x_370_;
goto v___jp_348_;
}
}
}
}
else
{
lean_object* v___x_371_; 
v___x_371_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__19));
return v___x_371_;
}
v___jp_348_:
{
lean_object* v_head_350_; uint8_t v___x_351_; 
v_head_350_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibliography___closed__1, &lp_lean_x2dftml_LeanFtml_renderBibliography___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderBibliography___closed__1);
v___x_351_ = l_List_isEmpty___redArg(v___y_349_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_352_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibliography___closed__2, &lp_lean_x2dftml_LeanFtml_renderBibliography___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_renderBibliography___closed__2);
v___x_353_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___y_349_);
v___x_354_ = l_List_appendTR___redArg(v___x_352_, v___x_353_);
v___x_355_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7, &lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnoteitem___closed__7);
v___x_356_ = l_List_appendTR___redArg(v___x_354_, v___x_355_);
return v___x_356_;
}
else
{
lean_dec(v___y_349_);
return v_head_350_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibliography___boxed(lean_object* v_opts_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = lp_lean_x2dftml_LeanFtml_renderBibliography(v_opts_372_);
lean_dec(v_opts_372_);
return v_res_373_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__1(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibcite___closed__0));
v___x_376_ = l_String_toListImpl(v___x_375_);
return v___x_376_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__3(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibcite___closed__2));
v___x_379_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_378_);
return v___x_379_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__5(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibcite___closed__4));
v___x_382_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_381_);
return v___x_382_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__6(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_383_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__5, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__5);
v___x_384_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__3, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__3);
v___x_385_ = l_List_appendTR___redArg(v___x_384_, v___x_383_);
return v___x_385_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__8(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibcite___closed__7));
v___x_388_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_387_);
return v___x_388_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__10(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibcite___closed__9));
v___x_391_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_390_);
return v___x_391_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__12(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibcite___closed__11));
v___x_394_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_393_);
return v___x_394_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__13(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__12, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__12);
v___x_396_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__10, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__10);
v___x_397_ = l_List_appendTR___redArg(v___x_396_, v___x_395_);
return v___x_397_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__15(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibcite___closed__14));
v___x_400_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_399_);
return v___x_400_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__17(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibcite___closed__16));
v___x_403_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_402_);
return v___x_403_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__19(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBibcite___closed__18));
v___x_406_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite(lean_object* v_conf_407_, lean_object* v_doc_408_, lean_object* v_opts_409_){
_start:
{
lean_object* v_bibitemIds_410_; lean_object* v___x_411_; lean_object* v_label_412_; lean_object* v___x_413_; 
v_bibitemIds_410_ = lean_ctor_get(v_doc_408_, 6);
v___x_411_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__1, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__1);
v_label_412_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_409_, v___x_411_);
v___x_413_ = lp_lean_x2dftml_LeanFtml_bibLookup(v_bibitemIds_410_, v_label_412_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
lean_dec_ref(v_conf_407_);
v___x_414_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__6, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__6);
v___x_415_ = l_List_appendTR___redArg(v___x_414_, v_label_412_);
v___x_416_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__8, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__8);
v___x_417_ = l_List_appendTR___redArg(v___x_415_, v___x_416_);
return v___x_417_;
}
else
{
lean_object* v_val_418_; lean_object* v_bibitemIdPrefix_419_; lean_object* v_idBytes_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
lean_dec(v_label_412_);
v_val_418_ = lean_ctor_get(v___x_413_, 0);
lean_inc(v_val_418_);
lean_dec_ref_known(v___x_413_, 1);
v_bibitemIdPrefix_419_ = lean_ctor_get(v_conf_407_, 1);
lean_inc(v_bibitemIdPrefix_419_);
lean_dec_ref(v_conf_407_);
v_idBytes_420_ = lp_lean_x2dftml_LeanFtml_natBytes(v_val_418_);
v___x_421_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__13, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__13);
lean_inc_n(v_idBytes_420_, 2);
v___x_422_ = l_List_appendTR___redArg(v___x_421_, v_idBytes_420_);
v___x_423_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__15, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__15);
v___x_424_ = l_List_appendTR___redArg(v___x_422_, v___x_423_);
v___x_425_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__17, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__17);
v___x_426_ = l_List_appendTR___redArg(v___x_424_, v___x_425_);
v___x_427_ = l_List_appendTR___redArg(v___x_426_, v_bibitemIdPrefix_419_);
v___x_428_ = l_List_appendTR___redArg(v___x_427_, v_idBytes_420_);
v___x_429_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11, &lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderFootnote___closed__11);
v___x_430_ = l_List_appendTR___redArg(v___x_428_, v___x_429_);
v___x_431_ = l_List_appendTR___redArg(v___x_430_, v_idBytes_420_);
v___x_432_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBibcite___closed__19, &lp_lean_x2dftml_LeanFtml_renderBibcite___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderBibcite___closed__19);
v___x_433_ = l_List_appendTR___redArg(v___x_431_, v___x_432_);
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBibcite___boxed(lean_object* v_conf_434_, lean_object* v_doc_435_, lean_object* v_opts_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = lp_lean_x2dftml_LeanFtml_renderBibcite(v_conf_434_, v_doc_435_, v_opts_436_);
lean_dec(v_opts_436_);
lean_dec_ref(v_doc_435_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41___lam__0(lean_object* v_x_438_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = lean_box(0);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41___lam__0___boxed(lean_object* v_x_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = lp_lean_x2dftml_LeanFtml_dispatchRenderR41___lam__0(v_x_440_);
lean_dec(v_x_440_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41(uint8_t v_x_443_, lean_object* v_x_444_, lean_object* v_x_445_, lean_object* v_x_446_){
_start:
{
switch(v_x_443_)
{
case 0:
{
lean_object* v___x_447_; 
v___x_447_ = lp_lean_x2dftml_LeanFtml_renderFootnote(v_x_444_, v_x_446_);
lean_dec(v_x_446_);
return v___x_447_;
}
case 1:
{
lean_object* v___f_448_; lean_object* v___x_449_; 
v___f_448_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_dispatchRenderR41___closed__0));
v___x_449_ = lp_lean_x2dftml_LeanFtml_renderFootnoteitem(v_x_444_, v_x_445_, v_x_446_, v___f_448_);
lean_dec(v_x_446_);
return v___x_449_;
}
case 2:
{
lean_object* v___x_450_; 
lean_dec_ref(v_x_444_);
v___x_450_ = lp_lean_x2dftml_LeanFtml_renderFootnoteblock(v_x_445_, v_x_446_);
lean_dec(v_x_446_);
return v___x_450_;
}
case 3:
{
lean_object* v___x_451_; 
v___x_451_ = lp_lean_x2dftml_LeanFtml_renderBibitem(v_x_444_, v_x_446_);
lean_dec(v_x_446_);
return v___x_451_;
}
case 4:
{
lean_object* v___x_452_; 
lean_dec_ref(v_x_444_);
v___x_452_ = lp_lean_x2dftml_LeanFtml_renderBibliography(v_x_446_);
lean_dec(v_x_446_);
return v___x_452_;
}
case 5:
{
lean_object* v___x_453_; 
v___x_453_ = lp_lean_x2dftml_LeanFtml_renderBibcite(v_x_444_, v_x_445_, v_x_446_);
lean_dec(v_x_446_);
return v___x_453_;
}
case 6:
{
lean_object* v___x_454_; 
lean_dec_ref(v_x_444_);
v___x_454_ = lp_lean_x2dftml_LeanFtml_renderParagraph(v_x_446_);
lean_dec(v_x_446_);
return v___x_454_;
}
case 7:
{
lean_object* v___x_455_; 
lean_dec(v_x_446_);
lean_dec_ref(v_x_444_);
v___x_455_ = lp_lean_x2dftml_LeanFtml_renderNewline;
return v___x_455_;
}
case 8:
{
lean_object* v___x_456_; 
lean_dec(v_x_446_);
lean_dec_ref(v_x_444_);
v___x_456_ = lp_lean_x2dftml_LeanFtml_renderBreak;
return v___x_456_;
}
case 9:
{
lean_object* v___x_457_; 
lean_dec_ref(v_x_444_);
v___x_457_ = lp_lean_x2dftml_LeanFtml_renderCenter(v_x_446_);
lean_dec(v_x_446_);
return v___x_457_;
}
case 10:
{
lean_object* v___x_458_; 
lean_dec(v_x_446_);
lean_dec_ref(v_x_444_);
v___x_458_ = lp_lean_x2dftml_LeanFtml_renderHoriz;
return v___x_458_;
}
case 11:
{
lean_object* v___x_459_; 
lean_dec(v_x_446_);
lean_dec_ref(v_x_444_);
v___x_459_ = lp_lean_x2dftml_LeanFtml_renderSeparator;
return v___x_459_;
}
case 12:
{
lean_object* v___x_460_; 
lean_dec_ref(v_x_444_);
v___x_460_ = lp_lean_x2dftml_LeanFtml_renderClearfloat(v_x_446_);
lean_dec(v_x_446_);
return v___x_460_;
}
case 13:
{
lean_object* v___x_461_; 
lean_dec_ref(v_x_444_);
v___x_461_ = lp_lean_x2dftml_LeanFtml_renderBlockquote(v_x_446_);
lean_dec(v_x_446_);
return v___x_461_;
}
case 14:
{
lean_object* v___x_462_; 
lean_dec_ref(v_x_444_);
v___x_462_ = lp_lean_x2dftml_LeanFtml_renderNote(v_x_446_);
lean_dec(v_x_446_);
return v___x_462_;
}
case 15:
{
lean_object* v___x_463_; 
lean_dec_ref(v_x_444_);
v___x_463_ = lp_lean_x2dftml_LeanFtml_renderDivalign(v_x_446_);
lean_dec(v_x_446_);
return v___x_463_;
}
case 17:
{
lean_object* v___x_464_; 
lean_dec_ref(v_x_444_);
v___x_464_ = lp_lean_x2dftml_LeanFtml_renderDelimiter(v_x_446_);
lean_dec(v_x_446_);
return v___x_464_;
}
case 18:
{
lean_object* v___x_465_; 
lean_dec_ref(v_x_444_);
v___x_465_ = lp_lean_x2dftml_LeanFtml_renderUrl(v_x_446_);
lean_dec(v_x_446_);
return v___x_465_;
}
case 19:
{
lean_object* v___x_466_; 
lean_dec_ref(v_x_444_);
v___x_466_ = lp_lean_x2dftml_LeanFtml_renderEmail(v_x_446_);
lean_dec(v_x_446_);
return v___x_466_;
}
case 20:
{
lean_object* v___x_467_; 
lean_dec_ref(v_x_444_);
v___x_467_ = lp_lean_x2dftml_LeanFtml_renderMathinline(v_x_446_);
lean_dec(v_x_446_);
return v___x_467_;
}
case 21:
{
lean_object* v___x_468_; 
lean_dec_ref(v_x_444_);
v___x_468_ = lp_lean_x2dftml_LeanFtml_renderInterwiki(v_x_446_);
lean_dec(v_x_446_);
return v___x_468_;
}
case 22:
{
lean_object* v___x_469_; 
lean_dec_ref(v_x_444_);
v___x_469_ = lp_lean_x2dftml_LeanFtml_renderColortext(v_x_446_);
lean_dec(v_x_446_);
return v___x_469_;
}
case 23:
{
lean_object* v___x_470_; 
lean_dec_ref(v_x_444_);
v___x_470_ = lp_lean_x2dftml_LeanFtml_renderStrong(v_x_446_);
lean_dec(v_x_446_);
return v___x_470_;
}
case 24:
{
lean_object* v___x_471_; 
lean_dec_ref(v_x_444_);
v___x_471_ = lp_lean_x2dftml_LeanFtml_renderEmphasis(v_x_446_);
lean_dec(v_x_446_);
return v___x_471_;
}
case 25:
{
lean_object* v___x_472_; 
lean_dec_ref(v_x_444_);
v___x_472_ = lp_lean_x2dftml_LeanFtml_renderUnderline(v_x_446_);
lean_dec(v_x_446_);
return v___x_472_;
}
case 26:
{
lean_object* v___x_473_; 
lean_dec_ref(v_x_444_);
v___x_473_ = lp_lean_x2dftml_LeanFtml_renderStrikethrough(v_x_446_);
lean_dec(v_x_446_);
return v___x_473_;
}
case 27:
{
lean_object* v___x_474_; 
lean_dec_ref(v_x_444_);
v___x_474_ = lp_lean_x2dftml_LeanFtml_renderTt(v_x_446_);
lean_dec(v_x_446_);
return v___x_474_;
}
case 28:
{
lean_object* v___x_475_; 
lean_dec_ref(v_x_444_);
v___x_475_ = lp_lean_x2dftml_LeanFtml_renderSuperscript(v_x_446_);
lean_dec(v_x_446_);
return v___x_475_;
}
case 29:
{
lean_object* v___x_476_; 
lean_dec_ref(v_x_444_);
v___x_476_ = lp_lean_x2dftml_LeanFtml_renderSubscript(v_x_446_);
lean_dec(v_x_446_);
return v___x_476_;
}
case 30:
{
lean_object* v___x_477_; 
lean_dec_ref(v_x_444_);
v___x_477_ = lp_lean_x2dftml_LeanFtml_renderTypography(v_x_446_);
lean_dec(v_x_446_);
return v___x_477_;
}
case 32:
{
lean_object* v___x_478_; 
lean_dec_ref(v_x_444_);
v___x_478_ = lp_lean_x2dftml_LeanFtml_renderRaw(v_x_446_);
lean_dec(v_x_446_);
return v___x_478_;
}
case 33:
{
lean_object* v___x_479_; 
lean_dec_ref(v_x_444_);
v___x_479_ = lp_lean_x2dftml_LeanFtml_renderRawold(v_x_446_);
lean_dec(v_x_446_);
return v___x_479_;
}
case 34:
{
lean_object* v___x_480_; 
lean_dec_ref(v_x_444_);
v___x_480_ = lp_lean_x2dftml_LeanFtml_renderForm(v_x_446_);
lean_dec(v_x_446_);
return v___x_480_;
}
case 35:
{
lean_object* v___x_481_; 
lean_dec_ref(v_x_444_);
v___x_481_ = lp_lean_x2dftml_LeanFtml_renderHeading(v_x_446_);
lean_dec(v_x_446_);
return v___x_481_;
}
case 36:
{
lean_object* v___x_482_; 
lean_dec_ref(v_x_444_);
v___x_482_ = lp_lean_x2dftml_LeanFtml_renderToc(v_x_446_);
lean_dec(v_x_446_);
return v___x_482_;
}
case 37:
{
lean_object* v___x_483_; 
lean_dec_ref(v_x_444_);
v___x_483_ = lp_lean_x2dftml_LeanFtml_renderList(v_x_446_);
lean_dec(v_x_446_);
return v___x_483_;
}
case 38:
{
lean_object* v___x_484_; 
lean_dec_ref(v_x_444_);
v___x_484_ = lp_lean_x2dftml_LeanFtml_renderDeflist(v_x_446_);
lean_dec(v_x_446_);
return v___x_484_;
}
case 39:
{
lean_object* v___x_485_; 
lean_dec_ref(v_x_444_);
v___x_485_ = lp_lean_x2dftml_LeanFtml_renderTable(v_x_446_);
lean_dec(v_x_446_);
return v___x_485_;
}
case 40:
{
lean_object* v___x_486_; 
lean_dec_ref(v_x_444_);
v___x_486_ = lp_lean_x2dftml_LeanFtml_renderTableadv(v_x_446_);
lean_dec(v_x_446_);
return v___x_486_;
}
case 41:
{
lean_object* v___x_487_; 
v___x_487_ = lp_lean_x2dftml_LeanFtml_renderEquationreference(v_x_444_, v_x_445_, v_x_446_);
lean_dec(v_x_446_);
return v___x_487_;
}
case 42:
{
lean_object* v___x_488_; 
lean_dec_ref(v_x_444_);
v___x_488_ = lp_lean_x2dftml_LeanFtml_renderAnchor(v_x_446_);
lean_dec(v_x_446_);
return v___x_488_;
}
case 43:
{
lean_object* v___x_489_; 
lean_dec_ref(v_x_444_);
v___x_489_ = lp_lean_x2dftml_LeanFtml_renderCollapsible(v_x_446_);
lean_dec(v_x_446_);
return v___x_489_;
}
case 44:
{
lean_object* v___x_490_; 
lean_dec_ref(v_x_444_);
v___x_490_ = lp_lean_x2dftml_LeanFtml_renderTabview(v_x_446_);
lean_dec(v_x_446_);
return v___x_490_;
}
case 45:
{
lean_object* v___x_491_; 
lean_dec_ref(v_x_444_);
v___x_491_ = lp_lean_x2dftml_LeanFtml_renderButton(v_x_446_);
lean_dec(v_x_446_);
return v___x_491_;
}
case 46:
{
lean_object* v___x_492_; 
lean_dec_ref(v_x_444_);
v___x_492_ = lp_lean_x2dftml_LeanFtml_renderIframe(v_x_446_);
return v___x_492_;
}
case 47:
{
lean_object* v___x_493_; 
lean_dec_ref(v_x_444_);
v___x_493_ = lp_lean_x2dftml_LeanFtml_renderDate(v_x_446_);
lean_dec(v_x_446_);
return v___x_493_;
}
case 48:
{
lean_object* v___x_494_; 
lean_dec_ref(v_x_444_);
v___x_494_ = lp_lean_x2dftml_LeanFtml_renderFile(v_x_446_);
lean_dec(v_x_446_);
return v___x_494_;
}
case 49:
{
lean_object* v___x_495_; 
lean_dec_ref(v_x_444_);
v___x_495_ = lp_lean_x2dftml_LeanFtml_renderSize(v_x_446_);
lean_dec(v_x_446_);
return v___x_495_;
}
case 50:
{
lean_object* v___x_496_; 
lean_dec_ref(v_x_444_);
v___x_496_ = lp_lean_x2dftml_LeanFtml_renderSpan(v_x_446_);
lean_dec(v_x_446_);
return v___x_496_;
}
case 51:
{
lean_object* v___x_497_; 
lean_dec_ref(v_x_444_);
v___x_497_ = lp_lean_x2dftml_LeanFtml_renderDiv(v_x_446_);
lean_dec(v_x_446_);
return v___x_497_;
}
case 52:
{
lean_object* v___x_498_; 
lean_dec_ref(v_x_444_);
v___x_498_ = lp_lean_x2dftml_LeanFtml_renderCode(v_x_446_);
lean_dec(v_x_446_);
return v___x_498_;
}
case 53:
{
lean_object* v___x_499_; 
lean_dec_ref(v_x_444_);
v___x_499_ = lp_lean_x2dftml_LeanFtml_renderEmbed(v_x_446_);
lean_dec(v_x_446_);
return v___x_499_;
}
case 54:
{
lean_object* v___x_500_; 
lean_dec_ref(v_x_444_);
v___x_500_ = lp_lean_x2dftml_LeanFtml_renderFreelink(v_x_446_);
lean_dec(v_x_446_);
return v___x_500_;
}
case 55:
{
lean_object* v___x_501_; 
lean_dec_ref(v_x_444_);
v___x_501_ = lp_lean_x2dftml_LeanFtml_renderModule(v_x_446_);
lean_dec(v_x_446_);
return v___x_501_;
}
case 56:
{
lean_object* v___x_502_; 
lean_dec_ref(v_x_444_);
v___x_502_ = lp_lean_x2dftml_LeanFtml_renderModule(v_x_446_);
lean_dec(v_x_446_);
return v___x_502_;
}
case 57:
{
lean_object* v___x_503_; 
lean_dec_ref(v_x_444_);
v___x_503_ = lp_lean_x2dftml_LeanFtml_renderMath(v_x_446_);
lean_dec(v_x_446_);
return v___x_503_;
}
case 58:
{
lean_object* v___x_504_; 
lean_dec_ref(v_x_444_);
v___x_504_ = lp_lean_x2dftml_LeanFtml_renderImage(v_x_446_);
lean_dec(v_x_446_);
return v___x_504_;
}
case 59:
{
lean_object* v___x_505_; 
lean_dec_ref(v_x_444_);
v___x_505_ = lp_lean_x2dftml_LeanFtml_renderGallery(v_x_446_);
lean_dec(v_x_446_);
return v___x_505_;
}
case 60:
{
lean_object* v___x_506_; 
lean_dec_ref(v_x_444_);
v___x_506_ = lp_lean_x2dftml_LeanFtml_renderUser(v_x_446_);
lean_dec(v_x_446_);
return v___x_506_;
}
default: 
{
lean_object* v___x_507_; 
lean_dec(v_x_446_);
lean_dec_ref(v_x_444_);
v___x_507_ = lean_box(0);
return v___x_507_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41___boxed(lean_object* v_x_508_, lean_object* v_x_509_, lean_object* v_x_510_, lean_object* v_x_511_){
_start:
{
uint8_t v_x_444__boxed_512_; lean_object* v_res_513_; 
v_x_444__boxed_512_ = lean_unbox(v_x_508_);
v_res_513_ = lp_lean_x2dftml_LeanFtml_dispatchRenderR41(v_x_444__boxed_512_, v_x_509_, v_x_510_, v_x_511_);
lean_dec_ref(v_x_510_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41TokenAware(lean_object* v_lookup_514_, uint8_t v_x_515_, lean_object* v_x_516_, lean_object* v_x_517_, lean_object* v_x_518_){
_start:
{
if (v_x_515_ == 1)
{
lean_object* v___x_519_; 
v___x_519_ = lp_lean_x2dftml_LeanFtml_renderFootnoteitem(v_x_516_, v_x_517_, v_x_518_, v_lookup_514_);
lean_dec(v_x_518_);
return v___x_519_;
}
else
{
lean_object* v___x_520_; 
lean_dec_ref(v_lookup_514_);
v___x_520_ = lp_lean_x2dftml_LeanFtml_dispatchRenderR41(v_x_515_, v_x_516_, v_x_517_, v_x_518_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41TokenAware___boxed(lean_object* v_lookup_521_, lean_object* v_x_522_, lean_object* v_x_523_, lean_object* v_x_524_, lean_object* v_x_525_){
_start:
{
uint8_t v_x_17__boxed_526_; lean_object* v_res_527_; 
v_x_17__boxed_526_ = lean_unbox(v_x_522_);
v_res_527_ = lp_lean_x2dftml_LeanFtml_dispatchRenderR41TokenAware(v_lookup_521_, v_x_17__boxed_526_, v_x_523_, v_x_524_, v_x_525_);
lean_dec_ref(v_x_524_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderWithR41(lean_object* v_lookup_528_, lean_object* v_conf_529_, lean_object* v_work_530_, lean_object* v_doc_531_){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
lean_inc_ref(v_lookup_528_);
v___x_532_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_dispatchRenderR41TokenAware___boxed), 5, 1);
lean_closure_set(v___x_532_, 0, v_lookup_528_);
v___x_533_ = lp_lean_x2dftml_LeanFtml_renderWith(v___x_532_, v_lookup_528_, v_conf_529_, v_work_530_, v_doc_531_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR41___lam__0(lean_object* v_tokens_534_, lean_object* v_k_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_List_get_x3fInternal___redArg(v_tokens_534_, v_k_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR41___lam__0___boxed(lean_object* v_tokens_537_, lean_object* v_k_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = lp_lean_x2dftml_LeanFtml_renderStateR41___lam__0(v_tokens_537_, v_k_538_);
lean_dec(v_tokens_537_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR41(lean_object* v_conf_540_, lean_object* v_st_541_){
_start:
{
lean_object* v_work_542_; lean_object* v_tokens_543_; lean_object* v_doc_544_; lean_object* v___f_545_; lean_object* v___x_546_; 
v_work_542_ = lean_ctor_get(v_st_541_, 0);
lean_inc(v_work_542_);
v_tokens_543_ = lean_ctor_get(v_st_541_, 1);
lean_inc(v_tokens_543_);
v_doc_544_ = lean_ctor_get(v_st_541_, 2);
lean_inc_ref(v_doc_544_);
lean_dec_ref(v_st_541_);
v___f_545_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_renderStateR41___lam__0___boxed), 2, 1);
lean_closure_set(v___f_545_, 0, v_tokens_543_);
v___x_546_ = lp_lean_x2dftml_LeanFtml_renderWithR41(v___f_545_, v_conf_540_, v_work_542_, v_doc_544_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderNotesE2E(lean_object* v_conf_554_, lean_object* v_tags_555_, lean_object* v_source_556_){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v_work_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_575_; 
v___x_557_ = lp_lean_x2dftml_LeanFtml_convCRLF(v_source_556_);
v___x_558_ = lp_lean_x2dftml_LeanFtml_ParseState_ofSource(v___x_557_);
v_work_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_575_ == 0)
{
lean_object* v_unused_576_; lean_object* v_unused_577_; 
v_unused_576_ = lean_ctor_get(v___x_558_, 2);
lean_dec(v_unused_576_);
v_unused_577_ = lean_ctor_get(v___x_558_, 1);
lean_dec(v_unused_577_);
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_575_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_work_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_575_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
uint8_t v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v_st0_570_; 
v___x_563_ = 0;
v___x_564_ = lean_box(0);
v___x_565_ = lean_box(0);
v___x_566_ = lean_unsigned_to_nat(0u);
v___x_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_564_);
lean_ctor_set(v___x_567_, 1, v_tags_555_);
v___x_568_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
lean_ctor_set(v___x_568_, 1, v___x_564_);
lean_ctor_set(v___x_568_, 2, v___x_564_);
lean_ctor_set(v___x_568_, 3, v___x_564_);
lean_ctor_set(v___x_568_, 4, v___x_564_);
lean_ctor_set(v___x_568_, 5, v___x_564_);
lean_ctor_set(v___x_568_, 6, v___x_564_);
lean_ctor_set(v___x_568_, 7, v___x_565_);
lean_ctor_set(v___x_568_, 8, v___x_565_);
lean_ctor_set(v___x_568_, 9, v___x_564_);
lean_ctor_set(v___x_568_, 10, v___x_566_);
lean_ctor_set(v___x_568_, 11, v___x_566_);
lean_ctor_set(v___x_568_, 12, v___x_564_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 2, v___x_568_);
lean_ctor_set(v___x_561_, 1, v___x_564_);
v_st0_570_ = v___x_561_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_work_559_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v___x_564_);
lean_ctor_set(v_reuseFailAlloc_574_, 2, v___x_568_);
v_st0_570_ = v_reuseFailAlloc_574_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; lean_object* v_st_572_; lean_object* v___x_573_; 
lean_ctor_set_uint8(v_st0_570_, sizeof(void*)*3, v___x_563_);
v___x_571_ = lp_lean_x2dftml_LeanFtml_pipelineR36;
v_st_572_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_runRules_spec__0(v_st0_570_, v___x_571_);
v___x_573_ = lp_lean_x2dftml_LeanFtml_renderStateR41(v_conf_554_, v_st_572_);
return v___x_573_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__2(void){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_580_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__1));
v___x_581_ = l_String_toListImpl(v___x_580_);
return v___x_581_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__4(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_584_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__3));
v___x_585_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__2, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__2_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__2);
v___x_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
lean_ctor_set(v___x_586_, 1, v___x_584_);
return v___x_586_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__5(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_587_ = lean_box(0);
v___x_588_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__4, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__4_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__4);
v___x_589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
lean_ctor_set(v___x_589_, 1, v___x_587_);
return v___x_589_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__6(void){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_590_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__5, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__5_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__5);
v___x_591_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__0));
v___x_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
lean_ctor_set(v___x_592_, 1, v___x_590_);
return v___x_592_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__7(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_593_ = lean_box(0);
v___x_594_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__6, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__6_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__6);
v___x_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
lean_ctor_set(v___x_595_, 1, v___x_593_);
return v___x_595_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__8(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_596_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__7, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__7_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__7);
v___x_597_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__6, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__6_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__6);
v___x_598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
lean_ctor_set(v___x_598_, 1, v___x_596_);
return v___x_598_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2(void){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__8, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__8_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__8);
return v___x_599_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__1(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__0));
v___x_602_ = l_String_toListImpl(v___x_601_);
return v___x_602_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__2(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__1, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__1_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__1);
v___x_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
return v___x_604_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__3(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_605_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__2, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__2_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__2);
v___x_606_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__2, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__2_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__2);
v___x_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
lean_ctor_set(v___x_607_, 1, v___x_605_);
return v___x_607_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__4(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = lean_box(0);
v___x_609_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__3, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__3_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__3);
v___x_610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set(v___x_610_, 1, v___x_608_);
return v___x_610_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__5(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_611_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__4, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__4_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__4);
v___x_612_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2___closed__0));
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
lean_ctor_set(v___x_613_, 1, v___x_611_);
return v___x_613_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__6(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_614_ = lean_box(0);
v___x_615_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__5, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__5_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__5);
v___x_616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
lean_ctor_set(v___x_616_, 1, v___x_614_);
return v___x_616_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw(void){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__6, &lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__6_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw___closed__6);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg(lean_object* v_x_679_, lean_object* v_h__1_680_, lean_object* v_h__2_681_, lean_object* v_h__3_682_, lean_object* v_h__4_683_, lean_object* v_h__5_684_, lean_object* v_h__6_685_, lean_object* v_h__7_686_, lean_object* v_h__8_687_, lean_object* v_h__9_688_, lean_object* v_h__10_689_, lean_object* v_h__11_690_, lean_object* v_h__12_691_, lean_object* v_h__13_692_, lean_object* v_h__14_693_, lean_object* v_h__15_694_, lean_object* v_h__16_695_, lean_object* v_h__17_696_, lean_object* v_h__18_697_, lean_object* v_h__19_698_, lean_object* v_h__20_699_, lean_object* v_h__21_700_, lean_object* v_h__22_701_, lean_object* v_h__23_702_, lean_object* v_h__24_703_, lean_object* v_h__25_704_, lean_object* v_h__26_705_, lean_object* v_h__27_706_, lean_object* v_h__28_707_, lean_object* v_h__29_708_, lean_object* v_h__30_709_, lean_object* v_h__31_710_, lean_object* v_h__32_711_, lean_object* v_h__33_712_, lean_object* v_h__34_713_, lean_object* v_h__35_714_, lean_object* v_h__36_715_, lean_object* v_h__37_716_, lean_object* v_h__38_717_, lean_object* v_h__39_718_, lean_object* v_h__40_719_, lean_object* v_h__41_720_, lean_object* v_h__42_721_, lean_object* v_h__43_722_, lean_object* v_h__44_723_, lean_object* v_h__45_724_, lean_object* v_h__46_725_, lean_object* v_h__47_726_, lean_object* v_h__48_727_, lean_object* v_h__49_728_, lean_object* v_h__50_729_, lean_object* v_h__51_730_, lean_object* v_h__52_731_, lean_object* v_h__53_732_, lean_object* v_h__54_733_, lean_object* v_h__55_734_, lean_object* v_h__56_735_, lean_object* v_h__57_736_, lean_object* v_h__58_737_, lean_object* v_h__59_738_, lean_object* v_h__60_739_, lean_object* v_h__61_740_, lean_object* v_h__62_741_){
_start:
{
lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_742_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__0));
v___x_743_ = lean_string_dec_eq(v_x_679_, v___x_742_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; uint8_t v___x_745_; 
lean_dec(v_h__1_680_);
v___x_744_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__1));
v___x_745_ = lean_string_dec_eq(v_x_679_, v___x_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; uint8_t v___x_747_; 
lean_dec(v_h__2_681_);
v___x_746_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__2));
v___x_747_ = lean_string_dec_eq(v_x_679_, v___x_746_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; uint8_t v___x_749_; 
lean_dec(v_h__3_682_);
v___x_748_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__3));
v___x_749_ = lean_string_dec_eq(v_x_679_, v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; uint8_t v___x_751_; 
lean_dec(v_h__4_683_);
v___x_750_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__4));
v___x_751_ = lean_string_dec_eq(v_x_679_, v___x_750_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; uint8_t v___x_753_; 
lean_dec(v_h__5_684_);
v___x_752_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__5));
v___x_753_ = lean_string_dec_eq(v_x_679_, v___x_752_);
if (v___x_753_ == 0)
{
lean_object* v___x_754_; uint8_t v___x_755_; 
lean_dec(v_h__6_685_);
v___x_754_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__6));
v___x_755_ = lean_string_dec_eq(v_x_679_, v___x_754_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; uint8_t v___x_757_; 
lean_dec(v_h__7_686_);
v___x_756_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__7));
v___x_757_ = lean_string_dec_eq(v_x_679_, v___x_756_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; uint8_t v___x_759_; 
lean_dec(v_h__8_687_);
v___x_758_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__8));
v___x_759_ = lean_string_dec_eq(v_x_679_, v___x_758_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; uint8_t v___x_761_; 
lean_dec(v_h__9_688_);
v___x_760_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__9));
v___x_761_ = lean_string_dec_eq(v_x_679_, v___x_760_);
if (v___x_761_ == 0)
{
lean_object* v___x_762_; uint8_t v___x_763_; 
lean_dec(v_h__10_689_);
v___x_762_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__10));
v___x_763_ = lean_string_dec_eq(v_x_679_, v___x_762_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; uint8_t v___x_765_; 
lean_dec(v_h__11_690_);
v___x_764_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__11));
v___x_765_ = lean_string_dec_eq(v_x_679_, v___x_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; uint8_t v___x_767_; 
lean_dec(v_h__12_691_);
v___x_766_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__12));
v___x_767_ = lean_string_dec_eq(v_x_679_, v___x_766_);
if (v___x_767_ == 0)
{
lean_object* v___x_768_; uint8_t v___x_769_; 
lean_dec(v_h__13_692_);
v___x_768_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__13));
v___x_769_ = lean_string_dec_eq(v_x_679_, v___x_768_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; uint8_t v___x_771_; 
lean_dec(v_h__14_693_);
v___x_770_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__14));
v___x_771_ = lean_string_dec_eq(v_x_679_, v___x_770_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; uint8_t v___x_773_; 
lean_dec(v_h__15_694_);
v___x_772_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__15));
v___x_773_ = lean_string_dec_eq(v_x_679_, v___x_772_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; uint8_t v___x_775_; 
lean_dec(v_h__16_695_);
v___x_774_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__16));
v___x_775_ = lean_string_dec_eq(v_x_679_, v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; uint8_t v___x_777_; 
lean_dec(v_h__17_696_);
v___x_776_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__17));
v___x_777_ = lean_string_dec_eq(v_x_679_, v___x_776_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; uint8_t v___x_779_; 
lean_dec(v_h__18_697_);
v___x_778_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__18));
v___x_779_ = lean_string_dec_eq(v_x_679_, v___x_778_);
if (v___x_779_ == 0)
{
lean_object* v___x_780_; uint8_t v___x_781_; 
lean_dec(v_h__19_698_);
v___x_780_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__19));
v___x_781_ = lean_string_dec_eq(v_x_679_, v___x_780_);
if (v___x_781_ == 0)
{
lean_object* v___x_782_; uint8_t v___x_783_; 
lean_dec(v_h__20_699_);
v___x_782_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__20));
v___x_783_ = lean_string_dec_eq(v_x_679_, v___x_782_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; uint8_t v___x_785_; 
lean_dec(v_h__21_700_);
v___x_784_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__21));
v___x_785_ = lean_string_dec_eq(v_x_679_, v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; uint8_t v___x_787_; 
lean_dec(v_h__22_701_);
v___x_786_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__22));
v___x_787_ = lean_string_dec_eq(v_x_679_, v___x_786_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; uint8_t v___x_789_; 
lean_dec(v_h__23_702_);
v___x_788_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__23));
v___x_789_ = lean_string_dec_eq(v_x_679_, v___x_788_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; uint8_t v___x_791_; 
lean_dec(v_h__24_703_);
v___x_790_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__24));
v___x_791_ = lean_string_dec_eq(v_x_679_, v___x_790_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; uint8_t v___x_793_; 
lean_dec(v_h__25_704_);
v___x_792_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__25));
v___x_793_ = lean_string_dec_eq(v_x_679_, v___x_792_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; uint8_t v___x_795_; 
lean_dec(v_h__26_705_);
v___x_794_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__26));
v___x_795_ = lean_string_dec_eq(v_x_679_, v___x_794_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; uint8_t v___x_797_; 
lean_dec(v_h__27_706_);
v___x_796_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__27));
v___x_797_ = lean_string_dec_eq(v_x_679_, v___x_796_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; uint8_t v___x_799_; 
lean_dec(v_h__28_707_);
v___x_798_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__28));
v___x_799_ = lean_string_dec_eq(v_x_679_, v___x_798_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; uint8_t v___x_801_; 
lean_dec(v_h__29_708_);
v___x_800_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__29));
v___x_801_ = lean_string_dec_eq(v_x_679_, v___x_800_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; uint8_t v___x_803_; 
lean_dec(v_h__30_709_);
v___x_802_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__30));
v___x_803_ = lean_string_dec_eq(v_x_679_, v___x_802_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; uint8_t v___x_805_; 
lean_dec(v_h__31_710_);
v___x_804_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__31));
v___x_805_ = lean_string_dec_eq(v_x_679_, v___x_804_);
if (v___x_805_ == 0)
{
lean_object* v___x_806_; uint8_t v___x_807_; 
lean_dec(v_h__32_711_);
v___x_806_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__32));
v___x_807_ = lean_string_dec_eq(v_x_679_, v___x_806_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; uint8_t v___x_809_; 
lean_dec(v_h__33_712_);
v___x_808_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__33));
v___x_809_ = lean_string_dec_eq(v_x_679_, v___x_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; uint8_t v___x_811_; 
lean_dec(v_h__34_713_);
v___x_810_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__34));
v___x_811_ = lean_string_dec_eq(v_x_679_, v___x_810_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; uint8_t v___x_813_; 
lean_dec(v_h__35_714_);
v___x_812_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__35));
v___x_813_ = lean_string_dec_eq(v_x_679_, v___x_812_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; uint8_t v___x_815_; 
lean_dec(v_h__36_715_);
v___x_814_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__36));
v___x_815_ = lean_string_dec_eq(v_x_679_, v___x_814_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; uint8_t v___x_817_; 
lean_dec(v_h__37_716_);
v___x_816_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__37));
v___x_817_ = lean_string_dec_eq(v_x_679_, v___x_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; uint8_t v___x_819_; 
lean_dec(v_h__38_717_);
v___x_818_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__38));
v___x_819_ = lean_string_dec_eq(v_x_679_, v___x_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; uint8_t v___x_821_; 
lean_dec(v_h__39_718_);
v___x_820_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__39));
v___x_821_ = lean_string_dec_eq(v_x_679_, v___x_820_);
if (v___x_821_ == 0)
{
lean_object* v___x_822_; uint8_t v___x_823_; 
lean_dec(v_h__40_719_);
v___x_822_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__40));
v___x_823_ = lean_string_dec_eq(v_x_679_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; uint8_t v___x_825_; 
lean_dec(v_h__41_720_);
v___x_824_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__41));
v___x_825_ = lean_string_dec_eq(v_x_679_, v___x_824_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; uint8_t v___x_827_; 
lean_dec(v_h__42_721_);
v___x_826_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__42));
v___x_827_ = lean_string_dec_eq(v_x_679_, v___x_826_);
if (v___x_827_ == 0)
{
lean_object* v___x_828_; uint8_t v___x_829_; 
lean_dec(v_h__43_722_);
v___x_828_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__43));
v___x_829_ = lean_string_dec_eq(v_x_679_, v___x_828_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; uint8_t v___x_831_; 
lean_dec(v_h__44_723_);
v___x_830_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__44));
v___x_831_ = lean_string_dec_eq(v_x_679_, v___x_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; uint8_t v___x_833_; 
lean_dec(v_h__45_724_);
v___x_832_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__45));
v___x_833_ = lean_string_dec_eq(v_x_679_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; uint8_t v___x_835_; 
lean_dec(v_h__46_725_);
v___x_834_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__46));
v___x_835_ = lean_string_dec_eq(v_x_679_, v___x_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; uint8_t v___x_837_; 
lean_dec(v_h__47_726_);
v___x_836_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__47));
v___x_837_ = lean_string_dec_eq(v_x_679_, v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; uint8_t v___x_839_; 
lean_dec(v_h__48_727_);
v___x_838_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__48));
v___x_839_ = lean_string_dec_eq(v_x_679_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; uint8_t v___x_841_; 
lean_dec(v_h__49_728_);
v___x_840_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__49));
v___x_841_ = lean_string_dec_eq(v_x_679_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; uint8_t v___x_843_; 
lean_dec(v_h__50_729_);
v___x_842_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__50));
v___x_843_ = lean_string_dec_eq(v_x_679_, v___x_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; uint8_t v___x_845_; 
lean_dec(v_h__51_730_);
v___x_844_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__51));
v___x_845_ = lean_string_dec_eq(v_x_679_, v___x_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; uint8_t v___x_847_; 
lean_dec(v_h__52_731_);
v___x_846_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__52));
v___x_847_ = lean_string_dec_eq(v_x_679_, v___x_846_);
if (v___x_847_ == 0)
{
lean_object* v___x_848_; uint8_t v___x_849_; 
lean_dec(v_h__53_732_);
v___x_848_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__53));
v___x_849_ = lean_string_dec_eq(v_x_679_, v___x_848_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; uint8_t v___x_851_; 
lean_dec(v_h__54_733_);
v___x_850_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__54));
v___x_851_ = lean_string_dec_eq(v_x_679_, v___x_850_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; uint8_t v___x_853_; 
lean_dec(v_h__55_734_);
v___x_852_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__55));
v___x_853_ = lean_string_dec_eq(v_x_679_, v___x_852_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; uint8_t v___x_855_; 
lean_dec(v_h__56_735_);
v___x_854_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__56));
v___x_855_ = lean_string_dec_eq(v_x_679_, v___x_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; uint8_t v___x_857_; 
lean_dec(v_h__57_736_);
v___x_856_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__57));
v___x_857_ = lean_string_dec_eq(v_x_679_, v___x_856_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; uint8_t v___x_859_; 
lean_dec(v_h__58_737_);
v___x_858_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__58));
v___x_859_ = lean_string_dec_eq(v_x_679_, v___x_858_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; uint8_t v___x_861_; 
lean_dec(v_h__59_738_);
v___x_860_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__59));
v___x_861_ = lean_string_dec_eq(v_x_679_, v___x_860_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; uint8_t v___x_863_; 
lean_dec(v_h__60_739_);
v___x_862_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__60));
v___x_863_ = lean_string_dec_eq(v_x_679_, v___x_862_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; 
lean_dec(v_h__61_740_);
{
lean_object* _aargs[] = {v_x_679_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_864_ = lean_apply_m(v_h__62_741_, 62, _aargs);
}
return v___x_864_;
}
else
{
lean_object* v___x_865_; lean_object* v___x_866_; 
lean_dec(v_h__62_741_);
lean_dec_ref(v_x_679_);
v___x_865_ = lean_box(0);
v___x_866_ = lean_apply_1(v_h__61_740_, v___x_865_);
return v___x_866_;
}
}
else
{
lean_object* v___x_867_; lean_object* v___x_868_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec_ref(v_x_679_);
v___x_867_ = lean_box(0);
v___x_868_ = lean_apply_1(v_h__60_739_, v___x_867_);
return v___x_868_;
}
}
else
{
lean_object* v___x_869_; lean_object* v___x_870_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec_ref(v_x_679_);
v___x_869_ = lean_box(0);
v___x_870_ = lean_apply_1(v_h__59_738_, v___x_869_);
return v___x_870_;
}
}
else
{
lean_object* v___x_871_; lean_object* v___x_872_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec_ref(v_x_679_);
v___x_871_ = lean_box(0);
v___x_872_ = lean_apply_1(v_h__58_737_, v___x_871_);
return v___x_872_;
}
}
else
{
lean_object* v___x_873_; lean_object* v___x_874_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec_ref(v_x_679_);
v___x_873_ = lean_box(0);
v___x_874_ = lean_apply_1(v_h__57_736_, v___x_873_);
return v___x_874_;
}
}
else
{
lean_object* v___x_875_; lean_object* v___x_876_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec_ref(v_x_679_);
v___x_875_ = lean_box(0);
v___x_876_ = lean_apply_1(v_h__56_735_, v___x_875_);
return v___x_876_;
}
}
else
{
lean_object* v___x_877_; lean_object* v___x_878_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec_ref(v_x_679_);
v___x_877_ = lean_box(0);
v___x_878_ = lean_apply_1(v_h__55_734_, v___x_877_);
return v___x_878_;
}
}
else
{
lean_object* v___x_879_; lean_object* v___x_880_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec_ref(v_x_679_);
v___x_879_ = lean_box(0);
v___x_880_ = lean_apply_1(v_h__54_733_, v___x_879_);
return v___x_880_;
}
}
else
{
lean_object* v___x_881_; lean_object* v___x_882_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec_ref(v_x_679_);
v___x_881_ = lean_box(0);
v___x_882_ = lean_apply_1(v_h__53_732_, v___x_881_);
return v___x_882_;
}
}
else
{
lean_object* v___x_883_; lean_object* v___x_884_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec_ref(v_x_679_);
v___x_883_ = lean_box(0);
v___x_884_ = lean_apply_1(v_h__52_731_, v___x_883_);
return v___x_884_;
}
}
else
{
lean_object* v___x_885_; lean_object* v___x_886_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec_ref(v_x_679_);
v___x_885_ = lean_box(0);
v___x_886_ = lean_apply_1(v_h__51_730_, v___x_885_);
return v___x_886_;
}
}
else
{
lean_object* v___x_887_; lean_object* v___x_888_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec_ref(v_x_679_);
v___x_887_ = lean_box(0);
v___x_888_ = lean_apply_1(v_h__50_729_, v___x_887_);
return v___x_888_;
}
}
else
{
lean_object* v___x_889_; lean_object* v___x_890_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec_ref(v_x_679_);
v___x_889_ = lean_box(0);
v___x_890_ = lean_apply_1(v_h__49_728_, v___x_889_);
return v___x_890_;
}
}
else
{
lean_object* v___x_891_; lean_object* v___x_892_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec_ref(v_x_679_);
v___x_891_ = lean_box(0);
v___x_892_ = lean_apply_1(v_h__48_727_, v___x_891_);
return v___x_892_;
}
}
else
{
lean_object* v___x_893_; lean_object* v___x_894_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec_ref(v_x_679_);
v___x_893_ = lean_box(0);
v___x_894_ = lean_apply_1(v_h__47_726_, v___x_893_);
return v___x_894_;
}
}
else
{
lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec_ref(v_x_679_);
v___x_895_ = lean_box(0);
v___x_896_ = lean_apply_1(v_h__46_725_, v___x_895_);
return v___x_896_;
}
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec_ref(v_x_679_);
v___x_897_ = lean_box(0);
v___x_898_ = lean_apply_1(v_h__45_724_, v___x_897_);
return v___x_898_;
}
}
else
{
lean_object* v___x_899_; lean_object* v___x_900_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec_ref(v_x_679_);
v___x_899_ = lean_box(0);
v___x_900_ = lean_apply_1(v_h__44_723_, v___x_899_);
return v___x_900_;
}
}
else
{
lean_object* v___x_901_; lean_object* v___x_902_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec_ref(v_x_679_);
v___x_901_ = lean_box(0);
v___x_902_ = lean_apply_1(v_h__43_722_, v___x_901_);
return v___x_902_;
}
}
else
{
lean_object* v___x_903_; lean_object* v___x_904_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec_ref(v_x_679_);
v___x_903_ = lean_box(0);
v___x_904_ = lean_apply_1(v_h__42_721_, v___x_903_);
return v___x_904_;
}
}
else
{
lean_object* v___x_905_; lean_object* v___x_906_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec_ref(v_x_679_);
v___x_905_ = lean_box(0);
v___x_906_ = lean_apply_1(v_h__41_720_, v___x_905_);
return v___x_906_;
}
}
else
{
lean_object* v___x_907_; lean_object* v___x_908_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec_ref(v_x_679_);
v___x_907_ = lean_box(0);
v___x_908_ = lean_apply_1(v_h__40_719_, v___x_907_);
return v___x_908_;
}
}
else
{
lean_object* v___x_909_; lean_object* v___x_910_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec_ref(v_x_679_);
v___x_909_ = lean_box(0);
v___x_910_ = lean_apply_1(v_h__39_718_, v___x_909_);
return v___x_910_;
}
}
else
{
lean_object* v___x_911_; lean_object* v___x_912_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec_ref(v_x_679_);
v___x_911_ = lean_box(0);
v___x_912_ = lean_apply_1(v_h__38_717_, v___x_911_);
return v___x_912_;
}
}
else
{
lean_object* v___x_913_; lean_object* v___x_914_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec_ref(v_x_679_);
v___x_913_ = lean_box(0);
v___x_914_ = lean_apply_1(v_h__37_716_, v___x_913_);
return v___x_914_;
}
}
else
{
lean_object* v___x_915_; lean_object* v___x_916_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec_ref(v_x_679_);
v___x_915_ = lean_box(0);
v___x_916_ = lean_apply_1(v_h__36_715_, v___x_915_);
return v___x_916_;
}
}
else
{
lean_object* v___x_917_; lean_object* v___x_918_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec_ref(v_x_679_);
v___x_917_ = lean_box(0);
v___x_918_ = lean_apply_1(v_h__35_714_, v___x_917_);
return v___x_918_;
}
}
else
{
lean_object* v___x_919_; lean_object* v___x_920_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec_ref(v_x_679_);
v___x_919_ = lean_box(0);
v___x_920_ = lean_apply_1(v_h__34_713_, v___x_919_);
return v___x_920_;
}
}
else
{
lean_object* v___x_921_; lean_object* v___x_922_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec_ref(v_x_679_);
v___x_921_ = lean_box(0);
v___x_922_ = lean_apply_1(v_h__33_712_, v___x_921_);
return v___x_922_;
}
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec_ref(v_x_679_);
v___x_923_ = lean_box(0);
v___x_924_ = lean_apply_1(v_h__32_711_, v___x_923_);
return v___x_924_;
}
}
else
{
lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec_ref(v_x_679_);
v___x_925_ = lean_box(0);
v___x_926_ = lean_apply_1(v_h__31_710_, v___x_925_);
return v___x_926_;
}
}
else
{
lean_object* v___x_927_; lean_object* v___x_928_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec_ref(v_x_679_);
v___x_927_ = lean_box(0);
v___x_928_ = lean_apply_1(v_h__30_709_, v___x_927_);
return v___x_928_;
}
}
else
{
lean_object* v___x_929_; lean_object* v___x_930_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec_ref(v_x_679_);
v___x_929_ = lean_box(0);
v___x_930_ = lean_apply_1(v_h__29_708_, v___x_929_);
return v___x_930_;
}
}
else
{
lean_object* v___x_931_; lean_object* v___x_932_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec_ref(v_x_679_);
v___x_931_ = lean_box(0);
v___x_932_ = lean_apply_1(v_h__28_707_, v___x_931_);
return v___x_932_;
}
}
else
{
lean_object* v___x_933_; lean_object* v___x_934_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec_ref(v_x_679_);
v___x_933_ = lean_box(0);
v___x_934_ = lean_apply_1(v_h__27_706_, v___x_933_);
return v___x_934_;
}
}
else
{
lean_object* v___x_935_; lean_object* v___x_936_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec_ref(v_x_679_);
v___x_935_ = lean_box(0);
v___x_936_ = lean_apply_1(v_h__26_705_, v___x_935_);
return v___x_936_;
}
}
else
{
lean_object* v___x_937_; lean_object* v___x_938_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec_ref(v_x_679_);
v___x_937_ = lean_box(0);
v___x_938_ = lean_apply_1(v_h__25_704_, v___x_937_);
return v___x_938_;
}
}
else
{
lean_object* v___x_939_; lean_object* v___x_940_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec_ref(v_x_679_);
v___x_939_ = lean_box(0);
v___x_940_ = lean_apply_1(v_h__24_703_, v___x_939_);
return v___x_940_;
}
}
else
{
lean_object* v___x_941_; lean_object* v___x_942_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec_ref(v_x_679_);
v___x_941_ = lean_box(0);
v___x_942_ = lean_apply_1(v_h__23_702_, v___x_941_);
return v___x_942_;
}
}
else
{
lean_object* v___x_943_; lean_object* v___x_944_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec_ref(v_x_679_);
v___x_943_ = lean_box(0);
v___x_944_ = lean_apply_1(v_h__22_701_, v___x_943_);
return v___x_944_;
}
}
else
{
lean_object* v___x_945_; lean_object* v___x_946_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec_ref(v_x_679_);
v___x_945_ = lean_box(0);
v___x_946_ = lean_apply_1(v_h__21_700_, v___x_945_);
return v___x_946_;
}
}
else
{
lean_object* v___x_947_; lean_object* v___x_948_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec_ref(v_x_679_);
v___x_947_ = lean_box(0);
v___x_948_ = lean_apply_1(v_h__20_699_, v___x_947_);
return v___x_948_;
}
}
else
{
lean_object* v___x_949_; lean_object* v___x_950_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec_ref(v_x_679_);
v___x_949_ = lean_box(0);
v___x_950_ = lean_apply_1(v_h__19_698_, v___x_949_);
return v___x_950_;
}
}
else
{
lean_object* v___x_951_; lean_object* v___x_952_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec_ref(v_x_679_);
v___x_951_ = lean_box(0);
v___x_952_ = lean_apply_1(v_h__18_697_, v___x_951_);
return v___x_952_;
}
}
else
{
lean_object* v___x_953_; lean_object* v___x_954_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec_ref(v_x_679_);
v___x_953_ = lean_box(0);
v___x_954_ = lean_apply_1(v_h__17_696_, v___x_953_);
return v___x_954_;
}
}
else
{
lean_object* v___x_955_; lean_object* v___x_956_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec_ref(v_x_679_);
v___x_955_ = lean_box(0);
v___x_956_ = lean_apply_1(v_h__16_695_, v___x_955_);
return v___x_956_;
}
}
else
{
lean_object* v___x_957_; lean_object* v___x_958_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec_ref(v_x_679_);
v___x_957_ = lean_box(0);
v___x_958_ = lean_apply_1(v_h__15_694_, v___x_957_);
return v___x_958_;
}
}
else
{
lean_object* v___x_959_; lean_object* v___x_960_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec_ref(v_x_679_);
v___x_959_ = lean_box(0);
v___x_960_ = lean_apply_1(v_h__14_693_, v___x_959_);
return v___x_960_;
}
}
else
{
lean_object* v___x_961_; lean_object* v___x_962_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec_ref(v_x_679_);
v___x_961_ = lean_box(0);
v___x_962_ = lean_apply_1(v_h__13_692_, v___x_961_);
return v___x_962_;
}
}
else
{
lean_object* v___x_963_; lean_object* v___x_964_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec_ref(v_x_679_);
v___x_963_ = lean_box(0);
v___x_964_ = lean_apply_1(v_h__12_691_, v___x_963_);
return v___x_964_;
}
}
else
{
lean_object* v___x_965_; lean_object* v___x_966_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec_ref(v_x_679_);
v___x_965_ = lean_box(0);
v___x_966_ = lean_apply_1(v_h__11_690_, v___x_965_);
return v___x_966_;
}
}
else
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec(v_h__11_690_);
lean_dec_ref(v_x_679_);
v___x_967_ = lean_box(0);
v___x_968_ = lean_apply_1(v_h__10_689_, v___x_967_);
return v___x_968_;
}
}
else
{
lean_object* v___x_969_; lean_object* v___x_970_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec(v_h__11_690_);
lean_dec(v_h__10_689_);
lean_dec_ref(v_x_679_);
v___x_969_ = lean_box(0);
v___x_970_ = lean_apply_1(v_h__9_688_, v___x_969_);
return v___x_970_;
}
}
else
{
lean_object* v___x_971_; lean_object* v___x_972_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec(v_h__11_690_);
lean_dec(v_h__10_689_);
lean_dec(v_h__9_688_);
lean_dec_ref(v_x_679_);
v___x_971_ = lean_box(0);
v___x_972_ = lean_apply_1(v_h__8_687_, v___x_971_);
return v___x_972_;
}
}
else
{
lean_object* v___x_973_; lean_object* v___x_974_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec(v_h__11_690_);
lean_dec(v_h__10_689_);
lean_dec(v_h__9_688_);
lean_dec(v_h__8_687_);
lean_dec_ref(v_x_679_);
v___x_973_ = lean_box(0);
v___x_974_ = lean_apply_1(v_h__7_686_, v___x_973_);
return v___x_974_;
}
}
else
{
lean_object* v___x_975_; lean_object* v___x_976_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec(v_h__11_690_);
lean_dec(v_h__10_689_);
lean_dec(v_h__9_688_);
lean_dec(v_h__8_687_);
lean_dec(v_h__7_686_);
lean_dec_ref(v_x_679_);
v___x_975_ = lean_box(0);
v___x_976_ = lean_apply_1(v_h__6_685_, v___x_975_);
return v___x_976_;
}
}
else
{
lean_object* v___x_977_; lean_object* v___x_978_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec(v_h__11_690_);
lean_dec(v_h__10_689_);
lean_dec(v_h__9_688_);
lean_dec(v_h__8_687_);
lean_dec(v_h__7_686_);
lean_dec(v_h__6_685_);
lean_dec_ref(v_x_679_);
v___x_977_ = lean_box(0);
v___x_978_ = lean_apply_1(v_h__5_684_, v___x_977_);
return v___x_978_;
}
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec(v_h__11_690_);
lean_dec(v_h__10_689_);
lean_dec(v_h__9_688_);
lean_dec(v_h__8_687_);
lean_dec(v_h__7_686_);
lean_dec(v_h__6_685_);
lean_dec(v_h__5_684_);
lean_dec_ref(v_x_679_);
v___x_979_ = lean_box(0);
v___x_980_ = lean_apply_1(v_h__4_683_, v___x_979_);
return v___x_980_;
}
}
else
{
lean_object* v___x_981_; lean_object* v___x_982_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec(v_h__11_690_);
lean_dec(v_h__10_689_);
lean_dec(v_h__9_688_);
lean_dec(v_h__8_687_);
lean_dec(v_h__7_686_);
lean_dec(v_h__6_685_);
lean_dec(v_h__5_684_);
lean_dec(v_h__4_683_);
lean_dec_ref(v_x_679_);
v___x_981_ = lean_box(0);
v___x_982_ = lean_apply_1(v_h__3_682_, v___x_981_);
return v___x_982_;
}
}
else
{
lean_object* v___x_983_; lean_object* v___x_984_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec(v_h__11_690_);
lean_dec(v_h__10_689_);
lean_dec(v_h__9_688_);
lean_dec(v_h__8_687_);
lean_dec(v_h__7_686_);
lean_dec(v_h__6_685_);
lean_dec(v_h__5_684_);
lean_dec(v_h__4_683_);
lean_dec(v_h__3_682_);
lean_dec_ref(v_x_679_);
v___x_983_ = lean_box(0);
v___x_984_ = lean_apply_1(v_h__2_681_, v___x_983_);
return v___x_984_;
}
}
else
{
lean_object* v___x_985_; lean_object* v___x_986_; 
lean_dec(v_h__62_741_);
lean_dec(v_h__61_740_);
lean_dec(v_h__60_739_);
lean_dec(v_h__59_738_);
lean_dec(v_h__58_737_);
lean_dec(v_h__57_736_);
lean_dec(v_h__56_735_);
lean_dec(v_h__55_734_);
lean_dec(v_h__54_733_);
lean_dec(v_h__53_732_);
lean_dec(v_h__52_731_);
lean_dec(v_h__51_730_);
lean_dec(v_h__50_729_);
lean_dec(v_h__49_728_);
lean_dec(v_h__48_727_);
lean_dec(v_h__47_726_);
lean_dec(v_h__46_725_);
lean_dec(v_h__45_724_);
lean_dec(v_h__44_723_);
lean_dec(v_h__43_722_);
lean_dec(v_h__42_721_);
lean_dec(v_h__41_720_);
lean_dec(v_h__40_719_);
lean_dec(v_h__39_718_);
lean_dec(v_h__38_717_);
lean_dec(v_h__37_716_);
lean_dec(v_h__36_715_);
lean_dec(v_h__35_714_);
lean_dec(v_h__34_713_);
lean_dec(v_h__33_712_);
lean_dec(v_h__32_711_);
lean_dec(v_h__31_710_);
lean_dec(v_h__30_709_);
lean_dec(v_h__29_708_);
lean_dec(v_h__28_707_);
lean_dec(v_h__27_706_);
lean_dec(v_h__26_705_);
lean_dec(v_h__25_704_);
lean_dec(v_h__24_703_);
lean_dec(v_h__23_702_);
lean_dec(v_h__22_701_);
lean_dec(v_h__21_700_);
lean_dec(v_h__20_699_);
lean_dec(v_h__19_698_);
lean_dec(v_h__18_697_);
lean_dec(v_h__17_696_);
lean_dec(v_h__16_695_);
lean_dec(v_h__15_694_);
lean_dec(v_h__14_693_);
lean_dec(v_h__13_692_);
lean_dec(v_h__12_691_);
lean_dec(v_h__11_690_);
lean_dec(v_h__10_689_);
lean_dec(v_h__9_688_);
lean_dec(v_h__8_687_);
lean_dec(v_h__7_686_);
lean_dec(v_h__6_685_);
lean_dec(v_h__5_684_);
lean_dec(v_h__4_683_);
lean_dec(v_h__3_682_);
lean_dec(v_h__2_681_);
lean_dec_ref(v_x_679_);
v___x_985_ = lean_box(0);
v___x_986_ = lean_apply_1(v_h__1_680_, v___x_985_);
return v___x_986_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___boxed(lean_object** _args){
lean_object* v_x_987_ = _args[0];
lean_object* v_h__1_988_ = _args[1];
lean_object* v_h__2_989_ = _args[2];
lean_object* v_h__3_990_ = _args[3];
lean_object* v_h__4_991_ = _args[4];
lean_object* v_h__5_992_ = _args[5];
lean_object* v_h__6_993_ = _args[6];
lean_object* v_h__7_994_ = _args[7];
lean_object* v_h__8_995_ = _args[8];
lean_object* v_h__9_996_ = _args[9];
lean_object* v_h__10_997_ = _args[10];
lean_object* v_h__11_998_ = _args[11];
lean_object* v_h__12_999_ = _args[12];
lean_object* v_h__13_1000_ = _args[13];
lean_object* v_h__14_1001_ = _args[14];
lean_object* v_h__15_1002_ = _args[15];
lean_object* v_h__16_1003_ = _args[16];
lean_object* v_h__17_1004_ = _args[17];
lean_object* v_h__18_1005_ = _args[18];
lean_object* v_h__19_1006_ = _args[19];
lean_object* v_h__20_1007_ = _args[20];
lean_object* v_h__21_1008_ = _args[21];
lean_object* v_h__22_1009_ = _args[22];
lean_object* v_h__23_1010_ = _args[23];
lean_object* v_h__24_1011_ = _args[24];
lean_object* v_h__25_1012_ = _args[25];
lean_object* v_h__26_1013_ = _args[26];
lean_object* v_h__27_1014_ = _args[27];
lean_object* v_h__28_1015_ = _args[28];
lean_object* v_h__29_1016_ = _args[29];
lean_object* v_h__30_1017_ = _args[30];
lean_object* v_h__31_1018_ = _args[31];
lean_object* v_h__32_1019_ = _args[32];
lean_object* v_h__33_1020_ = _args[33];
lean_object* v_h__34_1021_ = _args[34];
lean_object* v_h__35_1022_ = _args[35];
lean_object* v_h__36_1023_ = _args[36];
lean_object* v_h__37_1024_ = _args[37];
lean_object* v_h__38_1025_ = _args[38];
lean_object* v_h__39_1026_ = _args[39];
lean_object* v_h__40_1027_ = _args[40];
lean_object* v_h__41_1028_ = _args[41];
lean_object* v_h__42_1029_ = _args[42];
lean_object* v_h__43_1030_ = _args[43];
lean_object* v_h__44_1031_ = _args[44];
lean_object* v_h__45_1032_ = _args[45];
lean_object* v_h__46_1033_ = _args[46];
lean_object* v_h__47_1034_ = _args[47];
lean_object* v_h__48_1035_ = _args[48];
lean_object* v_h__49_1036_ = _args[49];
lean_object* v_h__50_1037_ = _args[50];
lean_object* v_h__51_1038_ = _args[51];
lean_object* v_h__52_1039_ = _args[52];
lean_object* v_h__53_1040_ = _args[53];
lean_object* v_h__54_1041_ = _args[54];
lean_object* v_h__55_1042_ = _args[55];
lean_object* v_h__56_1043_ = _args[56];
lean_object* v_h__57_1044_ = _args[57];
lean_object* v_h__58_1045_ = _args[58];
lean_object* v_h__59_1046_ = _args[59];
lean_object* v_h__60_1047_ = _args[60];
lean_object* v_h__61_1048_ = _args[61];
lean_object* v_h__62_1049_ = _args[62];
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg(v_x_987_, v_h__1_988_, v_h__2_989_, v_h__3_990_, v_h__4_991_, v_h__5_992_, v_h__6_993_, v_h__7_994_, v_h__8_995_, v_h__9_996_, v_h__10_997_, v_h__11_998_, v_h__12_999_, v_h__13_1000_, v_h__14_1001_, v_h__15_1002_, v_h__16_1003_, v_h__17_1004_, v_h__18_1005_, v_h__19_1006_, v_h__20_1007_, v_h__21_1008_, v_h__22_1009_, v_h__23_1010_, v_h__24_1011_, v_h__25_1012_, v_h__26_1013_, v_h__27_1014_, v_h__28_1015_, v_h__29_1016_, v_h__30_1017_, v_h__31_1018_, v_h__32_1019_, v_h__33_1020_, v_h__34_1021_, v_h__35_1022_, v_h__36_1023_, v_h__37_1024_, v_h__38_1025_, v_h__39_1026_, v_h__40_1027_, v_h__41_1028_, v_h__42_1029_, v_h__43_1030_, v_h__44_1031_, v_h__45_1032_, v_h__46_1033_, v_h__47_1034_, v_h__48_1035_, v_h__49_1036_, v_h__50_1037_, v_h__51_1038_, v_h__52_1039_, v_h__53_1040_, v_h__54_1041_, v_h__55_1042_, v_h__56_1043_, v_h__57_1044_, v_h__58_1045_, v_h__59_1046_, v_h__60_1047_, v_h__61_1048_, v_h__62_1049_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter(lean_object* v_motive_1051_, lean_object* v_x_1052_, lean_object* v_h__1_1053_, lean_object* v_h__2_1054_, lean_object* v_h__3_1055_, lean_object* v_h__4_1056_, lean_object* v_h__5_1057_, lean_object* v_h__6_1058_, lean_object* v_h__7_1059_, lean_object* v_h__8_1060_, lean_object* v_h__9_1061_, lean_object* v_h__10_1062_, lean_object* v_h__11_1063_, lean_object* v_h__12_1064_, lean_object* v_h__13_1065_, lean_object* v_h__14_1066_, lean_object* v_h__15_1067_, lean_object* v_h__16_1068_, lean_object* v_h__17_1069_, lean_object* v_h__18_1070_, lean_object* v_h__19_1071_, lean_object* v_h__20_1072_, lean_object* v_h__21_1073_, lean_object* v_h__22_1074_, lean_object* v_h__23_1075_, lean_object* v_h__24_1076_, lean_object* v_h__25_1077_, lean_object* v_h__26_1078_, lean_object* v_h__27_1079_, lean_object* v_h__28_1080_, lean_object* v_h__29_1081_, lean_object* v_h__30_1082_, lean_object* v_h__31_1083_, lean_object* v_h__32_1084_, lean_object* v_h__33_1085_, lean_object* v_h__34_1086_, lean_object* v_h__35_1087_, lean_object* v_h__36_1088_, lean_object* v_h__37_1089_, lean_object* v_h__38_1090_, lean_object* v_h__39_1091_, lean_object* v_h__40_1092_, lean_object* v_h__41_1093_, lean_object* v_h__42_1094_, lean_object* v_h__43_1095_, lean_object* v_h__44_1096_, lean_object* v_h__45_1097_, lean_object* v_h__46_1098_, lean_object* v_h__47_1099_, lean_object* v_h__48_1100_, lean_object* v_h__49_1101_, lean_object* v_h__50_1102_, lean_object* v_h__51_1103_, lean_object* v_h__52_1104_, lean_object* v_h__53_1105_, lean_object* v_h__54_1106_, lean_object* v_h__55_1107_, lean_object* v_h__56_1108_, lean_object* v_h__57_1109_, lean_object* v_h__58_1110_, lean_object* v_h__59_1111_, lean_object* v_h__60_1112_, lean_object* v_h__61_1113_, lean_object* v_h__62_1114_){
_start:
{
lean_object* v___x_1115_; uint8_t v___x_1116_; 
v___x_1115_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__0));
v___x_1116_ = lean_string_dec_eq(v_x_1052_, v___x_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; uint8_t v___x_1118_; 
lean_dec(v_h__1_1053_);
v___x_1117_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__1));
v___x_1118_ = lean_string_dec_eq(v_x_1052_, v___x_1117_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; uint8_t v___x_1120_; 
lean_dec(v_h__2_1054_);
v___x_1119_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__2));
v___x_1120_ = lean_string_dec_eq(v_x_1052_, v___x_1119_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1121_; uint8_t v___x_1122_; 
lean_dec(v_h__3_1055_);
v___x_1121_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__3));
v___x_1122_ = lean_string_dec_eq(v_x_1052_, v___x_1121_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; uint8_t v___x_1124_; 
lean_dec(v_h__4_1056_);
v___x_1123_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__4));
v___x_1124_ = lean_string_dec_eq(v_x_1052_, v___x_1123_);
if (v___x_1124_ == 0)
{
lean_object* v___x_1125_; uint8_t v___x_1126_; 
lean_dec(v_h__5_1057_);
v___x_1125_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__5));
v___x_1126_ = lean_string_dec_eq(v_x_1052_, v___x_1125_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; uint8_t v___x_1128_; 
lean_dec(v_h__6_1058_);
v___x_1127_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__6));
v___x_1128_ = lean_string_dec_eq(v_x_1052_, v___x_1127_);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; uint8_t v___x_1130_; 
lean_dec(v_h__7_1059_);
v___x_1129_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__7));
v___x_1130_ = lean_string_dec_eq(v_x_1052_, v___x_1129_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; uint8_t v___x_1132_; 
lean_dec(v_h__8_1060_);
v___x_1131_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__8));
v___x_1132_ = lean_string_dec_eq(v_x_1052_, v___x_1131_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; uint8_t v___x_1134_; 
lean_dec(v_h__9_1061_);
v___x_1133_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__9));
v___x_1134_ = lean_string_dec_eq(v_x_1052_, v___x_1133_);
if (v___x_1134_ == 0)
{
lean_object* v___x_1135_; uint8_t v___x_1136_; 
lean_dec(v_h__10_1062_);
v___x_1135_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__10));
v___x_1136_ = lean_string_dec_eq(v_x_1052_, v___x_1135_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; uint8_t v___x_1138_; 
lean_dec(v_h__11_1063_);
v___x_1137_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__11));
v___x_1138_ = lean_string_dec_eq(v_x_1052_, v___x_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; uint8_t v___x_1140_; 
lean_dec(v_h__12_1064_);
v___x_1139_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__12));
v___x_1140_ = lean_string_dec_eq(v_x_1052_, v___x_1139_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1141_; uint8_t v___x_1142_; 
lean_dec(v_h__13_1065_);
v___x_1141_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__13));
v___x_1142_ = lean_string_dec_eq(v_x_1052_, v___x_1141_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; uint8_t v___x_1144_; 
lean_dec(v_h__14_1066_);
v___x_1143_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__14));
v___x_1144_ = lean_string_dec_eq(v_x_1052_, v___x_1143_);
if (v___x_1144_ == 0)
{
lean_object* v___x_1145_; uint8_t v___x_1146_; 
lean_dec(v_h__15_1067_);
v___x_1145_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__15));
v___x_1146_ = lean_string_dec_eq(v_x_1052_, v___x_1145_);
if (v___x_1146_ == 0)
{
lean_object* v___x_1147_; uint8_t v___x_1148_; 
lean_dec(v_h__16_1068_);
v___x_1147_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__16));
v___x_1148_ = lean_string_dec_eq(v_x_1052_, v___x_1147_);
if (v___x_1148_ == 0)
{
lean_object* v___x_1149_; uint8_t v___x_1150_; 
lean_dec(v_h__17_1069_);
v___x_1149_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__17));
v___x_1150_ = lean_string_dec_eq(v_x_1052_, v___x_1149_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; uint8_t v___x_1152_; 
lean_dec(v_h__18_1070_);
v___x_1151_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__18));
v___x_1152_ = lean_string_dec_eq(v_x_1052_, v___x_1151_);
if (v___x_1152_ == 0)
{
lean_object* v___x_1153_; uint8_t v___x_1154_; 
lean_dec(v_h__19_1071_);
v___x_1153_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__19));
v___x_1154_ = lean_string_dec_eq(v_x_1052_, v___x_1153_);
if (v___x_1154_ == 0)
{
lean_object* v___x_1155_; uint8_t v___x_1156_; 
lean_dec(v_h__20_1072_);
v___x_1155_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__20));
v___x_1156_ = lean_string_dec_eq(v_x_1052_, v___x_1155_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1157_; uint8_t v___x_1158_; 
lean_dec(v_h__21_1073_);
v___x_1157_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__21));
v___x_1158_ = lean_string_dec_eq(v_x_1052_, v___x_1157_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; uint8_t v___x_1160_; 
lean_dec(v_h__22_1074_);
v___x_1159_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__22));
v___x_1160_ = lean_string_dec_eq(v_x_1052_, v___x_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; uint8_t v___x_1162_; 
lean_dec(v_h__23_1075_);
v___x_1161_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__23));
v___x_1162_ = lean_string_dec_eq(v_x_1052_, v___x_1161_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; uint8_t v___x_1164_; 
lean_dec(v_h__24_1076_);
v___x_1163_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__24));
v___x_1164_ = lean_string_dec_eq(v_x_1052_, v___x_1163_);
if (v___x_1164_ == 0)
{
lean_object* v___x_1165_; uint8_t v___x_1166_; 
lean_dec(v_h__25_1077_);
v___x_1165_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__25));
v___x_1166_ = lean_string_dec_eq(v_x_1052_, v___x_1165_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; uint8_t v___x_1168_; 
lean_dec(v_h__26_1078_);
v___x_1167_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__26));
v___x_1168_ = lean_string_dec_eq(v_x_1052_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; uint8_t v___x_1170_; 
lean_dec(v_h__27_1079_);
v___x_1169_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__27));
v___x_1170_ = lean_string_dec_eq(v_x_1052_, v___x_1169_);
if (v___x_1170_ == 0)
{
lean_object* v___x_1171_; uint8_t v___x_1172_; 
lean_dec(v_h__28_1080_);
v___x_1171_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__28));
v___x_1172_ = lean_string_dec_eq(v_x_1052_, v___x_1171_);
if (v___x_1172_ == 0)
{
lean_object* v___x_1173_; uint8_t v___x_1174_; 
lean_dec(v_h__29_1081_);
v___x_1173_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__29));
v___x_1174_ = lean_string_dec_eq(v_x_1052_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; uint8_t v___x_1176_; 
lean_dec(v_h__30_1082_);
v___x_1175_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__30));
v___x_1176_ = lean_string_dec_eq(v_x_1052_, v___x_1175_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; uint8_t v___x_1178_; 
lean_dec(v_h__31_1083_);
v___x_1177_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__31));
v___x_1178_ = lean_string_dec_eq(v_x_1052_, v___x_1177_);
if (v___x_1178_ == 0)
{
lean_object* v___x_1179_; uint8_t v___x_1180_; 
lean_dec(v_h__32_1084_);
v___x_1179_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__32));
v___x_1180_ = lean_string_dec_eq(v_x_1052_, v___x_1179_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1181_; uint8_t v___x_1182_; 
lean_dec(v_h__33_1085_);
v___x_1181_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__33));
v___x_1182_ = lean_string_dec_eq(v_x_1052_, v___x_1181_);
if (v___x_1182_ == 0)
{
lean_object* v___x_1183_; uint8_t v___x_1184_; 
lean_dec(v_h__34_1086_);
v___x_1183_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__34));
v___x_1184_ = lean_string_dec_eq(v_x_1052_, v___x_1183_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; uint8_t v___x_1186_; 
lean_dec(v_h__35_1087_);
v___x_1185_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__35));
v___x_1186_ = lean_string_dec_eq(v_x_1052_, v___x_1185_);
if (v___x_1186_ == 0)
{
lean_object* v___x_1187_; uint8_t v___x_1188_; 
lean_dec(v_h__36_1088_);
v___x_1187_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__36));
v___x_1188_ = lean_string_dec_eq(v_x_1052_, v___x_1187_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1189_; uint8_t v___x_1190_; 
lean_dec(v_h__37_1089_);
v___x_1189_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__37));
v___x_1190_ = lean_string_dec_eq(v_x_1052_, v___x_1189_);
if (v___x_1190_ == 0)
{
lean_object* v___x_1191_; uint8_t v___x_1192_; 
lean_dec(v_h__38_1090_);
v___x_1191_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__38));
v___x_1192_ = lean_string_dec_eq(v_x_1052_, v___x_1191_);
if (v___x_1192_ == 0)
{
lean_object* v___x_1193_; uint8_t v___x_1194_; 
lean_dec(v_h__39_1091_);
v___x_1193_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__39));
v___x_1194_ = lean_string_dec_eq(v_x_1052_, v___x_1193_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; uint8_t v___x_1196_; 
lean_dec(v_h__40_1092_);
v___x_1195_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__40));
v___x_1196_ = lean_string_dec_eq(v_x_1052_, v___x_1195_);
if (v___x_1196_ == 0)
{
lean_object* v___x_1197_; uint8_t v___x_1198_; 
lean_dec(v_h__41_1093_);
v___x_1197_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__41));
v___x_1198_ = lean_string_dec_eq(v_x_1052_, v___x_1197_);
if (v___x_1198_ == 0)
{
lean_object* v___x_1199_; uint8_t v___x_1200_; 
lean_dec(v_h__42_1094_);
v___x_1199_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__42));
v___x_1200_ = lean_string_dec_eq(v_x_1052_, v___x_1199_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; uint8_t v___x_1202_; 
lean_dec(v_h__43_1095_);
v___x_1201_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__43));
v___x_1202_ = lean_string_dec_eq(v_x_1052_, v___x_1201_);
if (v___x_1202_ == 0)
{
lean_object* v___x_1203_; uint8_t v___x_1204_; 
lean_dec(v_h__44_1096_);
v___x_1203_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__44));
v___x_1204_ = lean_string_dec_eq(v_x_1052_, v___x_1203_);
if (v___x_1204_ == 0)
{
lean_object* v___x_1205_; uint8_t v___x_1206_; 
lean_dec(v_h__45_1097_);
v___x_1205_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__45));
v___x_1206_ = lean_string_dec_eq(v_x_1052_, v___x_1205_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; uint8_t v___x_1208_; 
lean_dec(v_h__46_1098_);
v___x_1207_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__46));
v___x_1208_ = lean_string_dec_eq(v_x_1052_, v___x_1207_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; uint8_t v___x_1210_; 
lean_dec(v_h__47_1099_);
v___x_1209_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__47));
v___x_1210_ = lean_string_dec_eq(v_x_1052_, v___x_1209_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; uint8_t v___x_1212_; 
lean_dec(v_h__48_1100_);
v___x_1211_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__48));
v___x_1212_ = lean_string_dec_eq(v_x_1052_, v___x_1211_);
if (v___x_1212_ == 0)
{
lean_object* v___x_1213_; uint8_t v___x_1214_; 
lean_dec(v_h__49_1101_);
v___x_1213_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__49));
v___x_1214_ = lean_string_dec_eq(v_x_1052_, v___x_1213_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; uint8_t v___x_1216_; 
lean_dec(v_h__50_1102_);
v___x_1215_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__50));
v___x_1216_ = lean_string_dec_eq(v_x_1052_, v___x_1215_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; uint8_t v___x_1218_; 
lean_dec(v_h__51_1103_);
v___x_1217_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__51));
v___x_1218_ = lean_string_dec_eq(v_x_1052_, v___x_1217_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; uint8_t v___x_1220_; 
lean_dec(v_h__52_1104_);
v___x_1219_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__52));
v___x_1220_ = lean_string_dec_eq(v_x_1052_, v___x_1219_);
if (v___x_1220_ == 0)
{
lean_object* v___x_1221_; uint8_t v___x_1222_; 
lean_dec(v_h__53_1105_);
v___x_1221_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__53));
v___x_1222_ = lean_string_dec_eq(v_x_1052_, v___x_1221_);
if (v___x_1222_ == 0)
{
lean_object* v___x_1223_; uint8_t v___x_1224_; 
lean_dec(v_h__54_1106_);
v___x_1223_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__54));
v___x_1224_ = lean_string_dec_eq(v_x_1052_, v___x_1223_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; uint8_t v___x_1226_; 
lean_dec(v_h__55_1107_);
v___x_1225_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__55));
v___x_1226_ = lean_string_dec_eq(v_x_1052_, v___x_1225_);
if (v___x_1226_ == 0)
{
lean_object* v___x_1227_; uint8_t v___x_1228_; 
lean_dec(v_h__56_1108_);
v___x_1227_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__56));
v___x_1228_ = lean_string_dec_eq(v_x_1052_, v___x_1227_);
if (v___x_1228_ == 0)
{
lean_object* v___x_1229_; uint8_t v___x_1230_; 
lean_dec(v_h__57_1109_);
v___x_1229_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__57));
v___x_1230_ = lean_string_dec_eq(v_x_1052_, v___x_1229_);
if (v___x_1230_ == 0)
{
lean_object* v___x_1231_; uint8_t v___x_1232_; 
lean_dec(v_h__58_1110_);
v___x_1231_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__58));
v___x_1232_ = lean_string_dec_eq(v_x_1052_, v___x_1231_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; uint8_t v___x_1234_; 
lean_dec(v_h__59_1111_);
v___x_1233_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__59));
v___x_1234_ = lean_string_dec_eq(v_x_1052_, v___x_1233_);
if (v___x_1234_ == 0)
{
lean_object* v___x_1235_; uint8_t v___x_1236_; 
lean_dec(v_h__60_1112_);
v___x_1235_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___redArg___closed__60));
v___x_1236_ = lean_string_dec_eq(v_x_1052_, v___x_1235_);
if (v___x_1236_ == 0)
{
lean_object* v___x_1237_; 
lean_dec(v_h__61_1113_);
{
lean_object* _aargs[] = {v_x_1052_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0)};
v___x_1237_ = lean_apply_m(v_h__62_1114_, 62, _aargs);
}
return v___x_1237_;
}
else
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
lean_dec(v_h__62_1114_);
lean_dec_ref(v_x_1052_);
v___x_1238_ = lean_box(0);
v___x_1239_ = lean_apply_1(v_h__61_1113_, v___x_1238_);
return v___x_1239_;
}
}
else
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec_ref(v_x_1052_);
v___x_1240_ = lean_box(0);
v___x_1241_ = lean_apply_1(v_h__60_1112_, v___x_1240_);
return v___x_1241_;
}
}
else
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec_ref(v_x_1052_);
v___x_1242_ = lean_box(0);
v___x_1243_ = lean_apply_1(v_h__59_1111_, v___x_1242_);
return v___x_1243_;
}
}
else
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec_ref(v_x_1052_);
v___x_1244_ = lean_box(0);
v___x_1245_ = lean_apply_1(v_h__58_1110_, v___x_1244_);
return v___x_1245_;
}
}
else
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec_ref(v_x_1052_);
v___x_1246_ = lean_box(0);
v___x_1247_ = lean_apply_1(v_h__57_1109_, v___x_1246_);
return v___x_1247_;
}
}
else
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec_ref(v_x_1052_);
v___x_1248_ = lean_box(0);
v___x_1249_ = lean_apply_1(v_h__56_1108_, v___x_1248_);
return v___x_1249_;
}
}
else
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec_ref(v_x_1052_);
v___x_1250_ = lean_box(0);
v___x_1251_ = lean_apply_1(v_h__55_1107_, v___x_1250_);
return v___x_1251_;
}
}
else
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec_ref(v_x_1052_);
v___x_1252_ = lean_box(0);
v___x_1253_ = lean_apply_1(v_h__54_1106_, v___x_1252_);
return v___x_1253_;
}
}
else
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec_ref(v_x_1052_);
v___x_1254_ = lean_box(0);
v___x_1255_ = lean_apply_1(v_h__53_1105_, v___x_1254_);
return v___x_1255_;
}
}
else
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec_ref(v_x_1052_);
v___x_1256_ = lean_box(0);
v___x_1257_ = lean_apply_1(v_h__52_1104_, v___x_1256_);
return v___x_1257_;
}
}
else
{
lean_object* v___x_1258_; lean_object* v___x_1259_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec_ref(v_x_1052_);
v___x_1258_ = lean_box(0);
v___x_1259_ = lean_apply_1(v_h__51_1103_, v___x_1258_);
return v___x_1259_;
}
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec_ref(v_x_1052_);
v___x_1260_ = lean_box(0);
v___x_1261_ = lean_apply_1(v_h__50_1102_, v___x_1260_);
return v___x_1261_;
}
}
else
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec_ref(v_x_1052_);
v___x_1262_ = lean_box(0);
v___x_1263_ = lean_apply_1(v_h__49_1101_, v___x_1262_);
return v___x_1263_;
}
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec_ref(v_x_1052_);
v___x_1264_ = lean_box(0);
v___x_1265_ = lean_apply_1(v_h__48_1100_, v___x_1264_);
return v___x_1265_;
}
}
else
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec_ref(v_x_1052_);
v___x_1266_ = lean_box(0);
v___x_1267_ = lean_apply_1(v_h__47_1099_, v___x_1266_);
return v___x_1267_;
}
}
else
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec_ref(v_x_1052_);
v___x_1268_ = lean_box(0);
v___x_1269_ = lean_apply_1(v_h__46_1098_, v___x_1268_);
return v___x_1269_;
}
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec_ref(v_x_1052_);
v___x_1270_ = lean_box(0);
v___x_1271_ = lean_apply_1(v_h__45_1097_, v___x_1270_);
return v___x_1271_;
}
}
else
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec_ref(v_x_1052_);
v___x_1272_ = lean_box(0);
v___x_1273_ = lean_apply_1(v_h__44_1096_, v___x_1272_);
return v___x_1273_;
}
}
else
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec_ref(v_x_1052_);
v___x_1274_ = lean_box(0);
v___x_1275_ = lean_apply_1(v_h__43_1095_, v___x_1274_);
return v___x_1275_;
}
}
else
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec_ref(v_x_1052_);
v___x_1276_ = lean_box(0);
v___x_1277_ = lean_apply_1(v_h__42_1094_, v___x_1276_);
return v___x_1277_;
}
}
else
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec_ref(v_x_1052_);
v___x_1278_ = lean_box(0);
v___x_1279_ = lean_apply_1(v_h__41_1093_, v___x_1278_);
return v___x_1279_;
}
}
else
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec_ref(v_x_1052_);
v___x_1280_ = lean_box(0);
v___x_1281_ = lean_apply_1(v_h__40_1092_, v___x_1280_);
return v___x_1281_;
}
}
else
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec_ref(v_x_1052_);
v___x_1282_ = lean_box(0);
v___x_1283_ = lean_apply_1(v_h__39_1091_, v___x_1282_);
return v___x_1283_;
}
}
else
{
lean_object* v___x_1284_; lean_object* v___x_1285_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec_ref(v_x_1052_);
v___x_1284_ = lean_box(0);
v___x_1285_ = lean_apply_1(v_h__38_1090_, v___x_1284_);
return v___x_1285_;
}
}
else
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec_ref(v_x_1052_);
v___x_1286_ = lean_box(0);
v___x_1287_ = lean_apply_1(v_h__37_1089_, v___x_1286_);
return v___x_1287_;
}
}
else
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec_ref(v_x_1052_);
v___x_1288_ = lean_box(0);
v___x_1289_ = lean_apply_1(v_h__36_1088_, v___x_1288_);
return v___x_1289_;
}
}
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec_ref(v_x_1052_);
v___x_1290_ = lean_box(0);
v___x_1291_ = lean_apply_1(v_h__35_1087_, v___x_1290_);
return v___x_1291_;
}
}
else
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec_ref(v_x_1052_);
v___x_1292_ = lean_box(0);
v___x_1293_ = lean_apply_1(v_h__34_1086_, v___x_1292_);
return v___x_1293_;
}
}
else
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec_ref(v_x_1052_);
v___x_1294_ = lean_box(0);
v___x_1295_ = lean_apply_1(v_h__33_1085_, v___x_1294_);
return v___x_1295_;
}
}
else
{
lean_object* v___x_1296_; lean_object* v___x_1297_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec_ref(v_x_1052_);
v___x_1296_ = lean_box(0);
v___x_1297_ = lean_apply_1(v_h__32_1084_, v___x_1296_);
return v___x_1297_;
}
}
else
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec_ref(v_x_1052_);
v___x_1298_ = lean_box(0);
v___x_1299_ = lean_apply_1(v_h__31_1083_, v___x_1298_);
return v___x_1299_;
}
}
else
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec_ref(v_x_1052_);
v___x_1300_ = lean_box(0);
v___x_1301_ = lean_apply_1(v_h__30_1082_, v___x_1300_);
return v___x_1301_;
}
}
else
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec_ref(v_x_1052_);
v___x_1302_ = lean_box(0);
v___x_1303_ = lean_apply_1(v_h__29_1081_, v___x_1302_);
return v___x_1303_;
}
}
else
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec_ref(v_x_1052_);
v___x_1304_ = lean_box(0);
v___x_1305_ = lean_apply_1(v_h__28_1080_, v___x_1304_);
return v___x_1305_;
}
}
else
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec_ref(v_x_1052_);
v___x_1306_ = lean_box(0);
v___x_1307_ = lean_apply_1(v_h__27_1079_, v___x_1306_);
return v___x_1307_;
}
}
else
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec_ref(v_x_1052_);
v___x_1308_ = lean_box(0);
v___x_1309_ = lean_apply_1(v_h__26_1078_, v___x_1308_);
return v___x_1309_;
}
}
else
{
lean_object* v___x_1310_; lean_object* v___x_1311_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec_ref(v_x_1052_);
v___x_1310_ = lean_box(0);
v___x_1311_ = lean_apply_1(v_h__25_1077_, v___x_1310_);
return v___x_1311_;
}
}
else
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec_ref(v_x_1052_);
v___x_1312_ = lean_box(0);
v___x_1313_ = lean_apply_1(v_h__24_1076_, v___x_1312_);
return v___x_1313_;
}
}
else
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec_ref(v_x_1052_);
v___x_1314_ = lean_box(0);
v___x_1315_ = lean_apply_1(v_h__23_1075_, v___x_1314_);
return v___x_1315_;
}
}
else
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec_ref(v_x_1052_);
v___x_1316_ = lean_box(0);
v___x_1317_ = lean_apply_1(v_h__22_1074_, v___x_1316_);
return v___x_1317_;
}
}
else
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec_ref(v_x_1052_);
v___x_1318_ = lean_box(0);
v___x_1319_ = lean_apply_1(v_h__21_1073_, v___x_1318_);
return v___x_1319_;
}
}
else
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec_ref(v_x_1052_);
v___x_1320_ = lean_box(0);
v___x_1321_ = lean_apply_1(v_h__20_1072_, v___x_1320_);
return v___x_1321_;
}
}
else
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec_ref(v_x_1052_);
v___x_1322_ = lean_box(0);
v___x_1323_ = lean_apply_1(v_h__19_1071_, v___x_1322_);
return v___x_1323_;
}
}
else
{
lean_object* v___x_1324_; lean_object* v___x_1325_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec_ref(v_x_1052_);
v___x_1324_ = lean_box(0);
v___x_1325_ = lean_apply_1(v_h__18_1070_, v___x_1324_);
return v___x_1325_;
}
}
else
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec_ref(v_x_1052_);
v___x_1326_ = lean_box(0);
v___x_1327_ = lean_apply_1(v_h__17_1069_, v___x_1326_);
return v___x_1327_;
}
}
else
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec_ref(v_x_1052_);
v___x_1328_ = lean_box(0);
v___x_1329_ = lean_apply_1(v_h__16_1068_, v___x_1328_);
return v___x_1329_;
}
}
else
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec_ref(v_x_1052_);
v___x_1330_ = lean_box(0);
v___x_1331_ = lean_apply_1(v_h__15_1067_, v___x_1330_);
return v___x_1331_;
}
}
else
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec_ref(v_x_1052_);
v___x_1332_ = lean_box(0);
v___x_1333_ = lean_apply_1(v_h__14_1066_, v___x_1332_);
return v___x_1333_;
}
}
else
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec_ref(v_x_1052_);
v___x_1334_ = lean_box(0);
v___x_1335_ = lean_apply_1(v_h__13_1065_, v___x_1334_);
return v___x_1335_;
}
}
else
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec_ref(v_x_1052_);
v___x_1336_ = lean_box(0);
v___x_1337_ = lean_apply_1(v_h__12_1064_, v___x_1336_);
return v___x_1337_;
}
}
else
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec_ref(v_x_1052_);
v___x_1338_ = lean_box(0);
v___x_1339_ = lean_apply_1(v_h__11_1063_, v___x_1338_);
return v___x_1339_;
}
}
else
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec(v_h__11_1063_);
lean_dec_ref(v_x_1052_);
v___x_1340_ = lean_box(0);
v___x_1341_ = lean_apply_1(v_h__10_1062_, v___x_1340_);
return v___x_1341_;
}
}
else
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec(v_h__11_1063_);
lean_dec(v_h__10_1062_);
lean_dec_ref(v_x_1052_);
v___x_1342_ = lean_box(0);
v___x_1343_ = lean_apply_1(v_h__9_1061_, v___x_1342_);
return v___x_1343_;
}
}
else
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec(v_h__11_1063_);
lean_dec(v_h__10_1062_);
lean_dec(v_h__9_1061_);
lean_dec_ref(v_x_1052_);
v___x_1344_ = lean_box(0);
v___x_1345_ = lean_apply_1(v_h__8_1060_, v___x_1344_);
return v___x_1345_;
}
}
else
{
lean_object* v___x_1346_; lean_object* v___x_1347_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec(v_h__11_1063_);
lean_dec(v_h__10_1062_);
lean_dec(v_h__9_1061_);
lean_dec(v_h__8_1060_);
lean_dec_ref(v_x_1052_);
v___x_1346_ = lean_box(0);
v___x_1347_ = lean_apply_1(v_h__7_1059_, v___x_1346_);
return v___x_1347_;
}
}
else
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec(v_h__11_1063_);
lean_dec(v_h__10_1062_);
lean_dec(v_h__9_1061_);
lean_dec(v_h__8_1060_);
lean_dec(v_h__7_1059_);
lean_dec_ref(v_x_1052_);
v___x_1348_ = lean_box(0);
v___x_1349_ = lean_apply_1(v_h__6_1058_, v___x_1348_);
return v___x_1349_;
}
}
else
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec(v_h__11_1063_);
lean_dec(v_h__10_1062_);
lean_dec(v_h__9_1061_);
lean_dec(v_h__8_1060_);
lean_dec(v_h__7_1059_);
lean_dec(v_h__6_1058_);
lean_dec_ref(v_x_1052_);
v___x_1350_ = lean_box(0);
v___x_1351_ = lean_apply_1(v_h__5_1057_, v___x_1350_);
return v___x_1351_;
}
}
else
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec(v_h__11_1063_);
lean_dec(v_h__10_1062_);
lean_dec(v_h__9_1061_);
lean_dec(v_h__8_1060_);
lean_dec(v_h__7_1059_);
lean_dec(v_h__6_1058_);
lean_dec(v_h__5_1057_);
lean_dec_ref(v_x_1052_);
v___x_1352_ = lean_box(0);
v___x_1353_ = lean_apply_1(v_h__4_1056_, v___x_1352_);
return v___x_1353_;
}
}
else
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec(v_h__11_1063_);
lean_dec(v_h__10_1062_);
lean_dec(v_h__9_1061_);
lean_dec(v_h__8_1060_);
lean_dec(v_h__7_1059_);
lean_dec(v_h__6_1058_);
lean_dec(v_h__5_1057_);
lean_dec(v_h__4_1056_);
lean_dec_ref(v_x_1052_);
v___x_1354_ = lean_box(0);
v___x_1355_ = lean_apply_1(v_h__3_1055_, v___x_1354_);
return v___x_1355_;
}
}
else
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec(v_h__11_1063_);
lean_dec(v_h__10_1062_);
lean_dec(v_h__9_1061_);
lean_dec(v_h__8_1060_);
lean_dec(v_h__7_1059_);
lean_dec(v_h__6_1058_);
lean_dec(v_h__5_1057_);
lean_dec(v_h__4_1056_);
lean_dec(v_h__3_1055_);
lean_dec_ref(v_x_1052_);
v___x_1356_ = lean_box(0);
v___x_1357_ = lean_apply_1(v_h__2_1054_, v___x_1356_);
return v___x_1357_;
}
}
else
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
lean_dec(v_h__62_1114_);
lean_dec(v_h__61_1113_);
lean_dec(v_h__60_1112_);
lean_dec(v_h__59_1111_);
lean_dec(v_h__58_1110_);
lean_dec(v_h__57_1109_);
lean_dec(v_h__56_1108_);
lean_dec(v_h__55_1107_);
lean_dec(v_h__54_1106_);
lean_dec(v_h__53_1105_);
lean_dec(v_h__52_1104_);
lean_dec(v_h__51_1103_);
lean_dec(v_h__50_1102_);
lean_dec(v_h__49_1101_);
lean_dec(v_h__48_1100_);
lean_dec(v_h__47_1099_);
lean_dec(v_h__46_1098_);
lean_dec(v_h__45_1097_);
lean_dec(v_h__44_1096_);
lean_dec(v_h__43_1095_);
lean_dec(v_h__42_1094_);
lean_dec(v_h__41_1093_);
lean_dec(v_h__40_1092_);
lean_dec(v_h__39_1091_);
lean_dec(v_h__38_1090_);
lean_dec(v_h__37_1089_);
lean_dec(v_h__36_1088_);
lean_dec(v_h__35_1087_);
lean_dec(v_h__34_1086_);
lean_dec(v_h__33_1085_);
lean_dec(v_h__32_1084_);
lean_dec(v_h__31_1083_);
lean_dec(v_h__30_1082_);
lean_dec(v_h__29_1081_);
lean_dec(v_h__28_1080_);
lean_dec(v_h__27_1079_);
lean_dec(v_h__26_1078_);
lean_dec(v_h__25_1077_);
lean_dec(v_h__24_1076_);
lean_dec(v_h__23_1075_);
lean_dec(v_h__22_1074_);
lean_dec(v_h__21_1073_);
lean_dec(v_h__20_1072_);
lean_dec(v_h__19_1071_);
lean_dec(v_h__18_1070_);
lean_dec(v_h__17_1069_);
lean_dec(v_h__16_1068_);
lean_dec(v_h__15_1067_);
lean_dec(v_h__14_1066_);
lean_dec(v_h__13_1065_);
lean_dec(v_h__12_1064_);
lean_dec(v_h__11_1063_);
lean_dec(v_h__10_1062_);
lean_dec(v_h__9_1061_);
lean_dec(v_h__8_1060_);
lean_dec(v_h__7_1059_);
lean_dec(v_h__6_1058_);
lean_dec(v_h__5_1057_);
lean_dec(v_h__4_1056_);
lean_dec(v_h__3_1055_);
lean_dec(v_h__2_1054_);
lean_dec_ref(v_x_1052_);
v___x_1358_ = lean_box(0);
v___x_1359_ = lean_apply_1(v_h__1_1053_, v___x_1358_);
return v___x_1359_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter___boxed(lean_object** _args){
lean_object* v_motive_1360_ = _args[0];
lean_object* v_x_1361_ = _args[1];
lean_object* v_h__1_1362_ = _args[2];
lean_object* v_h__2_1363_ = _args[3];
lean_object* v_h__3_1364_ = _args[4];
lean_object* v_h__4_1365_ = _args[5];
lean_object* v_h__5_1366_ = _args[6];
lean_object* v_h__6_1367_ = _args[7];
lean_object* v_h__7_1368_ = _args[8];
lean_object* v_h__8_1369_ = _args[9];
lean_object* v_h__9_1370_ = _args[10];
lean_object* v_h__10_1371_ = _args[11];
lean_object* v_h__11_1372_ = _args[12];
lean_object* v_h__12_1373_ = _args[13];
lean_object* v_h__13_1374_ = _args[14];
lean_object* v_h__14_1375_ = _args[15];
lean_object* v_h__15_1376_ = _args[16];
lean_object* v_h__16_1377_ = _args[17];
lean_object* v_h__17_1378_ = _args[18];
lean_object* v_h__18_1379_ = _args[19];
lean_object* v_h__19_1380_ = _args[20];
lean_object* v_h__20_1381_ = _args[21];
lean_object* v_h__21_1382_ = _args[22];
lean_object* v_h__22_1383_ = _args[23];
lean_object* v_h__23_1384_ = _args[24];
lean_object* v_h__24_1385_ = _args[25];
lean_object* v_h__25_1386_ = _args[26];
lean_object* v_h__26_1387_ = _args[27];
lean_object* v_h__27_1388_ = _args[28];
lean_object* v_h__28_1389_ = _args[29];
lean_object* v_h__29_1390_ = _args[30];
lean_object* v_h__30_1391_ = _args[31];
lean_object* v_h__31_1392_ = _args[32];
lean_object* v_h__32_1393_ = _args[33];
lean_object* v_h__33_1394_ = _args[34];
lean_object* v_h__34_1395_ = _args[35];
lean_object* v_h__35_1396_ = _args[36];
lean_object* v_h__36_1397_ = _args[37];
lean_object* v_h__37_1398_ = _args[38];
lean_object* v_h__38_1399_ = _args[39];
lean_object* v_h__39_1400_ = _args[40];
lean_object* v_h__40_1401_ = _args[41];
lean_object* v_h__41_1402_ = _args[42];
lean_object* v_h__42_1403_ = _args[43];
lean_object* v_h__43_1404_ = _args[44];
lean_object* v_h__44_1405_ = _args[45];
lean_object* v_h__45_1406_ = _args[46];
lean_object* v_h__46_1407_ = _args[47];
lean_object* v_h__47_1408_ = _args[48];
lean_object* v_h__48_1409_ = _args[49];
lean_object* v_h__49_1410_ = _args[50];
lean_object* v_h__50_1411_ = _args[51];
lean_object* v_h__51_1412_ = _args[52];
lean_object* v_h__52_1413_ = _args[53];
lean_object* v_h__53_1414_ = _args[54];
lean_object* v_h__54_1415_ = _args[55];
lean_object* v_h__55_1416_ = _args[56];
lean_object* v_h__56_1417_ = _args[57];
lean_object* v_h__57_1418_ = _args[58];
lean_object* v_h__58_1419_ = _args[59];
lean_object* v_h__59_1420_ = _args[60];
lean_object* v_h__60_1421_ = _args[61];
lean_object* v_h__61_1422_ = _args[62];
lean_object* v_h__62_1423_ = _args[63];
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_renderRuleOfName_match__1_splitter(v_motive_1360_, v_x_1361_, v_h__1_1362_, v_h__2_1363_, v_h__3_1364_, v_h__4_1365_, v_h__5_1366_, v_h__6_1367_, v_h__7_1368_, v_h__8_1369_, v_h__9_1370_, v_h__10_1371_, v_h__11_1372_, v_h__12_1373_, v_h__13_1374_, v_h__14_1375_, v_h__15_1376_, v_h__16_1377_, v_h__17_1378_, v_h__18_1379_, v_h__19_1380_, v_h__20_1381_, v_h__21_1382_, v_h__22_1383_, v_h__23_1384_, v_h__24_1385_, v_h__25_1386_, v_h__26_1387_, v_h__27_1388_, v_h__28_1389_, v_h__29_1390_, v_h__30_1391_, v_h__31_1392_, v_h__32_1393_, v_h__33_1394_, v_h__34_1395_, v_h__35_1396_, v_h__36_1397_, v_h__37_1398_, v_h__38_1399_, v_h__39_1400_, v_h__40_1401_, v_h__41_1402_, v_h__42_1403_, v_h__43_1404_, v_h__44_1405_, v_h__45_1406_, v_h__46_1407_, v_h__47_1408_, v_h__48_1409_, v_h__49_1410_, v_h__50_1411_, v_h__51_1412_, v_h__52_1413_, v_h__53_1414_, v_h__54_1415_, v_h__55_1416_, v_h__56_1417_, v_h__57_1418_, v_h__58_1419_, v_h__59_1420_, v_h__60_1421_, v_h__61_1422_, v_h__62_1423_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_dispatchRenderR41TokenAware_match__1_splitter___redArg(uint8_t v_x_1425_, lean_object* v_x_1426_, lean_object* v_x_1427_, lean_object* v_x_1428_, lean_object* v_h__1_1429_, lean_object* v_h__2_1430_){
_start:
{
if (v_x_1425_ == 1)
{
lean_object* v___x_1431_; 
lean_dec(v_h__2_1430_);
v___x_1431_ = lean_apply_3(v_h__1_1429_, v_x_1426_, v_x_1427_, v_x_1428_);
return v___x_1431_;
}
else
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
lean_dec(v_h__1_1429_);
v___x_1432_ = lean_box(v_x_1425_);
v___x_1433_ = lean_apply_5(v_h__2_1430_, v___x_1432_, v_x_1426_, v_x_1427_, v_x_1428_, lean_box(0));
return v___x_1433_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_dispatchRenderR41TokenAware_match__1_splitter___redArg___boxed(lean_object* v_x_1434_, lean_object* v_x_1435_, lean_object* v_x_1436_, lean_object* v_x_1437_, lean_object* v_h__1_1438_, lean_object* v_h__2_1439_){
_start:
{
uint8_t v_x_16__boxed_1440_; lean_object* v_res_1441_; 
v_x_16__boxed_1440_ = lean_unbox(v_x_1434_);
v_res_1441_ = lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_dispatchRenderR41TokenAware_match__1_splitter___redArg(v_x_16__boxed_1440_, v_x_1435_, v_x_1436_, v_x_1437_, v_h__1_1438_, v_h__2_1439_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_dispatchRenderR41TokenAware_match__1_splitter(lean_object* v_motive_1442_, uint8_t v_x_1443_, lean_object* v_x_1444_, lean_object* v_x_1445_, lean_object* v_x_1446_, lean_object* v_h__1_1447_, lean_object* v_h__2_1448_){
_start:
{
if (v_x_1443_ == 1)
{
lean_object* v___x_1449_; 
lean_dec(v_h__2_1448_);
v___x_1449_ = lean_apply_3(v_h__1_1447_, v_x_1444_, v_x_1445_, v_x_1446_);
return v___x_1449_;
}
else
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
lean_dec(v_h__1_1447_);
v___x_1450_ = lean_box(v_x_1443_);
v___x_1451_ = lean_apply_5(v_h__2_1448_, v___x_1450_, v_x_1444_, v_x_1445_, v_x_1446_, lean_box(0));
return v___x_1451_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_dispatchRenderR41TokenAware_match__1_splitter___boxed(lean_object* v_motive_1452_, lean_object* v_x_1453_, lean_object* v_x_1454_, lean_object* v_x_1455_, lean_object* v_x_1456_, lean_object* v_h__1_1457_, lean_object* v_h__2_1458_){
_start:
{
uint8_t v_x_34__boxed_1459_; lean_object* v_res_1460_; 
v_x_34__boxed_1459_ = lean_unbox(v_x_1453_);
v_res_1460_ = lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_dispatchRenderR41TokenAware_match__1_splitter(v_motive_1452_, v_x_34__boxed_1459_, v_x_1454_, v_x_1455_, v_x_1456_, v_h__1_1457_, v_h__2_1458_);
return v_res_1460_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NotesRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_RenderCore(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ProseRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_InlineSimpleRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_RawHeadingRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ListTableRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_InteractiveRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_CodeEmbedRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ServingRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Pipeline(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_NotesRender(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_TokenState(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_NotesRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_RenderCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ProseRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_InlineSimpleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_RawHeadingRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ListTableRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_InteractiveRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_CodeEmbedRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ServingRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_Pipeline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2 = _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2();
lean_mark_persistent(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmEmptyRaw2);
lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw = _init_lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw();
lean_mark_persistent(lp_lean_x2dftml___private_LeanFtml_NotesRender_0__LeanFtml_r9hmNonEmptyRaw);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
