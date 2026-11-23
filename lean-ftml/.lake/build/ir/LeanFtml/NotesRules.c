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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasSingleBreakByte_go(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasSingleBreakByte_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasSingleBreakByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasSingleBreakByte___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isLiveDroppedControl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isLiveDroppedControl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_stripLiveDroppedControls_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripLiveDroppedControls(lean_object*);
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
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasSingleBreakByte_go(uint8_t v_a_277_, lean_object* v_a_278_){
_start:
{
if (lean_obj_tag(v_a_278_) == 0)
{
uint8_t v___x_279_; 
v___x_279_ = 0;
return v___x_279_;
}
else
{
lean_object* v_head_280_; lean_object* v_tail_281_; lean_object* v___x_285_; uint8_t v___x_286_; 
v_head_280_ = lean_ctor_get(v_a_278_, 0);
v_tail_281_ = lean_ctor_get(v_a_278_, 1);
v___x_285_ = lean_unsigned_to_nat(10u);
v___x_286_ = lean_nat_dec_eq(v_head_280_, v___x_285_);
if (v___x_286_ == 0)
{
uint8_t v___x_287_; 
v___x_287_ = 1;
v_a_277_ = v___x_287_;
v_a_278_ = v_tail_281_;
goto _start;
}
else
{
if (v_a_277_ == 0)
{
goto v___jp_282_;
}
else
{
if (lean_obj_tag(v_tail_281_) == 0)
{
goto v___jp_282_;
}
else
{
lean_object* v_head_289_; uint8_t v___x_290_; 
v_head_289_ = lean_ctor_get(v_tail_281_, 0);
v___x_290_ = lean_nat_dec_eq(v_head_289_, v___x_285_);
if (v___x_290_ == 0)
{
return v_a_277_;
}
else
{
goto v___jp_282_;
}
}
}
}
v___jp_282_:
{
uint8_t v___x_283_; 
v___x_283_ = 0;
v_a_277_ = v___x_283_;
v_a_278_ = v_tail_281_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasSingleBreakByte_go___boxed(lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
uint8_t v_a_166__boxed_293_; uint8_t v_res_294_; lean_object* v_r_295_; 
v_a_166__boxed_293_ = lean_unbox(v_a_291_);
v_res_294_ = lp_lean_x2dftml_LeanFtml_hasSingleBreakByte_go(v_a_166__boxed_293_, v_a_292_);
lean_dec(v_a_292_);
v_r_295_ = lean_box(v_res_294_);
return v_r_295_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasSingleBreakByte(lean_object* v_bs_296_){
_start:
{
uint8_t v___x_297_; uint8_t v___x_298_; 
v___x_297_ = 0;
v___x_298_ = lp_lean_x2dftml_LeanFtml_hasSingleBreakByte_go(v___x_297_, v_bs_296_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasSingleBreakByte___boxed(lean_object* v_bs_299_){
_start:
{
uint8_t v_res_300_; lean_object* v_r_301_; 
v_res_300_ = lp_lean_x2dftml_LeanFtml_hasSingleBreakByte(v_bs_299_);
lean_dec(v_bs_299_);
v_r_301_ = lean_box(v_res_300_);
return v_r_301_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isLiveDroppedControl(lean_object* v_b_302_){
_start:
{
lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_303_ = lean_unsigned_to_nat(32u);
v___x_304_ = lean_nat_dec_lt(v_b_302_, v___x_303_);
if (v___x_304_ == 0)
{
return v___x_304_;
}
else
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = lean_unsigned_to_nat(9u);
v___x_306_ = lean_nat_dec_eq(v_b_302_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_307_ = lean_unsigned_to_nat(10u);
v___x_308_ = lean_nat_dec_eq(v_b_302_, v___x_307_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_309_ = lean_unsigned_to_nat(13u);
v___x_310_ = lean_nat_dec_eq(v_b_302_, v___x_309_);
if (v___x_310_ == 0)
{
return v___x_304_;
}
else
{
return v___x_308_;
}
}
else
{
return v___x_306_;
}
}
else
{
uint8_t v___x_311_; 
v___x_311_ = 0;
return v___x_311_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isLiveDroppedControl___boxed(lean_object* v_b_312_){
_start:
{
uint8_t v_res_313_; lean_object* v_r_314_; 
v_res_313_ = lp_lean_x2dftml_LeanFtml_isLiveDroppedControl(v_b_312_);
lean_dec(v_b_312_);
v_r_314_ = lean_box(v_res_313_);
return v_r_314_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_stripLiveDroppedControls_spec__0(lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
if (lean_obj_tag(v_a_315_) == 0)
{
lean_object* v___x_317_; 
v___x_317_ = l_List_reverse___redArg(v_a_316_);
return v___x_317_;
}
else
{
lean_object* v_head_318_; lean_object* v_tail_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_329_; 
v_head_318_ = lean_ctor_get(v_a_315_, 0);
v_tail_319_ = lean_ctor_get(v_a_315_, 1);
v_isSharedCheck_329_ = !lean_is_exclusive(v_a_315_);
if (v_isSharedCheck_329_ == 0)
{
v___x_321_ = v_a_315_;
v_isShared_322_ = v_isSharedCheck_329_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_tail_319_);
lean_inc(v_head_318_);
lean_dec(v_a_315_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_329_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
uint8_t v___x_323_; 
v___x_323_ = lp_lean_x2dftml_LeanFtml_isLiveDroppedControl(v_head_318_);
if (v___x_323_ == 0)
{
lean_object* v___x_325_; 
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 1, v_a_316_);
v___x_325_ = v___x_321_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_head_318_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_a_316_);
v___x_325_ = v_reuseFailAlloc_327_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
v_a_315_ = v_tail_319_;
v_a_316_ = v___x_325_;
goto _start;
}
}
else
{
lean_del_object(v___x_321_);
lean_dec(v_head_318_);
v_a_315_ = v_tail_319_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripLiveDroppedControls(lean_object* v_bs_330_){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_box(0);
v___x_332_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_stripLiveDroppedControls_spec__0(v_bs_330_, v___x_331_);
return v___x_332_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__1));
v___x_336_ = l_String_toListImpl(v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteProcess(lean_object* v_body_337_, lean_object* v_doc_338_, lean_object* v_toks_339_){
_start:
{
lean_object* v___y_341_; lean_object* v_preStrip_381_; lean_object* v_pure_382_; uint8_t v___x_383_; 
v_preStrip_381_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_body_337_);
v_pure_382_ = lp_lean_x2dftml_LeanFtml_stripLiveDroppedControls(v_preStrip_381_);
v___x_383_ = lp_lean_x2dftml_LeanFtml_hasSingleBreakByte(v_pure_382_);
if (v___x_383_ == 0)
{
lean_object* v_stripped_384_; lean_object* v___x_385_; 
v_stripped_384_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes(v_pure_382_, v_toks_339_);
v___x_385_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_stripped_384_);
lean_dec(v_stripped_384_);
v___y_341_ = v___x_385_;
goto v___jp_340_;
}
else
{
v___y_341_ = v_pure_382_;
goto v___jp_340_;
}
v___jp_340_:
{
lean_object* v_page_342_; lean_object* v_site_343_; lean_object* v_inclusions_344_; lean_object* v_inclusionsNotExist_345_; lean_object* v_footnotes_346_; lean_object* v_bibitems_347_; lean_object* v_bibitemIds_348_; lean_object* v_headlineId_349_; lean_object* v_mathId_350_; lean_object* v_equations_351_; lean_object* v_collapsibleCount_352_; lean_object* v_tabviewCounter_353_; lean_object* v_scoredAnchors_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_380_; 
v_page_342_ = lean_ctor_get(v_doc_338_, 0);
v_site_343_ = lean_ctor_get(v_doc_338_, 1);
v_inclusions_344_ = lean_ctor_get(v_doc_338_, 2);
v_inclusionsNotExist_345_ = lean_ctor_get(v_doc_338_, 3);
v_footnotes_346_ = lean_ctor_get(v_doc_338_, 4);
v_bibitems_347_ = lean_ctor_get(v_doc_338_, 5);
v_bibitemIds_348_ = lean_ctor_get(v_doc_338_, 6);
v_headlineId_349_ = lean_ctor_get(v_doc_338_, 7);
v_mathId_350_ = lean_ctor_get(v_doc_338_, 8);
v_equations_351_ = lean_ctor_get(v_doc_338_, 9);
v_collapsibleCount_352_ = lean_ctor_get(v_doc_338_, 10);
v_tabviewCounter_353_ = lean_ctor_get(v_doc_338_, 11);
v_scoredAnchors_354_ = lean_ctor_get(v_doc_338_, 12);
v_isSharedCheck_380_ = !lean_is_exclusive(v_doc_338_);
if (v_isSharedCheck_380_ == 0)
{
v___x_356_ = v_doc_338_;
v_isShared_357_ = v_isSharedCheck_380_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_scoredAnchors_354_);
lean_inc(v_tabviewCounter_353_);
lean_inc(v_collapsibleCount_352_);
lean_inc(v_equations_351_);
lean_inc(v_mathId_350_);
lean_inc(v_headlineId_349_);
lean_inc(v_bibitemIds_348_);
lean_inc(v_bibitems_347_);
lean_inc(v_footnotes_346_);
lean_inc(v_inclusionsNotExist_345_);
lean_inc(v_inclusions_344_);
lean_inc(v_site_343_);
lean_inc(v_page_342_);
lean_dec(v_doc_338_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_380_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_id_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_358_ = l_List_lengthTR___redArg(v_footnotes_346_);
v___x_359_ = lean_unsigned_to_nat(1u);
v_id_360_ = lean_nat_add(v___x_358_, v___x_359_);
lean_dec(v___x_358_);
v___x_361_ = l_List_lengthTR___redArg(v_toks_339_);
v___x_362_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_361_);
v___x_363_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__0));
v___x_364_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2);
v___x_365_ = lean_nat_to_int(v_id_360_);
v___x_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
v___x_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_364_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
v___x_368_ = lean_box(0);
v___x_369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_367_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_363_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v___x_371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
lean_ctor_set(v___x_371_, 1, v___x_368_);
v___x_372_ = l_List_appendTR___redArg(v_toks_339_, v___x_371_);
v___x_373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_373_, 0, v___y_341_);
lean_ctor_set(v___x_373_, 1, v___x_368_);
v___x_374_ = l_List_appendTR___redArg(v_footnotes_346_, v___x_373_);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 4, v___x_374_);
v___x_376_ = v___x_356_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_page_342_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v_site_343_);
lean_ctor_set(v_reuseFailAlloc_379_, 2, v_inclusions_344_);
lean_ctor_set(v_reuseFailAlloc_379_, 3, v_inclusionsNotExist_345_);
lean_ctor_set(v_reuseFailAlloc_379_, 4, v___x_374_);
lean_ctor_set(v_reuseFailAlloc_379_, 5, v_bibitems_347_);
lean_ctor_set(v_reuseFailAlloc_379_, 6, v_bibitemIds_348_);
lean_ctor_set(v_reuseFailAlloc_379_, 7, v_headlineId_349_);
lean_ctor_set(v_reuseFailAlloc_379_, 8, v_mathId_350_);
lean_ctor_set(v_reuseFailAlloc_379_, 9, v_equations_351_);
lean_ctor_set(v_reuseFailAlloc_379_, 10, v_collapsibleCount_352_);
lean_ctor_set(v_reuseFailAlloc_379_, 11, v_tabviewCounter_353_);
lean_ctor_set(v_reuseFailAlloc_379_, 12, v_scoredAnchors_354_);
v___x_376_ = v_reuseFailAlloc_379_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_372_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_362_);
lean_ctor_set(v___x_378_, 1, v___x_377_);
return v___x_378_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteProcess___boxed(lean_object* v_body_386_, lean_object* v_doc_387_, lean_object* v_toks_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = lp_lean_x2dftml_LeanFtml_footnoteProcess(v_body_386_, v_doc_387_, v_toks_388_);
lean_dec(v_body_386_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteScan(lean_object* v_src_390_, lean_object* v_toks_391_, lean_object* v_doc_392_, lean_object* v_x_393_){
_start:
{
lean_object* v_zero_398_; uint8_t v_isZero_399_; 
v_zero_398_ = lean_unsigned_to_nat(0u);
v_isZero_399_ = lean_nat_dec_eq(v_x_393_, v_zero_398_);
if (v_isZero_399_ == 1)
{
lean_dec(v_src_390_);
goto v___jp_394_;
}
else
{
if (lean_obj_tag(v_src_390_) == 0)
{
goto v___jp_394_;
}
else
{
lean_object* v_head_400_; lean_object* v_tail_401_; lean_object* v_one_402_; lean_object* v_n_403_; lean_object* v___x_404_; 
v_head_400_ = lean_ctor_get(v_src_390_, 0);
lean_inc(v_head_400_);
v_tail_401_ = lean_ctor_get(v_src_390_, 1);
lean_inc(v_tail_401_);
v_one_402_ = lean_unsigned_to_nat(1u);
v_n_403_ = lean_nat_sub(v_x_393_, v_one_402_);
v___x_404_ = lp_lean_x2dftml_LeanFtml_footnoteMatchAt(v_src_390_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v___x_405_; lean_object* v_fst_406_; lean_object* v_snd_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_415_; 
v___x_405_ = lp_lean_x2dftml_LeanFtml_footnoteScan(v_tail_401_, v_toks_391_, v_doc_392_, v_n_403_);
lean_dec(v_n_403_);
v_fst_406_ = lean_ctor_get(v___x_405_, 0);
v_snd_407_ = lean_ctor_get(v___x_405_, 1);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_415_ == 0)
{
v___x_409_ = v___x_405_;
v_isShared_410_ = v_isSharedCheck_415_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_snd_407_);
lean_inc(v_fst_406_);
lean_dec(v___x_405_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_415_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_413_; 
v___x_411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_411_, 0, v_head_400_);
lean_ctor_set(v___x_411_, 1, v_fst_406_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_411_);
v___x_413_ = v___x_409_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v___x_411_);
lean_ctor_set(v_reuseFailAlloc_414_, 1, v_snd_407_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
else
{
lean_object* v_val_416_; lean_object* v_fst_417_; lean_object* v_snd_418_; lean_object* v___x_419_; lean_object* v_snd_420_; lean_object* v_fst_421_; lean_object* v_fst_422_; lean_object* v_snd_423_; lean_object* v___x_424_; lean_object* v_fst_425_; lean_object* v_snd_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_434_; 
lean_dec(v_tail_401_);
lean_dec(v_head_400_);
v_val_416_ = lean_ctor_get(v___x_404_, 0);
lean_inc(v_val_416_);
lean_dec_ref_known(v___x_404_, 1);
v_fst_417_ = lean_ctor_get(v_val_416_, 0);
lean_inc(v_fst_417_);
v_snd_418_ = lean_ctor_get(v_val_416_, 1);
lean_inc(v_snd_418_);
lean_dec(v_val_416_);
v___x_419_ = lp_lean_x2dftml_LeanFtml_footnoteProcess(v_fst_417_, v_doc_392_, v_toks_391_);
lean_dec(v_fst_417_);
v_snd_420_ = lean_ctor_get(v___x_419_, 1);
lean_inc(v_snd_420_);
v_fst_421_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_fst_421_);
lean_dec_ref(v___x_419_);
v_fst_422_ = lean_ctor_get(v_snd_420_, 0);
lean_inc(v_fst_422_);
v_snd_423_ = lean_ctor_get(v_snd_420_, 1);
lean_inc(v_snd_423_);
lean_dec(v_snd_420_);
v___x_424_ = lp_lean_x2dftml_LeanFtml_footnoteScan(v_snd_418_, v_fst_422_, v_snd_423_, v_n_403_);
lean_dec(v_n_403_);
v_fst_425_ = lean_ctor_get(v___x_424_, 0);
v_snd_426_ = lean_ctor_get(v___x_424_, 1);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_434_ == 0)
{
v___x_428_ = v___x_424_;
v_isShared_429_ = v_isSharedCheck_434_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_snd_426_);
lean_inc(v_fst_425_);
lean_dec(v___x_424_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_434_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_430_; lean_object* v___x_432_; 
v___x_430_ = l_List_appendTR___redArg(v_fst_421_, v_fst_425_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v___x_430_);
v___x_432_ = v___x_428_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_430_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v_snd_426_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
}
v___jp_394_:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = lean_box(0);
v___x_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_396_, 0, v_toks_391_);
lean_ctor_set(v___x_396_, 1, v_doc_392_);
v___x_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteScan___boxed(lean_object* v_src_435_, lean_object* v_toks_436_, lean_object* v_doc_437_, lean_object* v_x_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = lp_lean_x2dftml_LeanFtml_footnoteScan(v_src_435_, v_toks_436_, v_doc_437_, v_x_438_);
lean_dec(v_x_438_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteRule(lean_object* v_st_440_){
_start:
{
lean_object* v_work_441_; lean_object* v_tokens_442_; lean_object* v_doc_443_; uint8_t v_fatal_444_; lean_object* v_continuedDivLeads_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_462_; 
v_work_441_ = lean_ctor_get(v_st_440_, 0);
v_tokens_442_ = lean_ctor_get(v_st_440_, 1);
v_doc_443_ = lean_ctor_get(v_st_440_, 2);
v_fatal_444_ = lean_ctor_get_uint8(v_st_440_, sizeof(void*)*4);
v_continuedDivLeads_445_ = lean_ctor_get(v_st_440_, 3);
v_isSharedCheck_462_ = !lean_is_exclusive(v_st_440_);
if (v_isSharedCheck_462_ == 0)
{
v___x_447_ = v_st_440_;
v_isShared_448_ = v_isSharedCheck_462_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_continuedDivLeads_445_);
lean_inc(v_doc_443_);
lean_inc(v_tokens_442_);
lean_inc(v_work_441_);
lean_dec(v_st_440_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_462_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v_input_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v_snd_454_; lean_object* v_fst_455_; lean_object* v_fst_456_; lean_object* v_snd_457_; lean_object* v___x_458_; lean_object* v___x_460_; 
v_input_449_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_441_);
v___x_450_ = l_List_lengthTR___redArg(v_input_449_);
v___x_451_ = lean_unsigned_to_nat(1u);
v___x_452_ = lean_nat_add(v___x_450_, v___x_451_);
lean_dec(v___x_450_);
v___x_453_ = lp_lean_x2dftml_LeanFtml_footnoteScan(v_input_449_, v_tokens_442_, v_doc_443_, v___x_452_);
lean_dec(v___x_452_);
v_snd_454_ = lean_ctor_get(v___x_453_, 1);
lean_inc(v_snd_454_);
v_fst_455_ = lean_ctor_get(v___x_453_, 0);
lean_inc(v_fst_455_);
lean_dec_ref(v___x_453_);
v_fst_456_ = lean_ctor_get(v_snd_454_, 0);
lean_inc(v_fst_456_);
v_snd_457_ = lean_ctor_get(v_snd_454_, 1);
lean_inc(v_snd_457_);
lean_dec(v_snd_454_);
v___x_458_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_455_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 2, v_snd_457_);
lean_ctor_set(v___x_447_, 1, v_fst_456_);
lean_ctor_set(v___x_447_, 0, v___x_458_);
v___x_460_ = v___x_447_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_fst_456_);
lean_ctor_set(v_reuseFailAlloc_461_, 2, v_snd_457_);
lean_ctor_set(v_reuseFailAlloc_461_, 3, v_continuedDivLeads_445_);
lean_ctor_set_uint8(v_reuseFailAlloc_461_, sizeof(void*)*4, v_fatal_444_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteitemRule(lean_object* v_st_463_){
_start:
{
lean_inc_ref(v_st_463_);
return v_st_463_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteitemRule___boxed(lean_object* v_st_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = lp_lean_x2dftml_LeanFtml_footnoteitemRule(v_st_464_);
lean_dec_ref(v_st_464_);
return v_res_465_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__1(void){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__0));
v___x_468_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_467_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt(lean_object* v_src_469_){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt___closed__1);
v___x_471_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_470_, v_src_469_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v___x_472_; 
v___x_472_ = lean_box(0);
return v___x_472_;
}
else
{
lean_object* v_val_473_; lean_object* v___x_474_; 
v_val_473_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_val_473_);
lean_dec_ref_known(v___x_471_, 1);
v___x_474_ = lp_lean_x2dftml_LeanFtml_attrGroupB(v_val_473_);
return v___x_474_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockFind_go(lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_zero_478_; uint8_t v_isZero_479_; 
v_zero_478_ = lean_unsigned_to_nat(0u);
v_isZero_479_ = lean_nat_dec_eq(v_a_477_, v_zero_478_);
if (v_isZero_479_ == 1)
{
lean_object* v___x_480_; 
lean_dec(v_a_477_);
lean_dec(v_a_476_);
lean_dec(v_a_475_);
v___x_480_ = lean_box(0);
return v___x_480_;
}
else
{
lean_object* v___x_481_; 
lean_inc(v_a_475_);
v___x_481_ = lp_lean_x2dftml_LeanFtml_footnoteblockMatchAt(v_a_475_);
if (lean_obj_tag(v___x_481_) == 0)
{
if (lean_obj_tag(v_a_475_) == 0)
{
lean_object* v___x_482_; 
lean_dec(v_a_477_);
lean_dec(v_a_476_);
v___x_482_ = lean_box(0);
return v___x_482_;
}
else
{
lean_object* v_tail_483_; lean_object* v_one_484_; lean_object* v_n_485_; lean_object* v___x_486_; 
v_tail_483_ = lean_ctor_get(v_a_475_, 1);
lean_inc(v_tail_483_);
lean_dec_ref_known(v_a_475_, 2);
v_one_484_ = lean_unsigned_to_nat(1u);
v_n_485_ = lean_nat_sub(v_a_477_, v_one_484_);
lean_dec(v_a_477_);
v___x_486_ = lean_nat_add(v_a_476_, v_one_484_);
lean_dec(v_a_476_);
v_a_475_ = v_tail_483_;
v_a_476_ = v___x_486_;
v_a_477_ = v_n_485_;
goto _start;
}
}
else
{
lean_object* v_val_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_496_; 
lean_dec(v_a_477_);
lean_dec(v_a_475_);
v_val_488_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_496_ == 0)
{
v___x_490_ = v___x_481_;
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_val_488_);
lean_dec(v___x_481_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v_a_476_);
lean_ctor_set(v___x_492_, 1, v_val_488_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_492_);
v___x_494_ = v___x_490_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_492_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockFind(lean_object* v_src_497_){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = l_List_lengthTR___redArg(v_src_497_);
v___x_500_ = lean_unsigned_to_nat(1u);
v___x_501_ = lean_nat_add(v___x_499_, v___x_500_);
lean_dec(v___x_499_);
v___x_502_ = lp_lean_x2dftml_LeanFtml_footnoteblockFind_go(v_src_497_, v___x_498_, v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstBreakSplit(lean_object* v_x_503_){
_start:
{
if (lean_obj_tag(v_x_503_) == 0)
{
lean_object* v___x_504_; 
v___x_504_ = lean_box(0);
return v___x_504_;
}
else
{
lean_object* v_head_505_; lean_object* v_tail_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_568_; 
v_head_505_ = lean_ctor_get(v_x_503_, 0);
v_tail_506_ = lean_ctor_get(v_x_503_, 1);
v_isSharedCheck_568_ = !lean_is_exclusive(v_x_503_);
if (v_isSharedCheck_568_ == 0)
{
v___x_508_ = v_x_503_;
v_isShared_509_ = v_isSharedCheck_568_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_tail_506_);
lean_inc(v_head_505_);
lean_dec(v_x_503_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_568_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_533_ = lean_unsigned_to_nat(10u);
v___x_534_ = lean_nat_dec_eq(v_head_505_, v___x_533_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; 
lean_del_object(v___x_508_);
v___x_535_ = lp_lean_x2dftml_LeanFtml_firstBreakSplit(v_tail_506_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_dec(v_head_505_);
return v___x_535_;
}
else
{
lean_object* v_val_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_553_; 
v_val_536_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_553_ == 0)
{
v___x_538_ = v___x_535_;
v_isShared_539_ = v_isSharedCheck_553_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_val_536_);
lean_dec(v___x_535_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_553_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v_fst_540_; lean_object* v_snd_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_552_; 
v_fst_540_ = lean_ctor_get(v_val_536_, 0);
v_snd_541_ = lean_ctor_get(v_val_536_, 1);
v_isSharedCheck_552_ = !lean_is_exclusive(v_val_536_);
if (v_isSharedCheck_552_ == 0)
{
v___x_543_ = v_val_536_;
v_isShared_544_ = v_isSharedCheck_552_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_snd_541_);
lean_inc(v_fst_540_);
lean_dec(v_val_536_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_552_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_545_, 0, v_head_505_);
lean_ctor_set(v___x_545_, 1, v_fst_540_);
if (v_isShared_544_ == 0)
{
lean_ctor_set(v___x_543_, 0, v___x_545_);
v___x_547_ = v___x_543_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v_snd_541_);
v___x_547_ = v_reuseFailAlloc_551_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_549_; 
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_547_);
v___x_549_ = v___x_538_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
}
else
{
lean_object* v___x_554_; 
lean_dec(v_head_505_);
v___x_554_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_moduleTail_spec__0(v_tail_506_);
if (lean_obj_tag(v___x_554_) == 1)
{
lean_object* v_head_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_566_; 
v_head_555_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_566_ == 0)
{
lean_object* v_unused_567_; 
v_unused_567_ = lean_ctor_get(v___x_554_, 1);
lean_dec(v_unused_567_);
v___x_557_ = v___x_554_;
v_isShared_558_ = v_isSharedCheck_566_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_head_555_);
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_566_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
uint8_t v___x_559_; 
v___x_559_ = lean_nat_dec_eq(v_head_555_, v___x_533_);
lean_dec(v_head_555_);
if (v___x_559_ == 0)
{
lean_del_object(v___x_557_);
goto v___jp_510_;
}
else
{
lean_object* v___x_560_; lean_object* v___x_562_; 
lean_del_object(v___x_508_);
v___x_560_ = lean_box(0);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 1, v_tail_506_);
lean_ctor_set(v___x_557_, 0, v___x_533_);
v___x_562_ = v___x_557_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_533_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_tail_506_);
v___x_562_ = v_reuseFailAlloc_565_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_560_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
v___x_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
}
}
}
else
{
lean_dec(v___x_554_);
goto v___jp_510_;
}
}
v___jp_510_:
{
lean_object* v___x_511_; 
v___x_511_ = lp_lean_x2dftml_LeanFtml_firstBreakSplit(v_tail_506_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_del_object(v___x_508_);
return v___x_511_;
}
else
{
lean_object* v_val_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_532_; 
v_val_512_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_532_ == 0)
{
v___x_514_ = v___x_511_;
v_isShared_515_ = v_isSharedCheck_532_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_val_512_);
lean_dec(v___x_511_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_532_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v_fst_516_; lean_object* v_snd_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_531_; 
v_fst_516_ = lean_ctor_get(v_val_512_, 0);
v_snd_517_ = lean_ctor_get(v_val_512_, 1);
v_isSharedCheck_531_ = !lean_is_exclusive(v_val_512_);
if (v_isSharedCheck_531_ == 0)
{
v___x_519_ = v_val_512_;
v_isShared_520_ = v_isSharedCheck_531_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_snd_517_);
lean_inc(v_fst_516_);
lean_dec(v_val_512_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_531_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_521_ = lean_unsigned_to_nat(10u);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 1, v_fst_516_);
lean_ctor_set(v___x_508_, 0, v___x_521_);
v___x_523_ = v___x_508_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_fst_516_);
v___x_523_ = v_reuseFailAlloc_530_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
lean_object* v___x_525_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_523_);
v___x_525_ = v___x_519_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_523_);
lean_ctor_set(v_reuseFailAlloc_529_, 1, v_snd_517_);
v___x_525_ = v_reuseFailAlloc_529_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
lean_object* v___x_527_; 
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v___x_525_);
v___x_527_ = v___x_514_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_525_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
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
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__1));
v___x_572_ = l_String_toListImpl(v___x_571_);
return v___x_572_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__4(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__3));
v___x_575_ = l_String_toListImpl(v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__5(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__4, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__4);
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
return v___x_577_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6(void){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_578_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__5, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__5);
v___x_579_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2);
v___x_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
lean_ctor_set(v___x_580_, 1, v___x_578_);
return v___x_580_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__8(void){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__7));
v___x_583_ = l_String_toListImpl(v___x_582_);
return v___x_583_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__9(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__8, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__8);
v___x_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
return v___x_585_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_586_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__9, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__9);
v___x_587_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2);
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
lean_ctor_set(v___x_588_, 1, v___x_586_);
return v___x_588_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__14(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__13));
v___x_597_ = l_String_toListImpl(v___x_596_);
return v___x_597_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__15(void){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_598_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__14, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__14);
v___x_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_599_, 0, v___x_598_);
return v___x_599_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__16(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_600_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__15, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__15);
v___x_601_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2);
v___x_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
lean_ctor_set(v___x_602_, 1, v___x_600_);
return v___x_602_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__17(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_603_ = lean_box(0);
v___x_604_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__16, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__16);
v___x_605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
lean_ctor_set(v___x_605_, 1, v___x_603_);
return v___x_605_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__18(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_606_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__17, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__17);
v___x_607_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__0));
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
lean_ctor_set(v___x_608_, 1, v___x_606_);
return v___x_608_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__19(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_609_ = lean_box(0);
v___x_610_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__18, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__18);
v___x_611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
lean_ctor_set(v___x_611_, 1, v___x_609_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside_go(lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_){
_start:
{
if (lean_obj_tag(v_a_612_) == 0)
{
lean_object* v___x_616_; 
lean_dec(v_a_613_);
v___x_616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_616_, 0, v_a_615_);
lean_ctor_set(v___x_616_, 1, v_a_614_);
return v___x_616_;
}
else
{
lean_object* v_head_617_; lean_object* v_tail_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_706_; 
v_head_617_ = lean_ctor_get(v_a_612_, 0);
v_tail_618_ = lean_ctor_get(v_a_612_, 1);
v_isSharedCheck_706_ = !lean_is_exclusive(v_a_612_);
if (v_isSharedCheck_706_ == 0)
{
v___x_620_ = v_a_612_;
v_isShared_621_ = v_isSharedCheck_706_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_tail_618_);
lean_inc(v_head_617_);
lean_dec(v_a_612_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_706_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; 
lean_inc(v_head_617_);
v___x_622_ = lp_lean_x2dftml_LeanFtml_firstBreakSplit(v_head_617_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v___x_623_; lean_object* v_startPh_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_623_ = l_List_lengthTR___redArg(v_a_614_);
v_startPh_624_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_623_);
v___x_625_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__0));
v___x_626_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6);
v___x_627_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2);
lean_inc(v_a_613_);
v___x_628_ = lean_nat_to_int(v_a_613_);
v___x_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
v___x_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_627_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
v___x_631_ = lean_box(0);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 1, v___x_631_);
lean_ctor_set(v___x_620_, 0, v___x_630_);
v___x_633_ = v___x_620_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_630_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v___x_631_);
v___x_633_ = v_reuseFailAlloc_653_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v_t1_637_; lean_object* v___x_638_; lean_object* v_endPh_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v_t2_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
lean_inc_ref(v___x_633_);
v___x_634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_626_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_625_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
lean_ctor_set(v___x_636_, 1, v___x_631_);
v_t1_637_ = l_List_appendTR___redArg(v_a_614_, v___x_636_);
v___x_638_ = l_List_lengthTR___redArg(v_t1_637_);
v_endPh_639_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_638_);
v___x_640_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10);
v___x_641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
lean_ctor_set(v___x_641_, 1, v___x_633_);
v___x_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_625_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
lean_ctor_set(v___x_643_, 1, v___x_631_);
v_t2_644_ = l_List_appendTR___redArg(v_t1_637_, v___x_643_);
v___x_645_ = lean_unsigned_to_nat(1u);
v___x_646_ = lean_nat_add(v_a_613_, v___x_645_);
lean_dec(v_a_613_);
v___x_647_ = l_List_appendTR___redArg(v_a_615_, v_startPh_624_);
v___x_648_ = l_List_appendTR___redArg(v___x_647_, v_head_617_);
v___x_649_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__12));
v___x_650_ = l_List_appendTR___redArg(v___x_648_, v___x_649_);
v___x_651_ = l_List_appendTR___redArg(v___x_650_, v_endPh_639_);
v_a_612_ = v_tail_618_;
v_a_613_ = v___x_646_;
v_a_614_ = v_t2_644_;
v_a_615_ = v___x_651_;
goto _start;
}
}
else
{
lean_object* v_val_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_705_; 
lean_dec(v_head_617_);
v_val_654_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_705_ == 0)
{
v___x_656_ = v___x_622_;
v_isShared_657_ = v_isSharedCheck_705_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_val_654_);
lean_dec(v___x_622_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_705_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v_fst_658_; lean_object* v_snd_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_704_; 
v_fst_658_ = lean_ctor_get(v_val_654_, 0);
v_snd_659_ = lean_ctor_get(v_val_654_, 1);
v_isSharedCheck_704_ = !lean_is_exclusive(v_val_654_);
if (v_isSharedCheck_704_ == 0)
{
v___x_661_ = v_val_654_;
v_isShared_662_ = v_isSharedCheck_704_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_snd_659_);
lean_inc(v_fst_658_);
lean_dec(v_val_654_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_704_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v_paraPh_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v_t0_668_; lean_object* v___x_669_; lean_object* v_startPh_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_663_ = l_List_lengthTR___redArg(v_a_614_);
v_paraPh_664_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_663_);
v___x_665_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__0));
v___x_666_ = lean_box(0);
v___x_667_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__19, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__19);
v_t0_668_ = l_List_appendTR___redArg(v_a_614_, v___x_667_);
v___x_669_ = l_List_lengthTR___redArg(v_t0_668_);
v_startPh_670_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_669_);
v___x_671_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6);
v___x_672_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2);
lean_inc(v_a_613_);
v___x_673_ = lean_nat_to_int(v_a_613_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_673_);
v___x_675_ = v___x_656_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_673_);
v___x_675_ = v_reuseFailAlloc_703_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
lean_object* v___x_677_; 
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v___x_675_);
lean_ctor_set(v___x_661_, 0, v___x_672_);
v___x_677_ = v___x_661_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_672_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v___x_675_);
v___x_677_ = v_reuseFailAlloc_702_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_679_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 1, v___x_666_);
lean_ctor_set(v___x_620_, 0, v___x_677_);
v___x_679_ = v___x_620_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v___x_666_);
v___x_679_ = v_reuseFailAlloc_701_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v_t1_683_; lean_object* v___x_684_; lean_object* v_endPh_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v_t2_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
lean_inc_ref(v___x_679_);
v___x_680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_680_, 0, v___x_671_);
lean_ctor_set(v___x_680_, 1, v___x_679_);
v___x_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_665_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
lean_ctor_set(v___x_682_, 1, v___x_666_);
v_t1_683_ = l_List_appendTR___redArg(v_t0_668_, v___x_682_);
v___x_684_ = l_List_lengthTR___redArg(v_t1_683_);
v_endPh_685_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_684_);
v___x_686_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10);
v___x_687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
lean_ctor_set(v___x_687_, 1, v___x_679_);
v___x_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_665_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
v___x_689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v___x_666_);
v_t2_690_ = l_List_appendTR___redArg(v_t1_683_, v___x_689_);
v___x_691_ = lean_unsigned_to_nat(1u);
v___x_692_ = lean_nat_add(v_a_613_, v___x_691_);
lean_dec(v_a_613_);
v___x_693_ = l_List_appendTR___redArg(v_a_615_, v_startPh_670_);
v___x_694_ = l_List_appendTR___redArg(v___x_693_, v_fst_658_);
v___x_695_ = l_List_appendTR___redArg(v___x_694_, v_paraPh_664_);
v___x_696_ = l_List_appendTR___redArg(v___x_695_, v_snd_659_);
v___x_697_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__12));
v___x_698_ = l_List_appendTR___redArg(v___x_696_, v___x_697_);
v___x_699_ = l_List_appendTR___redArg(v___x_698_, v_endPh_685_);
v_a_612_ = v_tail_618_;
v_a_613_ = v___x_692_;
v_a_614_ = v_t2_690_;
v_a_615_ = v___x_699_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockInside(lean_object* v_notes_707_, lean_object* v_toks_708_){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_709_ = lean_unsigned_to_nat(1u);
v___x_710_ = lean_box(0);
v___x_711_ = lp_lean_x2dftml_LeanFtml_footnoteblockInside_go(v_notes_707_, v___x_709_, v_toks_708_, v___x_710_);
return v___x_711_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_titleOpt___closed__0));
v___x_714_ = l_String_toListImpl(v___x_713_);
return v___x_714_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_715_ = lean_box(0);
v___x_716_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10);
v___x_717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
lean_ctor_set(v___x_717_, 1, v___x_715_);
return v___x_717_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__3(void){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_718_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2);
v___x_719_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__0));
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_719_);
lean_ctor_set(v___x_720_, 1, v___x_718_);
return v___x_720_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__4(void){
_start:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_721_ = lean_box(0);
v___x_722_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__3, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__3);
v___x_723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
lean_ctor_set(v___x_723_, 1, v___x_721_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess(lean_object* v_g_724_, lean_object* v_notes_725_, lean_object* v_toks_726_){
_start:
{
uint8_t v___x_727_; 
v___x_727_ = l_List_isEmpty___redArg(v_notes_725_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; lean_object* v_fst_729_; lean_object* v_snd_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_759_; 
v___x_728_ = lp_lean_x2dftml_LeanFtml_footnoteblockInside(v_notes_725_, v_toks_726_);
v_fst_729_ = lean_ctor_get(v___x_728_, 0);
v_snd_730_ = lean_ctor_get(v___x_728_, 1);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_759_ == 0)
{
v___x_732_ = v___x_728_;
v_isShared_733_ = v_isSharedCheck_759_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_snd_730_);
lean_inc(v_fst_729_);
lean_dec(v___x_728_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_759_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_734_; lean_object* v_startPh_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_734_ = l_List_lengthTR___redArg(v_snd_730_);
v_startPh_735_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_734_);
v___x_736_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__0));
v___x_737_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6);
v___x_738_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1);
v___x_739_ = lp_lean_x2dftml_LeanFtml_titleOpt(v_g_724_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v___x_739_);
lean_ctor_set(v___x_732_, 0, v___x_738_);
v___x_741_ = v___x_732_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_738_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v___x_739_);
v___x_741_ = v_reuseFailAlloc_758_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v_t2_747_; lean_object* v___x_748_; lean_object* v_endPh_749_; lean_object* v___x_750_; lean_object* v_t3_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_742_ = lean_box(0);
v___x_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_741_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v___x_744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_737_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_736_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
lean_ctor_set(v___x_746_, 1, v___x_742_);
v_t2_747_ = l_List_appendTR___redArg(v_snd_730_, v___x_746_);
v___x_748_ = l_List_lengthTR___redArg(v_t2_747_);
v_endPh_749_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_748_);
v___x_750_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__4, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__4);
v_t3_751_ = l_List_appendTR___redArg(v_t2_747_, v___x_750_);
v___x_752_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__11));
v___x_753_ = l_List_appendTR___redArg(v___x_752_, v_startPh_735_);
v___x_754_ = l_List_appendTR___redArg(v___x_753_, v_fst_729_);
v___x_755_ = l_List_appendTR___redArg(v___x_754_, v_endPh_749_);
v___x_756_ = l_List_appendTR___redArg(v___x_755_, v___x_752_);
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
lean_ctor_set(v___x_757_, 1, v_t3_751_);
return v___x_757_;
}
}
}
else
{
lean_object* v___x_760_; lean_object* v___x_761_; 
lean_dec(v_notes_725_);
v___x_760_ = lean_box(0);
v___x_761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
lean_ctor_set(v___x_761_, 1, v_toks_726_);
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockProcess___boxed(lean_object* v_g_762_, lean_object* v_notes_763_, lean_object* v_toks_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = lp_lean_x2dftml_LeanFtml_footnoteblockProcess(v_g_762_, v_notes_763_, v_toks_764_);
lean_dec(v_g_762_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_footnoteblockRule(lean_object* v_st_768_){
_start:
{
lean_object* v_work_769_; lean_object* v_tokens_770_; lean_object* v_doc_771_; uint8_t v_fatal_772_; lean_object* v_continuedDivLeads_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_817_; 
v_work_769_ = lean_ctor_get(v_st_768_, 0);
v_tokens_770_ = lean_ctor_get(v_st_768_, 1);
v_doc_771_ = lean_ctor_get(v_st_768_, 2);
v_fatal_772_ = lean_ctor_get_uint8(v_st_768_, sizeof(void*)*4);
v_continuedDivLeads_773_ = lean_ctor_get(v_st_768_, 3);
v_isSharedCheck_817_ = !lean_is_exclusive(v_st_768_);
if (v_isSharedCheck_817_ == 0)
{
v___x_775_ = v_st_768_;
v_isShared_776_ = v_isSharedCheck_817_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_continuedDivLeads_773_);
lean_inc(v_doc_771_);
lean_inc(v_tokens_770_);
lean_inc(v_work_769_);
lean_dec(v_st_768_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_817_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v_src_777_; lean_object* v___y_779_; lean_object* v___x_794_; 
v_src_777_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_769_);
lean_inc(v_src_777_);
v___x_794_ = lp_lean_x2dftml_LeanFtml_footnoteblockFind(v_src_777_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v___x_795_; lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_795_ = l_List_getLast_x3f___redArg(v_src_777_);
v___x_796_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockRule___closed__0));
v___x_797_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_795_, v___x_796_);
lean_dec(v___x_795_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; 
v___x_798_ = l_List_lengthTR___redArg(v_src_777_);
v___y_779_ = v___x_798_;
goto v___jp_778_;
}
else
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = l_List_lengthTR___redArg(v_src_777_);
v___x_800_ = lean_unsigned_to_nat(1u);
v___x_801_ = lean_nat_sub(v___x_799_, v___x_800_);
lean_dec(v___x_799_);
v___y_779_ = v___x_801_;
goto v___jp_778_;
}
}
else
{
lean_object* v_val_802_; lean_object* v_snd_803_; lean_object* v_fst_804_; lean_object* v_fst_805_; lean_object* v_snd_806_; lean_object* v_footnotes_807_; lean_object* v___x_808_; lean_object* v_fst_809_; lean_object* v_snd_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
lean_del_object(v___x_775_);
v_val_802_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_val_802_);
lean_dec_ref_known(v___x_794_, 1);
v_snd_803_ = lean_ctor_get(v_val_802_, 1);
lean_inc(v_snd_803_);
v_fst_804_ = lean_ctor_get(v_val_802_, 0);
lean_inc(v_fst_804_);
lean_dec(v_val_802_);
v_fst_805_ = lean_ctor_get(v_snd_803_, 0);
lean_inc(v_fst_805_);
v_snd_806_ = lean_ctor_get(v_snd_803_, 1);
lean_inc(v_snd_806_);
lean_dec(v_snd_803_);
v_footnotes_807_ = lean_ctor_get(v_doc_771_, 4);
lean_inc(v_footnotes_807_);
v___x_808_ = lp_lean_x2dftml_LeanFtml_footnoteblockProcess(v_fst_805_, v_footnotes_807_, v_tokens_770_);
lean_dec(v_fst_805_);
v_fst_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_fst_809_);
v_snd_810_ = lean_ctor_get(v___x_808_, 1);
lean_inc(v_snd_810_);
lean_dec_ref(v___x_808_);
v___x_811_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_src_777_);
v___x_812_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_777_, v_src_777_, v_fst_804_, v___x_811_);
lean_dec(v_src_777_);
v___x_813_ = l_List_appendTR___redArg(v___x_812_, v_fst_809_);
v___x_814_ = l_List_appendTR___redArg(v___x_813_, v_snd_806_);
v___x_815_ = lp_lean_x2dftml_LeanFtml_parseBytes(v___x_814_);
v___x_816_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v_snd_810_);
lean_ctor_set(v___x_816_, 2, v_doc_771_);
lean_ctor_set(v___x_816_, 3, v_continuedDivLeads_773_);
lean_ctor_set_uint8(v___x_816_, sizeof(void*)*4, v_fatal_772_);
return v___x_816_;
}
v___jp_778_:
{
lean_object* v_footnotes_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v_fst_783_; lean_object* v_snd_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v_footnotes_780_ = lean_ctor_get(v_doc_771_, 4);
v___x_781_ = lean_box(0);
lean_inc(v_footnotes_780_);
v___x_782_ = lp_lean_x2dftml_LeanFtml_footnoteblockProcess(v___x_781_, v_footnotes_780_, v_tokens_770_);
v_fst_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_fst_783_);
v_snd_784_ = lean_ctor_get(v___x_782_, 1);
lean_inc(v_snd_784_);
lean_dec_ref(v___x_782_);
v___x_785_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v___y_779_);
lean_inc(v_src_777_);
v___x_786_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_777_, v_src_777_, v___y_779_, v___x_785_);
v___x_787_ = l_List_appendTR___redArg(v___x_786_, v_fst_783_);
v___x_788_ = l_List_drop___redArg(v___y_779_, v_src_777_);
lean_dec(v_src_777_);
v___x_789_ = l_List_appendTR___redArg(v___x_787_, v___x_788_);
v___x_790_ = lp_lean_x2dftml_LeanFtml_parseBytes(v___x_789_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 1, v_snd_784_);
lean_ctor_set(v___x_775_, 0, v___x_790_);
v___x_792_ = v___x_775_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_790_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_snd_784_);
lean_ctor_set(v_reuseFailAlloc_793_, 2, v_doc_771_);
lean_ctor_set(v_reuseFailAlloc_793_, 3, v_continuedDivLeads_773_);
lean_ctor_set_uint8(v_reuseFailAlloc_793_, sizeof(void*)*4, v_fatal_772_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_bibitemProcess_spec__0(lean_object* v_a_818_, lean_object* v_a_819_){
_start:
{
if (lean_obj_tag(v_a_818_) == 0)
{
lean_object* v___x_820_; 
v___x_820_ = l_List_reverse___redArg(v_a_819_);
return v___x_820_;
}
else
{
lean_object* v_head_821_; lean_object* v_tail_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_835_; 
v_head_821_ = lean_ctor_get(v_a_818_, 0);
v_tail_822_ = lean_ctor_get(v_a_818_, 1);
v_isSharedCheck_835_ = !lean_is_exclusive(v_a_818_);
if (v_isSharedCheck_835_ == 0)
{
v___x_824_ = v_a_818_;
v_isShared_825_ = v_isSharedCheck_835_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_tail_822_);
lean_inc(v_head_821_);
lean_dec(v_a_818_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_835_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___y_827_; lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_832_ = lean_unsigned_to_nat(10u);
v___x_833_ = lean_nat_dec_eq(v_head_821_, v___x_832_);
if (v___x_833_ == 0)
{
v___y_827_ = v_head_821_;
goto v___jp_826_;
}
else
{
lean_object* v___x_834_; 
lean_dec(v_head_821_);
v___x_834_ = lean_unsigned_to_nat(32u);
v___y_827_ = v___x_834_;
goto v___jp_826_;
}
v___jp_826_:
{
lean_object* v___x_829_; 
if (v_isShared_825_ == 0)
{
lean_ctor_set(v___x_824_, 1, v_a_819_);
lean_ctor_set(v___x_824_, 0, v___y_827_);
v___x_829_ = v___x_824_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___y_827_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_a_819_);
v___x_829_ = v_reuseFailAlloc_831_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
v_a_818_ = v_tail_822_;
v_a_819_ = v___x_829_;
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
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__1));
v___x_839_ = l_String_toListImpl(v___x_838_);
return v___x_839_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__4(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__3));
v___x_842_ = l_String_toListImpl(v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__5(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_843_ = lean_box(0);
v___x_844_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__10);
v___x_845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v___x_843_);
return v___x_845_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__6(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_846_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__5, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__5);
v___x_847_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__0));
v___x_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
lean_ctor_set(v___x_848_, 1, v___x_846_);
return v___x_848_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__7(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_849_ = lean_box(0);
v___x_850_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__6, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__6);
v___x_851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
lean_ctor_set(v___x_851_, 1, v___x_849_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibitemProcess(lean_object* v_label_852_, lean_object* v_content_853_, lean_object* v_doc_854_, lean_object* v_toks_855_){
_start:
{
lean_object* v_page_856_; lean_object* v_site_857_; lean_object* v_inclusions_858_; lean_object* v_inclusionsNotExist_859_; lean_object* v_footnotes_860_; lean_object* v_bibitems_861_; lean_object* v_bibitemIds_862_; lean_object* v_headlineId_863_; lean_object* v_mathId_864_; lean_object* v_equations_865_; lean_object* v_collapsibleCount_866_; lean_object* v_tabviewCounter_867_; lean_object* v_scoredAnchors_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_916_; 
v_page_856_ = lean_ctor_get(v_doc_854_, 0);
v_site_857_ = lean_ctor_get(v_doc_854_, 1);
v_inclusions_858_ = lean_ctor_get(v_doc_854_, 2);
v_inclusionsNotExist_859_ = lean_ctor_get(v_doc_854_, 3);
v_footnotes_860_ = lean_ctor_get(v_doc_854_, 4);
v_bibitems_861_ = lean_ctor_get(v_doc_854_, 5);
v_bibitemIds_862_ = lean_ctor_get(v_doc_854_, 6);
v_headlineId_863_ = lean_ctor_get(v_doc_854_, 7);
v_mathId_864_ = lean_ctor_get(v_doc_854_, 8);
v_equations_865_ = lean_ctor_get(v_doc_854_, 9);
v_collapsibleCount_866_ = lean_ctor_get(v_doc_854_, 10);
v_tabviewCounter_867_ = lean_ctor_get(v_doc_854_, 11);
v_scoredAnchors_868_ = lean_ctor_get(v_doc_854_, 12);
v_isSharedCheck_916_ = !lean_is_exclusive(v_doc_854_);
if (v_isSharedCheck_916_ == 0)
{
v___x_870_ = v_doc_854_;
v_isShared_871_ = v_isSharedCheck_916_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_scoredAnchors_868_);
lean_inc(v_tabviewCounter_867_);
lean_inc(v_collapsibleCount_866_);
lean_inc(v_equations_865_);
lean_inc(v_mathId_864_);
lean_inc(v_headlineId_863_);
lean_inc(v_bibitemIds_862_);
lean_inc(v_bibitems_861_);
lean_inc(v_footnotes_860_);
lean_inc(v_inclusionsNotExist_859_);
lean_inc(v_inclusions_858_);
lean_inc(v_site_857_);
lean_inc(v_page_856_);
lean_dec(v_doc_854_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_916_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v_content_x27_874_; lean_object* v_pure_875_; lean_object* v___x_876_; lean_object* v_visible_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v_id_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v_doc1_884_; 
v___x_872_ = lean_box(0);
v___x_873_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_bibitemProcess_spec__0(v_content_853_, v___x_872_);
v_content_x27_874_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_873_);
lean_dec(v___x_873_);
lean_inc(v_content_x27_874_);
v_pure_875_ = lp_lean_x2dftml_LeanFtml_stripLiveDroppedControls(v_content_x27_874_);
v___x_876_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPhNotes(v_pure_875_, v_toks_855_);
v_visible_877_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___x_876_);
lean_dec(v___x_876_);
v___x_878_ = l_List_lengthTR___redArg(v_bibitemIds_862_);
v___x_879_ = lean_unsigned_to_nat(1u);
v_id_880_ = lean_nat_add(v___x_878_, v___x_879_);
lean_dec(v___x_878_);
lean_inc_n(v_label_852_, 2);
v___x_881_ = lp_lean_x2dftml_LeanFtml_bibSet___redArg(v_bibitems_861_, v_label_852_, v_content_x27_874_);
lean_inc(v_id_880_);
v___x_882_ = lp_lean_x2dftml_LeanFtml_bibSet___redArg(v_bibitemIds_862_, v_label_852_, v_id_880_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 6, v___x_882_);
lean_ctor_set(v___x_870_, 5, v___x_881_);
v_doc1_884_ = v___x_870_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_page_856_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v_site_857_);
lean_ctor_set(v_reuseFailAlloc_915_, 2, v_inclusions_858_);
lean_ctor_set(v_reuseFailAlloc_915_, 3, v_inclusionsNotExist_859_);
lean_ctor_set(v_reuseFailAlloc_915_, 4, v_footnotes_860_);
lean_ctor_set(v_reuseFailAlloc_915_, 5, v___x_881_);
lean_ctor_set(v_reuseFailAlloc_915_, 6, v___x_882_);
lean_ctor_set(v_reuseFailAlloc_915_, 7, v_headlineId_863_);
lean_ctor_set(v_reuseFailAlloc_915_, 8, v_mathId_864_);
lean_ctor_set(v_reuseFailAlloc_915_, 9, v_equations_865_);
lean_ctor_set(v_reuseFailAlloc_915_, 10, v_collapsibleCount_866_);
lean_ctor_set(v_reuseFailAlloc_915_, 11, v_tabviewCounter_867_);
lean_ctor_set(v_reuseFailAlloc_915_, 12, v_scoredAnchors_868_);
v_doc1_884_ = v_reuseFailAlloc_915_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
lean_object* v___x_885_; lean_object* v_startPh_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; uint8_t v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v_t1_906_; lean_object* v___x_907_; lean_object* v_endPh_908_; lean_object* v___x_909_; lean_object* v_t2_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_885_ = l_List_lengthTR___redArg(v_toks_855_);
v_startPh_886_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_885_);
v___x_887_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__0));
v___x_888_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2);
v___x_889_ = lp_lean_x2dftml_LeanFtml_textVal(v_label_852_);
v___x_890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_888_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
v___x_891_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteProcess___closed__2);
v___x_892_ = lean_nat_to_int(v_id_880_);
v___x_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_893_, 0, v___x_892_);
v___x_894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_891_);
lean_ctor_set(v___x_894_, 1, v___x_893_);
v___x_895_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6);
v___x_896_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__4, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__4);
v___x_897_ = l_List_isEmpty___redArg(v_visible_877_);
v___x_898_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_898_, 0, v___x_897_);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_896_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
lean_ctor_set(v___x_900_, 1, v___x_872_);
v___x_901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_895_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v___x_902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_894_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_890_);
lean_ctor_set(v___x_903_, 1, v___x_902_);
v___x_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_887_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
lean_ctor_set(v___x_905_, 1, v___x_872_);
v_t1_906_ = l_List_appendTR___redArg(v_toks_855_, v___x_905_);
v___x_907_ = l_List_lengthTR___redArg(v_t1_906_);
v_endPh_908_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_907_);
v___x_909_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__7, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__7);
v_t2_910_ = l_List_appendTR___redArg(v_t1_906_, v___x_909_);
v___x_911_ = l_List_appendTR___redArg(v_startPh_886_, v_visible_877_);
v___x_912_ = l_List_appendTR___redArg(v___x_911_, v_endPh_908_);
v___x_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_913_, 0, v_t2_910_);
lean_ctor_set(v___x_913_, 1, v_doc1_884_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
return v___x_914_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibitemRule(lean_object* v_st_917_){
_start:
{
lean_inc_ref(v_st_917_);
return v_st_917_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibitemRule___boxed(lean_object* v_st_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = lp_lean_x2dftml_LeanFtml_bibitemRule(v_st_918_);
lean_dec_ref(v_st_918_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorIdx___impl(uint8_t v_x_920_){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = lean_box(v_x_920_);
v___x_922_ = lean_obj_tag_nat(v___x_921_);
lean_dec(v___x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorIdx___impl___boxed(lean_object* v_x_923_){
_start:
{
uint8_t v_x_4__boxed_924_; lean_object* v_res_925_; 
v_x_4__boxed_924_ = lean_unbox(v_x_923_);
v_res_925_ = lp_lean_x2dftml_LeanFtml_BibPrev_ctorIdx___impl(v_x_4__boxed_924_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___redArg(lean_object* v_k_926_){
_start:
{
lean_inc(v_k_926_);
return v_k_926_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___redArg___boxed(lean_object* v_k_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___redArg(v_k_927_);
lean_dec(v_k_927_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim(lean_object* v_motive_929_, lean_object* v_ctorIdx_930_, uint8_t v_t_931_, lean_object* v_h_932_, lean_object* v_k_933_){
_start:
{
lean_inc(v_k_933_);
return v_k_933_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim___boxed(lean_object* v_motive_934_, lean_object* v_ctorIdx_935_, lean_object* v_t_936_, lean_object* v_h_937_, lean_object* v_k_938_){
_start:
{
uint8_t v_t_boxed_939_; lean_object* v_res_940_; 
v_t_boxed_939_ = lean_unbox(v_t_936_);
v_res_940_ = lp_lean_x2dftml_LeanFtml_BibPrev_ctorElim(v_motive_934_, v_ctorIdx_935_, v_t_boxed_939_, v_h_937_, v_k_938_);
lean_dec(v_k_938_);
lean_dec(v_ctorIdx_935_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___redArg(lean_object* v_start_941_){
_start:
{
lean_inc(v_start_941_);
return v_start_941_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___redArg___boxed(lean_object* v_start_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___redArg(v_start_942_);
lean_dec(v_start_942_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim(lean_object* v_motive_944_, uint8_t v_t_945_, lean_object* v_h_946_, lean_object* v_start_947_){
_start:
{
lean_inc(v_start_947_);
return v_start_947_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_start_elim___boxed(lean_object* v_motive_948_, lean_object* v_t_949_, lean_object* v_h_950_, lean_object* v_start_951_){
_start:
{
uint8_t v_t_boxed_952_; lean_object* v_res_953_; 
v_t_boxed_952_ = lean_unbox(v_t_949_);
v_res_953_ = lp_lean_x2dftml_LeanFtml_BibPrev_start_elim(v_motive_948_, v_t_boxed_952_, v_h_950_, v_start_951_);
lean_dec(v_start_951_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___redArg(lean_object* v_def_954_){
_start:
{
lean_inc(v_def_954_);
return v_def_954_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___redArg___boxed(lean_object* v_def_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___redArg(v_def_955_);
lean_dec(v_def_955_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim(lean_object* v_motive_957_, uint8_t v_t_958_, lean_object* v_h_959_, lean_object* v_def_960_){
_start:
{
lean_inc(v_def_960_);
return v_def_960_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_def_elim___boxed(lean_object* v_motive_961_, lean_object* v_t_962_, lean_object* v_h_963_, lean_object* v_def_964_){
_start:
{
uint8_t v_t_boxed_965_; lean_object* v_res_966_; 
v_t_boxed_965_ = lean_unbox(v_t_962_);
v_res_966_ = lp_lean_x2dftml_LeanFtml_BibPrev_def_elim(v_motive_961_, v_t_boxed_965_, v_h_963_, v_def_964_);
lean_dec(v_def_964_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___redArg(lean_object* v_res_967_){
_start:
{
lean_inc(v_res_967_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___redArg___boxed(lean_object* v_res_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___redArg(v_res_968_);
lean_dec(v_res_968_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim(lean_object* v_motive_970_, uint8_t v_t_971_, lean_object* v_h_972_, lean_object* v_res_973_){
_start:
{
lean_inc(v_res_973_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_res_elim___boxed(lean_object* v_motive_974_, lean_object* v_t_975_, lean_object* v_h_976_, lean_object* v_res_977_){
_start:
{
uint8_t v_t_boxed_978_; lean_object* v_res_979_; 
v_t_boxed_978_ = lean_unbox(v_t_975_);
v_res_979_ = lp_lean_x2dftml_LeanFtml_BibPrev_res_elim(v_motive_974_, v_t_boxed_978_, v_h_976_, v_res_977_);
lean_dec(v_res_977_);
return v_res_979_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_BibPrev_ofNat(lean_object* v_n_980_){
_start:
{
lean_object* v___x_981_; uint8_t v___x_982_; 
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = lean_nat_dec_le(v_n_980_, v___x_981_);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_983_ = lean_unsigned_to_nat(1u);
v___x_984_ = lean_nat_dec_le(v_n_980_, v___x_983_);
if (v___x_984_ == 0)
{
uint8_t v___x_985_; 
v___x_985_ = 2;
return v___x_985_;
}
else
{
uint8_t v___x_986_; 
v___x_986_ = 1;
return v___x_986_;
}
}
else
{
uint8_t v___x_987_; 
v___x_987_ = 0;
return v___x_987_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_BibPrev_ofNat___boxed(lean_object* v_n_988_){
_start:
{
uint8_t v_res_989_; lean_object* v_r_990_; 
v_res_989_ = lp_lean_x2dftml_LeanFtml_BibPrev_ofNat(v_n_988_);
lean_dec(v_n_988_);
v_r_990_ = lean_box(v_res_989_);
return v_r_990_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqBibPrev(uint8_t v_x_991_, uint8_t v_y_992_){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; uint8_t v___x_997_; 
v___x_993_ = lean_box(v_x_991_);
v___x_994_ = lean_obj_tag_nat(v___x_993_);
lean_dec(v___x_993_);
v___x_995_ = lean_box(v_y_992_);
v___x_996_ = lean_obj_tag_nat(v___x_995_);
lean_dec(v___x_995_);
v___x_997_ = lean_nat_dec_eq(v___x_994_, v___x_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqBibPrev___boxed(lean_object* v_x_998_, lean_object* v_y_999_){
_start:
{
uint8_t v_x_23__boxed_1000_; uint8_t v_y_24__boxed_1001_; uint8_t v_res_1002_; lean_object* v_r_1003_; 
v_x_23__boxed_1000_ = lean_unbox(v_x_998_);
v_y_24__boxed_1001_ = lean_unbox(v_y_999_);
v_res_1002_ = lp_lean_x2dftml_LeanFtml_instDecidableEqBibPrev(v_x_23__boxed_1000_, v_y_24__boxed_1001_);
v_r_1003_ = lean_box(v_res_1002_);
return v_r_1003_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_instInhabitedBibPrev_default(void){
_start:
{
uint8_t v___x_1004_; 
v___x_1004_ = 0;
return v___x_1004_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_instInhabitedBibPrev(void){
_start:
{
uint8_t v___x_1005_; 
v___x_1005_ = 0;
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__1(uint8_t v___x_1006_, uint8_t v___y_1007_, lean_object* v_l_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_){
_start:
{
if (lean_obj_tag(v_a_1009_) == 0)
{
lean_dec_ref(v_a_1010_);
lean_inc(v_l_1008_);
return v_l_1008_;
}
else
{
lean_object* v_head_1011_; lean_object* v_tail_1012_; uint8_t v___y_1014_; lean_object* v___x_1018_; uint8_t v___x_1019_; 
v_head_1011_ = lean_ctor_get(v_a_1009_, 0);
lean_inc(v_head_1011_);
v_tail_1012_ = lean_ctor_get(v_a_1009_, 1);
lean_inc(v_tail_1012_);
lean_dec_ref_known(v_a_1009_, 2);
v___x_1018_ = lean_unsigned_to_nat(10u);
v___x_1019_ = lean_nat_dec_eq(v_head_1011_, v___x_1018_);
if (v___x_1019_ == 0)
{
v___y_1014_ = v___x_1006_;
goto v___jp_1013_;
}
else
{
v___y_1014_ = v___y_1007_;
goto v___jp_1013_;
}
v___jp_1013_:
{
if (v___y_1014_ == 0)
{
lean_object* v___x_1015_; 
lean_dec(v_tail_1012_);
lean_dec(v_head_1011_);
v___x_1015_ = lean_array_to_list(v_a_1010_);
return v___x_1015_;
}
else
{
lean_object* v___x_1016_; 
v___x_1016_ = lean_array_push(v_a_1010_, v_head_1011_);
v_a_1009_ = v_tail_1012_;
v_a_1010_ = v___x_1016_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__1___boxed(lean_object* v___x_1020_, lean_object* v___y_1021_, lean_object* v_l_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_){
_start:
{
uint8_t v___x_997__boxed_1025_; uint8_t v___y_998__boxed_1026_; lean_object* v_res_1027_; 
v___x_997__boxed_1025_ = lean_unbox(v___x_1020_);
v___y_998__boxed_1026_ = lean_unbox(v___y_1021_);
v_res_1027_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__1(v___x_997__boxed_1025_, v___y_998__boxed_1026_, v_l_1022_, v_a_1023_, v_a_1024_);
lean_dec(v_l_1022_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__2(lean_object* v_s2_1028_, lean_object* v_s_1029_, lean_object* v_label_1030_, uint8_t v___x_1031_, lean_object* v_x_1032_){
_start:
{
lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; 
if (lean_obj_tag(v_x_1032_) == 0)
{
lean_object* v___x_1044_; 
lean_dec(v_label_1030_);
v___x_1044_ = lean_box(0);
return v___x_1044_;
}
else
{
lean_object* v_head_1045_; lean_object* v_tail_1046_; lean_object* v___x_1047_; uint8_t v___y_1049_; uint8_t v___x_1069_; 
v_head_1045_ = lean_ctor_get(v_x_1032_, 0);
lean_inc(v_head_1045_);
v_tail_1046_ = lean_ctor_get(v_x_1032_, 1);
lean_inc(v_tail_1046_);
lean_dec_ref_known(v_x_1032_, 2);
v___x_1047_ = lean_unsigned_to_nat(1u);
v___x_1069_ = lean_nat_dec_eq(v_head_1045_, v___x_1047_);
if (v___x_1069_ == 0)
{
v___y_1049_ = v___x_1069_;
goto v___jp_1048_;
}
else
{
lean_object* v___x_1070_; 
v___x_1070_ = l_List_head_x3f___redArg(v_s2_1028_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_dec(v_head_1045_);
v_x_1032_ = v_tail_1046_;
goto _start;
}
else
{
lean_object* v_val_1072_; uint8_t v___x_1073_; 
v_val_1072_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_val_1072_);
lean_dec_ref_known(v___x_1070_, 1);
v___x_1073_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_val_1072_);
lean_dec(v_val_1072_);
if (v___x_1073_ == 0)
{
lean_dec(v_head_1045_);
v_x_1032_ = v_tail_1046_;
goto _start;
}
else
{
v___y_1049_ = v___x_1031_;
goto v___jp_1048_;
}
}
}
v___jp_1048_:
{
lean_object* v___x_1050_; 
v___x_1050_ = l_List_drop___redArg(v_head_1045_, v_s2_1028_);
if (lean_obj_tag(v___x_1050_) == 1)
{
lean_object* v_head_1051_; lean_object* v_tail_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v_head_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_head_1051_);
v_tail_1052_ = lean_ctor_get(v___x_1050_, 1);
lean_inc(v_tail_1052_);
lean_dec_ref_known(v___x_1050_, 2);
v___x_1053_ = lean_unsigned_to_nat(58u);
v___x_1054_ = lean_nat_dec_eq(v_head_1051_, v___x_1053_);
lean_dec(v_head_1051_);
if (v___x_1054_ == 0)
{
lean_dec(v_tail_1052_);
v_x_1032_ = v_tail_1046_;
goto _start;
}
else
{
if (lean_obj_tag(v_tail_1052_) == 0)
{
v_x_1032_ = v_tail_1046_;
goto _start;
}
else
{
lean_object* v_head_1057_; lean_object* v_tail_1058_; uint8_t v___x_1059_; 
v_head_1057_ = lean_ctor_get(v_tail_1052_, 0);
lean_inc(v_head_1057_);
v_tail_1058_ = lean_ctor_get(v_tail_1052_, 1);
lean_inc(v_tail_1058_);
lean_dec_ref_known(v_tail_1052_, 2);
v___x_1059_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1057_);
lean_dec(v_head_1057_);
if (v___x_1059_ == 0)
{
lean_dec(v_tail_1058_);
v_x_1032_ = v_tail_1046_;
goto _start;
}
else
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v_content_1063_; lean_object* v___x_1064_; lean_object* v_tail_1065_; lean_object* v___x_1066_; uint8_t v___x_1067_; 
lean_dec(v_tail_1046_);
v___x_1061_ = lean_unsigned_to_nat(0u);
v___x_1062_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_tail_1058_);
v_content_1063_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__1(v___x_1059_, v___y_1049_, v_tail_1058_, v_tail_1058_, v___x_1062_);
v___x_1064_ = l_List_lengthTR___redArg(v_content_1063_);
v_tail_1065_ = l_List_drop___redArg(v___x_1064_, v_tail_1058_);
lean_dec(v_tail_1058_);
v___x_1066_ = l_List_lengthTR___redArg(v_s_1029_);
v___x_1067_ = l_List_isEmpty___redArg(v_tail_1065_);
if (v___x_1067_ == 0)
{
v___y_1034_ = v_tail_1065_;
v___y_1035_ = v_content_1063_;
v___y_1036_ = v___x_1066_;
v___y_1037_ = v___x_1047_;
goto v___jp_1033_;
}
else
{
v___y_1034_ = v_tail_1065_;
v___y_1035_ = v_content_1063_;
v___y_1036_ = v___x_1066_;
v___y_1037_ = v___x_1061_;
goto v___jp_1033_;
}
}
}
}
}
else
{
lean_dec(v___x_1050_);
v_x_1032_ = v_tail_1046_;
goto _start;
}
}
}
v___jp_1033_:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1038_ = l_List_drop___redArg(v___y_1037_, v___y_1034_);
lean_dec(v___y_1034_);
v___x_1039_ = l_List_lengthTR___redArg(v___x_1038_);
lean_dec(v___x_1038_);
v___x_1040_ = lean_nat_sub(v___y_1036_, v___x_1039_);
lean_dec(v___x_1039_);
lean_dec(v___y_1036_);
v___x_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___y_1035_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1042_, 0, v_label_1030_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
return v___x_1043_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__2___boxed(lean_object* v_s2_1075_, lean_object* v_s_1076_, lean_object* v_label_1077_, lean_object* v___x_1078_, lean_object* v_x_1079_){
_start:
{
uint8_t v___x_1029__boxed_1080_; lean_object* v_res_1081_; 
v___x_1029__boxed_1080_ = lean_unbox(v___x_1078_);
v_res_1081_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__2(v_s2_1075_, v_s_1076_, v_label_1077_, v___x_1029__boxed_1080_, v_x_1079_);
lean_dec(v_s_1076_);
lean_dec(v_s2_1075_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0(lean_object* v_l_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_){
_start:
{
if (lean_obj_tag(v_a_1083_) == 0)
{
lean_dec_ref(v_a_1084_);
lean_inc(v_l_1082_);
return v_l_1082_;
}
else
{
lean_object* v_head_1085_; lean_object* v_tail_1086_; uint8_t v___x_1087_; 
v_head_1085_ = lean_ctor_get(v_a_1083_, 0);
lean_inc(v_head_1085_);
v_tail_1086_ = lean_ctor_get(v_a_1083_, 1);
lean_inc(v_tail_1086_);
lean_dec_ref_known(v_a_1083_, 2);
v___x_1087_ = lp_lean_x2dftml_LeanFtml_isBibLabelByte(v_head_1085_);
if (v___x_1087_ == 0)
{
lean_object* v___x_1088_; 
lean_dec(v_tail_1086_);
lean_dec(v_head_1085_);
v___x_1088_ = lean_array_to_list(v_a_1084_);
return v___x_1088_;
}
else
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_array_push(v_a_1084_, v_head_1085_);
v_a_1083_ = v_tail_1086_;
v_a_1084_ = v___x_1089_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0___boxed(lean_object* v_l_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0(v_l_1091_, v_a_1092_, v_a_1093_);
lean_dec(v_l_1091_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3(lean_object* v_tail_1101_, lean_object* v_s_1102_, lean_object* v_x_1103_){
_start:
{
if (lean_obj_tag(v_x_1103_) == 0)
{
lean_object* v___x_1104_; 
v___x_1104_ = lean_box(0);
return v___x_1104_;
}
else
{
lean_object* v_head_1105_; lean_object* v_tail_1106_; lean_object* v___x_1107_; uint8_t v___x_1119_; 
v_head_1105_ = lean_ctor_get(v_x_1103_, 0);
lean_inc(v_head_1105_);
v_tail_1106_ = lean_ctor_get(v_x_1103_, 1);
lean_inc(v_tail_1106_);
lean_dec_ref_known(v_x_1103_, 2);
v___x_1107_ = lean_unsigned_to_nat(1u);
v___x_1119_ = lean_nat_dec_eq(v_head_1105_, v___x_1107_);
if (v___x_1119_ == 0)
{
goto v___jp_1108_;
}
else
{
lean_object* v___x_1120_; 
v___x_1120_ = l_List_head_x3f___redArg(v_tail_1101_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_dec(v_head_1105_);
v_x_1103_ = v_tail_1106_;
goto _start;
}
else
{
lean_object* v_val_1122_; uint8_t v___x_1123_; 
v_val_1122_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_val_1122_);
lean_dec_ref_known(v___x_1120_, 1);
v___x_1123_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_val_1122_);
lean_dec(v_val_1122_);
if (v___x_1123_ == 0)
{
lean_dec(v_head_1105_);
v_x_1103_ = v_tail_1106_;
goto _start;
}
else
{
goto v___jp_1108_;
}
}
}
v___jp_1108_:
{
lean_object* v_s1_1109_; lean_object* v___x_1110_; lean_object* v_label_1111_; uint8_t v___x_1112_; 
v_s1_1109_ = l_List_drop___redArg(v_head_1105_, v_tail_1101_);
v___x_1110_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_s1_1109_);
v_label_1111_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0(v_s1_1109_, v_s1_1109_, v___x_1110_);
v___x_1112_ = l_List_isEmpty___redArg(v_label_1111_);
if (v___x_1112_ == 0)
{
lean_object* v___x_1113_; lean_object* v_s2_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1113_ = l_List_lengthTR___redArg(v_label_1111_);
v_s2_1114_ = l_List_drop___redArg(v___x_1113_, v_s1_1109_);
lean_dec(v_s1_1109_);
v___x_1115_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__1));
v___x_1116_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__2(v_s2_1114_, v_s_1102_, v_label_1111_, v___x_1112_, v___x_1115_);
lean_dec(v_s2_1114_);
if (lean_obj_tag(v___x_1116_) == 0)
{
v_x_1103_ = v_tail_1106_;
goto _start;
}
else
{
lean_dec(v_tail_1106_);
return v___x_1116_;
}
}
else
{
lean_dec(v_label_1111_);
lean_dec(v_s1_1109_);
v_x_1103_ = v_tail_1106_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___boxed(lean_object* v_tail_1125_, lean_object* v_s_1126_, lean_object* v_x_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3(v_tail_1125_, v_s_1126_, v_x_1127_);
lean_dec(v_s_1126_);
lean_dec(v_tail_1125_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibDefMatch(lean_object* v_s_1129_){
_start:
{
if (lean_obj_tag(v_s_1129_) == 1)
{
lean_object* v_head_1130_; lean_object* v_tail_1131_; lean_object* v___x_1132_; uint8_t v___x_1133_; 
v_head_1130_ = lean_ctor_get(v_s_1129_, 0);
v_tail_1131_ = lean_ctor_get(v_s_1129_, 1);
v___x_1132_ = lean_unsigned_to_nat(58u);
v___x_1133_ = lean_nat_dec_eq(v_head_1130_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_box(0);
return v___x_1134_;
}
else
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3___closed__1));
v___x_1136_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibDefMatch_spec__3(v_tail_1131_, v_s_1129_, v___x_1135_);
return v___x_1136_;
}
}
else
{
lean_object* v___x_1137_; 
v___x_1137_ = lean_box(0);
return v___x_1137_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibDefMatch___boxed(lean_object* v_s_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = lp_lean_x2dftml_LeanFtml_bibDefMatch(v_s_1138_);
lean_dec(v_s_1138_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(lean_object* v_x_1140_){
_start:
{
if (lean_obj_tag(v_x_1140_) == 0)
{
return v_x_1140_;
}
else
{
lean_object* v_head_1141_; lean_object* v_tail_1142_; uint8_t v___x_1143_; 
v_head_1141_ = lean_ctor_get(v_x_1140_, 0);
v_tail_1142_ = lean_ctor_get(v_x_1140_, 1);
v___x_1143_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1141_);
if (v___x_1143_ == 0)
{
lean_inc_ref(v_x_1140_);
return v_x_1140_;
}
else
{
v_x_1140_ = v_tail_1142_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0___boxed(lean_object* v_x_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(v_x_1145_);
lean_dec(v_x_1145_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWs_go(lean_object* v_a_1147_, lean_object* v_a_1148_){
_start:
{
if (lean_obj_tag(v_a_1147_) == 0)
{
return v_a_1147_;
}
else
{
lean_object* v_head_1149_; lean_object* v_tail_1150_; lean_object* v_zero_1151_; uint8_t v_isZero_1152_; 
v_head_1149_ = lean_ctor_get(v_a_1147_, 0);
v_tail_1150_ = lean_ctor_get(v_a_1147_, 1);
v_zero_1151_ = lean_unsigned_to_nat(0u);
v_isZero_1152_ = lean_nat_dec_eq(v_a_1148_, v_zero_1151_);
if (v_isZero_1152_ == 1)
{
lean_object* v___x_1153_; 
lean_dec_ref_known(v_a_1147_, 2);
v___x_1153_ = lean_box(0);
return v___x_1153_;
}
else
{
lean_object* v_one_1154_; lean_object* v_n_1155_; uint8_t v___x_1156_; 
v_one_1154_ = lean_unsigned_to_nat(1u);
v_n_1155_ = lean_nat_sub(v_a_1148_, v_one_1154_);
v___x_1156_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1149_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1164_; 
lean_inc(v_tail_1150_);
lean_inc(v_head_1149_);
v_isSharedCheck_1164_ = !lean_is_exclusive(v_a_1147_);
if (v_isSharedCheck_1164_ == 0)
{
lean_object* v_unused_1165_; lean_object* v_unused_1166_; 
v_unused_1165_ = lean_ctor_get(v_a_1147_, 1);
lean_dec(v_unused_1165_);
v_unused_1166_ = lean_ctor_get(v_a_1147_, 0);
lean_dec(v_unused_1166_);
v___x_1158_ = v_a_1147_;
v_isShared_1159_ = v_isSharedCheck_1164_;
goto v_resetjp_1157_;
}
else
{
lean_dec(v_a_1147_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1164_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1160_; lean_object* v___x_1162_; 
v___x_1160_ = lp_lean_x2dftml_LeanFtml_collapseWs_go(v_tail_1150_, v_n_1155_);
lean_dec(v_n_1155_);
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 1, v___x_1160_);
v___x_1162_ = v___x_1158_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_head_1149_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v___x_1160_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
else
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1176_; 
v___x_1167_ = lean_unsigned_to_nat(32u);
v___x_1168_ = lp_lean_x2dftml_List_dropWhile___at___00LeanFtml_collapseWs_go_spec__0(v_a_1147_);
v_isSharedCheck_1176_ = !lean_is_exclusive(v_a_1147_);
if (v_isSharedCheck_1176_ == 0)
{
lean_object* v_unused_1177_; lean_object* v_unused_1178_; 
v_unused_1177_ = lean_ctor_get(v_a_1147_, 1);
lean_dec(v_unused_1177_);
v_unused_1178_ = lean_ctor_get(v_a_1147_, 0);
lean_dec(v_unused_1178_);
v___x_1170_ = v_a_1147_;
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
else
{
lean_dec(v_a_1147_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1174_; 
v___x_1172_ = lp_lean_x2dftml_LeanFtml_collapseWs_go(v___x_1168_, v_n_1155_);
lean_dec(v_n_1155_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 1, v___x_1172_);
lean_ctor_set(v___x_1170_, 0, v___x_1167_);
v___x_1174_ = v___x_1170_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v___x_1167_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v___x_1172_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWs_go___boxed(lean_object* v_a_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = lp_lean_x2dftml_LeanFtml_collapseWs_go(v_a_1179_, v_a_1180_);
lean_dec(v_a_1180_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseWs(lean_object* v_bs_1182_){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1183_ = l_List_lengthTR___redArg(v_bs_1182_);
v___x_1184_ = lean_unsigned_to_nat(1u);
v___x_1185_ = lean_nat_add(v___x_1183_, v___x_1184_);
lean_dec(v___x_1183_);
v___x_1186_ = lp_lean_x2dftml_LeanFtml_collapseWs_go(v_bs_1182_, v___x_1185_);
lean_dec(v___x_1185_);
return v___x_1186_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__2(void){
_start:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimNl___closed__1));
v___x_1190_ = l_String_toListImpl(v___x_1189_);
return v___x_1190_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__3(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__2, &lp_lean_x2dftml_LeanFtml_claimNl___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__2);
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
return v___x_1192_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__4(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__3, &lp_lean_x2dftml_LeanFtml_claimNl___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__3);
v___x_1194_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__2);
v___x_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1194_);
lean_ctor_set(v___x_1195_, 1, v___x_1193_);
return v___x_1195_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__5(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1196_ = lean_box(0);
v___x_1197_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__4, &lp_lean_x2dftml_LeanFtml_claimNl___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__4);
v___x_1198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
lean_ctor_set(v___x_1198_, 1, v___x_1196_);
return v___x_1198_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__6(void){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1199_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__5, &lp_lean_x2dftml_LeanFtml_claimNl___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__5);
v___x_1200_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimNl___closed__0));
v___x_1201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1200_);
lean_ctor_set(v___x_1201_, 1, v___x_1199_);
return v___x_1201_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__7(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1202_ = lean_box(0);
v___x_1203_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__6, &lp_lean_x2dftml_LeanFtml_claimNl___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__6);
v___x_1204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1203_);
lean_ctor_set(v___x_1204_, 1, v___x_1202_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_claimNl(lean_object* v_toks_1205_){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1206_ = l_List_lengthTR___redArg(v_toks_1205_);
v___x_1207_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1206_);
v___x_1208_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimNl___closed__7, &lp_lean_x2dftml_LeanFtml_claimNl___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_claimNl___closed__7);
v___x_1209_ = l_List_appendTR___redArg(v_toks_1205_, v___x_1208_);
v___x_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1207_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibWalk_spec__0(uint8_t v___x_1211_, lean_object* v_l_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_){
_start:
{
if (lean_obj_tag(v_a_1213_) == 0)
{
lean_dec_ref(v_a_1214_);
lean_inc(v_l_1212_);
return v_l_1212_;
}
else
{
lean_object* v_head_1215_; lean_object* v_tail_1216_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
v_head_1215_ = lean_ctor_get(v_a_1213_, 0);
lean_inc(v_head_1215_);
v_tail_1216_ = lean_ctor_get(v_a_1213_, 1);
lean_inc(v_tail_1216_);
lean_dec_ref_known(v_a_1213_, 2);
v___x_1220_ = lean_unsigned_to_nat(10u);
v___x_1221_ = lean_nat_dec_eq(v_head_1215_, v___x_1220_);
if (v___x_1221_ == 0)
{
goto v___jp_1217_;
}
else
{
if (v___x_1211_ == 0)
{
lean_object* v___x_1222_; 
lean_dec(v_tail_1216_);
lean_dec(v_head_1215_);
v___x_1222_ = lean_array_to_list(v_a_1214_);
return v___x_1222_;
}
else
{
goto v___jp_1217_;
}
}
v___jp_1217_:
{
lean_object* v___x_1218_; 
v___x_1218_ = lean_array_push(v_a_1214_, v_head_1215_);
v_a_1213_ = v_tail_1216_;
v_a_1214_ = v___x_1218_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibWalk_spec__0___boxed(lean_object* v___x_1223_, lean_object* v_l_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_){
_start:
{
uint8_t v___x_576__boxed_1227_; lean_object* v_res_1228_; 
v___x_576__boxed_1227_ = lean_unbox(v___x_1223_);
v_res_1228_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibWalk_spec__0(v___x_576__boxed_1227_, v_l_1224_, v_a_1225_, v_a_1226_);
lean_dec(v_l_1224_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibWalk(lean_object* v_s_1232_, uint8_t v_prev_1233_, lean_object* v_doc_1234_, lean_object* v_toks_1235_, lean_object* v_x_1236_){
_start:
{
lean_object* v_zero_1237_; uint8_t v_isZero_1238_; 
v_zero_1237_ = lean_unsigned_to_nat(0u);
v_isZero_1238_ = lean_nat_dec_eq(v_x_1236_, v_zero_1237_);
if (v_isZero_1238_ == 1)
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
lean_dec(v_x_1236_);
lean_dec(v_s_1232_);
v___x_1239_ = lean_box(0);
v___x_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1240_, 0, v_toks_1235_);
lean_ctor_set(v___x_1240_, 1, v_doc_1234_);
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1239_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
return v___x_1241_;
}
else
{
uint8_t v___x_1242_; 
v___x_1242_ = l_List_isEmpty___redArg(v_s_1232_);
if (v___x_1242_ == 0)
{
lean_object* v_one_1243_; lean_object* v_n_1244_; lean_object* v___x_1245_; 
v_one_1243_ = lean_unsigned_to_nat(1u);
v_n_1244_ = lean_nat_sub(v_x_1236_, v_one_1243_);
lean_dec(v_x_1236_);
v___x_1245_ = lp_lean_x2dftml_LeanFtml_bibDefMatch(v_s_1232_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v___x_1246_; lean_object* v_text_1247_; lean_object* v___y_1249_; lean_object* v_fst_1250_; lean_object* v_snd_1251_; lean_object* v___x_1267_; lean_object* v___y_1269_; lean_object* v_tail_1279_; uint8_t v___x_1280_; 
v___x_1246_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_s_1232_);
v_text_1247_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibWalk_spec__0(v___x_1242_, v_s_1232_, v_s_1232_, v___x_1246_);
v___x_1267_ = l_List_lengthTR___redArg(v_text_1247_);
lean_inc(v___x_1267_);
v_tail_1279_ = l_List_drop___redArg(v___x_1267_, v_s_1232_);
v___x_1280_ = l_List_isEmpty___redArg(v_tail_1279_);
lean_dec(v_tail_1279_);
if (v___x_1280_ == 0)
{
v___y_1269_ = v_one_1243_;
goto v___jp_1268_;
}
else
{
v___y_1269_ = v_zero_1237_;
goto v___jp_1268_;
}
v___jp_1248_:
{
lean_object* v___x_1252_; uint8_t v___x_1253_; lean_object* v___x_1254_; lean_object* v_fst_1255_; lean_object* v_snd_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1266_; 
v___x_1252_ = l_List_drop___redArg(v___y_1249_, v_s_1232_);
lean_dec(v_s_1232_);
v___x_1253_ = 2;
v___x_1254_ = lp_lean_x2dftml_LeanFtml_bibWalk(v___x_1252_, v___x_1253_, v_doc_1234_, v_snd_1251_, v_n_1244_);
v_fst_1255_ = lean_ctor_get(v___x_1254_, 0);
v_snd_1256_ = lean_ctor_get(v___x_1254_, 1);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1258_ = v___x_1254_;
v_isShared_1259_ = v_isSharedCheck_1266_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_snd_1256_);
lean_inc(v_fst_1255_);
lean_dec(v___x_1254_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1266_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
v___x_1260_ = lp_lean_x2dftml_LeanFtml_collapseWs(v_text_1247_);
v___x_1261_ = l_List_appendTR___redArg(v_fst_1250_, v___x_1260_);
v___x_1262_ = l_List_appendTR___redArg(v___x_1261_, v_fst_1255_);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 0, v___x_1262_);
v___x_1264_ = v___x_1258_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1262_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v_snd_1256_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
v___jp_1268_:
{
lean_object* v_len_1270_; lean_object* v___x_1271_; uint8_t v___x_1272_; 
v_len_1270_ = lean_nat_add(v___x_1267_, v___y_1269_);
lean_dec(v___x_1267_);
v___x_1271_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_text_1247_);
v___x_1272_ = l_List_isEmpty___redArg(v___x_1271_);
lean_dec(v___x_1271_);
if (v___x_1272_ == 0)
{
if (v_prev_1233_ == 2)
{
lean_object* v___x_1273_; 
v___x_1273_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibWalk___closed__0));
v___y_1249_ = v_len_1270_;
v_fst_1250_ = v___x_1273_;
v_snd_1251_ = v_toks_1235_;
goto v___jp_1248_;
}
else
{
lean_object* v___x_1274_; lean_object* v_fst_1275_; lean_object* v_snd_1276_; 
v___x_1274_ = lp_lean_x2dftml_LeanFtml_claimNl(v_toks_1235_);
v_fst_1275_ = lean_ctor_get(v___x_1274_, 0);
lean_inc(v_fst_1275_);
v_snd_1276_ = lean_ctor_get(v___x_1274_, 1);
lean_inc(v_snd_1276_);
lean_dec_ref(v___x_1274_);
v___y_1249_ = v_len_1270_;
v_fst_1250_ = v_fst_1275_;
v_snd_1251_ = v_snd_1276_;
goto v___jp_1248_;
}
}
else
{
lean_object* v___x_1277_; 
lean_dec(v_text_1247_);
v___x_1277_ = l_List_drop___redArg(v_len_1270_, v_s_1232_);
lean_dec(v_s_1232_);
v_s_1232_ = v___x_1277_;
v_x_1236_ = v_n_1244_;
goto _start;
}
}
}
else
{
lean_object* v_val_1281_; lean_object* v_snd_1282_; lean_object* v_fst_1283_; lean_object* v_fst_1284_; lean_object* v_snd_1285_; lean_object* v_fst_1287_; lean_object* v_snd_1288_; 
v_val_1281_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_val_1281_);
lean_dec_ref_known(v___x_1245_, 1);
v_snd_1282_ = lean_ctor_get(v_val_1281_, 1);
lean_inc(v_snd_1282_);
v_fst_1283_ = lean_ctor_get(v_val_1281_, 0);
lean_inc(v_fst_1283_);
lean_dec(v_val_1281_);
v_fst_1284_ = lean_ctor_get(v_snd_1282_, 0);
lean_inc(v_fst_1284_);
v_snd_1285_ = lean_ctor_get(v_snd_1282_, 1);
lean_inc(v_snd_1285_);
lean_dec(v_snd_1282_);
if (v_prev_1233_ == 2)
{
lean_object* v___x_1308_; lean_object* v_fst_1309_; lean_object* v_snd_1310_; 
v___x_1308_ = lp_lean_x2dftml_LeanFtml_claimNl(v_toks_1235_);
v_fst_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_fst_1309_);
v_snd_1310_ = lean_ctor_get(v___x_1308_, 1);
lean_inc(v_snd_1310_);
lean_dec_ref(v___x_1308_);
v_fst_1287_ = v_fst_1309_;
v_snd_1288_ = v_snd_1310_;
goto v___jp_1286_;
}
else
{
lean_object* v___x_1311_; 
v___x_1311_ = lean_box(0);
v_fst_1287_ = v___x_1311_;
v_snd_1288_ = v_toks_1235_;
goto v___jp_1286_;
}
v___jp_1286_:
{
lean_object* v___x_1289_; lean_object* v_snd_1290_; lean_object* v_fst_1291_; lean_object* v_fst_1292_; lean_object* v_snd_1293_; lean_object* v___x_1294_; uint8_t v___x_1295_; lean_object* v___x_1296_; lean_object* v_fst_1297_; lean_object* v_snd_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1307_; 
v___x_1289_ = lp_lean_x2dftml_LeanFtml_bibitemProcess(v_fst_1283_, v_fst_1284_, v_doc_1234_, v_snd_1288_);
v_snd_1290_ = lean_ctor_get(v___x_1289_, 1);
lean_inc(v_snd_1290_);
v_fst_1291_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_fst_1291_);
lean_dec_ref(v___x_1289_);
v_fst_1292_ = lean_ctor_get(v_snd_1290_, 0);
lean_inc(v_fst_1292_);
v_snd_1293_ = lean_ctor_get(v_snd_1290_, 1);
lean_inc(v_snd_1293_);
lean_dec(v_snd_1290_);
v___x_1294_ = l_List_drop___redArg(v_snd_1285_, v_s_1232_);
lean_dec(v_s_1232_);
v___x_1295_ = 1;
v___x_1296_ = lp_lean_x2dftml_LeanFtml_bibWalk(v___x_1294_, v___x_1295_, v_snd_1293_, v_fst_1292_, v_n_1244_);
v_fst_1297_ = lean_ctor_get(v___x_1296_, 0);
v_snd_1298_ = lean_ctor_get(v___x_1296_, 1);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1300_ = v___x_1296_;
v_isShared_1301_ = v_isSharedCheck_1307_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_snd_1298_);
lean_inc(v_fst_1297_);
lean_dec(v___x_1296_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1307_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1302_ = l_List_appendTR___redArg(v_fst_1287_, v_fst_1291_);
v___x_1303_ = l_List_appendTR___redArg(v___x_1302_, v_fst_1297_);
if (v_isShared_1301_ == 0)
{
lean_ctor_set(v___x_1300_, 0, v___x_1303_);
v___x_1305_ = v___x_1300_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1303_);
lean_ctor_set(v_reuseFailAlloc_1306_, 1, v_snd_1298_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
}
else
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
lean_dec(v_x_1236_);
lean_dec(v_s_1232_);
v___x_1312_ = lean_box(0);
v___x_1313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1313_, 0, v_toks_1235_);
lean_ctor_set(v___x_1313_, 1, v_doc_1234_);
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
return v___x_1314_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibWalk___boxed(lean_object* v_s_1315_, lean_object* v_prev_1316_, lean_object* v_doc_1317_, lean_object* v_toks_1318_, lean_object* v_x_1319_){
_start:
{
uint8_t v_prev_boxed_1320_; lean_object* v_res_1321_; 
v_prev_boxed_1320_ = lean_unbox(v_prev_1316_);
v_res_1321_ = lp_lean_x2dftml_LeanFtml_bibWalk(v_s_1315_, v_prev_boxed_1320_, v_doc_1317_, v_toks_1318_, v_x_1319_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences_go(lean_object* v_pat_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_){
_start:
{
if (lean_obj_tag(v_a_1323_) == 0)
{
lean_object* v___x_1325_; 
lean_dec(v_a_1324_);
v___x_1325_ = lean_box(0);
return v___x_1325_;
}
else
{
lean_object* v_head_1326_; lean_object* v_tail_1327_; lean_object* v___y_1329_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; uint8_t v___x_1336_; 
v_head_1326_ = lean_ctor_get(v_a_1323_, 0);
lean_inc(v_head_1326_);
v_tail_1327_ = lean_ctor_get(v_a_1323_, 1);
lean_inc(v_tail_1327_);
v___x_1333_ = l_List_lengthTR___redArg(v_pat_1322_);
v___x_1334_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v___x_1333_);
lean_inc_ref(v_a_1323_);
v___x_1335_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_1323_, v_a_1323_, v___x_1333_, v___x_1334_);
v___x_1336_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1335_, v_pat_1322_);
lean_dec(v___x_1335_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; 
lean_dec(v___x_1333_);
lean_dec_ref_known(v_a_1323_, 2);
v___x_1337_ = lean_box(0);
v___y_1329_ = v___x_1337_;
goto v___jp_1328_;
}
else
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1348_; 
lean_inc(v_a_1324_);
v___x_1338_ = l_List_reverse___redArg(v_a_1324_);
v___x_1339_ = l_List_drop___redArg(v___x_1333_, v_a_1323_);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_a_1323_);
if (v_isSharedCheck_1348_ == 0)
{
lean_object* v_unused_1349_; lean_object* v_unused_1350_; 
v_unused_1349_ = lean_ctor_get(v_a_1323_, 1);
lean_dec(v_unused_1349_);
v_unused_1350_ = lean_ctor_get(v_a_1323_, 0);
lean_dec(v_unused_1350_);
v___x_1341_ = v_a_1323_;
v_isShared_1342_ = v_isSharedCheck_1348_;
goto v_resetjp_1340_;
}
else
{
lean_dec(v_a_1323_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1348_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1346_; 
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1338_);
lean_ctor_set(v___x_1343_, 1, v___x_1339_);
v___x_1344_ = lean_box(0);
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 1, v___x_1344_);
lean_ctor_set(v___x_1341_, 0, v___x_1343_);
v___x_1346_ = v___x_1341_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1343_);
lean_ctor_set(v_reuseFailAlloc_1347_, 1, v___x_1344_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
v___y_1329_ = v___x_1346_;
goto v___jp_1328_;
}
}
}
v___jp_1328_:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1330_, 0, v_head_1326_);
lean_ctor_set(v___x_1330_, 1, v_a_1324_);
v___x_1331_ = lp_lean_x2dftml_LeanFtml_occurrences_go(v_pat_1322_, v_tail_1327_, v___x_1330_);
v___x_1332_ = l_List_appendTR___redArg(v___y_1329_, v___x_1331_);
return v___x_1332_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences_go___boxed(lean_object* v_pat_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = lp_lean_x2dftml_LeanFtml_occurrences_go(v_pat_1351_, v_a_1352_, v_a_1353_);
lean_dec(v_pat_1351_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences(lean_object* v_pat_1355_, lean_object* v_s_1356_){
_start:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = lean_box(0);
v___x_1358_ = lp_lean_x2dftml_LeanFtml_occurrences_go(v_pat_1355_, v_s_1356_, v___x_1357_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_occurrences___boxed(lean_object* v_pat_1359_, lean_object* v_s_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = lp_lean_x2dftml_LeanFtml_occurrences(v_pat_1359_, v_s_1360_);
lean_dec(v_pat_1359_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(lean_object* v_l_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_){
_start:
{
if (lean_obj_tag(v_a_1363_) == 0)
{
lean_dec_ref(v_a_1364_);
lean_inc(v_l_1362_);
return v_l_1362_;
}
else
{
lean_object* v_head_1365_; lean_object* v_tail_1366_; lean_object* v___x_1367_; uint8_t v___x_1368_; 
v_head_1365_ = lean_ctor_get(v_a_1363_, 0);
lean_inc(v_head_1365_);
v_tail_1366_ = lean_ctor_get(v_a_1363_, 1);
lean_inc(v_tail_1366_);
lean_dec_ref_known(v_a_1363_, 2);
v___x_1367_ = lean_unsigned_to_nat(32u);
v___x_1368_ = lean_nat_dec_eq(v_head_1365_, v___x_1367_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; 
lean_dec(v_tail_1366_);
lean_dec(v_head_1365_);
v___x_1369_ = lean_array_to_list(v_a_1364_);
return v___x_1369_;
}
else
{
lean_object* v___x_1370_; 
v___x_1370_ = lean_array_push(v_a_1364_, v_head_1365_);
v_a_1363_ = v_tail_1366_;
v_a_1364_ = v___x_1370_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0___boxed(lean_object* v_l_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_l_1372_, v_a_1373_, v_a_1374_);
lean_dec(v_l_1372_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibliographyMatchAt_spec__1(lean_object* v_fst_1376_, lean_object* v_x_1377_){
_start:
{
if (lean_obj_tag(v_x_1377_) == 0)
{
lean_object* v___x_1378_; 
lean_dec(v_fst_1376_);
v___x_1378_ = lean_box(0);
return v___x_1378_;
}
else
{
lean_object* v_head_1379_; lean_object* v_tail_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1407_; 
v_head_1379_ = lean_ctor_get(v_x_1377_, 0);
v_tail_1380_ = lean_ctor_get(v_x_1377_, 1);
v_isSharedCheck_1407_ = !lean_is_exclusive(v_x_1377_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1382_ = v_x_1377_;
v_isShared_1383_ = v_isSharedCheck_1407_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_tail_1380_);
lean_inc(v_head_1379_);
lean_dec(v_x_1377_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1407_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v_fst_1384_; lean_object* v_snd_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1406_; 
v_fst_1384_ = lean_ctor_get(v_head_1379_, 0);
v_snd_1385_ = lean_ctor_get(v_head_1379_, 1);
v_isSharedCheck_1406_ = !lean_is_exclusive(v_head_1379_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1387_ = v_head_1379_;
v_isShared_1388_ = v_isSharedCheck_1406_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_snd_1385_);
lean_inc(v_fst_1384_);
lean_dec(v_head_1379_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1406_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v_rest_1392_; uint8_t v___x_1401_; 
v___x_1389_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_snd_1385_);
v___x_1390_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibliographyMatchAt_spec__0(v_snd_1385_, v_snd_1385_, v___x_1389_);
v___x_1391_ = l_List_lengthTR___redArg(v___x_1390_);
lean_dec(v___x_1390_);
v_rest_1392_ = l_List_drop___redArg(v___x_1391_, v_snd_1385_);
lean_dec(v_snd_1385_);
v___x_1401_ = l_List_isEmpty___redArg(v_rest_1392_);
if (v___x_1401_ == 0)
{
lean_object* v___x_1402_; lean_object* v___x_1403_; uint8_t v___x_1404_; 
v___x_1402_ = l_List_head_x3f___redArg(v_rest_1392_);
v___x_1403_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockRule___closed__0));
v___x_1404_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_1402_, v___x_1403_);
lean_dec(v___x_1402_);
if (v___x_1404_ == 0)
{
lean_dec(v_rest_1392_);
lean_del_object(v___x_1387_);
lean_dec(v_fst_1384_);
lean_del_object(v___x_1382_);
v_x_1377_ = v_tail_1380_;
goto _start;
}
else
{
lean_dec(v_tail_1380_);
goto v___jp_1393_;
}
}
else
{
lean_dec(v_tail_1380_);
goto v___jp_1393_;
}
v___jp_1393_:
{
lean_object* v___x_1395_; 
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v_rest_1392_);
v___x_1395_ = v___x_1387_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_fst_1384_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v_rest_1392_);
v___x_1395_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
lean_object* v___x_1397_; 
if (v_isShared_1383_ == 0)
{
lean_ctor_set_tag(v___x_1382_, 0);
lean_ctor_set(v___x_1382_, 1, v___x_1395_);
lean_ctor_set(v___x_1382_, 0, v_fst_1376_);
v___x_1397_ = v___x_1382_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_fst_1376_);
lean_ctor_set(v_reuseFailAlloc_1399_, 1, v___x_1395_);
v___x_1397_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
lean_object* v___x_1398_; 
v___x_1398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
return v___x_1398_;
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
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__0));
v___x_1410_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1409_);
return v___x_1410_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__3(void){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1412_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__2));
v___x_1413_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyMatchAt(lean_object* v_src_1414_){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1415_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__1);
v___x_1416_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1415_, v_src_1414_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_box(0);
return v___x_1417_;
}
else
{
lean_object* v_val_1418_; lean_object* v___x_1419_; 
v_val_1418_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_val_1418_);
lean_dec_ref_known(v___x_1416_, 1);
v___x_1419_ = lp_lean_x2dftml_LeanFtml_attrGroupB(v_val_1418_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v___x_1420_; 
v___x_1420_ = lean_box(0);
return v___x_1420_;
}
else
{
lean_object* v_val_1421_; lean_object* v_fst_1422_; lean_object* v_snd_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v_val_1421_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_val_1421_);
lean_dec_ref_known(v___x_1419_, 1);
v_fst_1422_ = lean_ctor_get(v_val_1421_, 0);
lean_inc(v_fst_1422_);
v_snd_1423_ = lean_ctor_get(v_val_1421_, 1);
lean_inc(v_snd_1423_);
lean_dec(v_val_1421_);
v___x_1424_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__3, &lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bibliographyMatchAt___closed__3);
v___x_1425_ = lp_lean_x2dftml_LeanFtml_occurrences(v___x_1424_, v_snd_1423_);
v___x_1426_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_bibliographyMatchAt_spec__1(v_fst_1422_, v___x_1425_);
return v___x_1426_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyFind_go(lean_object* v_a_1427_, lean_object* v_a_1428_, uint8_t v_a_1429_, lean_object* v_a_1430_){
_start:
{
lean_object* v_zero_1431_; uint8_t v_isZero_1432_; 
v_zero_1431_ = lean_unsigned_to_nat(0u);
v_isZero_1432_ = lean_nat_dec_eq(v_a_1430_, v_zero_1431_);
if (v_isZero_1432_ == 1)
{
lean_object* v___x_1433_; 
lean_dec(v_a_1430_);
lean_dec(v_a_1428_);
lean_dec(v_a_1427_);
v___x_1433_ = lean_box(0);
return v___x_1433_;
}
else
{
lean_object* v_one_1434_; lean_object* v_n_1435_; 
v_one_1434_ = lean_unsigned_to_nat(1u);
v_n_1435_ = lean_nat_sub(v_a_1430_, v_one_1434_);
lean_dec(v_a_1430_);
if (v_a_1429_ == 0)
{
goto v___jp_1436_;
}
else
{
lean_object* v___x_1444_; 
lean_inc(v_a_1427_);
v___x_1444_ = lp_lean_x2dftml_LeanFtml_bibliographyMatchAt(v_a_1427_);
if (lean_obj_tag(v___x_1444_) == 0)
{
goto v___jp_1436_;
}
else
{
lean_object* v_val_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1453_; 
lean_dec(v_n_1435_);
lean_dec(v_a_1427_);
v_val_1445_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1447_ = v___x_1444_;
v_isShared_1448_ = v_isSharedCheck_1453_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_val_1445_);
lean_dec(v___x_1444_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1453_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; lean_object* v___x_1451_; 
v___x_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1449_, 0, v_a_1428_);
lean_ctor_set(v___x_1449_, 1, v_val_1445_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set(v___x_1447_, 0, v___x_1449_);
v___x_1451_ = v___x_1447_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1449_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
v___jp_1436_:
{
if (lean_obj_tag(v_a_1427_) == 0)
{
lean_object* v___x_1437_; 
lean_dec(v_n_1435_);
lean_dec(v_a_1428_);
v___x_1437_ = lean_box(0);
return v___x_1437_;
}
else
{
lean_object* v_head_1438_; lean_object* v_tail_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; uint8_t v___x_1442_; 
v_head_1438_ = lean_ctor_get(v_a_1427_, 0);
lean_inc(v_head_1438_);
v_tail_1439_ = lean_ctor_get(v_a_1427_, 1);
lean_inc(v_tail_1439_);
lean_dec_ref_known(v_a_1427_, 2);
v___x_1440_ = lean_nat_add(v_a_1428_, v_one_1434_);
lean_dec(v_a_1428_);
v___x_1441_ = lean_unsigned_to_nat(10u);
v___x_1442_ = lean_nat_dec_eq(v_head_1438_, v___x_1441_);
lean_dec(v_head_1438_);
v_a_1427_ = v_tail_1439_;
v_a_1428_ = v___x_1440_;
v_a_1429_ = v___x_1442_;
v_a_1430_ = v_n_1435_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyFind_go___boxed(lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_){
_start:
{
uint8_t v_a_166__boxed_1458_; lean_object* v_res_1459_; 
v_a_166__boxed_1458_ = lean_unbox(v_a_1456_);
v_res_1459_ = lp_lean_x2dftml_LeanFtml_bibliographyFind_go(v_a_1454_, v_a_1455_, v_a_166__boxed_1458_, v_a_1457_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyFind(lean_object* v_src_1460_){
_start:
{
lean_object* v___x_1461_; uint8_t v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1461_ = lean_unsigned_to_nat(0u);
v___x_1462_ = 1;
v___x_1463_ = l_List_lengthTR___redArg(v_src_1460_);
v___x_1464_ = lean_unsigned_to_nat(1u);
v___x_1465_ = lean_nat_add(v___x_1463_, v___x_1464_);
lean_dec(v___x_1463_);
v___x_1466_ = lp_lean_x2dftml_LeanFtml_bibliographyFind_go(v_src_1460_, v___x_1461_, v___x_1462_, v___x_1465_);
return v___x_1466_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__0(void){
_start:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1467_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__2);
v___x_1468_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimNl___closed__0));
v___x_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
lean_ctor_set(v___x_1469_, 1, v___x_1467_);
return v___x_1469_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__1(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1470_ = lean_box(0);
v___x_1471_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__0, &lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__0);
v___x_1472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1471_);
lean_ctor_set(v___x_1472_, 1, v___x_1470_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyProcess(lean_object* v_g1_1473_, lean_object* v_inner_1474_, lean_object* v_doc_1475_, lean_object* v_toks_1476_){
_start:
{
uint8_t v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v_snd_1482_; lean_object* v_fst_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1521_; 
v___x_1477_ = 0;
v___x_1478_ = l_List_lengthTR___redArg(v_inner_1474_);
v___x_1479_ = lean_unsigned_to_nat(1u);
v___x_1480_ = lean_nat_add(v___x_1478_, v___x_1479_);
lean_dec(v___x_1478_);
v___x_1481_ = lp_lean_x2dftml_LeanFtml_bibWalk(v_inner_1474_, v___x_1477_, v_doc_1475_, v_toks_1476_, v___x_1480_);
v_snd_1482_ = lean_ctor_get(v___x_1481_, 1);
v_fst_1483_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1485_ = v___x_1481_;
v_isShared_1486_ = v_isSharedCheck_1521_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_snd_1482_);
lean_inc(v_fst_1483_);
lean_dec(v___x_1481_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1521_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v_fst_1487_; lean_object* v_snd_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1520_; 
v_fst_1487_ = lean_ctor_get(v_snd_1482_, 0);
v_snd_1488_ = lean_ctor_get(v_snd_1482_, 1);
v_isSharedCheck_1520_ = !lean_is_exclusive(v_snd_1482_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1490_ = v_snd_1482_;
v_isShared_1491_ = v_isSharedCheck_1520_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_snd_1488_);
lean_inc(v_fst_1487_);
lean_dec(v_snd_1482_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1520_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1492_; lean_object* v_startPh_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1499_; 
v___x_1492_ = l_List_lengthTR___redArg(v_fst_1487_);
v_startPh_1493_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1492_);
v___x_1494_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimNl___closed__0));
v___x_1495_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6, &lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__6);
v___x_1496_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1, &lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_footnoteblockProcess___closed__1);
v___x_1497_ = lp_lean_x2dftml_LeanFtml_titleOpt(v_g1_1473_);
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 1, v___x_1497_);
lean_ctor_set(v___x_1490_, 0, v___x_1496_);
v___x_1499_ = v___x_1490_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1496_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v___x_1497_);
v___x_1499_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v_t2_1505_; lean_object* v___x_1506_; lean_object* v_endPh_1507_; lean_object* v___x_1508_; lean_object* v_t3_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1516_; 
v___x_1500_ = lean_box(0);
v___x_1501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1499_);
lean_ctor_set(v___x_1501_, 1, v___x_1500_);
v___x_1502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1495_);
lean_ctor_set(v___x_1502_, 1, v___x_1501_);
v___x_1503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1494_);
lean_ctor_set(v___x_1503_, 1, v___x_1502_);
v___x_1504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
lean_ctor_set(v___x_1504_, 1, v___x_1500_);
v_t2_1505_ = l_List_appendTR___redArg(v_fst_1487_, v___x_1504_);
v___x_1506_ = l_List_lengthTR___redArg(v_t2_1505_);
v_endPh_1507_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1506_);
v___x_1508_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__1, &lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bibliographyProcess___closed__1);
v_t3_1509_ = l_List_appendTR___redArg(v_t2_1505_, v___x_1508_);
v___x_1510_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_footnoteblockInside_go___closed__11));
v___x_1511_ = l_List_appendTR___redArg(v___x_1510_, v_startPh_1493_);
v___x_1512_ = l_List_appendTR___redArg(v___x_1511_, v_fst_1483_);
v___x_1513_ = l_List_appendTR___redArg(v___x_1512_, v_endPh_1507_);
v___x_1514_ = l_List_appendTR___redArg(v___x_1513_, v___x_1510_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 1, v_snd_1488_);
lean_ctor_set(v___x_1485_, 0, v_t3_1509_);
v___x_1516_ = v___x_1485_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_t3_1509_);
lean_ctor_set(v_reuseFailAlloc_1518_, 1, v_snd_1488_);
v___x_1516_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
lean_object* v___x_1517_; 
v___x_1517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1514_);
lean_ctor_set(v___x_1517_, 1, v___x_1516_);
return v___x_1517_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyProcess___boxed(lean_object* v_g1_1522_, lean_object* v_inner_1523_, lean_object* v_doc_1524_, lean_object* v_toks_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = lp_lean_x2dftml_LeanFtml_bibliographyProcess(v_g1_1522_, v_inner_1523_, v_doc_1524_, v_toks_1525_);
lean_dec(v_g1_1522_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibliographyRule(lean_object* v_st_1527_){
_start:
{
lean_object* v_work_1528_; lean_object* v_tokens_1529_; lean_object* v_doc_1530_; uint8_t v_fatal_1531_; lean_object* v_continuedDivLeads_1532_; lean_object* v_src_1533_; lean_object* v___x_1534_; 
v_work_1528_ = lean_ctor_get(v_st_1527_, 0);
v_tokens_1529_ = lean_ctor_get(v_st_1527_, 1);
v_doc_1530_ = lean_ctor_get(v_st_1527_, 2);
v_fatal_1531_ = lean_ctor_get_uint8(v_st_1527_, sizeof(void*)*4);
v_continuedDivLeads_1532_ = lean_ctor_get(v_st_1527_, 3);
lean_inc(v_work_1528_);
v_src_1533_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_1528_);
lean_inc(v_src_1533_);
v___x_1534_ = lp_lean_x2dftml_LeanFtml_bibliographyFind(v_src_1533_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_dec(v_src_1533_);
return v_st_1527_;
}
else
{
lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1558_; 
lean_inc(v_continuedDivLeads_1532_);
lean_inc_ref(v_doc_1530_);
lean_inc(v_tokens_1529_);
v_isSharedCheck_1558_ = !lean_is_exclusive(v_st_1527_);
if (v_isSharedCheck_1558_ == 0)
{
lean_object* v_unused_1559_; lean_object* v_unused_1560_; lean_object* v_unused_1561_; lean_object* v_unused_1562_; 
v_unused_1559_ = lean_ctor_get(v_st_1527_, 3);
lean_dec(v_unused_1559_);
v_unused_1560_ = lean_ctor_get(v_st_1527_, 2);
lean_dec(v_unused_1560_);
v_unused_1561_ = lean_ctor_get(v_st_1527_, 1);
lean_dec(v_unused_1561_);
v_unused_1562_ = lean_ctor_get(v_st_1527_, 0);
lean_dec(v_unused_1562_);
v___x_1536_ = v_st_1527_;
v_isShared_1537_ = v_isSharedCheck_1558_;
goto v_resetjp_1535_;
}
else
{
lean_dec(v_st_1527_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1558_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v_val_1538_; lean_object* v_snd_1539_; lean_object* v_snd_1540_; lean_object* v_fst_1541_; lean_object* v_fst_1542_; lean_object* v_fst_1543_; lean_object* v_snd_1544_; lean_object* v___x_1545_; lean_object* v_snd_1546_; lean_object* v_fst_1547_; lean_object* v_fst_1548_; lean_object* v_snd_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1556_; 
v_val_1538_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_val_1538_);
lean_dec_ref_known(v___x_1534_, 1);
v_snd_1539_ = lean_ctor_get(v_val_1538_, 1);
lean_inc(v_snd_1539_);
v_snd_1540_ = lean_ctor_get(v_snd_1539_, 1);
lean_inc(v_snd_1540_);
v_fst_1541_ = lean_ctor_get(v_val_1538_, 0);
lean_inc(v_fst_1541_);
lean_dec(v_val_1538_);
v_fst_1542_ = lean_ctor_get(v_snd_1539_, 0);
lean_inc(v_fst_1542_);
lean_dec(v_snd_1539_);
v_fst_1543_ = lean_ctor_get(v_snd_1540_, 0);
lean_inc(v_fst_1543_);
v_snd_1544_ = lean_ctor_get(v_snd_1540_, 1);
lean_inc(v_snd_1544_);
lean_dec(v_snd_1540_);
v___x_1545_ = lp_lean_x2dftml_LeanFtml_bibliographyProcess(v_fst_1542_, v_fst_1543_, v_doc_1530_, v_tokens_1529_);
lean_dec(v_fst_1542_);
v_snd_1546_ = lean_ctor_get(v___x_1545_, 1);
lean_inc(v_snd_1546_);
v_fst_1547_ = lean_ctor_get(v___x_1545_, 0);
lean_inc(v_fst_1547_);
lean_dec_ref(v___x_1545_);
v_fst_1548_ = lean_ctor_get(v_snd_1546_, 0);
lean_inc(v_fst_1548_);
v_snd_1549_ = lean_ctor_get(v_snd_1546_, 1);
lean_inc(v_snd_1549_);
lean_dec(v_snd_1546_);
v___x_1550_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_src_1533_);
v___x_1551_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_1533_, v_src_1533_, v_fst_1541_, v___x_1550_);
lean_dec(v_src_1533_);
v___x_1552_ = l_List_appendTR___redArg(v___x_1551_, v_fst_1547_);
v___x_1553_ = l_List_appendTR___redArg(v___x_1552_, v_snd_1544_);
v___x_1554_ = lp_lean_x2dftml_LeanFtml_parseBytes(v___x_1553_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 2, v_snd_1549_);
lean_ctor_set(v___x_1536_, 1, v_fst_1548_);
lean_ctor_set(v___x_1536_, 0, v___x_1554_);
v___x_1556_ = v___x_1536_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1554_);
lean_ctor_set(v_reuseFailAlloc_1557_, 1, v_fst_1548_);
lean_ctor_set(v_reuseFailAlloc_1557_, 2, v_snd_1549_);
lean_ctor_set(v_reuseFailAlloc_1557_, 3, v_continuedDivLeads_1532_);
lean_ctor_set_uint8(v_reuseFailAlloc_1557_, sizeof(void*)*4, v_fatal_1531_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__1(void){
_start:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1564_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__0));
v___x_1565_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1564_);
return v___x_1565_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__3(void){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1567_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__2));
v___x_1568_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1567_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteMatchAt(lean_object* v_src_1569_){
_start:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1570_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__1);
v___x_1571_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1570_, v_src_1569_);
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_box(0);
return v___x_1572_;
}
else
{
lean_object* v_val_1573_; 
v_val_1573_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_val_1573_);
lean_dec_ref_known(v___x_1571_, 1);
if (lean_obj_tag(v_val_1573_) == 0)
{
lean_object* v___x_1574_; 
v___x_1574_ = lean_box(0);
return v___x_1574_;
}
else
{
lean_object* v_head_1575_; lean_object* v_tail_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1602_; 
v_head_1575_ = lean_ctor_get(v_val_1573_, 0);
v_tail_1576_ = lean_ctor_get(v_val_1573_, 1);
v_isSharedCheck_1602_ = !lean_is_exclusive(v_val_1573_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1578_ = v_val_1573_;
v_isShared_1579_ = v_isSharedCheck_1602_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_tail_1576_);
lean_inc(v_head_1575_);
lean_dec(v_val_1573_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1602_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
uint8_t v___x_1580_; 
v___x_1580_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_1575_);
lean_dec(v_head_1575_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; 
lean_del_object(v___x_1578_);
lean_dec(v_tail_1576_);
v___x_1581_ = lean_box(0);
return v___x_1581_;
}
else
{
lean_object* v___x_1582_; lean_object* v_label_1583_; uint8_t v___x_1584_; 
v___x_1582_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_attrGroupB___closed__2));
lean_inc(v_tail_1576_);
v_label_1583_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bibDefMatch_spec__0(v_tail_1576_, v_tail_1576_, v___x_1582_);
v___x_1584_ = l_List_isEmpty___redArg(v_label_1583_);
if (v___x_1584_ == 0)
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1585_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__3, &lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bibciteMatchAt___closed__3);
v___x_1586_ = l_List_lengthTR___redArg(v_label_1583_);
v___x_1587_ = l_List_drop___redArg(v___x_1586_, v_tail_1576_);
lean_dec(v_tail_1576_);
v___x_1588_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1585_, v___x_1587_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v___x_1589_; 
lean_dec(v_label_1583_);
lean_del_object(v___x_1578_);
v___x_1589_ = lean_box(0);
return v___x_1589_;
}
else
{
lean_object* v_val_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1600_; 
v_val_1590_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1592_ = v___x_1588_;
v_isShared_1593_ = v_isSharedCheck_1600_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_val_1590_);
lean_dec(v___x_1588_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1600_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1579_ == 0)
{
lean_ctor_set_tag(v___x_1578_, 0);
lean_ctor_set(v___x_1578_, 1, v_val_1590_);
lean_ctor_set(v___x_1578_, 0, v_label_1583_);
v___x_1595_ = v___x_1578_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_label_1583_);
lean_ctor_set(v_reuseFailAlloc_1599_, 1, v_val_1590_);
v___x_1595_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
lean_object* v___x_1597_; 
if (v_isShared_1593_ == 0)
{
lean_ctor_set(v___x_1592_, 0, v___x_1595_);
v___x_1597_ = v___x_1592_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v___x_1595_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
}
else
{
lean_object* v___x_1601_; 
lean_dec(v_label_1583_);
lean_del_object(v___x_1578_);
lean_dec(v_tail_1576_);
v___x_1601_ = lean_box(0);
return v___x_1601_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteScan(lean_object* v_src_1604_, lean_object* v_toks_1605_, lean_object* v_x_1606_){
_start:
{
lean_object* v_zero_1610_; uint8_t v_isZero_1611_; 
v_zero_1610_ = lean_unsigned_to_nat(0u);
v_isZero_1611_ = lean_nat_dec_eq(v_x_1606_, v_zero_1610_);
if (v_isZero_1611_ == 1)
{
lean_dec(v_src_1604_);
goto v___jp_1607_;
}
else
{
if (lean_obj_tag(v_src_1604_) == 0)
{
goto v___jp_1607_;
}
else
{
lean_object* v_head_1612_; lean_object* v_tail_1613_; lean_object* v_one_1614_; lean_object* v_n_1615_; lean_object* v___x_1616_; 
v_head_1612_ = lean_ctor_get(v_src_1604_, 0);
lean_inc(v_head_1612_);
v_tail_1613_ = lean_ctor_get(v_src_1604_, 1);
lean_inc(v_tail_1613_);
v_one_1614_ = lean_unsigned_to_nat(1u);
v_n_1615_ = lean_nat_sub(v_x_1606_, v_one_1614_);
v___x_1616_ = lp_lean_x2dftml_LeanFtml_bibciteMatchAt(v_src_1604_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_object* v___x_1617_; lean_object* v_fst_1618_; lean_object* v_snd_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1627_; 
v___x_1617_ = lp_lean_x2dftml_LeanFtml_bibciteScan(v_tail_1613_, v_toks_1605_, v_n_1615_);
lean_dec(v_n_1615_);
v_fst_1618_ = lean_ctor_get(v___x_1617_, 0);
v_snd_1619_ = lean_ctor_get(v___x_1617_, 1);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1621_ = v___x_1617_;
v_isShared_1622_ = v_isSharedCheck_1627_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_snd_1619_);
lean_inc(v_fst_1618_);
lean_dec(v___x_1617_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1627_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1623_; lean_object* v___x_1625_; 
v___x_1623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1623_, 0, v_head_1612_);
lean_ctor_set(v___x_1623_, 1, v_fst_1618_);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 0, v___x_1623_);
v___x_1625_ = v___x_1621_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1623_);
lean_ctor_set(v_reuseFailAlloc_1626_, 1, v_snd_1619_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
else
{
lean_object* v_val_1628_; lean_object* v_fst_1629_; lean_object* v_snd_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1658_; 
lean_dec(v_tail_1613_);
lean_dec(v_head_1612_);
v_val_1628_ = lean_ctor_get(v___x_1616_, 0);
lean_inc(v_val_1628_);
lean_dec_ref_known(v___x_1616_, 1);
v_fst_1629_ = lean_ctor_get(v_val_1628_, 0);
v_snd_1630_ = lean_ctor_get(v_val_1628_, 1);
v_isSharedCheck_1658_ = !lean_is_exclusive(v_val_1628_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1632_ = v_val_1628_;
v_isShared_1633_ = v_isSharedCheck_1658_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_snd_1630_);
lean_inc(v_fst_1629_);
lean_dec(v_val_1628_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1658_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1638_; 
v___x_1634_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibciteScan___closed__0));
v___x_1635_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2, &lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bibitemProcess___closed__2);
v___x_1636_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_1629_);
if (v_isShared_1633_ == 0)
{
lean_ctor_set(v___x_1632_, 1, v___x_1636_);
lean_ctor_set(v___x_1632_, 0, v___x_1635_);
v___x_1638_ = v___x_1632_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v___x_1635_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v___x_1636_);
v___x_1638_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v_t1_1643_; lean_object* v___x_1644_; lean_object* v_fst_1645_; lean_object* v_snd_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1656_; 
v___x_1639_ = lean_box(0);
v___x_1640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1638_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
v___x_1641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1634_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1641_);
lean_ctor_set(v___x_1642_, 1, v___x_1639_);
lean_inc(v_toks_1605_);
v_t1_1643_ = l_List_appendTR___redArg(v_toks_1605_, v___x_1642_);
v___x_1644_ = lp_lean_x2dftml_LeanFtml_bibciteScan(v_snd_1630_, v_t1_1643_, v_n_1615_);
lean_dec(v_n_1615_);
v_fst_1645_ = lean_ctor_get(v___x_1644_, 0);
v_snd_1646_ = lean_ctor_get(v___x_1644_, 1);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1648_ = v___x_1644_;
v_isShared_1649_ = v_isSharedCheck_1656_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_snd_1646_);
lean_inc(v_fst_1645_);
lean_dec(v___x_1644_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1656_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1654_; 
v___x_1650_ = l_List_lengthTR___redArg(v_toks_1605_);
lean_dec(v_toks_1605_);
v___x_1651_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1650_);
v___x_1652_ = l_List_appendTR___redArg(v___x_1651_, v_fst_1645_);
if (v_isShared_1649_ == 0)
{
lean_ctor_set(v___x_1648_, 0, v___x_1652_);
v___x_1654_ = v___x_1648_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v___x_1652_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v_snd_1646_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
}
}
}
v___jp_1607_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = lean_box(0);
v___x_1609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
lean_ctor_set(v___x_1609_, 1, v_toks_1605_);
return v___x_1609_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteScan___boxed(lean_object* v_src_1659_, lean_object* v_toks_1660_, lean_object* v_x_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = lp_lean_x2dftml_LeanFtml_bibciteScan(v_src_1659_, v_toks_1660_, v_x_1661_);
lean_dec(v_x_1661_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteRule___lam__0(lean_object* v_src_1663_, lean_object* v_toks_1664_){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1665_ = l_List_lengthTR___redArg(v_src_1663_);
v___x_1666_ = lean_unsigned_to_nat(1u);
v___x_1667_ = lean_nat_add(v___x_1665_, v___x_1666_);
lean_dec(v___x_1665_);
v___x_1668_ = lp_lean_x2dftml_LeanFtml_bibciteScan(v_src_1663_, v_toks_1664_, v___x_1667_);
lean_dec(v___x_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bibciteRule(lean_object* v_st_1670_){
_start:
{
lean_object* v___f_1671_; lean_object* v___x_1672_; 
v___f_1671_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bibciteRule___closed__0));
v___x_1672_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1670_, v___f_1671_);
return v___x_1672_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__1(void){
_start:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1675_ = ((lean_object*)(lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__0));
v___x_1676_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2, &lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__2);
v___x_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
lean_ctor_set(v___x_1677_, 1, v___x_1675_);
return v___x_1677_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__2(void){
_start:
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1678_ = lean_box(0);
v___x_1679_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__1, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__1_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__1);
v___x_1680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1679_);
lean_ctor_set(v___x_1680_, 1, v___x_1678_);
return v___x_1680_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3(void){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1681_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__2, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__2_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__2);
v___x_1682_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isEmptyRawTokNotes___closed__0));
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1682_);
lean_ctor_set(v___x_1683_, 1, v___x_1681_);
return v___x_1683_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__4(void){
_start:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1684_ = lean_box(0);
v___x_1685_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3);
v___x_1686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
lean_ctor_set(v___x_1686_, 1, v___x_1684_);
return v___x_1686_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__5(void){
_start:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1687_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__4, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__4_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__4);
v___x_1688_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__3);
v___x_1689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
lean_ctor_set(v___x_1689_, 1, v___x_1687_);
return v___x_1689_;
}
}
static lean_object* _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2(void){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_obj_once(&lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__5, &lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__5_once, _init_lp_lean_x2dftml___private_LeanFtml_NotesRules_0__LeanFtml_r9hEmptyRaw2___closed__5);
return v___x_1690_;
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
