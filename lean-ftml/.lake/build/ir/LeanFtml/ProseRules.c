// Lean compiler output
// Module: LeanFtml.ProseRules
// Imports: public import Init public meta import Init public import LeanFtml.RenderCore
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
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_proseTypeIs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_proseTypeIs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_proseTypeIs___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_proseTypeIs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_proseTypeIs___closed__1;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_proseTypeIs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_proseTypeIs___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderParagraph___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderParagraph___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderParagraph___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</p>\n\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderParagraph___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderParagraph___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<p>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderParagraph___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph___closed__7;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderNewline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<br />\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderNewline___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderNewline___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderNewline___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderNewline___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderNewline;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBreak;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderCenter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "</p>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderCenter___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderCenter___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderCenter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderCenter___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderCenter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "<p style=\"text-align: center;\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderCenter___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderCenter___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderCenter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderCenter___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCenter(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCenter___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHoriz___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<hr />\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHoriz___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHoriz___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHoriz___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHoriz___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderHoriz;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderSeparator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "<div class=\"content-separator\" style=\"display: none:\"></div>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderSeparator___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderSeparator___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderSeparator___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderSeparator___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSeparator;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "<div style=\"clear:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "; height: 0px; font-size: 1px\"></div>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "side"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "both"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "left"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "right"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__15;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "</blockquote>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "<blockquote>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBlockquote(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBlockquote___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderNote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderNote___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderNote___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderNote___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderNote___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderNote___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "<div class=\"wiki-note\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderNote___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderNote___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderNote___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderNote___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderNote(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderNote___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDivalign___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "<div style=\"text-align: "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDivalign___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDivalign___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDivalign___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "align"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDivalign___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDivalign___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDivalign___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ";\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDivalign___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDivalign___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderComment;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderDelimiter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderDelimiter___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderDelimiter___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderDelimiter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderDelimiter___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDelimiter(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDelimiter___boxed(lean_object*);
static lean_object* _init_lp_lean_x2dftml_LeanFtml_proseTypeIs___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_proseTypeIs___closed__0));
v___x_3_ = l_String_toListImpl(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_proseTypeIs(lean_object* v_opts_4_, lean_object* v_expected_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_6_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_proseTypeIs___closed__1, &lp_lean_x2dftml_LeanFtml_proseTypeIs___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_proseTypeIs___closed__1);
v___x_7_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_4_, v___x_6_);
v___x_8_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_7_, v_expected_5_);
lean_dec(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_proseTypeIs___boxed(lean_object* v_opts_9_, lean_object* v_expected_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_9_, v_expected_10_);
lean_dec(v_expected_10_);
lean_dec(v_opts_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderParagraph___closed__0));
v___x_15_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderParagraph___closed__2));
v___x_18_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_17_);
return v___x_18_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__5(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderParagraph___closed__4));
v___x_21_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__7(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderParagraph___closed__6));
v___x_24_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph(lean_object* v_opts_25_){
_start:
{
lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_26_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1);
v___x_27_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_25_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_28_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3);
v___x_29_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_25_, v___x_28_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; 
v___x_30_ = lean_box(0);
return v___x_30_;
}
else
{
lean_object* v___x_31_; 
v___x_31_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__5, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__5);
return v___x_31_;
}
}
else
{
lean_object* v___x_32_; 
v___x_32_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__7, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__7);
return v___x_32_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderParagraph___boxed(lean_object* v_opts_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = lp_lean_x2dftml_LeanFtml_renderParagraph(v_opts_33_);
lean_dec(v_opts_33_);
return v_res_34_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderNewline___closed__1(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderNewline___closed__0));
v___x_37_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderNewline(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderNewline___closed__1, &lp_lean_x2dftml_LeanFtml_renderNewline___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderNewline___closed__1);
return v___x_38_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBreak(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderNewline___closed__1, &lp_lean_x2dftml_LeanFtml_renderNewline___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderNewline___closed__1);
return v___x_39_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderCenter___closed__1(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderCenter___closed__0));
v___x_42_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderCenter___closed__3(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderCenter___closed__2));
v___x_45_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCenter(lean_object* v_opts_46_){
_start:
{
lean_object* v___x_47_; uint8_t v___x_48_; 
v___x_47_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1);
v___x_48_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_46_, v___x_47_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3);
v___x_50_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_46_, v___x_49_);
if (v___x_50_ == 0)
{
lean_object* v___x_51_; 
v___x_51_ = lean_box(0);
return v___x_51_;
}
else
{
lean_object* v___x_52_; 
v___x_52_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderCenter___closed__1, &lp_lean_x2dftml_LeanFtml_renderCenter___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderCenter___closed__1);
return v___x_52_;
}
}
else
{
lean_object* v___x_53_; 
v___x_53_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderCenter___closed__3, &lp_lean_x2dftml_LeanFtml_renderCenter___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderCenter___closed__3);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCenter___boxed(lean_object* v_opts_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = lp_lean_x2dftml_LeanFtml_renderCenter(v_opts_54_);
lean_dec(v_opts_54_);
return v_res_55_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHoriz___closed__1(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHoriz___closed__0));
v___x_58_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHoriz(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHoriz___closed__1, &lp_lean_x2dftml_LeanFtml_renderHoriz___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderHoriz___closed__1);
return v___x_59_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderSeparator___closed__1(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderSeparator___closed__0));
v___x_62_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderSeparator(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderSeparator___closed__1, &lp_lean_x2dftml_LeanFtml_renderSeparator___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderSeparator___closed__1);
return v___x_63_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__1(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__0));
v___x_66_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__3(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__2));
v___x_69_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__5(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__4));
v___x_72_ = l_String_toListImpl(v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__7(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__6));
v___x_75_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__9(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__8));
v___x_78_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_77_);
return v___x_78_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__11(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__10));
v___x_81_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_80_);
return v___x_81_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__13(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__12));
v___x_84_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__15(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__14));
v___x_87_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat(lean_object* v_opts_88_){
_start:
{
lean_object* v___y_90_; lean_object* v___x_95_; lean_object* v_side_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_95_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__5, &lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__5);
v_side_96_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_88_, v___x_95_);
v___x_97_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__7, &lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__7);
v___x_98_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_side_96_, v___x_97_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__9, &lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__9);
v___x_100_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_side_96_, v___x_99_);
lean_dec(v_side_96_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__11, &lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__11);
v___y_90_ = v___x_101_;
goto v___jp_89_;
}
else
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__13, &lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__13);
v___y_90_ = v___x_102_;
goto v___jp_89_;
}
}
else
{
lean_object* v___x_103_; 
lean_dec(v_side_96_);
v___x_103_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__15, &lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__15);
v___y_90_ = v___x_103_;
goto v___jp_89_;
}
v___jp_89_:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_91_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__1, &lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__1);
lean_inc(v___y_90_);
v___x_92_ = l_List_appendTR___redArg(v___x_91_, v___y_90_);
v___x_93_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__3, &lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderClearfloat___closed__3);
v___x_94_ = l_List_appendTR___redArg(v___x_92_, v___x_93_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderClearfloat___boxed(lean_object* v_opts_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = lp_lean_x2dftml_LeanFtml_renderClearfloat(v_opts_104_);
lean_dec(v_opts_104_);
return v_res_105_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__1(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__0));
v___x_108_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_107_);
return v___x_108_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__3(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__2));
v___x_111_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBlockquote(lean_object* v_opts_112_){
_start:
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1);
v___x_114_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_112_, v___x_113_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3);
v___x_116_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_112_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; 
v___x_117_ = lean_box(0);
return v___x_117_;
}
else
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__1, &lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__1);
return v___x_118_;
}
}
else
{
lean_object* v___x_119_; 
v___x_119_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__3, &lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderBlockquote___closed__3);
return v___x_119_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderBlockquote___boxed(lean_object* v_opts_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = lp_lean_x2dftml_LeanFtml_renderBlockquote(v_opts_120_);
lean_dec(v_opts_120_);
return v_res_121_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderNote___closed__1(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderNote___closed__0));
v___x_124_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderNote___closed__3(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderNote___closed__2));
v___x_127_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderNote(lean_object* v_opts_128_){
_start:
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1);
v___x_130_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_128_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3);
v___x_132_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_128_, v___x_131_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; 
v___x_133_ = lean_box(0);
return v___x_133_;
}
else
{
lean_object* v___x_134_; 
v___x_134_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderNote___closed__1, &lp_lean_x2dftml_LeanFtml_renderNote___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderNote___closed__1);
return v___x_134_;
}
}
else
{
lean_object* v___x_135_; 
v___x_135_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderNote___closed__3, &lp_lean_x2dftml_LeanFtml_renderNote___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderNote___closed__3);
return v___x_135_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderNote___boxed(lean_object* v_opts_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = lp_lean_x2dftml_LeanFtml_renderNote(v_opts_136_);
lean_dec(v_opts_136_);
return v_res_137_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDivalign___closed__1(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDivalign___closed__0));
v___x_140_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_139_);
return v___x_140_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDivalign___closed__3(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDivalign___closed__2));
v___x_143_ = l_String_toListImpl(v___x_142_);
return v___x_143_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDivalign___closed__5(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDivalign___closed__4));
v___x_146_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign(lean_object* v_opts_147_){
_start:
{
lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_148_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__1);
v___x_149_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_147_, v___x_148_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_150_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3, &lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderParagraph___closed__3);
v___x_151_ = lp_lean_x2dftml_LeanFtml_proseTypeIs(v_opts_147_, v___x_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
v___x_152_ = lean_box(0);
return v___x_152_;
}
else
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderNote___closed__1, &lp_lean_x2dftml_LeanFtml_renderNote___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderNote___closed__1);
return v___x_153_;
}
}
else
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_154_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDivalign___closed__1, &lp_lean_x2dftml_LeanFtml_renderDivalign___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderDivalign___closed__1);
v___x_155_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDivalign___closed__3, &lp_lean_x2dftml_LeanFtml_renderDivalign___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderDivalign___closed__3);
v___x_156_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_147_, v___x_155_);
v___x_157_ = l_List_appendTR___redArg(v___x_154_, v___x_156_);
v___x_158_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDivalign___closed__5, &lp_lean_x2dftml_LeanFtml_renderDivalign___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderDivalign___closed__5);
v___x_159_ = l_List_appendTR___redArg(v___x_157_, v___x_158_);
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDivalign___boxed(lean_object* v_opts_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = lp_lean_x2dftml_LeanFtml_renderDivalign(v_opts_160_);
lean_dec(v_opts_160_);
return v_res_161_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderComment(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_box(0);
return v___x_162_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderDelimiter___closed__1(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderDelimiter___closed__0));
v___x_165_ = l_String_toListImpl(v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDelimiter(lean_object* v_opts_166_){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderDelimiter___closed__1, &lp_lean_x2dftml_LeanFtml_renderDelimiter___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderDelimiter___closed__1);
v___x_168_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_166_, v___x_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderDelimiter___boxed(lean_object* v_opts_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = lp_lean_x2dftml_LeanFtml_renderDelimiter(v_opts_169_);
lean_dec(v_opts_169_);
return v_res_170_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_RenderCore(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_ProseRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_RenderCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_renderNewline = _init_lp_lean_x2dftml_LeanFtml_renderNewline();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_renderNewline);
lp_lean_x2dftml_LeanFtml_renderBreak = _init_lp_lean_x2dftml_LeanFtml_renderBreak();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_renderBreak);
lp_lean_x2dftml_LeanFtml_renderHoriz = _init_lp_lean_x2dftml_LeanFtml_renderHoriz();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_renderHoriz);
lp_lean_x2dftml_LeanFtml_renderSeparator = _init_lp_lean_x2dftml_LeanFtml_renderSeparator();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_renderSeparator);
lp_lean_x2dftml_LeanFtml_renderComment = _init_lp_lean_x2dftml_LeanFtml_renderComment();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_renderComment);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
