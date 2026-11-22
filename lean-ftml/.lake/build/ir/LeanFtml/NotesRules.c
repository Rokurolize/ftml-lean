// Lean compiler output
// Module: LeanFtml.NotesRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules public import LeanFtml.NextRules
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_findSub(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_lookupB(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_parseBytes(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibSet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibSet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isBibLabelByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isBibLabelByte___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_attrGroupB___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_attrGroupB___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_attrGroupB___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_attrGroupB___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_attrGroupB___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_attrGroupB___closed__1_value;
static const lean_array_object lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrGroupB(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_titleOpt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* lp_lean_x2dftml_LeanFtml_titleOpt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_titleOpt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_titleOpt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_titleOpt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_titleOpt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_titleOpt___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "[[footnote]]"};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__1;
static const lean_string_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "[[/footnote]]"};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteMatchAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Raw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_stripEmptyRawPhNotes_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isLoneNewlineRemainder(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isLoneNewlineRemainder___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Footnote"};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteProcess(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteProcess___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteScan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteitemRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteitemRule___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "[[footnoteblock"};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockFind_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockFind(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstBreakSplit(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Footnoteitem"};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__12_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "parabreak"};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__17;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__18;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__19;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Footnoteblock"};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__4;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_footnoteblockRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_footnoteblockRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_bibitemProcess_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Bibitem"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "label"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "empty"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__7;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibitemRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibitemRule___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_BibPrev_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBibPrev(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBibPrev___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instInhabitedBibPrev_default;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instInhabitedBibPrev;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibDefMatch(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibDefMatch___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWs_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWs_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWs(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_claimNl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Bibliography"};
static const lean_object* lp_lean_x2dftml_LeanFtml_claimNl___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_claimNl___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_claimNl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "nl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_claimNl___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_claimNl___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimNl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimNl___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimNl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimNl___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimNl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimNl___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimNl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimNl___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimNl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimNl___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimNl___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimNl___closed__7;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_claimNl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibWalk_spec__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibWalk_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bibWalk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bibWalk___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bibWalk___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibWalk(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibWalk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibliographyMatchAt_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "[[bibliography"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "[[/bibliography]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyFind_go(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyFind_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyFind(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__0;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyProcess(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "((bibcite"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "))"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteMatchAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_bibciteScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Bibcite"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bibciteScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bibciteScan___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_bibciteRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_bibciteRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_bibciteRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bibciteRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteRule(lean_object*);
static const lean_ctor_object lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__1;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__2;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__4;
static lean_once_cell_t lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibSet___redArg(lean_object* v_x_1_, lean_object* v_x_2_, lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v_x_3_);
v___x_5_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v_x_1_);
return v___x_5_;
}
else
{
lean_object* v_head_6_; lean_object* v_tail_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_29_; 
v_head_6_ = lean_ctor_get(v_x_1_, 0);
v_tail_7_ = lean_ctor_get(v_x_1_, 1);
v_isSharedCheck_29_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_29_ == 0)
{
v___x_9_ = v_x_1_;
v_isShared_10_ = v_isSharedCheck_29_;
goto v_resetjp_8_;
}
else
{
lean_inc(v_tail_7_);
lean_inc(v_head_6_);
lean_dec(v_x_1_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_29_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v_fst_11_; uint8_t v___x_12_; 
v_fst_11_ = lean_ctor_get(v_head_6_, 0);
v___x_12_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_11_, v_x_2_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; lean_object* v___x_15_; 
v___x_13_ = lp_lean_x2dftml_LeanFtml_bibSet___redArg(v_tail_7_, v_x_2_, v_x_3_);
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 1, v___x_13_);
v___x_15_ = v___x_9_;
goto v_reusejp_14_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v_head_6_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v___x_13_);
v___x_15_ = v_reuseFailAlloc_16_;
goto v_reusejp_14_;
}
v_reusejp_14_:
{
return v___x_15_;
}
}
else
{
lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_26_; 
v_isSharedCheck_26_ = !lean_is_exclusive(v_head_6_);
if (v_isSharedCheck_26_ == 0)
{
lean_object* v_unused_27_; lean_object* v_unused_28_; 
v_unused_27_ = lean_ctor_get(v_head_6_, 1);
lean_dec(v_unused_27_);
v_unused_28_ = lean_ctor_get(v_head_6_, 0);
lean_dec(v_unused_28_);
v___x_18_ = v_head_6_;
v_isShared_19_ = v_isSharedCheck_26_;
goto v_resetjp_17_;
}
else
{
lean_dec(v_head_6_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_26_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___x_21_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 1, v_x_3_);
lean_ctor_set(v___x_18_, 0, v_x_2_);
v___x_21_ = v___x_18_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v_x_2_);
lean_ctor_set(v_reuseFailAlloc_25_, 1, v_x_3_);
v___x_21_ = v_reuseFailAlloc_25_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_23_; 
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 0, v___x_21_);
v___x_23_ = v___x_9_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v___x_21_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v_tail_7_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibSet(lean_object* v_00_u03b1_30_, lean_object* v_x_31_, lean_object* v_x_32_, lean_object* v_x_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lp_lean_x2dftml_LeanFtml_bibSet___redArg(v_x_31_, v_x_32_, v_x_33_);
return v___x_34_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isBibLabelByte(lean_object* v_b_35_){
_start:
{
lean_object* v___x_46_; uint8_t v___x_47_; 
v___x_46_ = lean_unsigned_to_nat(97u);
v___x_47_ = lean_nat_dec_le(v___x_46_, v_b_35_);
if (v___x_47_ == 0)
{
goto v___jp_41_;
}
else
{
lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_48_ = lean_unsigned_to_nat(122u);
v___x_49_ = lean_nat_dec_le(v_b_35_, v___x_48_);
if (v___x_49_ == 0)
{
goto v___jp_41_;
}
else
{
return v___x_49_;
}
}
v___jp_36_:
{
lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(48u);
v___x_38_ = lean_nat_dec_le(v___x_37_, v_b_35_);
if (v___x_38_ == 0)
{
return v___x_38_;
}
else
{
lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(57u);
v___x_40_ = lean_nat_dec_le(v_b_35_, v___x_39_);
return v___x_40_;
}
}
v___jp_41_:
{
lean_object* v___x_42_; uint8_t v___x_43_; 
v___x_42_ = lean_unsigned_to_nat(65u);
v___x_43_ = lean_nat_dec_le(v___x_42_, v_b_35_);
if (v___x_43_ == 0)
{
goto v___jp_36_;
}
else
{
lean_object* v___x_44_; uint8_t v___x_45_; 
v___x_44_ = lean_unsigned_to_nat(90u);
v___x_45_ = lean_nat_dec_le(v_b_35_, v___x_44_);
if (v___x_45_ == 0)
{
goto v___jp_36_;
}
else
{
return v___x_45_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isBibLabelByte___boxed(lean_object* v_b_50_){
_start:
{
uint8_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = lp_lean_x2dftml_LeanFtml_isBibLabelByte(v_b_50_);
lean_dec(v_b_50_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_attrGroupB(lean_object* v_rest_60_){
_start:
{
if (lean_obj_tag(v_rest_60_) == 1)
{
lean_object* v_head_93_; lean_object* v_tail_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v_head_93_ = lean_ctor_get(v_rest_60_, 0);
v_tail_94_ = lean_ctor_get(v_rest_60_, 1);
lean_inc(v_tail_94_);
v___x_95_ = lean_unsigned_to_nat(93u);
v___x_96_ = lean_nat_dec_eq(v_head_93_, v___x_95_);
if (v___x_96_ == 0)
{
lean_dec(v_tail_94_);
goto v___jp_61_;
}
else
{
if (lean_obj_tag(v_tail_94_) == 1)
{
lean_object* v_head_97_; lean_object* v_tail_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_108_; 
v_head_97_ = lean_ctor_get(v_tail_94_, 0);
v_tail_98_ = lean_ctor_get(v_tail_94_, 1);
v_isSharedCheck_108_ = !lean_is_exclusive(v_tail_94_);
if (v_isSharedCheck_108_ == 0)
{
v___x_100_ = v_tail_94_;
v_isShared_101_ = v_isSharedCheck_108_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_tail_98_);
lean_inc(v_head_97_);
lean_dec(v_tail_94_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_108_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
uint8_t v___x_102_; 
v___x_102_ = lean_nat_dec_eq(v_head_97_, v___x_95_);
lean_dec(v_head_97_);
if (v___x_102_ == 0)
{
lean_del_object(v___x_100_);
lean_dec(v_tail_98_);
goto v___jp_61_;
}
else
{
lean_object* v___x_103_; lean_object* v___x_105_; 
lean_dec_ref_known(v_rest_60_, 2);
v___x_103_ = lean_box(0);
if (v_isShared_101_ == 0)
{
lean_ctor_set_tag(v___x_100_, 0);
lean_ctor_set(v___x_100_, 0, v___x_103_);
v___x_105_ = v___x_100_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_103_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v_tail_98_);
v___x_105_ = v_reuseFailAlloc_107_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
lean_object* v___x_106_; 
v___x_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
return v___x_106_;
}
}
}
}
else
{
lean_dec(v_tail_94_);
goto v___jp_61_;
}
}
}
else
{
goto v___jp_61_;
}
v___jp_61_:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__0));
lean_inc(v_rest_60_);
v___x_63_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_62_, v_rest_60_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v___x_64_; 
lean_dec(v_rest_60_);
v___x_64_ = lean_box(0);
return v___x_64_;
}
else
{
lean_object* v_val_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_92_; 
v_val_65_ = lean_ctor_get(v___x_63_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_92_ == 0)
{
v___x_67_ = v___x_63_;
v_isShared_68_ = v_isSharedCheck_92_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_val_65_);
lean_dec(v___x_63_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_92_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_69_ = lean_unsigned_to_nat(1u);
v___x_70_ = lean_nat_add(v_val_65_, v___x_69_);
v___x_71_ = l_List_get_x3fInternal___redArg(v_rest_60_, v___x_70_);
v___x_72_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__1));
v___x_73_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_71_, v___x_72_);
lean_dec(v___x_71_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; 
lean_del_object(v___x_67_);
lean_dec(v_val_65_);
lean_dec(v_rest_60_);
v___x_74_ = lean_box(0);
return v___x_74_;
}
else
{
lean_object* v___x_75_; lean_object* v_span_76_; lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_75_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_val_65_);
lean_inc(v_rest_60_);
v_span_76_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_rest_60_, v_rest_60_, v_val_65_, v___x_75_);
lean_inc(v_span_76_);
v___x_77_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_span_76_, v_span_76_, v___x_75_);
v___x_78_ = l_List_lengthTR___redArg(v___x_77_);
lean_dec(v___x_77_);
v___x_79_ = lean_nat_dec_le(v___x_69_, v___x_78_);
lean_dec(v___x_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; 
lean_dec(v_span_76_);
lean_del_object(v___x_67_);
lean_dec(v_val_65_);
lean_dec(v_rest_60_);
v___x_80_ = lean_box(0);
return v___x_80_;
}
else
{
lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_81_ = lean_unsigned_to_nat(2u);
v___x_82_ = l_List_lengthTR___redArg(v_span_76_);
v___x_83_ = lean_nat_dec_le(v___x_81_, v___x_82_);
lean_dec(v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; 
lean_dec(v_span_76_);
lean_del_object(v___x_67_);
lean_dec(v_val_65_);
lean_dec(v_rest_60_);
v___x_84_ = lean_box(0);
return v___x_84_;
}
else
{
lean_object* v___x_86_; 
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 0, v_span_76_);
v___x_86_ = v___x_67_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_span_76_);
v___x_86_ = v_reuseFailAlloc_91_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_87_ = lean_nat_add(v_val_65_, v___x_81_);
lean_dec(v_val_65_);
v___x_88_ = l_List_drop___redArg(v___x_87_, v_rest_60_);
lean_dec(v_rest_60_);
v___x_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_86_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
}
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_titleOpt___closed__1(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_titleOpt___closed__0));
v___x_111_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_titleOpt(lean_object* v_g_112_){
_start:
{
lean_object* v___y_114_; 
if (lean_obj_tag(v_g_112_) == 0)
{
lean_object* v___x_121_; 
v___x_121_ = lean_box(0);
v___y_114_ = v___x_121_;
goto v___jp_113_;
}
else
{
lean_object* v_val_122_; 
v_val_122_ = lean_ctor_get(v_g_112_, 0);
v___y_114_ = v_val_122_;
goto v___jp_113_;
}
v___jp_113_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_114_);
v___x_116_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_titleOpt___closed__1, &lp_lean_x2dftml_LeanFtml_titleOpt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_titleOpt___closed__1);
v___x_117_ = lp_lean_x2dftml_LeanFtml_lookupB(v___x_115_, v___x_116_);
lean_dec(v___x_115_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v___x_118_; 
v___x_118_ = lean_box(3);
return v___x_118_;
}
else
{
lean_object* v_val_119_; lean_object* v___x_120_; 
v_val_119_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_val_119_);
lean_dec_ref_known(v___x_117_, 1);
v___x_120_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_119_);
return v___x_120_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_titleOpt___boxed(lean_object* v_g_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = lp_lean_x2dftml_LeanFtml_titleOpt(v_g_123_);
lean_dec(v_g_123_);
return v_res_124_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__1(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__0));
v___x_127_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_126_);
return v___x_127_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__3(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__2));
v___x_130_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0(lean_object* v_src_131_, lean_object* v_x_132_){
_start:
{
if (lean_obj_tag(v_x_132_) == 0)
{
lean_object* v___x_133_; 
v___x_133_ = lean_box(0);
return v___x_133_;
}
else
{
lean_object* v_head_134_; lean_object* v_tail_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_163_; 
v_head_134_ = lean_ctor_get(v_x_132_, 0);
v_tail_135_ = lean_ctor_get(v_x_132_, 1);
v_isSharedCheck_163_ = !lean_is_exclusive(v_x_132_);
if (v_isSharedCheck_163_ == 0)
{
v___x_137_ = v_x_132_;
v_isShared_138_ = v_isSharedCheck_163_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_tail_135_);
lean_inc(v_head_134_);
lean_dec(v_x_132_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_163_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__1, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__1);
v___x_140_ = l_List_drop___redArg(v_head_134_, v_src_131_);
v___x_141_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_139_, v___x_140_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_del_object(v___x_137_);
v_x_132_ = v_tail_135_;
goto _start;
}
else
{
lean_object* v_val_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_val_143_ = lean_ctor_get(v___x_141_, 0);
lean_inc_n(v_val_143_, 2);
lean_dec_ref_known(v___x_141_, 1);
v___x_144_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__3, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__3_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___closed__3);
v___x_145_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_144_, v_val_143_);
if (lean_obj_tag(v___x_145_) == 0)
{
lean_dec(v_val_143_);
lean_del_object(v___x_137_);
v_x_132_ = v_tail_135_;
goto _start;
}
else
{
lean_object* v_val_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_162_; 
lean_dec(v_tail_135_);
v_val_147_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_162_ == 0)
{
v___x_149_ = v___x_145_;
v_isShared_150_ = v_isSharedCheck_162_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_val_147_);
lean_dec(v___x_145_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_162_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_157_; 
v___x_151_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_val_147_);
lean_inc(v_val_143_);
v___x_152_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_val_143_, v_val_143_, v_val_147_, v___x_151_);
v___x_153_ = lean_unsigned_to_nat(13u);
v___x_154_ = lean_nat_add(v_val_147_, v___x_153_);
lean_dec(v_val_147_);
v___x_155_ = l_List_drop___redArg(v___x_154_, v_val_143_);
lean_dec(v_val_143_);
if (v_isShared_138_ == 0)
{
lean_ctor_set_tag(v___x_137_, 0);
lean_ctor_set(v___x_137_, 1, v___x_155_);
lean_ctor_set(v___x_137_, 0, v___x_152_);
v___x_157_ = v___x_137_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_152_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v___x_155_);
v___x_157_ = v_reuseFailAlloc_161_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
lean_object* v___x_159_; 
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 0, v___x_157_);
v___x_159_ = v___x_149_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_157_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0___boxed(lean_object* v_src_164_, lean_object* v_x_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0(v_src_164_, v_x_165_);
lean_dec(v_src_164_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteMatchAt(lean_object* v_src_167_){
_start:
{
lean_object* v___x_168_; lean_object* v_wsRun_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_168_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_src_167_);
v_wsRun_169_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_src_167_, v_src_167_, v___x_168_);
v___x_170_ = l_List_lengthTR___redArg(v_wsRun_169_);
lean_dec(v_wsRun_169_);
v___x_171_ = lean_unsigned_to_nat(1u);
v___x_172_ = lean_nat_add(v___x_170_, v___x_171_);
lean_dec(v___x_170_);
v___x_173_ = l_List_range(v___x_172_);
v___x_174_ = l_List_reverse___redArg(v___x_173_);
v___x_175_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_footnoteMatchAt_spec__0(v_src_167_, v___x_174_);
lean_dec(v_src_167_);
return v___x_175_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__1));
v___x_179_ = l_String_toListImpl(v___x_178_);
return v___x_179_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes(lean_object* v_toks_180_, lean_object* v_id_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = l_List_get_x3fInternal___redArg(v_toks_180_, v_id_181_);
if (lean_obj_tag(v___x_182_) == 0)
{
uint8_t v___x_183_; 
v___x_183_ = 0;
return v___x_183_;
}
else
{
lean_object* v_val_184_; lean_object* v_rule_185_; lean_object* v_opts_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v_val_184_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_val_184_);
lean_dec_ref_known(v___x_182_, 1);
v_rule_185_ = lean_ctor_get(v_val_184_, 0);
lean_inc_ref(v_rule_185_);
v_opts_186_ = lean_ctor_get(v_val_184_, 1);
lean_inc(v_opts_186_);
lean_dec(v_val_184_);
v___x_187_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__0));
v___x_188_ = lean_string_dec_eq(v_rule_185_, v___x_187_);
lean_dec_ref(v_rule_185_);
if (v___x_188_ == 0)
{
lean_dec(v_opts_186_);
return v___x_188_;
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2, &lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2);
v___x_190_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_186_, v___x_189_);
lean_dec(v_opts_186_);
if (lean_obj_tag(v___x_190_) == 1)
{
lean_object* v_val_191_; 
v_val_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc(v_val_191_);
lean_dec_ref_known(v___x_190_, 1);
switch(lean_obj_tag(v_val_191_))
{
case 0:
{
lean_object* v_a_192_; uint8_t v___x_193_; 
v_a_192_ = lean_ctor_get(v_val_191_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v_val_191_, 1);
v___x_193_ = l_List_isEmpty___redArg(v_a_192_);
lean_dec(v_a_192_);
return v___x_193_;
}
case 6:
{
lean_object* v_a_194_; uint8_t v___x_195_; 
v_a_194_ = lean_ctor_get(v_val_191_, 0);
lean_inc(v_a_194_);
lean_dec_ref_known(v_val_191_, 1);
v___x_195_ = l_List_isEmpty___redArg(v_a_194_);
lean_dec(v_a_194_);
return v___x_195_;
}
case 5:
{
lean_object* v_a_196_; uint8_t v___x_197_; 
v_a_196_ = lean_ctor_get(v_val_191_, 0);
lean_inc(v_a_196_);
lean_dec_ref_known(v_val_191_, 1);
v___x_197_ = l_List_isEmpty___redArg(v_a_196_);
lean_dec(v_a_196_);
return v___x_197_;
}
default: 
{
uint8_t v___x_198_; 
lean_dec(v_val_191_);
v___x_198_ = 0;
return v___x_198_;
}
}
}
else
{
uint8_t v___x_199_; 
lean_dec(v___x_190_);
v___x_199_ = 0;
return v___x_199_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___boxed(lean_object* v_toks_200_, lean_object* v_id_201_){
_start:
{
uint8_t v_res_202_; lean_object* v_r_203_; 
v_res_202_ = lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes(v_toks_200_, v_id_201_);
lean_dec(v_toks_200_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_stripEmptyRawPhNotes_go_spec__0(lean_object* v_a_204_, lean_object* v_a_205_){
_start:
{
if (lean_obj_tag(v_a_204_) == 0)
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = l_List_reverse___redArg(v_a_205_);
v___x_210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
lean_ctor_set(v___x_210_, 1, v_a_204_);
return v___x_210_;
}
else
{
lean_object* v_head_211_; lean_object* v_tail_212_; lean_object* v___x_213_; uint8_t v___x_214_; 
v_head_211_ = lean_ctor_get(v_a_204_, 0);
v_tail_212_ = lean_ctor_get(v_a_204_, 1);
v___x_213_ = lean_unsigned_to_nat(48u);
v___x_214_ = lean_nat_dec_le(v___x_213_, v_head_211_);
if (v___x_214_ == 0)
{
goto v___jp_206_;
}
else
{
lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = lean_unsigned_to_nat(57u);
v___x_216_ = lean_nat_dec_le(v_head_211_, v___x_215_);
if (v___x_216_ == 0)
{
goto v___jp_206_;
}
else
{
lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_224_; 
lean_inc(v_tail_212_);
lean_inc(v_head_211_);
v_isSharedCheck_224_ = !lean_is_exclusive(v_a_204_);
if (v_isSharedCheck_224_ == 0)
{
lean_object* v_unused_225_; lean_object* v_unused_226_; 
v_unused_225_ = lean_ctor_get(v_a_204_, 1);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_a_204_, 0);
lean_dec(v_unused_226_);
v___x_218_ = v_a_204_;
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
else
{
lean_dec(v_a_204_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 1, v_a_205_);
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_head_211_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v_a_205_);
v___x_221_ = v_reuseFailAlloc_223_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
v_a_204_ = v_tail_212_;
v_a_205_ = v___x_221_;
goto _start;
}
}
}
}
}
v___jp_206_:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = l_List_reverse___redArg(v_a_205_);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set(v___x_208_, 1, v_a_204_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes_go(lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
if (lean_obj_tag(v_a_227_) == 0)
{
lean_dec(v_a_228_);
return v_a_227_;
}
else
{
lean_object* v_head_230_; lean_object* v_tail_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_265_; 
v_head_230_ = lean_ctor_get(v_a_227_, 0);
v_tail_231_ = lean_ctor_get(v_a_227_, 1);
v_isSharedCheck_265_ = !lean_is_exclusive(v_a_227_);
if (v_isSharedCheck_265_ == 0)
{
v___x_233_ = v_a_227_;
v_isShared_234_ = v_isSharedCheck_265_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_tail_231_);
lean_inc(v_head_230_);
lean_dec(v_a_227_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_265_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v_zero_235_; uint8_t v_isZero_236_; 
v_zero_235_ = lean_unsigned_to_nat(0u);
v_isZero_236_ = lean_nat_dec_eq(v_a_228_, v_zero_235_);
if (v_isZero_236_ == 1)
{
lean_object* v___x_237_; 
lean_del_object(v___x_233_);
lean_dec(v_tail_231_);
lean_dec(v_head_230_);
lean_dec(v_a_228_);
v___x_237_ = lean_box(0);
return v___x_237_;
}
else
{
lean_object* v_one_238_; lean_object* v_n_239_; lean_object* v___x_250_; uint8_t v___x_251_; 
v_one_238_ = lean_unsigned_to_nat(1u);
v_n_239_ = lean_nat_sub(v_a_228_, v_one_238_);
lean_dec(v_a_228_);
v___x_250_ = lean_unsigned_to_nat(255u);
v___x_251_ = lean_nat_dec_eq(v_head_230_, v___x_250_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_del_object(v___x_233_);
v___x_252_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes_go(v_tail_231_, v_n_239_, v_a_229_);
v___x_253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_253_, 0, v_head_230_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
return v___x_253_;
}
else
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v_snd_256_; 
lean_dec(v_head_230_);
v___x_254_ = lean_box(0);
lean_inc(v_tail_231_);
v___x_255_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_stripEmptyRawPhNotes_go_spec__0(v_tail_231_, v___x_254_);
v_snd_256_ = lean_ctor_get(v___x_255_, 1);
lean_inc(v_snd_256_);
if (lean_obj_tag(v_snd_256_) == 1)
{
lean_object* v_fst_257_; lean_object* v_head_258_; lean_object* v_tail_259_; uint8_t v___x_260_; 
v_fst_257_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_fst_257_);
lean_dec_ref(v___x_255_);
v_head_258_ = lean_ctor_get(v_snd_256_, 0);
lean_inc(v_head_258_);
v_tail_259_ = lean_ctor_get(v_snd_256_, 1);
lean_inc(v_tail_259_);
lean_dec_ref_known(v_snd_256_, 2);
v___x_260_ = lean_nat_dec_eq(v_head_258_, v___x_250_);
lean_dec(v_head_258_);
if (v___x_260_ == 0)
{
lean_dec(v_tail_259_);
lean_dec(v_fst_257_);
lean_del_object(v___x_233_);
goto v___jp_246_;
}
else
{
uint8_t v___x_261_; 
v___x_261_ = l_List_isEmpty___redArg(v_fst_257_);
if (v___x_261_ == 0)
{
lean_object* v_id_262_; uint8_t v___x_263_; 
v_id_262_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(v_zero_235_, v_fst_257_);
lean_dec(v_fst_257_);
v___x_263_ = lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes(v_a_229_, v_id_262_);
if (v___x_263_ == 0)
{
lean_dec(v_tail_259_);
goto v___jp_240_;
}
else
{
lean_del_object(v___x_233_);
lean_dec(v_tail_231_);
v_a_227_ = v_tail_259_;
v_a_228_ = v_n_239_;
goto _start;
}
}
else
{
lean_dec(v_tail_259_);
lean_dec(v_fst_257_);
goto v___jp_240_;
}
}
}
else
{
lean_dec(v_snd_256_);
lean_dec_ref(v___x_255_);
lean_del_object(v___x_233_);
goto v___jp_246_;
}
}
v___jp_240_:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_244_; 
v___x_241_ = lean_unsigned_to_nat(255u);
v___x_242_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes_go(v_tail_231_, v_n_239_, v_a_229_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v___x_242_);
lean_ctor_set(v___x_233_, 0, v___x_241_);
v___x_244_ = v___x_233_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_241_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v___x_242_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
v___jp_246_:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = lean_unsigned_to_nat(255u);
v___x_248_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes_go(v_tail_231_, v_n_239_, v_a_229_);
v___x_249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_247_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
return v___x_249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes_go___boxed(lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes_go(v_a_266_, v_a_267_, v_a_268_);
lean_dec(v_a_268_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes(lean_object* v_bs_270_, lean_object* v_toks_271_){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = l_List_lengthTR___redArg(v_bs_270_);
v___x_273_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes_go(v_bs_270_, v___x_272_, v_toks_271_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes___boxed(lean_object* v_bs_274_, lean_object* v_toks_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes(v_bs_274_, v_toks_275_);
lean_dec(v_toks_275_);
return v_res_276_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isLoneNewlineRemainder(lean_object* v_bs_277_){
_start:
{
lean_object* v_core_278_; 
v_core_278_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v_bs_277_);
if (lean_obj_tag(v_core_278_) == 1)
{
lean_object* v_head_279_; lean_object* v_tail_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v_head_279_ = lean_ctor_get(v_core_278_, 0);
lean_inc(v_head_279_);
v_tail_280_ = lean_ctor_get(v_core_278_, 1);
lean_inc(v_tail_280_);
lean_dec_ref_known(v_core_278_, 2);
v___x_281_ = lean_unsigned_to_nat(10u);
v___x_282_ = lean_nat_dec_eq(v_head_279_, v___x_281_);
lean_dec(v_head_279_);
if (v___x_282_ == 0)
{
lean_dec(v_tail_280_);
return v___x_282_;
}
else
{
lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_283_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_module654Tail_spec__0(v_tail_280_);
lean_dec(v_tail_280_);
v___x_284_ = l_List_isEmpty___redArg(v___x_283_);
lean_dec(v___x_283_);
return v___x_284_;
}
}
else
{
uint8_t v___x_285_; 
lean_dec(v_core_278_);
v___x_285_ = 0;
return v___x_285_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isLoneNewlineRemainder___boxed(lean_object* v_bs_286_){
_start:
{
uint8_t v_res_287_; lean_object* v_r_288_; 
v_res_287_ = lp_lean_x2dftml_LeanFtml_isLoneNewlineRemainder(v_bs_286_);
lean_dec(v_bs_286_);
v_r_288_ = lean_box(v_res_287_);
return v_r_288_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__1));
v___x_292_ = l_String_toListImpl(v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteProcess(lean_object* v_body_293_, lean_object* v_doc_294_, lean_object* v_toks_295_){
_start:
{
lean_object* v___y_297_; lean_object* v_preStrip_337_; lean_object* v_stripped_338_; uint8_t v___x_339_; 
v_preStrip_337_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_body_293_);
lean_inc(v_preStrip_337_);
v_stripped_338_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes(v_preStrip_337_, v_toks_295_);
v___x_339_ = lp_lean_x2dftml_LeanFtml_isLoneNewlineRemainder(v_stripped_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; 
lean_dec(v_preStrip_337_);
v___x_340_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_stripped_338_);
lean_dec(v_stripped_338_);
v___y_297_ = v___x_340_;
goto v___jp_296_;
}
else
{
lean_dec(v_stripped_338_);
v___y_297_ = v_preStrip_337_;
goto v___jp_296_;
}
v___jp_296_:
{
lean_object* v_page_298_; lean_object* v_site_299_; lean_object* v_inclusions_300_; lean_object* v_inclusionsNotExist_301_; lean_object* v_footnotes_302_; lean_object* v_bibitems_303_; lean_object* v_bibitemIds_304_; lean_object* v_headlineId_305_; lean_object* v_mathId_306_; lean_object* v_equations_307_; lean_object* v_collapsibleCount_308_; lean_object* v_tabviewCounter_309_; lean_object* v_scoredAnchors_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_336_; 
v_page_298_ = lean_ctor_get(v_doc_294_, 0);
v_site_299_ = lean_ctor_get(v_doc_294_, 1);
v_inclusions_300_ = lean_ctor_get(v_doc_294_, 2);
v_inclusionsNotExist_301_ = lean_ctor_get(v_doc_294_, 3);
v_footnotes_302_ = lean_ctor_get(v_doc_294_, 4);
v_bibitems_303_ = lean_ctor_get(v_doc_294_, 5);
v_bibitemIds_304_ = lean_ctor_get(v_doc_294_, 6);
v_headlineId_305_ = lean_ctor_get(v_doc_294_, 7);
v_mathId_306_ = lean_ctor_get(v_doc_294_, 8);
v_equations_307_ = lean_ctor_get(v_doc_294_, 9);
v_collapsibleCount_308_ = lean_ctor_get(v_doc_294_, 10);
v_tabviewCounter_309_ = lean_ctor_get(v_doc_294_, 11);
v_scoredAnchors_310_ = lean_ctor_get(v_doc_294_, 12);
v_isSharedCheck_336_ = !lean_is_exclusive(v_doc_294_);
if (v_isSharedCheck_336_ == 0)
{
v___x_312_ = v_doc_294_;
v_isShared_313_ = v_isSharedCheck_336_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_scoredAnchors_310_);
lean_inc(v_tabviewCounter_309_);
lean_inc(v_collapsibleCount_308_);
lean_inc(v_equations_307_);
lean_inc(v_mathId_306_);
lean_inc(v_headlineId_305_);
lean_inc(v_bibitemIds_304_);
lean_inc(v_bibitems_303_);
lean_inc(v_footnotes_302_);
lean_inc(v_inclusionsNotExist_301_);
lean_inc(v_inclusions_300_);
lean_inc(v_site_299_);
lean_inc(v_page_298_);
lean_dec(v_doc_294_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_336_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v_id_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_314_ = l_List_lengthTR___redArg(v_footnotes_302_);
v___x_315_ = lean_unsigned_to_nat(1u);
v_id_316_ = lean_nat_add(v___x_314_, v___x_315_);
lean_dec(v___x_314_);
v___x_317_ = l_List_lengthTR___redArg(v_toks_295_);
v___x_318_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_317_);
v___x_319_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__0));
v___x_320_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2);
v___x_321_ = lean_nat_to_int(v_id_316_);
v___x_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_320_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = lean_box(0);
v___x_325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_323_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
v___x_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_319_);
lean_ctor_set(v___x_326_, 1, v___x_325_);
v___x_327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
lean_ctor_set(v___x_327_, 1, v___x_324_);
v___x_328_ = l_List_appendTR___redArg(v_toks_295_, v___x_327_);
v___x_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_329_, 0, v___y_297_);
lean_ctor_set(v___x_329_, 1, v___x_324_);
v___x_330_ = l_List_appendTR___redArg(v_footnotes_302_, v___x_329_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v___x_330_);
v___x_332_ = v___x_312_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_page_298_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_site_299_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v_inclusions_300_);
lean_ctor_set(v_reuseFailAlloc_335_, 3, v_inclusionsNotExist_301_);
lean_ctor_set(v_reuseFailAlloc_335_, 4, v___x_330_);
lean_ctor_set(v_reuseFailAlloc_335_, 5, v_bibitems_303_);
lean_ctor_set(v_reuseFailAlloc_335_, 6, v_bibitemIds_304_);
lean_ctor_set(v_reuseFailAlloc_335_, 7, v_headlineId_305_);
lean_ctor_set(v_reuseFailAlloc_335_, 8, v_mathId_306_);
lean_ctor_set(v_reuseFailAlloc_335_, 9, v_equations_307_);
lean_ctor_set(v_reuseFailAlloc_335_, 10, v_collapsibleCount_308_);
lean_ctor_set(v_reuseFailAlloc_335_, 11, v_tabviewCounter_309_);
lean_ctor_set(v_reuseFailAlloc_335_, 12, v_scoredAnchors_310_);
v___x_332_ = v_reuseFailAlloc_335_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_328_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_318_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
return v___x_334_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteProcess___boxed(lean_object* v_body_341_, lean_object* v_doc_342_, lean_object* v_toks_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = lp_lean_x2dftml_LeanFtml_footnoteProcess(v_body_341_, v_doc_342_, v_toks_343_);
lean_dec(v_body_341_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteScan(lean_object* v_src_345_, lean_object* v_toks_346_, lean_object* v_doc_347_, lean_object* v_x_348_){
_start:
{
lean_object* v_zero_353_; uint8_t v_isZero_354_; 
v_zero_353_ = lean_unsigned_to_nat(0u);
v_isZero_354_ = lean_nat_dec_eq(v_x_348_, v_zero_353_);
if (v_isZero_354_ == 1)
{
lean_dec(v_src_345_);
goto v___jp_349_;
}
else
{
if (lean_obj_tag(v_src_345_) == 0)
{
goto v___jp_349_;
}
else
{
lean_object* v_head_355_; lean_object* v_tail_356_; lean_object* v_one_357_; lean_object* v_n_358_; lean_object* v___x_359_; 
v_head_355_ = lean_ctor_get(v_src_345_, 0);
lean_inc(v_head_355_);
v_tail_356_ = lean_ctor_get(v_src_345_, 1);
lean_inc(v_tail_356_);
v_one_357_ = lean_unsigned_to_nat(1u);
v_n_358_ = lean_nat_sub(v_x_348_, v_one_357_);
v___x_359_ = lp_lean_x2dftml_LeanFtml_footnoteMatchAt(v_src_345_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v___x_360_; lean_object* v_fst_361_; lean_object* v_snd_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_370_; 
v___x_360_ = lp_lean_x2dftml_LeanFtml_footnoteScan(v_tail_356_, v_toks_346_, v_doc_347_, v_n_358_);
lean_dec(v_n_358_);
v_fst_361_ = lean_ctor_get(v___x_360_, 0);
v_snd_362_ = lean_ctor_get(v___x_360_, 1);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_370_ == 0)
{
v___x_364_ = v___x_360_;
v_isShared_365_ = v_isSharedCheck_370_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_snd_362_);
lean_inc(v_fst_361_);
lean_dec(v___x_360_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_370_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; lean_object* v___x_368_; 
v___x_366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_366_, 0, v_head_355_);
lean_ctor_set(v___x_366_, 1, v_fst_361_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_366_);
v___x_368_ = v___x_364_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v_snd_362_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
else
{
lean_object* v_val_371_; lean_object* v_fst_372_; lean_object* v_snd_373_; lean_object* v___x_374_; lean_object* v_snd_375_; lean_object* v_fst_376_; lean_object* v_fst_377_; lean_object* v_snd_378_; lean_object* v___x_379_; lean_object* v_fst_380_; lean_object* v_snd_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_389_; 
lean_dec(v_tail_356_);
lean_dec(v_head_355_);
v_val_371_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_val_371_);
lean_dec_ref_known(v___x_359_, 1);
v_fst_372_ = lean_ctor_get(v_val_371_, 0);
lean_inc(v_fst_372_);
v_snd_373_ = lean_ctor_get(v_val_371_, 1);
lean_inc(v_snd_373_);
lean_dec(v_val_371_);
v___x_374_ = lp_lean_x2dftml_LeanFtml_footnoteProcess(v_fst_372_, v_doc_347_, v_toks_346_);
lean_dec(v_fst_372_);
v_snd_375_ = lean_ctor_get(v___x_374_, 1);
lean_inc(v_snd_375_);
v_fst_376_ = lean_ctor_get(v___x_374_, 0);
lean_inc(v_fst_376_);
lean_dec_ref(v___x_374_);
v_fst_377_ = lean_ctor_get(v_snd_375_, 0);
lean_inc(v_fst_377_);
v_snd_378_ = lean_ctor_get(v_snd_375_, 1);
lean_inc(v_snd_378_);
lean_dec(v_snd_375_);
v___x_379_ = lp_lean_x2dftml_LeanFtml_footnoteScan(v_snd_373_, v_fst_377_, v_snd_378_, v_n_358_);
lean_dec(v_n_358_);
v_fst_380_ = lean_ctor_get(v___x_379_, 0);
v_snd_381_ = lean_ctor_get(v___x_379_, 1);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_389_ == 0)
{
v___x_383_ = v___x_379_;
v_isShared_384_ = v_isSharedCheck_389_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_snd_381_);
lean_inc(v_fst_380_);
lean_dec(v___x_379_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_389_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_385_ = l_List_appendTR___redArg(v_fst_376_, v_fst_380_);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 0, v___x_385_);
v___x_387_ = v___x_383_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_snd_381_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
}
v___jp_349_:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_350_ = lean_box(0);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v_toks_346_);
lean_ctor_set(v___x_351_, 1, v_doc_347_);
v___x_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_350_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
return v___x_352_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteScan___boxed(lean_object* v_src_390_, lean_object* v_toks_391_, lean_object* v_doc_392_, lean_object* v_x_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = lp_lean_x2dftml_LeanFtml_footnoteScan(v_src_390_, v_toks_391_, v_doc_392_, v_x_393_);
lean_dec(v_x_393_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteRule(lean_object* v_st_395_){
_start:
{
lean_object* v_work_396_; lean_object* v_tokens_397_; lean_object* v_doc_398_; uint8_t v_fatal_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_416_; 
v_work_396_ = lean_ctor_get(v_st_395_, 0);
v_tokens_397_ = lean_ctor_get(v_st_395_, 1);
v_doc_398_ = lean_ctor_get(v_st_395_, 2);
v_fatal_399_ = lean_ctor_get_uint8(v_st_395_, sizeof(void*)*3);
v_isSharedCheck_416_ = !lean_is_exclusive(v_st_395_);
if (v_isSharedCheck_416_ == 0)
{
v___x_401_ = v_st_395_;
v_isShared_402_ = v_isSharedCheck_416_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_doc_398_);
lean_inc(v_tokens_397_);
lean_inc(v_work_396_);
lean_dec(v_st_395_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_416_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v_input_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_snd_408_; lean_object* v_fst_409_; lean_object* v_fst_410_; lean_object* v_snd_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
v_input_403_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_396_);
v___x_404_ = l_List_lengthTR___redArg(v_input_403_);
v___x_405_ = lean_unsigned_to_nat(1u);
v___x_406_ = lean_nat_add(v___x_404_, v___x_405_);
lean_dec(v___x_404_);
v___x_407_ = lp_lean_x2dftml_LeanFtml_footnoteScan(v_input_403_, v_tokens_397_, v_doc_398_, v___x_406_);
lean_dec(v___x_406_);
v_snd_408_ = lean_ctor_get(v___x_407_, 1);
lean_inc(v_snd_408_);
v_fst_409_ = lean_ctor_get(v___x_407_, 0);
lean_inc(v_fst_409_);
lean_dec_ref(v___x_407_);
v_fst_410_ = lean_ctor_get(v_snd_408_, 0);
lean_inc(v_fst_410_);
v_snd_411_ = lean_ctor_get(v_snd_408_, 1);
lean_inc(v_snd_411_);
lean_dec(v_snd_408_);
v___x_412_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_409_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 2, v_snd_411_);
lean_ctor_set(v___x_401_, 1, v_fst_410_);
lean_ctor_set(v___x_401_, 0, v___x_412_);
v___x_414_ = v___x_401_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_fst_410_);
lean_ctor_set(v_reuseFailAlloc_415_, 2, v_snd_411_);
lean_ctor_set_uint8(v_reuseFailAlloc_415_, sizeof(void*)*3, v_fatal_399_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteitemRule(lean_object* v_st_417_){
_start:
{
lean_inc_ref(v_st_417_);
return v_st_417_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteitemRule___boxed(lean_object* v_st_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = lp_lean_x2dftml_LeanFtml_footnoteitemRule(v_st_418_);
lean_dec_ref(v_st_418_);
return v_res_419_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__1(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__0));
v___x_422_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt(lean_object* v_src_423_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__1);
v___x_425_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_424_, v_src_423_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v___x_426_; 
v___x_426_ = lean_box(0);
return v___x_426_;
}
else
{
lean_object* v_val_427_; lean_object* v___x_428_; 
v_val_427_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_val_427_);
lean_dec_ref_known(v___x_425_, 1);
v___x_428_ = lp_lean_x2dftml_LeanFtml_attrGroupB(v_val_427_);
return v___x_428_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockFind_go(lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v_zero_432_; uint8_t v_isZero_433_; 
v_zero_432_ = lean_unsigned_to_nat(0u);
v_isZero_433_ = lean_nat_dec_eq(v_a_431_, v_zero_432_);
if (v_isZero_433_ == 1)
{
lean_object* v___x_434_; 
lean_dec(v_a_431_);
lean_dec(v_a_430_);
lean_dec(v_a_429_);
v___x_434_ = lean_box(0);
return v___x_434_;
}
else
{
lean_object* v___x_435_; 
lean_inc(v_a_429_);
v___x_435_ = lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt(v_a_429_);
if (lean_obj_tag(v___x_435_) == 0)
{
if (lean_obj_tag(v_a_429_) == 0)
{
lean_object* v___x_436_; 
lean_dec(v_a_431_);
lean_dec(v_a_430_);
v___x_436_ = lean_box(0);
return v___x_436_;
}
else
{
lean_object* v_tail_437_; lean_object* v_one_438_; lean_object* v_n_439_; lean_object* v___x_440_; 
v_tail_437_ = lean_ctor_get(v_a_429_, 1);
lean_inc(v_tail_437_);
lean_dec_ref_known(v_a_429_, 2);
v_one_438_ = lean_unsigned_to_nat(1u);
v_n_439_ = lean_nat_sub(v_a_431_, v_one_438_);
lean_dec(v_a_431_);
v___x_440_ = lean_nat_add(v_a_430_, v_one_438_);
lean_dec(v_a_430_);
v_a_429_ = v_tail_437_;
v_a_430_ = v___x_440_;
v_a_431_ = v_n_439_;
goto _start;
}
}
else
{
lean_object* v_val_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_450_; 
lean_dec(v_a_431_);
lean_dec(v_a_429_);
v_val_442_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_450_ == 0)
{
v___x_444_ = v___x_435_;
v_isShared_445_ = v_isSharedCheck_450_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_val_442_);
lean_dec(v___x_435_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_450_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v_a_430_);
lean_ctor_set(v___x_446_, 1, v_val_442_);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 0, v___x_446_);
v___x_448_ = v___x_444_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockFind(lean_object* v_src_451_){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_452_ = lean_unsigned_to_nat(0u);
v___x_453_ = l_List_lengthTR___redArg(v_src_451_);
v___x_454_ = lean_unsigned_to_nat(1u);
v___x_455_ = lean_nat_add(v___x_453_, v___x_454_);
lean_dec(v___x_453_);
v___x_456_ = lp_lean_x2dftml_LeanFtml_footnoteblockFind_go(v_src_451_, v___x_452_, v___x_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstBreakSplit(lean_object* v_x_457_){
_start:
{
if (lean_obj_tag(v_x_457_) == 0)
{
lean_object* v___x_458_; 
v___x_458_ = lean_box(0);
return v___x_458_;
}
else
{
lean_object* v_head_459_; lean_object* v_tail_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_522_; 
v_head_459_ = lean_ctor_get(v_x_457_, 0);
v_tail_460_ = lean_ctor_get(v_x_457_, 1);
v_isSharedCheck_522_ = !lean_is_exclusive(v_x_457_);
if (v_isSharedCheck_522_ == 0)
{
v___x_462_ = v_x_457_;
v_isShared_463_ = v_isSharedCheck_522_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_tail_460_);
lean_inc(v_head_459_);
lean_dec(v_x_457_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_522_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_487_ = lean_unsigned_to_nat(10u);
v___x_488_ = lean_nat_dec_eq(v_head_459_, v___x_487_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; 
lean_del_object(v___x_462_);
v___x_489_ = lp_lean_x2dftml_LeanFtml_firstBreakSplit(v_tail_460_);
if (lean_obj_tag(v___x_489_) == 0)
{
lean_dec(v_head_459_);
return v___x_489_;
}
else
{
lean_object* v_val_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_507_; 
v_val_490_ = lean_ctor_get(v___x_489_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_507_ == 0)
{
v___x_492_ = v___x_489_;
v_isShared_493_ = v_isSharedCheck_507_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_val_490_);
lean_dec(v___x_489_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_507_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v_fst_494_; lean_object* v_snd_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_506_; 
v_fst_494_ = lean_ctor_get(v_val_490_, 0);
v_snd_495_ = lean_ctor_get(v_val_490_, 1);
v_isSharedCheck_506_ = !lean_is_exclusive(v_val_490_);
if (v_isSharedCheck_506_ == 0)
{
v___x_497_ = v_val_490_;
v_isShared_498_ = v_isSharedCheck_506_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_snd_495_);
lean_inc(v_fst_494_);
lean_dec(v_val_490_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_506_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; lean_object* v___x_501_; 
v___x_499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_499_, 0, v_head_459_);
lean_ctor_set(v___x_499_, 1, v_fst_494_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 0, v___x_499_);
v___x_501_ = v___x_497_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_499_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v_snd_495_);
v___x_501_ = v_reuseFailAlloc_505_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
lean_object* v___x_503_; 
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 0, v___x_501_);
v___x_503_ = v___x_492_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
}
}
else
{
lean_object* v___x_508_; 
lean_dec(v_head_459_);
v___x_508_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(v_tail_460_);
if (lean_obj_tag(v___x_508_) == 1)
{
lean_object* v_head_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_520_; 
v_head_509_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_520_ == 0)
{
lean_object* v_unused_521_; 
v_unused_521_ = lean_ctor_get(v___x_508_, 1);
lean_dec(v_unused_521_);
v___x_511_ = v___x_508_;
v_isShared_512_ = v_isSharedCheck_520_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_head_509_);
lean_dec(v___x_508_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_520_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
uint8_t v___x_513_; 
v___x_513_ = lean_nat_dec_eq(v_head_509_, v___x_487_);
lean_dec(v_head_509_);
if (v___x_513_ == 0)
{
lean_del_object(v___x_511_);
goto v___jp_464_;
}
else
{
lean_object* v___x_514_; lean_object* v___x_516_; 
lean_del_object(v___x_462_);
v___x_514_ = lean_box(0);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 1, v_tail_460_);
lean_ctor_set(v___x_511_, 0, v___x_487_);
v___x_516_ = v___x_511_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v___x_487_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_tail_460_);
v___x_516_ = v_reuseFailAlloc_519_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_514_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
v___x_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_518_, 0, v___x_517_);
return v___x_518_;
}
}
}
}
else
{
lean_dec(v___x_508_);
goto v___jp_464_;
}
}
v___jp_464_:
{
lean_object* v___x_465_; 
v___x_465_ = lp_lean_x2dftml_LeanFtml_firstBreakSplit(v_tail_460_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_del_object(v___x_462_);
return v___x_465_;
}
else
{
lean_object* v_val_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_486_; 
v_val_466_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_486_ == 0)
{
v___x_468_ = v___x_465_;
v_isShared_469_ = v_isSharedCheck_486_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_val_466_);
lean_dec(v___x_465_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_486_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v_fst_470_; lean_object* v_snd_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_485_; 
v_fst_470_ = lean_ctor_get(v_val_466_, 0);
v_snd_471_ = lean_ctor_get(v_val_466_, 1);
v_isSharedCheck_485_ = !lean_is_exclusive(v_val_466_);
if (v_isSharedCheck_485_ == 0)
{
v___x_473_ = v_val_466_;
v_isShared_474_ = v_isSharedCheck_485_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_snd_471_);
lean_inc(v_fst_470_);
lean_dec(v_val_466_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_485_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_475_; lean_object* v___x_477_; 
v___x_475_ = lean_unsigned_to_nat(10u);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 1, v_fst_470_);
lean_ctor_set(v___x_462_, 0, v___x_475_);
v___x_477_ = v___x_462_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_475_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_fst_470_);
v___x_477_ = v_reuseFailAlloc_484_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
lean_object* v___x_479_; 
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 0, v___x_477_);
v___x_479_ = v___x_473_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v_snd_471_);
v___x_479_ = v_reuseFailAlloc_483_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_481_; 
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___x_479_);
v___x_481_ = v___x_468_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_479_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__1));
v___x_526_ = l_String_toListImpl(v___x_525_);
return v___x_526_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__4(void){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__3));
v___x_529_ = l_String_toListImpl(v___x_528_);
return v___x_529_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__5(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__4, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__4);
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
return v___x_531_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_532_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__5, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__5);
v___x_533_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
lean_ctor_set(v___x_534_, 1, v___x_532_);
return v___x_534_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__8(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__7));
v___x_537_ = l_String_toListImpl(v___x_536_);
return v___x_537_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__9(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__8, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__8);
v___x_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
return v___x_539_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_540_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__9, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__9);
v___x_541_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2);
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
lean_ctor_set(v___x_542_, 1, v___x_540_);
return v___x_542_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__14(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__13));
v___x_551_ = l_String_toListImpl(v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__15(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__14, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__14);
v___x_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
return v___x_553_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__16(void){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_554_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__15, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__15);
v___x_555_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
lean_ctor_set(v___x_556_, 1, v___x_554_);
return v___x_556_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__17(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_557_ = lean_box(0);
v___x_558_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__16, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__16);
v___x_559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
lean_ctor_set(v___x_559_, 1, v___x_557_);
return v___x_559_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__18(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_560_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__17, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__17);
v___x_561_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__0));
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
lean_ctor_set(v___x_562_, 1, v___x_560_);
return v___x_562_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__19(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_563_ = lean_box(0);
v___x_564_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__18, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__18);
v___x_565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
lean_ctor_set(v___x_565_, 1, v___x_563_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go(lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
if (lean_obj_tag(v_a_566_) == 0)
{
lean_object* v___x_570_; 
lean_dec(v_a_567_);
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v_a_569_);
lean_ctor_set(v___x_570_, 1, v_a_568_);
return v___x_570_;
}
else
{
lean_object* v_head_571_; lean_object* v_tail_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_660_; 
v_head_571_ = lean_ctor_get(v_a_566_, 0);
v_tail_572_ = lean_ctor_get(v_a_566_, 1);
v_isSharedCheck_660_ = !lean_is_exclusive(v_a_566_);
if (v_isSharedCheck_660_ == 0)
{
v___x_574_ = v_a_566_;
v_isShared_575_ = v_isSharedCheck_660_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_tail_572_);
lean_inc(v_head_571_);
lean_dec(v_a_566_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_660_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; 
lean_inc(v_head_571_);
v___x_576_ = lp_lean_x2dftml_LeanFtml_firstBreakSplit(v_head_571_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v___x_577_; lean_object* v_startPh_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_577_ = l_List_lengthTR___redArg(v_a_568_);
v_startPh_578_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_577_);
v___x_579_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__0));
v___x_580_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6);
v___x_581_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2);
lean_inc(v_a_567_);
v___x_582_ = lean_nat_to_int(v_a_567_);
v___x_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_581_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___x_585_ = lean_box(0);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 1, v___x_585_);
lean_ctor_set(v___x_574_, 0, v___x_584_);
v___x_587_ = v___x_574_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_584_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v___x_585_);
v___x_587_ = v_reuseFailAlloc_607_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v_t1_591_; lean_object* v___x_592_; lean_object* v_endPh_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v_t2_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
lean_inc_ref(v___x_587_);
v___x_588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_580_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_579_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
lean_ctor_set(v___x_590_, 1, v___x_585_);
v_t1_591_ = l_List_appendTR___redArg(v_a_568_, v___x_590_);
v___x_592_ = l_List_lengthTR___redArg(v_t1_591_);
v_endPh_593_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_592_);
v___x_594_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10);
v___x_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
lean_ctor_set(v___x_595_, 1, v___x_587_);
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_579_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set(v___x_597_, 1, v___x_585_);
v_t2_598_ = l_List_appendTR___redArg(v_t1_591_, v___x_597_);
v___x_599_ = lean_unsigned_to_nat(1u);
v___x_600_ = lean_nat_add(v_a_567_, v___x_599_);
lean_dec(v_a_567_);
v___x_601_ = l_List_appendTR___redArg(v_a_569_, v_startPh_578_);
v___x_602_ = l_List_appendTR___redArg(v___x_601_, v_head_571_);
v___x_603_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__12));
v___x_604_ = l_List_appendTR___redArg(v___x_602_, v___x_603_);
v___x_605_ = l_List_appendTR___redArg(v___x_604_, v_endPh_593_);
v_a_566_ = v_tail_572_;
v_a_567_ = v___x_600_;
v_a_568_ = v_t2_598_;
v_a_569_ = v___x_605_;
goto _start;
}
}
else
{
lean_object* v_val_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_659_; 
lean_dec(v_head_571_);
v_val_608_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_659_ == 0)
{
v___x_610_ = v___x_576_;
v_isShared_611_ = v_isSharedCheck_659_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_val_608_);
lean_dec(v___x_576_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_659_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v_fst_612_; lean_object* v_snd_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_658_; 
v_fst_612_ = lean_ctor_get(v_val_608_, 0);
v_snd_613_ = lean_ctor_get(v_val_608_, 1);
v_isSharedCheck_658_ = !lean_is_exclusive(v_val_608_);
if (v_isSharedCheck_658_ == 0)
{
v___x_615_ = v_val_608_;
v_isShared_616_ = v_isSharedCheck_658_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_snd_613_);
lean_inc(v_fst_612_);
lean_dec(v_val_608_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_658_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v_paraPh_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v_t0_622_; lean_object* v___x_623_; lean_object* v_startPh_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_629_; 
v___x_617_ = l_List_lengthTR___redArg(v_a_568_);
v_paraPh_618_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_617_);
v___x_619_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__0));
v___x_620_ = lean_box(0);
v___x_621_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__19, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__19);
v_t0_622_ = l_List_appendTR___redArg(v_a_568_, v___x_621_);
v___x_623_ = l_List_lengthTR___redArg(v_t0_622_);
v_startPh_624_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_623_);
v___x_625_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6);
v___x_626_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2);
lean_inc(v_a_567_);
v___x_627_ = lean_nat_to_int(v_a_567_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_627_);
v___x_629_ = v___x_610_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_627_);
v___x_629_ = v_reuseFailAlloc_657_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v___x_631_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 1, v___x_629_);
lean_ctor_set(v___x_615_, 0, v___x_626_);
v___x_631_ = v___x_615_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_626_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v___x_629_);
v___x_631_ = v_reuseFailAlloc_656_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
lean_object* v___x_633_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 1, v___x_620_);
lean_ctor_set(v___x_574_, 0, v___x_631_);
v___x_633_ = v___x_574_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_631_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v___x_620_);
v___x_633_ = v_reuseFailAlloc_655_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v_t1_637_; lean_object* v___x_638_; lean_object* v_endPh_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v_t2_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
lean_inc_ref(v___x_633_);
v___x_634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_625_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_619_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
lean_ctor_set(v___x_636_, 1, v___x_620_);
v_t1_637_ = l_List_appendTR___redArg(v_t0_622_, v___x_636_);
v___x_638_ = l_List_lengthTR___redArg(v_t1_637_);
v_endPh_639_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_638_);
v___x_640_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10);
v___x_641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
lean_ctor_set(v___x_641_, 1, v___x_633_);
v___x_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_619_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
lean_ctor_set(v___x_643_, 1, v___x_620_);
v_t2_644_ = l_List_appendTR___redArg(v_t1_637_, v___x_643_);
v___x_645_ = lean_unsigned_to_nat(1u);
v___x_646_ = lean_nat_add(v_a_567_, v___x_645_);
lean_dec(v_a_567_);
v___x_647_ = l_List_appendTR___redArg(v_a_569_, v_startPh_624_);
v___x_648_ = l_List_appendTR___redArg(v___x_647_, v_fst_612_);
v___x_649_ = l_List_appendTR___redArg(v___x_648_, v_paraPh_618_);
v___x_650_ = l_List_appendTR___redArg(v___x_649_, v_snd_613_);
v___x_651_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__12));
v___x_652_ = l_List_appendTR___redArg(v___x_650_, v___x_651_);
v___x_653_ = l_List_appendTR___redArg(v___x_652_, v_endPh_639_);
v_a_566_ = v_tail_572_;
v_a_567_ = v___x_646_;
v_a_568_ = v_t2_644_;
v_a_569_ = v___x_653_;
goto _start;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside(lean_object* v_notes_661_, lean_object* v_toks_662_){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_663_ = lean_unsigned_to_nat(1u);
v___x_664_ = lean_box(0);
v___x_665_ = lp_lean_x2dftml_LeanFtml_footnoteblockInside_go(v_notes_661_, v___x_663_, v_toks_662_, v___x_664_);
return v___x_665_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1(void){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_titleOpt___closed__0));
v___x_668_ = l_String_toListImpl(v___x_667_);
return v___x_668_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_669_ = lean_box(0);
v___x_670_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10);
v___x_671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
lean_ctor_set(v___x_671_, 1, v___x_669_);
return v___x_671_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__3(void){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_672_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2);
v___x_673_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__0));
v___x_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
lean_ctor_set(v___x_674_, 1, v___x_672_);
return v___x_674_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__4(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = lean_box(0);
v___x_676_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__3, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__3);
v___x_677_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
lean_ctor_set(v___x_677_, 1, v___x_675_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess(lean_object* v_g_678_, lean_object* v_notes_679_, lean_object* v_toks_680_){
_start:
{
uint8_t v___x_681_; 
v___x_681_ = l_List_isEmpty___redArg(v_notes_679_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; lean_object* v_fst_683_; lean_object* v_snd_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_713_; 
v___x_682_ = lp_lean_x2dftml_LeanFtml_footnoteblockInside(v_notes_679_, v_toks_680_);
v_fst_683_ = lean_ctor_get(v___x_682_, 0);
v_snd_684_ = lean_ctor_get(v___x_682_, 1);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_713_ == 0)
{
v___x_686_ = v___x_682_;
v_isShared_687_ = v_isSharedCheck_713_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_snd_684_);
lean_inc(v_fst_683_);
lean_dec(v___x_682_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_713_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v_startPh_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_695_; 
v___x_688_ = l_List_lengthTR___redArg(v_snd_684_);
v_startPh_689_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_688_);
v___x_690_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__0));
v___x_691_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6);
v___x_692_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1);
v___x_693_ = lp_lean_x2dftml_LeanFtml_titleOpt(v_g_678_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 1, v___x_693_);
lean_ctor_set(v___x_686_, 0, v___x_692_);
v___x_695_ = v___x_686_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_692_);
lean_ctor_set(v_reuseFailAlloc_712_, 1, v___x_693_);
v___x_695_ = v_reuseFailAlloc_712_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v_t2_701_; lean_object* v___x_702_; lean_object* v_endPh_703_; lean_object* v___x_704_; lean_object* v_t3_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_696_ = lean_box(0);
v___x_697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_695_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_691_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
v___x_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_690_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
v___x_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
lean_ctor_set(v___x_700_, 1, v___x_696_);
v_t2_701_ = l_List_appendTR___redArg(v_snd_684_, v___x_700_);
v___x_702_ = l_List_lengthTR___redArg(v_t2_701_);
v_endPh_703_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_702_);
v___x_704_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__4, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__4);
v_t3_705_ = l_List_appendTR___redArg(v_t2_701_, v___x_704_);
v___x_706_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__11));
v___x_707_ = l_List_appendTR___redArg(v___x_706_, v_startPh_689_);
v___x_708_ = l_List_appendTR___redArg(v___x_707_, v_fst_683_);
v___x_709_ = l_List_appendTR___redArg(v___x_708_, v_endPh_703_);
v___x_710_ = l_List_appendTR___redArg(v___x_709_, v___x_706_);
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_710_);
lean_ctor_set(v___x_711_, 1, v_t3_705_);
return v___x_711_;
}
}
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; 
lean_dec(v_notes_679_);
v___x_714_ = lean_box(0);
v___x_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
lean_ctor_set(v___x_715_, 1, v_toks_680_);
return v___x_715_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess___boxed(lean_object* v_g_716_, lean_object* v_notes_717_, lean_object* v_toks_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = lp_lean_x2dftml_LeanFtml_footnoteblockProcess(v_g_716_, v_notes_717_, v_toks_718_);
lean_dec(v_g_716_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockRule(lean_object* v_st_722_){
_start:
{
lean_object* v_work_723_; lean_object* v_tokens_724_; lean_object* v_doc_725_; uint8_t v_fatal_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_770_; 
v_work_723_ = lean_ctor_get(v_st_722_, 0);
v_tokens_724_ = lean_ctor_get(v_st_722_, 1);
v_doc_725_ = lean_ctor_get(v_st_722_, 2);
v_fatal_726_ = lean_ctor_get_uint8(v_st_722_, sizeof(void*)*3);
v_isSharedCheck_770_ = !lean_is_exclusive(v_st_722_);
if (v_isSharedCheck_770_ == 0)
{
v___x_728_ = v_st_722_;
v_isShared_729_ = v_isSharedCheck_770_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_doc_725_);
lean_inc(v_tokens_724_);
lean_inc(v_work_723_);
lean_dec(v_st_722_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_770_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v_src_730_; lean_object* v___y_732_; lean_object* v___x_747_; 
v_src_730_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_723_);
lean_inc(v_src_730_);
v___x_747_ = lp_lean_x2dftml_LeanFtml_footnoteblockFind(v_src_730_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v___x_748_; lean_object* v___x_749_; uint8_t v___x_750_; 
v___x_748_ = l_List_getLast_x3f___redArg(v_src_730_);
v___x_749_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockRule___closed__0));
v___x_750_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_748_, v___x_749_);
lean_dec(v___x_748_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; 
v___x_751_ = l_List_lengthTR___redArg(v_src_730_);
v___y_732_ = v___x_751_;
goto v___jp_731_;
}
else
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_752_ = l_List_lengthTR___redArg(v_src_730_);
v___x_753_ = lean_unsigned_to_nat(1u);
v___x_754_ = lean_nat_sub(v___x_752_, v___x_753_);
lean_dec(v___x_752_);
v___y_732_ = v___x_754_;
goto v___jp_731_;
}
}
else
{
lean_object* v_val_755_; lean_object* v_snd_756_; lean_object* v_fst_757_; lean_object* v_fst_758_; lean_object* v_snd_759_; lean_object* v_footnotes_760_; lean_object* v___x_761_; lean_object* v_fst_762_; lean_object* v_snd_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
lean_del_object(v___x_728_);
v_val_755_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_val_755_);
lean_dec_ref_known(v___x_747_, 1);
v_snd_756_ = lean_ctor_get(v_val_755_, 1);
lean_inc(v_snd_756_);
v_fst_757_ = lean_ctor_get(v_val_755_, 0);
lean_inc(v_fst_757_);
lean_dec(v_val_755_);
v_fst_758_ = lean_ctor_get(v_snd_756_, 0);
lean_inc(v_fst_758_);
v_snd_759_ = lean_ctor_get(v_snd_756_, 1);
lean_inc(v_snd_759_);
lean_dec(v_snd_756_);
v_footnotes_760_ = lean_ctor_get(v_doc_725_, 4);
lean_inc(v_footnotes_760_);
v___x_761_ = lp_lean_x2dftml_LeanFtml_footnoteblockProcess(v_fst_758_, v_footnotes_760_, v_tokens_724_);
lean_dec(v_fst_758_);
v_fst_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_fst_762_);
v_snd_763_ = lean_ctor_get(v___x_761_, 1);
lean_inc(v_snd_763_);
lean_dec_ref(v___x_761_);
v___x_764_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_src_730_);
v___x_765_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_730_, v_src_730_, v_fst_757_, v___x_764_);
lean_dec(v_src_730_);
v___x_766_ = l_List_appendTR___redArg(v___x_765_, v_fst_762_);
v___x_767_ = l_List_appendTR___redArg(v___x_766_, v_snd_759_);
v___x_768_ = lp_lean_x2dftml_LeanFtml_parseBytes(v___x_767_);
v___x_769_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_769_, 0, v___x_768_);
lean_ctor_set(v___x_769_, 1, v_snd_763_);
lean_ctor_set(v___x_769_, 2, v_doc_725_);
lean_ctor_set_uint8(v___x_769_, sizeof(void*)*3, v_fatal_726_);
return v___x_769_;
}
v___jp_731_:
{
lean_object* v_footnotes_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v_fst_736_; lean_object* v_snd_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_745_; 
v_footnotes_733_ = lean_ctor_get(v_doc_725_, 4);
v___x_734_ = lean_box(0);
lean_inc(v_footnotes_733_);
v___x_735_ = lp_lean_x2dftml_LeanFtml_footnoteblockProcess(v___x_734_, v_footnotes_733_, v_tokens_724_);
v_fst_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_fst_736_);
v_snd_737_ = lean_ctor_get(v___x_735_, 1);
lean_inc(v_snd_737_);
lean_dec_ref(v___x_735_);
v___x_738_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v___y_732_);
lean_inc(v_src_730_);
v___x_739_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_730_, v_src_730_, v___y_732_, v___x_738_);
v___x_740_ = l_List_appendTR___redArg(v___x_739_, v_fst_736_);
v___x_741_ = l_List_drop___redArg(v___y_732_, v_src_730_);
lean_dec(v_src_730_);
v___x_742_ = l_List_appendTR___redArg(v___x_740_, v___x_741_);
v___x_743_ = lp_lean_x2dftml_LeanFtml_parseBytes(v___x_742_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 1, v_snd_737_);
lean_ctor_set(v___x_728_, 0, v___x_743_);
v___x_745_ = v___x_728_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_snd_737_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_doc_725_);
lean_ctor_set_uint8(v_reuseFailAlloc_746_, sizeof(void*)*3, v_fatal_726_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_bibitemProcess_spec__0(lean_object* v_a_771_, lean_object* v_a_772_){
_start:
{
if (lean_obj_tag(v_a_771_) == 0)
{
lean_object* v___x_773_; 
v___x_773_ = l_List_reverse___redArg(v_a_772_);
return v___x_773_;
}
else
{
lean_object* v_head_774_; lean_object* v_tail_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_788_; 
v_head_774_ = lean_ctor_get(v_a_771_, 0);
v_tail_775_ = lean_ctor_get(v_a_771_, 1);
v_isSharedCheck_788_ = !lean_is_exclusive(v_a_771_);
if (v_isSharedCheck_788_ == 0)
{
v___x_777_ = v_a_771_;
v_isShared_778_ = v_isSharedCheck_788_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_tail_775_);
lean_inc(v_head_774_);
lean_dec(v_a_771_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_788_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___y_780_; lean_object* v___x_785_; uint8_t v___x_786_; 
v___x_785_ = lean_unsigned_to_nat(10u);
v___x_786_ = lean_nat_dec_eq(v_head_774_, v___x_785_);
if (v___x_786_ == 0)
{
v___y_780_ = v_head_774_;
goto v___jp_779_;
}
else
{
lean_object* v___x_787_; 
lean_dec(v_head_774_);
v___x_787_ = lean_unsigned_to_nat(32u);
v___y_780_ = v___x_787_;
goto v___jp_779_;
}
v___jp_779_:
{
lean_object* v___x_782_; 
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 1, v_a_772_);
lean_ctor_set(v___x_777_, 0, v___y_780_);
v___x_782_ = v___x_777_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___y_780_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v_a_772_);
v___x_782_ = v_reuseFailAlloc_784_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
v_a_771_ = v_tail_775_;
v_a_772_ = v___x_782_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__1));
v___x_792_ = l_String_toListImpl(v___x_791_);
return v___x_792_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__4(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__3));
v___x_795_ = l_String_toListImpl(v___x_794_);
return v___x_795_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__5(void){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_796_ = lean_box(0);
v___x_797_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10);
v___x_798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
lean_ctor_set(v___x_798_, 1, v___x_796_);
return v___x_798_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__6(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__5, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__5);
v___x_800_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__0));
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
lean_ctor_set(v___x_801_, 1, v___x_799_);
return v___x_801_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__7(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_802_ = lean_box(0);
v___x_803_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__6, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__6);
v___x_804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
lean_ctor_set(v___x_804_, 1, v___x_802_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess(lean_object* v_label_805_, lean_object* v_content_806_, lean_object* v_doc_807_, lean_object* v_toks_808_){
_start:
{
lean_object* v_page_809_; lean_object* v_site_810_; lean_object* v_inclusions_811_; lean_object* v_inclusionsNotExist_812_; lean_object* v_footnotes_813_; lean_object* v_bibitems_814_; lean_object* v_bibitemIds_815_; lean_object* v_headlineId_816_; lean_object* v_mathId_817_; lean_object* v_equations_818_; lean_object* v_collapsibleCount_819_; lean_object* v_tabviewCounter_820_; lean_object* v_scoredAnchors_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_868_; 
v_page_809_ = lean_ctor_get(v_doc_807_, 0);
v_site_810_ = lean_ctor_get(v_doc_807_, 1);
v_inclusions_811_ = lean_ctor_get(v_doc_807_, 2);
v_inclusionsNotExist_812_ = lean_ctor_get(v_doc_807_, 3);
v_footnotes_813_ = lean_ctor_get(v_doc_807_, 4);
v_bibitems_814_ = lean_ctor_get(v_doc_807_, 5);
v_bibitemIds_815_ = lean_ctor_get(v_doc_807_, 6);
v_headlineId_816_ = lean_ctor_get(v_doc_807_, 7);
v_mathId_817_ = lean_ctor_get(v_doc_807_, 8);
v_equations_818_ = lean_ctor_get(v_doc_807_, 9);
v_collapsibleCount_819_ = lean_ctor_get(v_doc_807_, 10);
v_tabviewCounter_820_ = lean_ctor_get(v_doc_807_, 11);
v_scoredAnchors_821_ = lean_ctor_get(v_doc_807_, 12);
v_isSharedCheck_868_ = !lean_is_exclusive(v_doc_807_);
if (v_isSharedCheck_868_ == 0)
{
v___x_823_ = v_doc_807_;
v_isShared_824_ = v_isSharedCheck_868_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_scoredAnchors_821_);
lean_inc(v_tabviewCounter_820_);
lean_inc(v_collapsibleCount_819_);
lean_inc(v_equations_818_);
lean_inc(v_mathId_817_);
lean_inc(v_headlineId_816_);
lean_inc(v_bibitemIds_815_);
lean_inc(v_bibitems_814_);
lean_inc(v_footnotes_813_);
lean_inc(v_inclusionsNotExist_812_);
lean_inc(v_inclusions_811_);
lean_inc(v_site_810_);
lean_inc(v_page_809_);
lean_dec(v_doc_807_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_868_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v_content_x27_827_; lean_object* v___x_828_; lean_object* v_visible_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v_id_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v_doc1_836_; 
v___x_825_ = lean_box(0);
v___x_826_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_bibitemProcess_spec__0(v_content_806_, v___x_825_);
v_content_x27_827_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_826_);
lean_dec(v___x_826_);
lean_inc(v_content_x27_827_);
v___x_828_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes(v_content_x27_827_, v_toks_808_);
v_visible_829_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_828_);
lean_dec(v___x_828_);
v___x_830_ = l_List_lengthTR___redArg(v_bibitemIds_815_);
v___x_831_ = lean_unsigned_to_nat(1u);
v_id_832_ = lean_nat_add(v___x_830_, v___x_831_);
lean_dec(v___x_830_);
lean_inc_n(v_label_805_, 2);
v___x_833_ = lp_lean_x2dftml_LeanFtml_bibSet___redArg(v_bibitems_814_, v_label_805_, v_content_x27_827_);
lean_inc(v_id_832_);
v___x_834_ = lp_lean_x2dftml_LeanFtml_bibSet___redArg(v_bibitemIds_815_, v_label_805_, v_id_832_);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 6, v___x_834_);
lean_ctor_set(v___x_823_, 5, v___x_833_);
v_doc1_836_ = v___x_823_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_page_809_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_site_810_);
lean_ctor_set(v_reuseFailAlloc_867_, 2, v_inclusions_811_);
lean_ctor_set(v_reuseFailAlloc_867_, 3, v_inclusionsNotExist_812_);
lean_ctor_set(v_reuseFailAlloc_867_, 4, v_footnotes_813_);
lean_ctor_set(v_reuseFailAlloc_867_, 5, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_867_, 6, v___x_834_);
lean_ctor_set(v_reuseFailAlloc_867_, 7, v_headlineId_816_);
lean_ctor_set(v_reuseFailAlloc_867_, 8, v_mathId_817_);
lean_ctor_set(v_reuseFailAlloc_867_, 9, v_equations_818_);
lean_ctor_set(v_reuseFailAlloc_867_, 10, v_collapsibleCount_819_);
lean_ctor_set(v_reuseFailAlloc_867_, 11, v_tabviewCounter_820_);
lean_ctor_set(v_reuseFailAlloc_867_, 12, v_scoredAnchors_821_);
v_doc1_836_ = v_reuseFailAlloc_867_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
lean_object* v___x_837_; lean_object* v_startPh_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; uint8_t v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v_t1_858_; lean_object* v___x_859_; lean_object* v_endPh_860_; lean_object* v___x_861_; lean_object* v_t2_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_837_ = l_List_lengthTR___redArg(v_toks_808_);
v_startPh_838_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_837_);
v___x_839_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__0));
v___x_840_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2);
v___x_841_ = lp_lean_x2dftml_LeanFtml_textVal(v_label_805_);
v___x_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_840_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
v___x_843_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2);
v___x_844_ = lean_nat_to_int(v_id_832_);
v___x_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
v___x_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_846_, 0, v___x_843_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
v___x_847_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6);
v___x_848_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__4, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__4);
v___x_849_ = l_List_isEmpty___redArg(v_visible_829_);
v___x_850_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_850_, 0, v___x_849_);
v___x_851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_851_, 0, v___x_848_);
lean_ctor_set(v___x_851_, 1, v___x_850_);
v___x_852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_852_, 0, v___x_851_);
lean_ctor_set(v___x_852_, 1, v___x_825_);
v___x_853_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_847_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
v___x_854_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_854_, 0, v___x_846_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
v___x_855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_855_, 0, v___x_842_);
lean_ctor_set(v___x_855_, 1, v___x_854_);
v___x_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_839_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
lean_ctor_set(v___x_857_, 1, v___x_825_);
v_t1_858_ = l_List_appendTR___redArg(v_toks_808_, v___x_857_);
v___x_859_ = l_List_lengthTR___redArg(v_t1_858_);
v_endPh_860_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_859_);
v___x_861_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__7, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__7);
v_t2_862_ = l_List_appendTR___redArg(v_t1_858_, v___x_861_);
v___x_863_ = l_List_appendTR___redArg(v_startPh_838_, v_visible_829_);
v___x_864_ = l_List_appendTR___redArg(v___x_863_, v_endPh_860_);
v___x_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_865_, 0, v_t2_862_);
lean_ctor_set(v___x_865_, 1, v_doc1_836_);
v___x_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_866_, 0, v___x_864_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
return v___x_866_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibitemRule(lean_object* v_st_869_){
_start:
{
lean_inc_ref(v_st_869_);
return v_st_869_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibitemRule___boxed(lean_object* v_st_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = lp_lean_x2dftml_LeanFtml_bibitemRule(v_st_870_);
lean_dec_ref(v_st_870_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorIdx___impl(uint8_t v_x_872_){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_873_ = lean_box(v_x_872_);
v___x_874_ = lean_obj_tag_nat(v___x_873_);
lean_dec(v___x_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorIdx___impl___boxed(lean_object* v_x_875_){
_start:
{
uint8_t v_x_4__boxed_876_; lean_object* v_res_877_; 
v_x_4__boxed_876_ = lean_unbox(v_x_875_);
v_res_877_ = lp_lean_x2dftml_LeanFtml_BibPrev_ctorIdx___impl(v_x_4__boxed_876_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___redArg(lean_object* v_k_878_){
_start:
{
lean_inc(v_k_878_);
return v_k_878_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___redArg___boxed(lean_object* v_k_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___redArg(v_k_879_);
lean_dec(v_k_879_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim(lean_object* v_motive_881_, lean_object* v_ctorIdx_882_, uint8_t v_t_883_, lean_object* v_h_884_, lean_object* v_k_885_){
_start:
{
lean_inc(v_k_885_);
return v_k_885_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___boxed(lean_object* v_motive_886_, lean_object* v_ctorIdx_887_, lean_object* v_t_888_, lean_object* v_h_889_, lean_object* v_k_890_){
_start:
{
uint8_t v_t_boxed_891_; lean_object* v_res_892_; 
v_t_boxed_891_ = lean_unbox(v_t_888_);
v_res_892_ = lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim(v_motive_886_, v_ctorIdx_887_, v_t_boxed_891_, v_h_889_, v_k_890_);
lean_dec(v_k_890_);
lean_dec(v_ctorIdx_887_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___redArg(lean_object* v_start_893_){
_start:
{
lean_inc(v_start_893_);
return v_start_893_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___redArg___boxed(lean_object* v_start_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___redArg(v_start_894_);
lean_dec(v_start_894_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim(lean_object* v_motive_896_, uint8_t v_t_897_, lean_object* v_h_898_, lean_object* v_start_899_){
_start:
{
lean_inc(v_start_899_);
return v_start_899_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___boxed(lean_object* v_motive_900_, lean_object* v_t_901_, lean_object* v_h_902_, lean_object* v_start_903_){
_start:
{
uint8_t v_t_boxed_904_; lean_object* v_res_905_; 
v_t_boxed_904_ = lean_unbox(v_t_901_);
v_res_905_ = lp_lean_x2dftml_LeanFtml_BibPrev_start_elim(v_motive_900_, v_t_boxed_904_, v_h_902_, v_start_903_);
lean_dec(v_start_903_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___redArg(lean_object* v_def_906_){
_start:
{
lean_inc(v_def_906_);
return v_def_906_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___redArg___boxed(lean_object* v_def_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___redArg(v_def_907_);
lean_dec(v_def_907_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim(lean_object* v_motive_909_, uint8_t v_t_910_, lean_object* v_h_911_, lean_object* v_def_912_){
_start:
{
lean_inc(v_def_912_);
return v_def_912_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___boxed(lean_object* v_motive_913_, lean_object* v_t_914_, lean_object* v_h_915_, lean_object* v_def_916_){
_start:
{
uint8_t v_t_boxed_917_; lean_object* v_res_918_; 
v_t_boxed_917_ = lean_unbox(v_t_914_);
v_res_918_ = lp_lean_x2dftml_LeanFtml_BibPrev_def_elim(v_motive_913_, v_t_boxed_917_, v_h_915_, v_def_916_);
lean_dec(v_def_916_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___redArg(lean_object* v_res_919_){
_start:
{
lean_inc(v_res_919_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___redArg___boxed(lean_object* v_res_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___redArg(v_res_920_);
lean_dec(v_res_920_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim(lean_object* v_motive_922_, uint8_t v_t_923_, lean_object* v_h_924_, lean_object* v_res_925_){
_start:
{
lean_inc(v_res_925_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___boxed(lean_object* v_motive_926_, lean_object* v_t_927_, lean_object* v_h_928_, lean_object* v_res_929_){
_start:
{
uint8_t v_t_boxed_930_; lean_object* v_res_931_; 
v_t_boxed_930_ = lean_unbox(v_t_927_);
v_res_931_ = lp_lean_x2dftml_LeanFtml_BibPrev_res_elim(v_motive_926_, v_t_boxed_930_, v_h_928_, v_res_929_);
lean_dec(v_res_929_);
return v_res_931_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_BibPrev_ofNat(lean_object* v_n_932_){
_start:
{
lean_object* v___x_933_; uint8_t v___x_934_; 
v___x_933_ = lean_unsigned_to_nat(0u);
v___x_934_ = lean_nat_dec_le(v_n_932_, v___x_933_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_935_ = lean_unsigned_to_nat(1u);
v___x_936_ = lean_nat_dec_le(v_n_932_, v___x_935_);
if (v___x_936_ == 0)
{
uint8_t v___x_937_; 
v___x_937_ = 2;
return v___x_937_;
}
else
{
uint8_t v___x_938_; 
v___x_938_ = 1;
return v___x_938_;
}
}
else
{
uint8_t v___x_939_; 
v___x_939_ = 0;
return v___x_939_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ofNat___boxed(lean_object* v_n_940_){
_start:
{
uint8_t v_res_941_; lean_object* v_r_942_; 
v_res_941_ = lp_lean_x2dftml_LeanFtml_BibPrev_ofNat(v_n_940_);
lean_dec(v_n_940_);
v_r_942_ = lean_box(v_res_941_);
return v_r_942_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBibPrev(uint8_t v_x_943_, uint8_t v_y_944_){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_945_ = lean_box(v_x_943_);
v___x_946_ = lean_obj_tag_nat(v___x_945_);
lean_dec(v___x_945_);
v___x_947_ = lean_box(v_y_944_);
v___x_948_ = lean_obj_tag_nat(v___x_947_);
lean_dec(v___x_947_);
v___x_949_ = lean_nat_dec_eq(v___x_946_, v___x_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBibPrev___boxed(lean_object* v_x_950_, lean_object* v_y_951_){
_start:
{
uint8_t v_x_23__boxed_952_; uint8_t v_y_24__boxed_953_; uint8_t v_res_954_; lean_object* v_r_955_; 
v_x_23__boxed_952_ = lean_unbox(v_x_950_);
v_y_24__boxed_953_ = lean_unbox(v_y_951_);
v_res_954_ = lp_lean_x2dftml_LeanFtml_instDecidableEqBibPrev(v_x_23__boxed_952_, v_y_24__boxed_953_);
v_r_955_ = lean_box(v_res_954_);
return v_r_955_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_instInhabitedBibPrev_default(void){
_start:
{
uint8_t v___x_956_; 
v___x_956_ = 0;
return v___x_956_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_instInhabitedBibPrev(void){
_start:
{
uint8_t v___x_957_; 
v___x_957_ = 0;
return v___x_957_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__1(uint8_t v___x_958_, uint8_t v___y_959_, lean_object* v_l_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
if (lean_obj_tag(v_a_961_) == 0)
{
lean_dec_ref(v_a_962_);
lean_inc(v_l_960_);
return v_l_960_;
}
else
{
lean_object* v_head_963_; lean_object* v_tail_964_; uint8_t v___y_966_; lean_object* v___x_970_; uint8_t v___x_971_; 
v_head_963_ = lean_ctor_get(v_a_961_, 0);
lean_inc(v_head_963_);
v_tail_964_ = lean_ctor_get(v_a_961_, 1);
lean_inc(v_tail_964_);
lean_dec_ref_known(v_a_961_, 2);
v___x_970_ = lean_unsigned_to_nat(10u);
v___x_971_ = lean_nat_dec_eq(v_head_963_, v___x_970_);
if (v___x_971_ == 0)
{
v___y_966_ = v___x_958_;
goto v___jp_965_;
}
else
{
v___y_966_ = v___y_959_;
goto v___jp_965_;
}
v___jp_965_:
{
if (v___y_966_ == 0)
{
lean_object* v___x_967_; 
lean_dec(v_tail_964_);
lean_dec(v_head_963_);
v___x_967_ = lean_array_to_list(v_a_962_);
return v___x_967_;
}
else
{
lean_object* v___x_968_; 
v___x_968_ = lean_array_push(v_a_962_, v_head_963_);
v_a_961_ = v_tail_964_;
v_a_962_ = v___x_968_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__1___boxed(lean_object* v___x_972_, lean_object* v___y_973_, lean_object* v_l_974_, lean_object* v_a_975_, lean_object* v_a_976_){
_start:
{
uint8_t v___x_997__boxed_977_; uint8_t v___y_998__boxed_978_; lean_object* v_res_979_; 
v___x_997__boxed_977_ = lean_unbox(v___x_972_);
v___y_998__boxed_978_ = lean_unbox(v___y_973_);
v_res_979_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__1(v___x_997__boxed_977_, v___y_998__boxed_978_, v_l_974_, v_a_975_, v_a_976_);
lean_dec(v_l_974_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__2(lean_object* v_s2_980_, lean_object* v_s_981_, lean_object* v_label_982_, uint8_t v___x_983_, lean_object* v_x_984_){
_start:
{
lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_989_; 
if (lean_obj_tag(v_x_984_) == 0)
{
lean_object* v___x_996_; 
lean_dec(v_label_982_);
v___x_996_ = lean_box(0);
return v___x_996_;
}
else
{
lean_object* v_head_997_; lean_object* v_tail_998_; lean_object* v___x_999_; uint8_t v___y_1001_; uint8_t v___x_1021_; 
v_head_997_ = lean_ctor_get(v_x_984_, 0);
lean_inc(v_head_997_);
v_tail_998_ = lean_ctor_get(v_x_984_, 1);
lean_inc(v_tail_998_);
lean_dec_ref_known(v_x_984_, 2);
v___x_999_ = lean_unsigned_to_nat(1u);
v___x_1021_ = lean_nat_dec_eq(v_head_997_, v___x_999_);
if (v___x_1021_ == 0)
{
v___y_1001_ = v___x_1021_;
goto v___jp_1000_;
}
else
{
lean_object* v___x_1022_; 
v___x_1022_ = l_List_head_x3f___redArg(v_s2_980_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_dec(v_head_997_);
v_x_984_ = v_tail_998_;
goto _start;
}
else
{
lean_object* v_val_1024_; uint8_t v___x_1025_; 
v_val_1024_ = lean_ctor_get(v___x_1022_, 0);
lean_inc(v_val_1024_);
lean_dec_ref_known(v___x_1022_, 1);
v___x_1025_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_val_1024_);
lean_dec(v_val_1024_);
if (v___x_1025_ == 0)
{
lean_dec(v_head_997_);
v_x_984_ = v_tail_998_;
goto _start;
}
else
{
v___y_1001_ = v___x_983_;
goto v___jp_1000_;
}
}
}
v___jp_1000_:
{
lean_object* v___x_1002_; 
v___x_1002_ = l_List_drop___redArg(v_head_997_, v_s2_980_);
if (lean_obj_tag(v___x_1002_) == 1)
{
lean_object* v_head_1003_; lean_object* v_tail_1004_; lean_object* v___x_1005_; uint8_t v___x_1006_; 
v_head_1003_ = lean_ctor_get(v___x_1002_, 0);
lean_inc(v_head_1003_);
v_tail_1004_ = lean_ctor_get(v___x_1002_, 1);
lean_inc(v_tail_1004_);
lean_dec_ref_known(v___x_1002_, 2);
v___x_1005_ = lean_unsigned_to_nat(58u);
v___x_1006_ = lean_nat_dec_eq(v_head_1003_, v___x_1005_);
lean_dec(v_head_1003_);
if (v___x_1006_ == 0)
{
lean_dec(v_tail_1004_);
v_x_984_ = v_tail_998_;
goto _start;
}
else
{
if (lean_obj_tag(v_tail_1004_) == 0)
{
v_x_984_ = v_tail_998_;
goto _start;
}
else
{
lean_object* v_head_1009_; lean_object* v_tail_1010_; uint8_t v___x_1011_; 
v_head_1009_ = lean_ctor_get(v_tail_1004_, 0);
lean_inc(v_head_1009_);
v_tail_1010_ = lean_ctor_get(v_tail_1004_, 1);
lean_inc(v_tail_1010_);
lean_dec_ref_known(v_tail_1004_, 2);
v___x_1011_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1009_);
lean_dec(v_head_1009_);
if (v___x_1011_ == 0)
{
lean_dec(v_tail_1010_);
v_x_984_ = v_tail_998_;
goto _start;
}
else
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v_content_1015_; lean_object* v___x_1016_; lean_object* v_tail_1017_; lean_object* v___x_1018_; uint8_t v___x_1019_; 
lean_dec(v_tail_998_);
v___x_1013_ = lean_unsigned_to_nat(0u);
v___x_1014_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_tail_1010_);
v_content_1015_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__1(v___x_1011_, v___y_1001_, v_tail_1010_, v_tail_1010_, v___x_1014_);
v___x_1016_ = l_List_lengthTR___redArg(v_content_1015_);
v_tail_1017_ = l_List_drop___redArg(v___x_1016_, v_tail_1010_);
lean_dec(v_tail_1010_);
v___x_1018_ = l_List_lengthTR___redArg(v_s_981_);
v___x_1019_ = l_List_isEmpty___redArg(v_tail_1017_);
if (v___x_1019_ == 0)
{
v___y_986_ = v_content_1015_;
v___y_987_ = v___x_1018_;
v___y_988_ = v_tail_1017_;
v___y_989_ = v___x_999_;
goto v___jp_985_;
}
else
{
v___y_986_ = v_content_1015_;
v___y_987_ = v___x_1018_;
v___y_988_ = v_tail_1017_;
v___y_989_ = v___x_1013_;
goto v___jp_985_;
}
}
}
}
}
else
{
lean_dec(v___x_1002_);
v_x_984_ = v_tail_998_;
goto _start;
}
}
}
v___jp_985_:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_990_ = l_List_drop___redArg(v___y_989_, v___y_988_);
lean_dec(v___y_988_);
v___x_991_ = l_List_lengthTR___redArg(v___x_990_);
lean_dec(v___x_990_);
v___x_992_ = lean_nat_sub(v___y_987_, v___x_991_);
lean_dec(v___x_991_);
lean_dec(v___y_987_);
v___x_993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_993_, 0, v___y_986_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v_label_982_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
return v___x_995_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__2___boxed(lean_object* v_s2_1027_, lean_object* v_s_1028_, lean_object* v_label_1029_, lean_object* v___x_1030_, lean_object* v_x_1031_){
_start:
{
uint8_t v___x_1029__boxed_1032_; lean_object* v_res_1033_; 
v___x_1029__boxed_1032_ = lean_unbox(v___x_1030_);
v_res_1033_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__2(v_s2_1027_, v_s_1028_, v_label_1029_, v___x_1029__boxed_1032_, v_x_1031_);
lean_dec(v_s_1028_);
lean_dec(v_s2_1027_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0(lean_object* v_l_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_){
_start:
{
if (lean_obj_tag(v_a_1035_) == 0)
{
lean_dec_ref(v_a_1036_);
lean_inc(v_l_1034_);
return v_l_1034_;
}
else
{
lean_object* v_head_1037_; lean_object* v_tail_1038_; uint8_t v___x_1039_; 
v_head_1037_ = lean_ctor_get(v_a_1035_, 0);
lean_inc(v_head_1037_);
v_tail_1038_ = lean_ctor_get(v_a_1035_, 1);
lean_inc(v_tail_1038_);
lean_dec_ref_known(v_a_1035_, 2);
v___x_1039_ = lp_lean_x2dftml_LeanFtml_isBibLabelByte(v_head_1037_);
if (v___x_1039_ == 0)
{
lean_object* v___x_1040_; 
lean_dec(v_tail_1038_);
lean_dec(v_head_1037_);
v___x_1040_ = lean_array_to_list(v_a_1036_);
return v___x_1040_;
}
else
{
lean_object* v___x_1041_; 
v___x_1041_ = lean_array_push(v_a_1036_, v_head_1037_);
v_a_1035_ = v_tail_1038_;
v_a_1036_ = v___x_1041_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0___boxed(lean_object* v_l_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0(v_l_1043_, v_a_1044_, v_a_1045_);
lean_dec(v_l_1043_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3(lean_object* v_tail_1053_, lean_object* v_s_1054_, lean_object* v_x_1055_){
_start:
{
if (lean_obj_tag(v_x_1055_) == 0)
{
lean_object* v___x_1056_; 
v___x_1056_ = lean_box(0);
return v___x_1056_;
}
else
{
lean_object* v_head_1057_; lean_object* v_tail_1058_; lean_object* v___x_1059_; uint8_t v___x_1071_; 
v_head_1057_ = lean_ctor_get(v_x_1055_, 0);
lean_inc(v_head_1057_);
v_tail_1058_ = lean_ctor_get(v_x_1055_, 1);
lean_inc(v_tail_1058_);
lean_dec_ref_known(v_x_1055_, 2);
v___x_1059_ = lean_unsigned_to_nat(1u);
v___x_1071_ = lean_nat_dec_eq(v_head_1057_, v___x_1059_);
if (v___x_1071_ == 0)
{
goto v___jp_1060_;
}
else
{
lean_object* v___x_1072_; 
v___x_1072_ = l_List_head_x3f___redArg(v_tail_1053_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_dec(v_head_1057_);
v_x_1055_ = v_tail_1058_;
goto _start;
}
else
{
lean_object* v_val_1074_; uint8_t v___x_1075_; 
v_val_1074_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_val_1074_);
lean_dec_ref_known(v___x_1072_, 1);
v___x_1075_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_val_1074_);
lean_dec(v_val_1074_);
if (v___x_1075_ == 0)
{
lean_dec(v_head_1057_);
v_x_1055_ = v_tail_1058_;
goto _start;
}
else
{
goto v___jp_1060_;
}
}
}
v___jp_1060_:
{
lean_object* v_s1_1061_; lean_object* v___x_1062_; lean_object* v_label_1063_; uint8_t v___x_1064_; 
v_s1_1061_ = l_List_drop___redArg(v_head_1057_, v_tail_1053_);
v___x_1062_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_s1_1061_);
v_label_1063_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0(v_s1_1061_, v_s1_1061_, v___x_1062_);
v___x_1064_ = l_List_isEmpty___redArg(v_label_1063_);
if (v___x_1064_ == 0)
{
lean_object* v___x_1065_; lean_object* v_s2_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1065_ = l_List_lengthTR___redArg(v_label_1063_);
v_s2_1066_ = l_List_drop___redArg(v___x_1065_, v_s1_1061_);
lean_dec(v_s1_1061_);
v___x_1067_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__1));
v___x_1068_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__2(v_s2_1066_, v_s_1054_, v_label_1063_, v___x_1064_, v___x_1067_);
lean_dec(v_s2_1066_);
if (lean_obj_tag(v___x_1068_) == 0)
{
v_x_1055_ = v_tail_1058_;
goto _start;
}
else
{
lean_dec(v_tail_1058_);
return v___x_1068_;
}
}
else
{
lean_dec(v_label_1063_);
lean_dec(v_s1_1061_);
v_x_1055_ = v_tail_1058_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___boxed(lean_object* v_tail_1077_, lean_object* v_s_1078_, lean_object* v_x_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3(v_tail_1077_, v_s_1078_, v_x_1079_);
lean_dec(v_s_1078_);
lean_dec(v_tail_1077_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibDefMatch(lean_object* v_s_1081_){
_start:
{
if (lean_obj_tag(v_s_1081_) == 1)
{
lean_object* v_head_1082_; lean_object* v_tail_1083_; lean_object* v___x_1084_; uint8_t v___x_1085_; 
v_head_1082_ = lean_ctor_get(v_s_1081_, 0);
v_tail_1083_ = lean_ctor_get(v_s_1081_, 1);
v___x_1084_ = lean_unsigned_to_nat(58u);
v___x_1085_ = lean_nat_dec_eq(v_head_1082_, v___x_1084_);
if (v___x_1085_ == 0)
{
lean_object* v___x_1086_; 
v___x_1086_ = lean_box(0);
return v___x_1086_;
}
else
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__1));
v___x_1088_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3(v_tail_1083_, v_s_1081_, v___x_1087_);
return v___x_1088_;
}
}
else
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_box(0);
return v___x_1089_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibDefMatch___boxed(lean_object* v_s_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = lp_lean_x2dftml_LeanFtml_bibDefMatch(v_s_1090_);
lean_dec(v_s_1090_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(lean_object* v_x_1092_){
_start:
{
if (lean_obj_tag(v_x_1092_) == 0)
{
return v_x_1092_;
}
else
{
lean_object* v_head_1093_; lean_object* v_tail_1094_; uint8_t v___x_1095_; 
v_head_1093_ = lean_ctor_get(v_x_1092_, 0);
v_tail_1094_ = lean_ctor_get(v_x_1092_, 1);
v___x_1095_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1093_);
if (v___x_1095_ == 0)
{
lean_inc_ref(v_x_1092_);
return v_x_1092_;
}
else
{
v_x_1092_ = v_tail_1094_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0___boxed(lean_object* v_x_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(v_x_1097_);
lean_dec(v_x_1097_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWs_go(lean_object* v_a_1099_, lean_object* v_a_1100_){
_start:
{
if (lean_obj_tag(v_a_1099_) == 0)
{
return v_a_1099_;
}
else
{
lean_object* v_head_1101_; lean_object* v_tail_1102_; lean_object* v_zero_1103_; uint8_t v_isZero_1104_; 
v_head_1101_ = lean_ctor_get(v_a_1099_, 0);
v_tail_1102_ = lean_ctor_get(v_a_1099_, 1);
v_zero_1103_ = lean_unsigned_to_nat(0u);
v_isZero_1104_ = lean_nat_dec_eq(v_a_1100_, v_zero_1103_);
if (v_isZero_1104_ == 1)
{
lean_object* v___x_1105_; 
lean_dec_ref_known(v_a_1099_, 2);
v___x_1105_ = lean_box(0);
return v___x_1105_;
}
else
{
lean_object* v_one_1106_; lean_object* v_n_1107_; uint8_t v___x_1108_; 
v_one_1106_ = lean_unsigned_to_nat(1u);
v_n_1107_ = lean_nat_sub(v_a_1100_, v_one_1106_);
v___x_1108_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1101_);
if (v___x_1108_ == 0)
{
lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1116_; 
lean_inc(v_tail_1102_);
lean_inc(v_head_1101_);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_a_1099_);
if (v_isSharedCheck_1116_ == 0)
{
lean_object* v_unused_1117_; lean_object* v_unused_1118_; 
v_unused_1117_ = lean_ctor_get(v_a_1099_, 1);
lean_dec(v_unused_1117_);
v_unused_1118_ = lean_ctor_get(v_a_1099_, 0);
lean_dec(v_unused_1118_);
v___x_1110_ = v_a_1099_;
v_isShared_1111_ = v_isSharedCheck_1116_;
goto v_resetjp_1109_;
}
else
{
lean_dec(v_a_1099_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1116_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1112_; lean_object* v___x_1114_; 
v___x_1112_ = lp_lean_x2dftml_LeanFtml_collapseWs_go(v_tail_1102_, v_n_1107_);
lean_dec(v_n_1107_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 1, v___x_1112_);
v___x_1114_ = v___x_1110_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_head_1101_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v___x_1112_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1128_; 
v___x_1119_ = lean_unsigned_to_nat(32u);
v___x_1120_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(v_a_1099_);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_a_1099_);
if (v_isSharedCheck_1128_ == 0)
{
lean_object* v_unused_1129_; lean_object* v_unused_1130_; 
v_unused_1129_ = lean_ctor_get(v_a_1099_, 1);
lean_dec(v_unused_1129_);
v_unused_1130_ = lean_ctor_get(v_a_1099_, 0);
lean_dec(v_unused_1130_);
v___x_1122_ = v_a_1099_;
v_isShared_1123_ = v_isSharedCheck_1128_;
goto v_resetjp_1121_;
}
else
{
lean_dec(v_a_1099_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1128_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1124_; lean_object* v___x_1126_; 
v___x_1124_ = lp_lean_x2dftml_LeanFtml_collapseWs_go(v___x_1120_, v_n_1107_);
lean_dec(v_n_1107_);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 1, v___x_1124_);
lean_ctor_set(v___x_1122_, 0, v___x_1119_);
v___x_1126_ = v___x_1122_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___x_1119_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v___x_1124_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWs_go___boxed(lean_object* v_a_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = lp_lean_x2dftml_LeanFtml_collapseWs_go(v_a_1131_, v_a_1132_);
lean_dec(v_a_1132_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWs(lean_object* v_bs_1134_){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1135_ = l_List_lengthTR___redArg(v_bs_1134_);
v___x_1136_ = lean_unsigned_to_nat(1u);
v___x_1137_ = lean_nat_add(v___x_1135_, v___x_1136_);
lean_dec(v___x_1135_);
v___x_1138_ = lp_lean_x2dftml_LeanFtml_collapseWs_go(v_bs_1134_, v___x_1137_);
lean_dec(v___x_1137_);
return v___x_1138_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__2(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimNl___closed__1));
v___x_1142_ = l_String_toListImpl(v___x_1141_);
return v___x_1142_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__3(void){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__2, &lp_lean_x2dftml_LeanFtml_claimNl___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__2);
v___x_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
return v___x_1144_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__4(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1145_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__3, &lp_lean_x2dftml_LeanFtml_claimNl___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__3);
v___x_1146_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2);
v___x_1147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
lean_ctor_set(v___x_1147_, 1, v___x_1145_);
return v___x_1147_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__5(void){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1148_ = lean_box(0);
v___x_1149_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__4, &lp_lean_x2dftml_LeanFtml_claimNl___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__4);
v___x_1150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
lean_ctor_set(v___x_1150_, 1, v___x_1148_);
return v___x_1150_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__6(void){
_start:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1151_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__5, &lp_lean_x2dftml_LeanFtml_claimNl___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__5);
v___x_1152_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimNl___closed__0));
v___x_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
lean_ctor_set(v___x_1153_, 1, v___x_1151_);
return v___x_1153_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__7(void){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1154_ = lean_box(0);
v___x_1155_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__6, &lp_lean_x2dftml_LeanFtml_claimNl___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__6);
v___x_1156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
lean_ctor_set(v___x_1156_, 1, v___x_1154_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_claimNl(lean_object* v_toks_1157_){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1158_ = l_List_lengthTR___redArg(v_toks_1157_);
v___x_1159_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1158_);
v___x_1160_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__7, &lp_lean_x2dftml_LeanFtml_claimNl___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__7);
v___x_1161_ = l_List_appendTR___redArg(v_toks_1157_, v___x_1160_);
v___x_1162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1159_);
lean_ctor_set(v___x_1162_, 1, v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibWalk_spec__0(uint8_t v___x_1163_, lean_object* v_l_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_){
_start:
{
if (lean_obj_tag(v_a_1165_) == 0)
{
lean_dec_ref(v_a_1166_);
lean_inc(v_l_1164_);
return v_l_1164_;
}
else
{
lean_object* v_head_1167_; lean_object* v_tail_1168_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v_head_1167_ = lean_ctor_get(v_a_1165_, 0);
lean_inc(v_head_1167_);
v_tail_1168_ = lean_ctor_get(v_a_1165_, 1);
lean_inc(v_tail_1168_);
lean_dec_ref_known(v_a_1165_, 2);
v___x_1172_ = lean_unsigned_to_nat(10u);
v___x_1173_ = lean_nat_dec_eq(v_head_1167_, v___x_1172_);
if (v___x_1173_ == 0)
{
goto v___jp_1169_;
}
else
{
if (v___x_1163_ == 0)
{
lean_object* v___x_1174_; 
lean_dec(v_tail_1168_);
lean_dec(v_head_1167_);
v___x_1174_ = lean_array_to_list(v_a_1166_);
return v___x_1174_;
}
else
{
goto v___jp_1169_;
}
}
v___jp_1169_:
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_array_push(v_a_1166_, v_head_1167_);
v_a_1165_ = v_tail_1168_;
v_a_1166_ = v___x_1170_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibWalk_spec__0___boxed(lean_object* v___x_1175_, lean_object* v_l_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_){
_start:
{
uint8_t v___x_576__boxed_1179_; lean_object* v_res_1180_; 
v___x_576__boxed_1179_ = lean_unbox(v___x_1175_);
v_res_1180_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibWalk_spec__0(v___x_576__boxed_1179_, v_l_1176_, v_a_1177_, v_a_1178_);
lean_dec(v_l_1176_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibWalk(lean_object* v_s_1184_, uint8_t v_prev_1185_, lean_object* v_doc_1186_, lean_object* v_toks_1187_, lean_object* v_x_1188_){
_start:
{
lean_object* v_zero_1189_; uint8_t v_isZero_1190_; 
v_zero_1189_ = lean_unsigned_to_nat(0u);
v_isZero_1190_ = lean_nat_dec_eq(v_x_1188_, v_zero_1189_);
if (v_isZero_1190_ == 1)
{
lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
lean_dec(v_x_1188_);
lean_dec(v_s_1184_);
v___x_1191_ = lean_box(0);
v___x_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1192_, 0, v_toks_1187_);
lean_ctor_set(v___x_1192_, 1, v_doc_1186_);
v___x_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1191_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
return v___x_1193_;
}
else
{
uint8_t v___x_1194_; 
v___x_1194_ = l_List_isEmpty___redArg(v_s_1184_);
if (v___x_1194_ == 0)
{
lean_object* v_one_1195_; lean_object* v_n_1196_; lean_object* v___x_1197_; 
v_one_1195_ = lean_unsigned_to_nat(1u);
v_n_1196_ = lean_nat_sub(v_x_1188_, v_one_1195_);
lean_dec(v_x_1188_);
v___x_1197_ = lp_lean_x2dftml_LeanFtml_bibDefMatch(v_s_1184_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v___x_1198_; lean_object* v_text_1199_; lean_object* v___y_1201_; lean_object* v_fst_1202_; lean_object* v_snd_1203_; lean_object* v___x_1219_; lean_object* v___y_1221_; lean_object* v_tail_1231_; uint8_t v___x_1232_; 
v___x_1198_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_s_1184_);
v_text_1199_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibWalk_spec__0(v___x_1194_, v_s_1184_, v_s_1184_, v___x_1198_);
v___x_1219_ = l_List_lengthTR___redArg(v_text_1199_);
lean_inc(v___x_1219_);
v_tail_1231_ = l_List_drop___redArg(v___x_1219_, v_s_1184_);
v___x_1232_ = l_List_isEmpty___redArg(v_tail_1231_);
lean_dec(v_tail_1231_);
if (v___x_1232_ == 0)
{
v___y_1221_ = v_one_1195_;
goto v___jp_1220_;
}
else
{
v___y_1221_ = v_zero_1189_;
goto v___jp_1220_;
}
v___jp_1200_:
{
lean_object* v___x_1204_; uint8_t v___x_1205_; lean_object* v___x_1206_; lean_object* v_fst_1207_; lean_object* v_snd_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1218_; 
v___x_1204_ = l_List_drop___redArg(v___y_1201_, v_s_1184_);
lean_dec(v_s_1184_);
v___x_1205_ = 2;
v___x_1206_ = lp_lean_x2dftml_LeanFtml_bibWalk(v___x_1204_, v___x_1205_, v_doc_1186_, v_snd_1203_, v_n_1196_);
v_fst_1207_ = lean_ctor_get(v___x_1206_, 0);
v_snd_1208_ = lean_ctor_get(v___x_1206_, 1);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1210_ = v___x_1206_;
v_isShared_1211_ = v_isSharedCheck_1218_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_snd_1208_);
lean_inc(v_fst_1207_);
lean_dec(v___x_1206_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1218_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1216_; 
v___x_1212_ = lp_lean_x2dftml_LeanFtml_collapseWs(v_text_1199_);
v___x_1213_ = l_List_appendTR___redArg(v_fst_1202_, v___x_1212_);
v___x_1214_ = l_List_appendTR___redArg(v___x_1213_, v_fst_1207_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 0, v___x_1214_);
v___x_1216_ = v___x_1210_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1214_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v_snd_1208_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
v___jp_1220_:
{
lean_object* v_len_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; 
v_len_1222_ = lean_nat_add(v___x_1219_, v___y_1221_);
lean_dec(v___x_1219_);
v___x_1223_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_text_1199_);
v___x_1224_ = l_List_isEmpty___redArg(v___x_1223_);
lean_dec(v___x_1223_);
if (v___x_1224_ == 0)
{
if (v_prev_1185_ == 2)
{
lean_object* v___x_1225_; 
v___x_1225_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibWalk___closed__0));
v___y_1201_ = v_len_1222_;
v_fst_1202_ = v___x_1225_;
v_snd_1203_ = v_toks_1187_;
goto v___jp_1200_;
}
else
{
lean_object* v___x_1226_; lean_object* v_fst_1227_; lean_object* v_snd_1228_; 
v___x_1226_ = lp_lean_x2dftml_LeanFtml_claimNl(v_toks_1187_);
v_fst_1227_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_fst_1227_);
v_snd_1228_ = lean_ctor_get(v___x_1226_, 1);
lean_inc(v_snd_1228_);
lean_dec_ref(v___x_1226_);
v___y_1201_ = v_len_1222_;
v_fst_1202_ = v_fst_1227_;
v_snd_1203_ = v_snd_1228_;
goto v___jp_1200_;
}
}
else
{
lean_object* v___x_1229_; 
lean_dec(v_text_1199_);
v___x_1229_ = l_List_drop___redArg(v_len_1222_, v_s_1184_);
lean_dec(v_s_1184_);
v_s_1184_ = v___x_1229_;
v_x_1188_ = v_n_1196_;
goto _start;
}
}
}
else
{
lean_object* v_val_1233_; lean_object* v_snd_1234_; lean_object* v_fst_1235_; lean_object* v_fst_1236_; lean_object* v_snd_1237_; lean_object* v_fst_1239_; lean_object* v_snd_1240_; 
v_val_1233_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_val_1233_);
lean_dec_ref_known(v___x_1197_, 1);
v_snd_1234_ = lean_ctor_get(v_val_1233_, 1);
lean_inc(v_snd_1234_);
v_fst_1235_ = lean_ctor_get(v_val_1233_, 0);
lean_inc(v_fst_1235_);
lean_dec(v_val_1233_);
v_fst_1236_ = lean_ctor_get(v_snd_1234_, 0);
lean_inc(v_fst_1236_);
v_snd_1237_ = lean_ctor_get(v_snd_1234_, 1);
lean_inc(v_snd_1237_);
lean_dec(v_snd_1234_);
if (v_prev_1185_ == 2)
{
lean_object* v___x_1260_; lean_object* v_fst_1261_; lean_object* v_snd_1262_; 
v___x_1260_ = lp_lean_x2dftml_LeanFtml_claimNl(v_toks_1187_);
v_fst_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_fst_1261_);
v_snd_1262_ = lean_ctor_get(v___x_1260_, 1);
lean_inc(v_snd_1262_);
lean_dec_ref(v___x_1260_);
v_fst_1239_ = v_fst_1261_;
v_snd_1240_ = v_snd_1262_;
goto v___jp_1238_;
}
else
{
lean_object* v___x_1263_; 
v___x_1263_ = lean_box(0);
v_fst_1239_ = v___x_1263_;
v_snd_1240_ = v_toks_1187_;
goto v___jp_1238_;
}
v___jp_1238_:
{
lean_object* v___x_1241_; lean_object* v_snd_1242_; lean_object* v_fst_1243_; lean_object* v_fst_1244_; lean_object* v_snd_1245_; lean_object* v___x_1246_; uint8_t v___x_1247_; lean_object* v___x_1248_; lean_object* v_fst_1249_; lean_object* v_snd_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1259_; 
v___x_1241_ = lp_lean_x2dftml_LeanFtml_bibitemProcess(v_fst_1235_, v_fst_1236_, v_doc_1186_, v_snd_1240_);
v_snd_1242_ = lean_ctor_get(v___x_1241_, 1);
lean_inc(v_snd_1242_);
v_fst_1243_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_fst_1243_);
lean_dec_ref(v___x_1241_);
v_fst_1244_ = lean_ctor_get(v_snd_1242_, 0);
lean_inc(v_fst_1244_);
v_snd_1245_ = lean_ctor_get(v_snd_1242_, 1);
lean_inc(v_snd_1245_);
lean_dec(v_snd_1242_);
v___x_1246_ = l_List_drop___redArg(v_snd_1237_, v_s_1184_);
lean_dec(v_s_1184_);
v___x_1247_ = 1;
v___x_1248_ = lp_lean_x2dftml_LeanFtml_bibWalk(v___x_1246_, v___x_1247_, v_snd_1245_, v_fst_1244_, v_n_1196_);
v_fst_1249_ = lean_ctor_get(v___x_1248_, 0);
v_snd_1250_ = lean_ctor_get(v___x_1248_, 1);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1252_ = v___x_1248_;
v_isShared_1253_ = v_isSharedCheck_1259_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_snd_1250_);
lean_inc(v_fst_1249_);
lean_dec(v___x_1248_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1259_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1257_; 
v___x_1254_ = l_List_appendTR___redArg(v_fst_1239_, v_fst_1243_);
v___x_1255_ = l_List_appendTR___redArg(v___x_1254_, v_fst_1249_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v___x_1255_);
v___x_1257_ = v___x_1252_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1255_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_snd_1250_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
lean_dec(v_x_1188_);
lean_dec(v_s_1184_);
v___x_1264_ = lean_box(0);
v___x_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1265_, 0, v_toks_1187_);
lean_ctor_set(v___x_1265_, 1, v_doc_1186_);
v___x_1266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1264_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
return v___x_1266_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibWalk___boxed(lean_object* v_s_1267_, lean_object* v_prev_1268_, lean_object* v_doc_1269_, lean_object* v_toks_1270_, lean_object* v_x_1271_){
_start:
{
uint8_t v_prev_boxed_1272_; lean_object* v_res_1273_; 
v_prev_boxed_1272_ = lean_unbox(v_prev_1268_);
v_res_1273_ = lp_lean_x2dftml_LeanFtml_bibWalk(v_s_1267_, v_prev_boxed_1272_, v_doc_1269_, v_toks_1270_, v_x_1271_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences_go(lean_object* v_pat_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_){
_start:
{
if (lean_obj_tag(v_a_1275_) == 0)
{
lean_object* v___x_1277_; 
lean_dec(v_a_1276_);
v___x_1277_ = lean_box(0);
return v___x_1277_;
}
else
{
lean_object* v_head_1278_; lean_object* v_tail_1279_; lean_object* v___y_1281_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v_head_1278_ = lean_ctor_get(v_a_1275_, 0);
lean_inc(v_head_1278_);
v_tail_1279_ = lean_ctor_get(v_a_1275_, 1);
lean_inc(v_tail_1279_);
v___x_1285_ = l_List_lengthTR___redArg(v_pat_1274_);
v___x_1286_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v___x_1285_);
lean_inc_ref(v_a_1275_);
v___x_1287_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_1275_, v_a_1275_, v___x_1285_, v___x_1286_);
v___x_1288_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1287_, v_pat_1274_);
lean_dec(v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; 
lean_dec(v___x_1285_);
lean_dec_ref_known(v_a_1275_, 2);
v___x_1289_ = lean_box(0);
v___y_1281_ = v___x_1289_;
goto v___jp_1280_;
}
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1300_; 
lean_inc(v_a_1276_);
v___x_1290_ = l_List_reverse___redArg(v_a_1276_);
v___x_1291_ = l_List_drop___redArg(v___x_1285_, v_a_1275_);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_a_1275_);
if (v_isSharedCheck_1300_ == 0)
{
lean_object* v_unused_1301_; lean_object* v_unused_1302_; 
v_unused_1301_ = lean_ctor_get(v_a_1275_, 1);
lean_dec(v_unused_1301_);
v_unused_1302_ = lean_ctor_get(v_a_1275_, 0);
lean_dec(v_unused_1302_);
v___x_1293_ = v_a_1275_;
v_isShared_1294_ = v_isSharedCheck_1300_;
goto v_resetjp_1292_;
}
else
{
lean_dec(v_a_1275_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1300_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1298_; 
v___x_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1290_);
lean_ctor_set(v___x_1295_, 1, v___x_1291_);
v___x_1296_ = lean_box(0);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 1, v___x_1296_);
lean_ctor_set(v___x_1293_, 0, v___x_1295_);
v___x_1298_ = v___x_1293_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v___x_1295_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v___x_1296_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
v___y_1281_ = v___x_1298_;
goto v___jp_1280_;
}
}
}
v___jp_1280_:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1282_, 0, v_head_1278_);
lean_ctor_set(v___x_1282_, 1, v_a_1276_);
v___x_1283_ = lp_lean_x2dftml_LeanFtml_occurrences_go(v_pat_1274_, v_tail_1279_, v___x_1282_);
v___x_1284_ = l_List_appendTR___redArg(v___y_1281_, v___x_1283_);
return v___x_1284_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences_go___boxed(lean_object* v_pat_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = lp_lean_x2dftml_LeanFtml_occurrences_go(v_pat_1303_, v_a_1304_, v_a_1305_);
lean_dec(v_pat_1303_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences(lean_object* v_pat_1307_, lean_object* v_s_1308_){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = lean_box(0);
v___x_1310_ = lp_lean_x2dftml_LeanFtml_occurrences_go(v_pat_1307_, v_s_1308_, v___x_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences___boxed(lean_object* v_pat_1311_, lean_object* v_s_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = lp_lean_x2dftml_LeanFtml_occurrences(v_pat_1311_, v_s_1312_);
lean_dec(v_pat_1311_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(lean_object* v_l_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_){
_start:
{
if (lean_obj_tag(v_a_1315_) == 0)
{
lean_dec_ref(v_a_1316_);
lean_inc(v_l_1314_);
return v_l_1314_;
}
else
{
lean_object* v_head_1317_; lean_object* v_tail_1318_; lean_object* v___x_1319_; uint8_t v___x_1320_; 
v_head_1317_ = lean_ctor_get(v_a_1315_, 0);
lean_inc(v_head_1317_);
v_tail_1318_ = lean_ctor_get(v_a_1315_, 1);
lean_inc(v_tail_1318_);
lean_dec_ref_known(v_a_1315_, 2);
v___x_1319_ = lean_unsigned_to_nat(32u);
v___x_1320_ = lean_nat_dec_eq(v_head_1317_, v___x_1319_);
if (v___x_1320_ == 0)
{
lean_object* v___x_1321_; 
lean_dec(v_tail_1318_);
lean_dec(v_head_1317_);
v___x_1321_ = lean_array_to_list(v_a_1316_);
return v___x_1321_;
}
else
{
lean_object* v___x_1322_; 
v___x_1322_ = lean_array_push(v_a_1316_, v_head_1317_);
v_a_1315_ = v_tail_1318_;
v_a_1316_ = v___x_1322_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0___boxed(lean_object* v_l_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_l_1324_, v_a_1325_, v_a_1326_);
lean_dec(v_l_1324_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibliographyMatchAt_spec__1(lean_object* v_fst_1328_, lean_object* v_x_1329_){
_start:
{
if (lean_obj_tag(v_x_1329_) == 0)
{
lean_object* v___x_1330_; 
lean_dec(v_fst_1328_);
v___x_1330_ = lean_box(0);
return v___x_1330_;
}
else
{
lean_object* v_head_1331_; lean_object* v_tail_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1359_; 
v_head_1331_ = lean_ctor_get(v_x_1329_, 0);
v_tail_1332_ = lean_ctor_get(v_x_1329_, 1);
v_isSharedCheck_1359_ = !lean_is_exclusive(v_x_1329_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1334_ = v_x_1329_;
v_isShared_1335_ = v_isSharedCheck_1359_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_tail_1332_);
lean_inc(v_head_1331_);
lean_dec(v_x_1329_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1359_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v_fst_1336_; lean_object* v_snd_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1358_; 
v_fst_1336_ = lean_ctor_get(v_head_1331_, 0);
v_snd_1337_ = lean_ctor_get(v_head_1331_, 1);
v_isSharedCheck_1358_ = !lean_is_exclusive(v_head_1331_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1339_ = v_head_1331_;
v_isShared_1340_ = v_isSharedCheck_1358_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_snd_1337_);
lean_inc(v_fst_1336_);
lean_dec(v_head_1331_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1358_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v_rest_1344_; uint8_t v___x_1353_; 
v___x_1341_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_snd_1337_);
v___x_1342_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_snd_1337_, v_snd_1337_, v___x_1341_);
v___x_1343_ = l_List_lengthTR___redArg(v___x_1342_);
lean_dec(v___x_1342_);
v_rest_1344_ = l_List_drop___redArg(v___x_1343_, v_snd_1337_);
lean_dec(v_snd_1337_);
v___x_1353_ = l_List_isEmpty___redArg(v_rest_1344_);
if (v___x_1353_ == 0)
{
lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; 
v___x_1354_ = l_List_head_x3f___redArg(v_rest_1344_);
v___x_1355_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockRule___closed__0));
v___x_1356_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_1354_, v___x_1355_);
lean_dec(v___x_1354_);
if (v___x_1356_ == 0)
{
lean_dec(v_rest_1344_);
lean_del_object(v___x_1339_);
lean_dec(v_fst_1336_);
lean_del_object(v___x_1334_);
v_x_1329_ = v_tail_1332_;
goto _start;
}
else
{
lean_dec(v_tail_1332_);
goto v___jp_1345_;
}
}
else
{
lean_dec(v_tail_1332_);
goto v___jp_1345_;
}
v___jp_1345_:
{
lean_object* v___x_1347_; 
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 1, v_rest_1344_);
v___x_1347_ = v___x_1339_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_fst_1336_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v_rest_1344_);
v___x_1347_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
lean_object* v___x_1349_; 
if (v_isShared_1335_ == 0)
{
lean_ctor_set_tag(v___x_1334_, 0);
lean_ctor_set(v___x_1334_, 1, v___x_1347_);
lean_ctor_set(v___x_1334_, 0, v_fst_1328_);
v___x_1349_ = v___x_1334_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_fst_1328_);
lean_ctor_set(v_reuseFailAlloc_1351_, 1, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
return v___x_1350_;
}
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__1(void){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__0));
v___x_1362_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1361_);
return v___x_1362_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__3(void){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__2));
v___x_1365_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1364_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyMatchAt(lean_object* v_src_1366_){
_start:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__1);
v___x_1368_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1367_, v_src_1366_);
if (lean_obj_tag(v___x_1368_) == 0)
{
lean_object* v___x_1369_; 
v___x_1369_ = lean_box(0);
return v___x_1369_;
}
else
{
lean_object* v_val_1370_; lean_object* v___x_1371_; 
v_val_1370_ = lean_ctor_get(v___x_1368_, 0);
lean_inc(v_val_1370_);
lean_dec_ref_known(v___x_1368_, 1);
v___x_1371_ = lp_lean_x2dftml_LeanFtml_attrGroupB(v_val_1370_);
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_box(0);
return v___x_1372_;
}
else
{
lean_object* v_val_1373_; lean_object* v_fst_1374_; lean_object* v_snd_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v_val_1373_ = lean_ctor_get(v___x_1371_, 0);
lean_inc(v_val_1373_);
lean_dec_ref_known(v___x_1371_, 1);
v_fst_1374_ = lean_ctor_get(v_val_1373_, 0);
lean_inc(v_fst_1374_);
v_snd_1375_ = lean_ctor_get(v_val_1373_, 1);
lean_inc(v_snd_1375_);
lean_dec(v_val_1373_);
v___x_1376_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__3, &lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__3);
v___x_1377_ = lp_lean_x2dftml_LeanFtml_occurrences(v___x_1376_, v_snd_1375_);
v___x_1378_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibliographyMatchAt_spec__1(v_fst_1374_, v___x_1377_);
return v___x_1378_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyFind_go(lean_object* v_a_1379_, lean_object* v_a_1380_, uint8_t v_a_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v_zero_1383_; uint8_t v_isZero_1384_; 
v_zero_1383_ = lean_unsigned_to_nat(0u);
v_isZero_1384_ = lean_nat_dec_eq(v_a_1382_, v_zero_1383_);
if (v_isZero_1384_ == 1)
{
lean_object* v___x_1385_; 
lean_dec(v_a_1382_);
lean_dec(v_a_1380_);
lean_dec(v_a_1379_);
v___x_1385_ = lean_box(0);
return v___x_1385_;
}
else
{
lean_object* v_one_1386_; lean_object* v_n_1387_; 
v_one_1386_ = lean_unsigned_to_nat(1u);
v_n_1387_ = lean_nat_sub(v_a_1382_, v_one_1386_);
lean_dec(v_a_1382_);
if (v_a_1381_ == 0)
{
goto v___jp_1388_;
}
else
{
lean_object* v___x_1396_; 
lean_inc(v_a_1379_);
v___x_1396_ = lp_lean_x2dftml_LeanFtml_bibliographyMatchAt(v_a_1379_);
if (lean_obj_tag(v___x_1396_) == 0)
{
goto v___jp_1388_;
}
else
{
lean_object* v_val_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1405_; 
lean_dec(v_n_1387_);
lean_dec(v_a_1379_);
v_val_1397_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1399_ = v___x_1396_;
v_isShared_1400_ = v_isSharedCheck_1405_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_val_1397_);
lean_dec(v___x_1396_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1405_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1401_; lean_object* v___x_1403_; 
v___x_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1401_, 0, v_a_1380_);
lean_ctor_set(v___x_1401_, 1, v_val_1397_);
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 0, v___x_1401_);
v___x_1403_ = v___x_1399_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
v___jp_1388_:
{
if (lean_obj_tag(v_a_1379_) == 0)
{
lean_object* v___x_1389_; 
lean_dec(v_n_1387_);
lean_dec(v_a_1380_);
v___x_1389_ = lean_box(0);
return v___x_1389_;
}
else
{
lean_object* v_head_1390_; lean_object* v_tail_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; uint8_t v___x_1394_; 
v_head_1390_ = lean_ctor_get(v_a_1379_, 0);
lean_inc(v_head_1390_);
v_tail_1391_ = lean_ctor_get(v_a_1379_, 1);
lean_inc(v_tail_1391_);
lean_dec_ref_known(v_a_1379_, 2);
v___x_1392_ = lean_nat_add(v_a_1380_, v_one_1386_);
lean_dec(v_a_1380_);
v___x_1393_ = lean_unsigned_to_nat(10u);
v___x_1394_ = lean_nat_dec_eq(v_head_1390_, v___x_1393_);
lean_dec(v_head_1390_);
v_a_1379_ = v_tail_1391_;
v_a_1380_ = v___x_1392_;
v_a_1381_ = v___x_1394_;
v_a_1382_ = v_n_1387_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyFind_go___boxed(lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_){
_start:
{
uint8_t v_a_166__boxed_1410_; lean_object* v_res_1411_; 
v_a_166__boxed_1410_ = lean_unbox(v_a_1408_);
v_res_1411_ = lp_lean_x2dftml_LeanFtml_bibliographyFind_go(v_a_1406_, v_a_1407_, v_a_166__boxed_1410_, v_a_1409_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyFind(lean_object* v_src_1412_){
_start:
{
lean_object* v___x_1413_; uint8_t v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1413_ = lean_unsigned_to_nat(0u);
v___x_1414_ = 1;
v___x_1415_ = l_List_lengthTR___redArg(v_src_1412_);
v___x_1416_ = lean_unsigned_to_nat(1u);
v___x_1417_ = lean_nat_add(v___x_1415_, v___x_1416_);
lean_dec(v___x_1415_);
v___x_1418_ = lp_lean_x2dftml_LeanFtml_bibliographyFind_go(v_src_1412_, v___x_1413_, v___x_1414_, v___x_1417_);
return v___x_1418_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__0(void){
_start:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1419_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2);
v___x_1420_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimNl___closed__0));
v___x_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
lean_ctor_set(v___x_1421_, 1, v___x_1419_);
return v___x_1421_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__1(void){
_start:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1422_ = lean_box(0);
v___x_1423_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__0, &lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__0);
v___x_1424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
lean_ctor_set(v___x_1424_, 1, v___x_1422_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyProcess(lean_object* v_g1_1425_, lean_object* v_inner_1426_, lean_object* v_doc_1427_, lean_object* v_toks_1428_){
_start:
{
uint8_t v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v_snd_1434_; lean_object* v_fst_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1473_; 
v___x_1429_ = 0;
v___x_1430_ = l_List_lengthTR___redArg(v_inner_1426_);
v___x_1431_ = lean_unsigned_to_nat(1u);
v___x_1432_ = lean_nat_add(v___x_1430_, v___x_1431_);
lean_dec(v___x_1430_);
v___x_1433_ = lp_lean_x2dftml_LeanFtml_bibWalk(v_inner_1426_, v___x_1429_, v_doc_1427_, v_toks_1428_, v___x_1432_);
v_snd_1434_ = lean_ctor_get(v___x_1433_, 1);
v_fst_1435_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1437_ = v___x_1433_;
v_isShared_1438_ = v_isSharedCheck_1473_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_snd_1434_);
lean_inc(v_fst_1435_);
lean_dec(v___x_1433_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1473_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v_fst_1439_; lean_object* v_snd_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1472_; 
v_fst_1439_ = lean_ctor_get(v_snd_1434_, 0);
v_snd_1440_ = lean_ctor_get(v_snd_1434_, 1);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_snd_1434_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1442_ = v_snd_1434_;
v_isShared_1443_ = v_isSharedCheck_1472_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_snd_1440_);
lean_inc(v_fst_1439_);
lean_dec(v_snd_1434_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1472_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1444_; lean_object* v_startPh_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1451_; 
v___x_1444_ = l_List_lengthTR___redArg(v_fst_1439_);
v_startPh_1445_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1444_);
v___x_1446_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimNl___closed__0));
v___x_1447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6);
v___x_1448_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1);
v___x_1449_ = lp_lean_x2dftml_LeanFtml_titleOpt(v_g1_1425_);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 1, v___x_1449_);
lean_ctor_set(v___x_1442_, 0, v___x_1448_);
v___x_1451_ = v___x_1442_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1448_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v___x_1449_);
v___x_1451_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v_t2_1457_; lean_object* v___x_1458_; lean_object* v_endPh_1459_; lean_object* v___x_1460_; lean_object* v_t3_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1468_; 
v___x_1452_ = lean_box(0);
v___x_1453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1451_);
lean_ctor_set(v___x_1453_, 1, v___x_1452_);
v___x_1454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1447_);
lean_ctor_set(v___x_1454_, 1, v___x_1453_);
v___x_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1446_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
lean_ctor_set(v___x_1456_, 1, v___x_1452_);
v_t2_1457_ = l_List_appendTR___redArg(v_fst_1439_, v___x_1456_);
v___x_1458_ = l_List_lengthTR___redArg(v_t2_1457_);
v_endPh_1459_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1458_);
v___x_1460_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__1, &lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__1);
v_t3_1461_ = l_List_appendTR___redArg(v_t2_1457_, v___x_1460_);
v___x_1462_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__11));
v___x_1463_ = l_List_appendTR___redArg(v___x_1462_, v_startPh_1445_);
v___x_1464_ = l_List_appendTR___redArg(v___x_1463_, v_fst_1435_);
v___x_1465_ = l_List_appendTR___redArg(v___x_1464_, v_endPh_1459_);
v___x_1466_ = l_List_appendTR___redArg(v___x_1465_, v___x_1462_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 1, v_snd_1440_);
lean_ctor_set(v___x_1437_, 0, v_t3_1461_);
v___x_1468_ = v___x_1437_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_t3_1461_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v_snd_1440_);
v___x_1468_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
lean_object* v___x_1469_; 
v___x_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1466_);
lean_ctor_set(v___x_1469_, 1, v___x_1468_);
return v___x_1469_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyProcess___boxed(lean_object* v_g1_1474_, lean_object* v_inner_1475_, lean_object* v_doc_1476_, lean_object* v_toks_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = lp_lean_x2dftml_LeanFtml_bibliographyProcess(v_g1_1474_, v_inner_1475_, v_doc_1476_, v_toks_1477_);
lean_dec(v_g1_1474_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyRule(lean_object* v_st_1479_){
_start:
{
lean_object* v_work_1480_; lean_object* v_tokens_1481_; lean_object* v_doc_1482_; uint8_t v_fatal_1483_; lean_object* v_src_1484_; lean_object* v___x_1485_; 
v_work_1480_ = lean_ctor_get(v_st_1479_, 0);
v_tokens_1481_ = lean_ctor_get(v_st_1479_, 1);
v_doc_1482_ = lean_ctor_get(v_st_1479_, 2);
v_fatal_1483_ = lean_ctor_get_uint8(v_st_1479_, sizeof(void*)*3);
lean_inc(v_work_1480_);
v_src_1484_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_1480_);
lean_inc(v_src_1484_);
v___x_1485_ = lp_lean_x2dftml_LeanFtml_bibliographyFind(v_src_1484_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_dec(v_src_1484_);
return v_st_1479_;
}
else
{
lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1509_; 
lean_inc_ref(v_doc_1482_);
lean_inc(v_tokens_1481_);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_st_1479_);
if (v_isSharedCheck_1509_ == 0)
{
lean_object* v_unused_1510_; lean_object* v_unused_1511_; lean_object* v_unused_1512_; 
v_unused_1510_ = lean_ctor_get(v_st_1479_, 2);
lean_dec(v_unused_1510_);
v_unused_1511_ = lean_ctor_get(v_st_1479_, 1);
lean_dec(v_unused_1511_);
v_unused_1512_ = lean_ctor_get(v_st_1479_, 0);
lean_dec(v_unused_1512_);
v___x_1487_ = v_st_1479_;
v_isShared_1488_ = v_isSharedCheck_1509_;
goto v_resetjp_1486_;
}
else
{
lean_dec(v_st_1479_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1509_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v_val_1489_; lean_object* v_snd_1490_; lean_object* v_snd_1491_; lean_object* v_fst_1492_; lean_object* v_fst_1493_; lean_object* v_fst_1494_; lean_object* v_snd_1495_; lean_object* v___x_1496_; lean_object* v_snd_1497_; lean_object* v_fst_1498_; lean_object* v_fst_1499_; lean_object* v_snd_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1507_; 
v_val_1489_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_val_1489_);
lean_dec_ref_known(v___x_1485_, 1);
v_snd_1490_ = lean_ctor_get(v_val_1489_, 1);
lean_inc(v_snd_1490_);
v_snd_1491_ = lean_ctor_get(v_snd_1490_, 1);
lean_inc(v_snd_1491_);
v_fst_1492_ = lean_ctor_get(v_val_1489_, 0);
lean_inc(v_fst_1492_);
lean_dec(v_val_1489_);
v_fst_1493_ = lean_ctor_get(v_snd_1490_, 0);
lean_inc(v_fst_1493_);
lean_dec(v_snd_1490_);
v_fst_1494_ = lean_ctor_get(v_snd_1491_, 0);
lean_inc(v_fst_1494_);
v_snd_1495_ = lean_ctor_get(v_snd_1491_, 1);
lean_inc(v_snd_1495_);
lean_dec(v_snd_1491_);
v___x_1496_ = lp_lean_x2dftml_LeanFtml_bibliographyProcess(v_fst_1493_, v_fst_1494_, v_doc_1482_, v_tokens_1481_);
lean_dec(v_fst_1493_);
v_snd_1497_ = lean_ctor_get(v___x_1496_, 1);
lean_inc(v_snd_1497_);
v_fst_1498_ = lean_ctor_get(v___x_1496_, 0);
lean_inc(v_fst_1498_);
lean_dec_ref(v___x_1496_);
v_fst_1499_ = lean_ctor_get(v_snd_1497_, 0);
lean_inc(v_fst_1499_);
v_snd_1500_ = lean_ctor_get(v_snd_1497_, 1);
lean_inc(v_snd_1500_);
lean_dec(v_snd_1497_);
v___x_1501_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_src_1484_);
v___x_1502_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_1484_, v_src_1484_, v_fst_1492_, v___x_1501_);
lean_dec(v_src_1484_);
v___x_1503_ = l_List_appendTR___redArg(v___x_1502_, v_fst_1498_);
v___x_1504_ = l_List_appendTR___redArg(v___x_1503_, v_snd_1495_);
v___x_1505_ = lp_lean_x2dftml_LeanFtml_parseBytes(v___x_1504_);
if (v_isShared_1488_ == 0)
{
lean_ctor_set(v___x_1487_, 2, v_snd_1500_);
lean_ctor_set(v___x_1487_, 1, v_fst_1499_);
lean_ctor_set(v___x_1487_, 0, v___x_1505_);
v___x_1507_ = v___x_1487_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1505_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v_fst_1499_);
lean_ctor_set(v_reuseFailAlloc_1508_, 2, v_snd_1500_);
lean_ctor_set_uint8(v_reuseFailAlloc_1508_, sizeof(void*)*3, v_fatal_1483_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__1(void){
_start:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1514_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__0));
v___x_1515_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1514_);
return v___x_1515_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__3(void){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1517_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__2));
v___x_1518_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1517_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteMatchAt(lean_object* v_src_1519_){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1520_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__1);
v___x_1521_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1520_, v_src_1519_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v___x_1522_; 
v___x_1522_ = lean_box(0);
return v___x_1522_;
}
else
{
lean_object* v_val_1523_; 
v_val_1523_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_val_1523_);
lean_dec_ref_known(v___x_1521_, 1);
if (lean_obj_tag(v_val_1523_) == 0)
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_box(0);
return v___x_1524_;
}
else
{
lean_object* v_head_1525_; lean_object* v_tail_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1552_; 
v_head_1525_ = lean_ctor_get(v_val_1523_, 0);
v_tail_1526_ = lean_ctor_get(v_val_1523_, 1);
v_isSharedCheck_1552_ = !lean_is_exclusive(v_val_1523_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1528_ = v_val_1523_;
v_isShared_1529_ = v_isSharedCheck_1552_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_tail_1526_);
lean_inc(v_head_1525_);
lean_dec(v_val_1523_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1552_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
uint8_t v___x_1530_; 
v___x_1530_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1525_);
lean_dec(v_head_1525_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; 
lean_del_object(v___x_1528_);
lean_dec(v_tail_1526_);
v___x_1531_ = lean_box(0);
return v___x_1531_;
}
else
{
lean_object* v___x_1532_; lean_object* v_label_1533_; uint8_t v___x_1534_; 
v___x_1532_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_tail_1526_);
v_label_1533_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0(v_tail_1526_, v_tail_1526_, v___x_1532_);
v___x_1534_ = l_List_isEmpty___redArg(v_label_1533_);
if (v___x_1534_ == 0)
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1535_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__3, &lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__3);
v___x_1536_ = l_List_lengthTR___redArg(v_label_1533_);
v___x_1537_ = l_List_drop___redArg(v___x_1536_, v_tail_1526_);
lean_dec(v_tail_1526_);
v___x_1538_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1535_, v___x_1537_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v___x_1539_; 
lean_dec(v_label_1533_);
lean_del_object(v___x_1528_);
v___x_1539_ = lean_box(0);
return v___x_1539_;
}
else
{
lean_object* v_val_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1550_; 
v_val_1540_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1542_ = v___x_1538_;
v_isShared_1543_ = v_isSharedCheck_1550_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_val_1540_);
lean_dec(v___x_1538_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1550_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1529_ == 0)
{
lean_ctor_set_tag(v___x_1528_, 0);
lean_ctor_set(v___x_1528_, 1, v_val_1540_);
lean_ctor_set(v___x_1528_, 0, v_label_1533_);
v___x_1545_ = v___x_1528_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_label_1533_);
lean_ctor_set(v_reuseFailAlloc_1549_, 1, v_val_1540_);
v___x_1545_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
lean_object* v___x_1547_; 
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1545_);
v___x_1547_ = v___x_1542_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v___x_1545_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
}
}
}
else
{
lean_object* v___x_1551_; 
lean_dec(v_label_1533_);
lean_del_object(v___x_1528_);
lean_dec(v_tail_1526_);
v___x_1551_ = lean_box(0);
return v___x_1551_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteScan(lean_object* v_src_1554_, lean_object* v_toks_1555_, lean_object* v_x_1556_){
_start:
{
lean_object* v_zero_1560_; uint8_t v_isZero_1561_; 
v_zero_1560_ = lean_unsigned_to_nat(0u);
v_isZero_1561_ = lean_nat_dec_eq(v_x_1556_, v_zero_1560_);
if (v_isZero_1561_ == 1)
{
lean_dec(v_src_1554_);
goto v___jp_1557_;
}
else
{
if (lean_obj_tag(v_src_1554_) == 0)
{
goto v___jp_1557_;
}
else
{
lean_object* v_head_1562_; lean_object* v_tail_1563_; lean_object* v_one_1564_; lean_object* v_n_1565_; lean_object* v___x_1566_; 
v_head_1562_ = lean_ctor_get(v_src_1554_, 0);
lean_inc(v_head_1562_);
v_tail_1563_ = lean_ctor_get(v_src_1554_, 1);
lean_inc(v_tail_1563_);
v_one_1564_ = lean_unsigned_to_nat(1u);
v_n_1565_ = lean_nat_sub(v_x_1556_, v_one_1564_);
v___x_1566_ = lp_lean_x2dftml_LeanFtml_bibciteMatchAt(v_src_1554_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v___x_1567_; lean_object* v_fst_1568_; lean_object* v_snd_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1577_; 
v___x_1567_ = lp_lean_x2dftml_LeanFtml_bibciteScan(v_tail_1563_, v_toks_1555_, v_n_1565_);
lean_dec(v_n_1565_);
v_fst_1568_ = lean_ctor_get(v___x_1567_, 0);
v_snd_1569_ = lean_ctor_get(v___x_1567_, 1);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1571_ = v___x_1567_;
v_isShared_1572_ = v_isSharedCheck_1577_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_snd_1569_);
lean_inc(v_fst_1568_);
lean_dec(v___x_1567_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1577_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1573_; lean_object* v___x_1575_; 
v___x_1573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1573_, 0, v_head_1562_);
lean_ctor_set(v___x_1573_, 1, v_fst_1568_);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 0, v___x_1573_);
v___x_1575_ = v___x_1571_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v___x_1573_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v_snd_1569_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
else
{
lean_object* v_val_1578_; lean_object* v_fst_1579_; lean_object* v_snd_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1608_; 
lean_dec(v_tail_1563_);
lean_dec(v_head_1562_);
v_val_1578_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_val_1578_);
lean_dec_ref_known(v___x_1566_, 1);
v_fst_1579_ = lean_ctor_get(v_val_1578_, 0);
v_snd_1580_ = lean_ctor_get(v_val_1578_, 1);
v_isSharedCheck_1608_ = !lean_is_exclusive(v_val_1578_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1582_ = v_val_1578_;
v_isShared_1583_ = v_isSharedCheck_1608_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_snd_1580_);
lean_inc(v_fst_1579_);
lean_dec(v_val_1578_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1608_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1588_; 
v___x_1584_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibciteScan___closed__0));
v___x_1585_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2);
v___x_1586_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_1579_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 1, v___x_1586_);
lean_ctor_set(v___x_1582_, 0, v___x_1585_);
v___x_1588_ = v___x_1582_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1585_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v___x_1586_);
v___x_1588_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v_t1_1593_; lean_object* v___x_1594_; lean_object* v_fst_1595_; lean_object* v_snd_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1606_; 
v___x_1589_ = lean_box(0);
v___x_1590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1588_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
v___x_1591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1584_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1591_);
lean_ctor_set(v___x_1592_, 1, v___x_1589_);
lean_inc(v_toks_1555_);
v_t1_1593_ = l_List_appendTR___redArg(v_toks_1555_, v___x_1592_);
v___x_1594_ = lp_lean_x2dftml_LeanFtml_bibciteScan(v_snd_1580_, v_t1_1593_, v_n_1565_);
lean_dec(v_n_1565_);
v_fst_1595_ = lean_ctor_get(v___x_1594_, 0);
v_snd_1596_ = lean_ctor_get(v___x_1594_, 1);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1594_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1598_ = v___x_1594_;
v_isShared_1599_ = v_isSharedCheck_1606_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_snd_1596_);
lean_inc(v_fst_1595_);
lean_dec(v___x_1594_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1606_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1604_; 
v___x_1600_ = l_List_lengthTR___redArg(v_toks_1555_);
lean_dec(v_toks_1555_);
v___x_1601_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1600_);
v___x_1602_ = l_List_appendTR___redArg(v___x_1601_, v_fst_1595_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 0, v___x_1602_);
v___x_1604_ = v___x_1598_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v___x_1602_);
lean_ctor_set(v_reuseFailAlloc_1605_, 1, v_snd_1596_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
}
}
}
v___jp_1557_:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1558_ = lean_box(0);
v___x_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
lean_ctor_set(v___x_1559_, 1, v_toks_1555_);
return v___x_1559_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteScan___boxed(lean_object* v_src_1609_, lean_object* v_toks_1610_, lean_object* v_x_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = lp_lean_x2dftml_LeanFtml_bibciteScan(v_src_1609_, v_toks_1610_, v_x_1611_);
lean_dec(v_x_1611_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteRule___lam__0(lean_object* v_src_1613_, lean_object* v_toks_1614_){
_start:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1615_ = l_List_lengthTR___redArg(v_src_1613_);
v___x_1616_ = lean_unsigned_to_nat(1u);
v___x_1617_ = lean_nat_add(v___x_1615_, v___x_1616_);
lean_dec(v___x_1615_);
v___x_1618_ = lp_lean_x2dftml_LeanFtml_bibciteScan(v_src_1613_, v_toks_1614_, v___x_1617_);
lean_dec(v___x_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteRule(lean_object* v_st_1620_){
_start:
{
lean_object* v___f_1621_; lean_object* v___x_1622_; 
v___f_1621_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibciteRule___closed__0));
v___x_1622_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1620_, v___f_1621_);
return v___x_1622_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__1(void){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1625_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__0));
v___x_1626_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2, &lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2);
v___x_1627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
lean_ctor_set(v___x_1627_, 1, v___x_1625_);
return v___x_1627_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__2(void){
_start:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1628_ = lean_box(0);
v___x_1629_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__1, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__1_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__1);
v___x_1630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1629_);
lean_ctor_set(v___x_1630_, 1, v___x_1628_);
return v___x_1630_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3(void){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1631_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__2, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__2_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__2);
v___x_1632_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__0));
v___x_1633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
lean_ctor_set(v___x_1633_, 1, v___x_1631_);
return v___x_1633_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__4(void){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1634_ = lean_box(0);
v___x_1635_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3);
v___x_1636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1635_);
lean_ctor_set(v___x_1636_, 1, v___x_1634_);
return v___x_1636_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__5(void){
_start:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1637_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__4, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__4_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__4);
v___x_1638_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3);
v___x_1639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1638_);
lean_ctor_set(v___x_1639_, 1, v___x_1637_);
return v___x_1639_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2(void){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__5, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__5_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__5);
return v___x_1640_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FrameRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_CodeRule(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FormRawRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ModuleRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NextRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_NotesRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_FrameRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_CodeRule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_FormRawRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ModuleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_NextRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_instInhabitedBibPrev_default = _init_lp_lean_x2dftml_LeanFtml_instInhabitedBibPrev_default();
lp_lean_x2dftml_LeanFtml_instInhabitedBibPrev = _init_lp_lean_x2dftml_LeanFtml_instInhabitedBibPrev();
lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2 = _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2();
lean_mark_persistent(lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
