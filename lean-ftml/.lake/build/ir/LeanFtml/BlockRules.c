// Lean compiler output
// Module: LeanFtml.BlockRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules public import LeanFtml.NextRules public import LeanFtml.NotesRules
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
lean_object* l_List_head_x3f___redArg(lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_occurrences(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_countRun(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_parseBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_optValBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_optValBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_optValBytes___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optValBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optValBytes___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRunLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(62) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRunLength___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRunLength___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqRunLength___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqRunLength___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqRunLength___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRunLength(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRunLength___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_linesOf_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_linesOf_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_linesOf_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_linesOf_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_linesOf_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_linesOf_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_linesOf_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_linesOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bqLine_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bqLine_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqLine(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_bqPush___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Blockquote"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqPush___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_bqPush___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqPush___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqPush___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_bqPush___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqPush___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqPush___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqPush___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqPush___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_bqPush___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "level"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqPush___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqPush___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqPush___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__9;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqPush___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqPush___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_bqPush___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_bqPush___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqPush___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqPush___closed__11_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqPush(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_bqPop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_bqPop___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_bqPop___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqPop___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqPop___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqPop___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqPop___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_bqPop___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_bqPop___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqPop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqPop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqDrain(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqEmit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_blockquoteProcess_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_blockquoteProcess_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_blockquoteProcess_spec__0(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_blockquoteProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_blockquoteProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_blockquoteProcess___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_blockquoteProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_linesOf_go___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_blockquoteProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_blockquoteProcess___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteProcess(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_blockquoteRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_blockquoteRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_blockquoteRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_blockquoteRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingMatchLine(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Heading"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingProcess___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingProcess___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingProcess___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingProcess___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingProcess___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingProcess___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingProcess___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "start-notoc"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingProcess___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingProcess___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingProcess___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingProcess___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "toc"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingProcess___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingProcess___closed__7_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingProcess(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingScan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tocTail_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocTail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocTail___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocTail___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocTail___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocTail___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocTail(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__0;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[["};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "f>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "f<"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__8;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocItems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Toc"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocItems___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocItems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "item_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocItems___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocItems___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocItems___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocItems___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocItems___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "count"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocItems___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocItems___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocItems___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "item_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocItems___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocItems___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocItems___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocItems___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocItems___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocItems___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocItems___closed__12;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocItems(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tocProcess_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocProcess___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocProcess___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocProcess___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocProcess___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocProcess___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocProcess___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "align"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocProcess___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocProcess___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocProcess___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocProcess___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocProcess___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocProcess___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocProcess___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__12;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tocProcess___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocProcess___closed__13_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocProcess(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocScan(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_tocRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_tocRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_tocRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optValBytes(lean_object* v_x_3_){
_start:
{
switch(lean_obj_tag(v_x_3_))
{
case 0:
{
lean_object* v_a_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v_a_4_ = lean_ctor_get(v_x_3_, 0);
v___x_5_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_optValBytes___closed__0));
v___x_6_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_a_4_, v___x_5_);
return v___x_6_;
}
case 6:
{
lean_object* v_a_7_; 
v_a_7_ = lean_ctor_get(v_x_3_, 0);
lean_inc(v_a_7_);
return v_a_7_;
}
default: 
{
lean_object* v___x_8_; 
v___x_8_ = lean_box(0);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optValBytes___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = lp_lean_x2dftml_LeanFtml_optValBytes(v_x_9_);
lean_dec(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRunLength(lean_object* v_bs_15_, lean_object* v_x_16_){
_start:
{
lean_object* v_zero_17_; uint8_t v_isZero_18_; 
v_zero_17_ = lean_unsigned_to_nat(0u);
v_isZero_18_ = lean_nat_dec_eq(v_x_16_, v_zero_17_);
if (v_isZero_18_ == 1)
{
lean_object* v___x_19_; 
v___x_19_ = lean_box(0);
return v___x_19_;
}
else
{
if (lean_obj_tag(v_bs_15_) == 0)
{
lean_object* v___x_20_; 
v___x_20_ = lean_box(0);
return v___x_20_;
}
else
{
lean_object* v_head_21_; lean_object* v_tail_22_; lean_object* v_one_23_; lean_object* v_n_24_; lean_object* v___x_25_; uint8_t v___x_26_; 
v_head_21_ = lean_ctor_get(v_bs_15_, 0);
v_tail_22_ = lean_ctor_get(v_bs_15_, 1);
v_one_23_ = lean_unsigned_to_nat(1u);
v_n_24_ = lean_nat_sub(v_x_16_, v_one_23_);
v___x_25_ = lean_unsigned_to_nat(10u);
v___x_26_ = lean_nat_dec_eq(v_head_21_, v___x_25_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; 
v___x_27_ = lp_lean_x2dftml_LeanFtml_bqRunLength(v_tail_22_, v_n_24_);
lean_dec(v_n_24_);
if (lean_obj_tag(v___x_27_) == 0)
{
return v___x_27_;
}
else
{
lean_object* v_val_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_36_; 
v_val_28_ = lean_ctor_get(v___x_27_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_36_ == 0)
{
v___x_30_ = v___x_27_;
v_isShared_31_ = v_isSharedCheck_36_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_val_28_);
lean_dec(v___x_27_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_36_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_32_; lean_object* v___x_34_; 
v___x_32_ = lean_nat_add(v_val_28_, v_one_23_);
lean_dec(v_val_28_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 0, v___x_32_);
v___x_34_ = v___x_30_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v___x_32_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
}
else
{
lean_object* v___x_37_; lean_object* v___x_38_; uint8_t v___x_39_; 
v___x_37_ = l_List_head_x3f___redArg(v_tail_22_);
v___x_38_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRunLength___closed__0));
v___x_39_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_37_, v___x_38_);
lean_dec(v___x_37_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; 
lean_dec(v_n_24_);
v___x_40_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqRunLength___closed__1));
return v___x_40_;
}
else
{
lean_object* v___x_41_; 
v___x_41_ = lp_lean_x2dftml_LeanFtml_bqRunLength(v_tail_22_, v_n_24_);
lean_dec(v_n_24_);
if (lean_obj_tag(v___x_41_) == 0)
{
return v___x_41_;
}
else
{
lean_object* v_val_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_50_; 
v_val_42_ = lean_ctor_get(v___x_41_, 0);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_41_);
if (v_isSharedCheck_50_ == 0)
{
v___x_44_ = v___x_41_;
v_isShared_45_ = v_isSharedCheck_50_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_val_42_);
lean_dec(v___x_41_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_50_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_46_ = lean_nat_add(v_val_42_, v_one_23_);
lean_dec(v_val_42_);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v___x_46_);
v___x_48_ = v___x_44_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqRunLength___boxed(lean_object* v_bs_51_, lean_object* v_x_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = lp_lean_x2dftml_LeanFtml_bqRunLength(v_bs_51_, v_x_52_);
lean_dec(v_x_52_);
lean_dec(v_bs_51_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteMatchAt(lean_object* v_src_54_){
_start:
{
if (lean_obj_tag(v_src_54_) == 1)
{
lean_object* v_head_55_; lean_object* v_tail_56_; lean_object* v___x_57_; uint8_t v___x_58_; 
v_head_55_ = lean_ctor_get(v_src_54_, 0);
v_tail_56_ = lean_ctor_get(v_src_54_, 1);
lean_inc(v_tail_56_);
v___x_57_ = lean_unsigned_to_nat(10u);
v___x_58_ = lean_nat_dec_eq(v_head_55_, v___x_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; 
lean_dec(v_tail_56_);
lean_dec_ref_known(v_src_54_, 2);
v___x_59_ = lean_box(0);
return v___x_59_;
}
else
{
if (lean_obj_tag(v_tail_56_) == 1)
{
lean_object* v_head_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_88_; 
v_head_60_ = lean_ctor_get(v_tail_56_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v_tail_56_);
if (v_isSharedCheck_88_ == 0)
{
lean_object* v_unused_89_; 
v_unused_89_ = lean_ctor_get(v_tail_56_, 1);
lean_dec(v_unused_89_);
v___x_62_ = v_tail_56_;
v_isShared_63_ = v_isSharedCheck_88_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_head_60_);
lean_dec(v_tail_56_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_88_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_64_ = lean_unsigned_to_nat(62u);
v___x_65_ = lean_nat_dec_eq(v_head_60_, v___x_64_);
lean_dec(v_head_60_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; 
lean_del_object(v___x_62_);
lean_dec_ref_known(v_src_54_, 2);
v___x_66_ = lean_box(0);
return v___x_66_;
}
else
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_67_ = lean_unsigned_to_nat(1u);
v___x_68_ = l_List_drop___redArg(v___x_67_, v_src_54_);
v___x_69_ = l_List_lengthTR___redArg(v_src_54_);
v___x_70_ = lean_nat_add(v___x_69_, v___x_67_);
lean_dec(v___x_69_);
v___x_71_ = lp_lean_x2dftml_LeanFtml_bqRunLength(v___x_68_, v___x_70_);
lean_dec(v___x_70_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v___x_72_; 
lean_dec(v___x_68_);
lean_del_object(v___x_62_);
lean_dec_ref_known(v_src_54_, 2);
v___x_72_ = lean_box(0);
return v___x_72_;
}
else
{
lean_object* v_val_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_87_; 
v_val_73_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_87_ == 0)
{
v___x_75_ = v___x_71_;
v_isShared_76_ = v_isSharedCheck_87_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_val_73_);
lean_dec(v___x_71_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_87_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_82_; 
v___x_77_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_optValBytes___closed__0));
lean_inc(v_val_73_);
lean_inc(v___x_68_);
v___x_78_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_68_, v___x_68_, v_val_73_, v___x_77_);
lean_dec(v___x_68_);
v___x_79_ = lean_nat_add(v___x_67_, v_val_73_);
lean_dec(v_val_73_);
v___x_80_ = l_List_drop___redArg(v___x_79_, v_src_54_);
lean_dec_ref_known(v_src_54_, 2);
if (v_isShared_63_ == 0)
{
lean_ctor_set_tag(v___x_62_, 0);
lean_ctor_set(v___x_62_, 1, v___x_80_);
lean_ctor_set(v___x_62_, 0, v___x_78_);
v___x_82_ = v___x_62_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_78_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v___x_80_);
v___x_82_ = v_reuseFailAlloc_86_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
lean_object* v___x_84_; 
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_82_);
v___x_84_ = v___x_75_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_82_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_90_; 
lean_dec(v_tail_56_);
lean_dec_ref_known(v_src_54_, 2);
v___x_90_ = lean_box(0);
return v___x_90_;
}
}
}
else
{
lean_object* v___x_91_; 
lean_dec(v_src_54_);
v___x_91_ = lean_box(0);
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_linesOf_go_spec__0(lean_object* v_l_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
if (lean_obj_tag(v_a_93_) == 0)
{
lean_dec_ref(v_a_94_);
lean_inc(v_l_92_);
return v_l_92_;
}
else
{
lean_object* v_head_95_; lean_object* v_tail_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v_head_95_ = lean_ctor_get(v_a_93_, 0);
lean_inc(v_head_95_);
v_tail_96_ = lean_ctor_get(v_a_93_, 1);
lean_inc(v_tail_96_);
lean_dec_ref_known(v_a_93_, 2);
v___x_97_ = lean_unsigned_to_nat(10u);
v___x_98_ = lean_nat_dec_eq(v_head_95_, v___x_97_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; 
v___x_99_ = lean_array_push(v_a_94_, v_head_95_);
v_a_93_ = v_tail_96_;
v_a_94_ = v___x_99_;
goto _start;
}
else
{
lean_object* v___x_101_; 
lean_dec(v_tail_96_);
lean_dec(v_head_95_);
v___x_101_ = lean_array_to_list(v_a_94_);
return v___x_101_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_linesOf_go_spec__0___boxed(lean_object* v_l_102_, lean_object* v_a_103_, lean_object* v_a_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_linesOf_go_spec__0(v_l_102_, v_a_103_, v_a_104_);
lean_dec(v_l_102_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_linesOf_go(lean_object* v_a_109_, lean_object* v_a_110_){
_start:
{
lean_object* v_zero_111_; uint8_t v_isZero_112_; 
v_zero_111_ = lean_unsigned_to_nat(0u);
v_isZero_112_ = lean_nat_dec_eq(v_a_110_, v_zero_111_);
if (v_isZero_112_ == 1)
{
lean_object* v___x_113_; 
lean_dec(v_a_109_);
v___x_113_ = lean_box(0);
return v___x_113_;
}
else
{
if (lean_obj_tag(v_a_109_) == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_box(0);
return v___x_114_;
}
else
{
lean_object* v___x_115_; lean_object* v_line_116_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_115_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_optValBytes___closed__0));
lean_inc(v_a_109_);
v_line_116_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_linesOf_go_spec__0(v_a_109_, v_a_109_, v___x_115_);
v___x_120_ = l_List_lengthTR___redArg(v_line_116_);
v___x_121_ = l_List_drop___redArg(v___x_120_, v_a_109_);
lean_dec(v_a_109_);
if (lean_obj_tag(v___x_121_) == 1)
{
lean_object* v_head_122_; lean_object* v_tail_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_137_; 
v_head_122_ = lean_ctor_get(v___x_121_, 0);
v_tail_123_ = lean_ctor_get(v___x_121_, 1);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_137_ == 0)
{
v___x_125_ = v___x_121_;
v_isShared_126_ = v_isSharedCheck_137_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_tail_123_);
lean_inc(v_head_122_);
lean_dec(v___x_121_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_137_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_127_ = lean_unsigned_to_nat(10u);
v___x_128_ = lean_nat_dec_eq(v_head_122_, v___x_127_);
lean_dec(v_head_122_);
if (v___x_128_ == 0)
{
lean_del_object(v___x_125_);
lean_dec(v_tail_123_);
goto v___jp_117_;
}
else
{
lean_object* v_one_129_; lean_object* v_n_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_135_; 
v_one_129_ = lean_unsigned_to_nat(1u);
v_n_130_ = lean_nat_sub(v_a_110_, v_one_129_);
v___x_131_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_linesOf_go___closed__0));
v___x_132_ = l_List_appendTR___redArg(v_line_116_, v___x_131_);
v___x_133_ = lp_lean_x2dftml_LeanFtml_linesOf_go(v_tail_123_, v_n_130_);
lean_dec(v_n_130_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v___x_133_);
lean_ctor_set(v___x_125_, 0, v___x_132_);
v___x_135_ = v___x_125_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v___x_132_);
lean_ctor_set(v_reuseFailAlloc_136_, 1, v___x_133_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
else
{
lean_dec(v___x_121_);
goto v___jp_117_;
}
v___jp_117_:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_box(0);
v___x_119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_119_, 0, v_line_116_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
return v___x_119_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_linesOf_go___boxed(lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = lp_lean_x2dftml_LeanFtml_linesOf_go(v_a_138_, v_a_139_);
lean_dec(v_a_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_linesOf(lean_object* v_bs_141_){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_142_ = l_List_lengthTR___redArg(v_bs_141_);
v___x_143_ = lean_unsigned_to_nat(1u);
v___x_144_ = lean_nat_add(v___x_142_, v___x_143_);
lean_dec(v___x_142_);
v___x_145_ = lp_lean_x2dftml_LeanFtml_linesOf_go(v_bs_141_, v___x_144_);
lean_dec(v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bqLine_spec__0(lean_object* v_l_146_, lean_object* v_a_147_, lean_object* v_a_148_){
_start:
{
if (lean_obj_tag(v_a_147_) == 0)
{
lean_dec_ref(v_a_148_);
lean_inc(v_l_146_);
return v_l_146_;
}
else
{
lean_object* v_head_149_; lean_object* v_tail_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_head_149_ = lean_ctor_get(v_a_147_, 0);
lean_inc(v_head_149_);
v_tail_150_ = lean_ctor_get(v_a_147_, 1);
lean_inc(v_tail_150_);
lean_dec_ref_known(v_a_147_, 2);
v___x_151_ = lean_unsigned_to_nat(62u);
v___x_152_ = lean_nat_dec_eq(v_head_149_, v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
lean_dec(v_tail_150_);
lean_dec(v_head_149_);
v___x_153_ = lean_array_to_list(v_a_148_);
return v___x_153_;
}
else
{
lean_object* v___x_154_; 
v___x_154_ = lean_array_push(v_a_148_, v_head_149_);
v_a_147_ = v_tail_150_;
v_a_148_ = v___x_154_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bqLine_spec__0___boxed(lean_object* v_l_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bqLine_spec__0(v_l_156_, v_a_157_, v_a_158_);
lean_dec(v_l_156_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqLine(lean_object* v_line_160_){
_start:
{
lean_object* v___x_161_; lean_object* v_markers_162_; uint8_t v___x_163_; 
v___x_161_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_optValBytes___closed__0));
lean_inc(v_line_160_);
v_markers_162_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_bqLine_spec__0(v_line_160_, v_line_160_, v___x_161_);
v___x_163_ = l_List_isEmpty___redArg(v_markers_162_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = l_List_lengthTR___redArg(v_markers_162_);
lean_dec(v_markers_162_);
lean_inc(v___x_164_);
v___x_165_ = l_List_drop___redArg(v___x_164_, v_line_160_);
lean_dec(v_line_160_);
if (lean_obj_tag(v___x_165_) == 1)
{
lean_object* v_head_166_; lean_object* v_tail_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_178_; 
v_head_166_ = lean_ctor_get(v___x_165_, 0);
v_tail_167_ = lean_ctor_get(v___x_165_, 1);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_178_ == 0)
{
v___x_169_ = v___x_165_;
v_isShared_170_ = v_isSharedCheck_178_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_tail_167_);
lean_inc(v_head_166_);
lean_dec(v___x_165_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_178_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_unsigned_to_nat(32u);
v___x_172_ = lean_nat_dec_eq(v_head_166_, v___x_171_);
lean_dec(v_head_166_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
lean_del_object(v___x_169_);
lean_dec(v_tail_167_);
lean_dec(v___x_164_);
v___x_173_ = lean_box(0);
return v___x_173_;
}
else
{
lean_object* v___x_175_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set_tag(v___x_169_, 0);
lean_ctor_set(v___x_169_, 0, v___x_164_);
v___x_175_ = v___x_169_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v_tail_167_);
v___x_175_ = v_reuseFailAlloc_177_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_176_; 
v___x_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
}
}
}
else
{
lean_object* v___x_179_; 
lean_dec(v___x_165_);
lean_dec(v___x_164_);
v___x_179_ = lean_box(0);
return v___x_179_;
}
}
else
{
lean_object* v___x_180_; 
lean_dec(v_markers_162_);
lean_dec(v_line_160_);
v___x_180_ = lean_box(0);
return v___x_180_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__2(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__1));
v___x_184_ = l_String_toListImpl(v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__4(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__3));
v___x_187_ = l_String_toListImpl(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__5(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__4, &lp_lean_x2dftml_LeanFtml_bqPush___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__4);
v___x_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
return v___x_189_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__6(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_190_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__5, &lp_lean_x2dftml_LeanFtml_bqPush___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__5);
v___x_191_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__2, &lp_lean_x2dftml_LeanFtml_bqPush___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__2);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v___x_190_);
return v___x_192_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__8(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__7));
v___x_195_ = l_String_toListImpl(v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__9(void){
_start:
{
lean_object* v_one_196_; lean_object* v___x_197_; 
v_one_196_ = lean_unsigned_to_nat(1u);
v___x_197_ = lean_nat_to_int(v_one_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqPush(lean_object* v_level_204_, lean_object* v_stack_205_, lean_object* v_toks_206_, lean_object* v_acc_207_, lean_object* v_x_208_){
_start:
{
lean_object* v_zero_209_; uint8_t v_isZero_210_; 
v_zero_209_ = lean_unsigned_to_nat(0u);
v_isZero_210_ = lean_nat_dec_eq(v_x_208_, v_zero_209_);
if (v_isZero_210_ == 1)
{
lean_object* v___x_211_; lean_object* v___x_212_; 
lean_dec(v_x_208_);
lean_dec(v_level_204_);
v___x_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_211_, 0, v_toks_206_);
lean_ctor_set(v___x_211_, 1, v_acc_207_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v_stack_205_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
return v___x_212_;
}
else
{
uint8_t v___x_213_; 
v___x_213_ = lean_nat_dec_lt(v_stack_205_, v_level_204_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec(v_x_208_);
lean_dec(v_level_204_);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v_toks_206_);
lean_ctor_set(v___x_214_, 1, v_acc_207_);
v___x_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_215_, 0, v_stack_205_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
return v___x_215_;
}
else
{
lean_object* v_one_216_; lean_object* v_n_217_; lean_object* v___x_218_; lean_object* v_ph_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v_t1_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_one_216_ = lean_unsigned_to_nat(1u);
v_n_217_ = lean_nat_sub(v_x_208_, v_one_216_);
lean_dec(v_x_208_);
v___x_218_ = l_List_lengthTR___redArg(v_toks_206_);
v_ph_219_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_218_);
v___x_220_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__0));
v___x_221_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__6, &lp_lean_x2dftml_LeanFtml_bqPush___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__6);
v___x_222_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__8, &lp_lean_x2dftml_LeanFtml_bqPush___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__8);
lean_inc(v_level_204_);
v___x_223_ = lean_nat_to_int(v_level_204_);
v___x_224_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__9, &lp_lean_x2dftml_LeanFtml_bqPush___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__9);
v___x_225_ = lean_int_sub(v___x_223_, v___x_224_);
lean_dec(v___x_223_);
v___x_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
v___x_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_222_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = lean_box(0);
v___x_229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_227_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_221_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_220_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
lean_ctor_set(v___x_232_, 1, v___x_228_);
v_t1_233_ = l_List_appendTR___redArg(v_toks_206_, v___x_232_);
v___x_234_ = lean_nat_add(v_stack_205_, v_one_216_);
lean_dec(v_stack_205_);
v___x_235_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__10));
v___x_236_ = l_List_appendTR___redArg(v_acc_207_, v___x_235_);
v___x_237_ = l_List_appendTR___redArg(v___x_236_, v_ph_219_);
v___x_238_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__11));
v___x_239_ = l_List_appendTR___redArg(v___x_237_, v___x_238_);
v_stack_205_ = v___x_234_;
v_toks_206_ = v_t1_233_;
v_acc_207_ = v___x_239_;
v_x_208_ = v_n_217_;
goto _start;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqPop___closed__1(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPop___closed__0));
v___x_243_ = l_String_toListImpl(v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqPop___closed__2(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPop___closed__1, &lp_lean_x2dftml_LeanFtml_bqPop___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_bqPop___closed__1);
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_bqPop___closed__3(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_246_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPop___closed__2, &lp_lean_x2dftml_LeanFtml_bqPop___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bqPop___closed__2);
v___x_247_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__2, &lp_lean_x2dftml_LeanFtml_bqPush___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__2);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v___x_246_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqPop(lean_object* v_level_249_, lean_object* v_stack_250_, lean_object* v_toks_251_, lean_object* v_acc_252_, lean_object* v_x_253_){
_start:
{
lean_object* v_zero_254_; uint8_t v_isZero_255_; 
v_zero_254_ = lean_unsigned_to_nat(0u);
v_isZero_255_ = lean_nat_dec_eq(v_x_253_, v_zero_254_);
if (v_isZero_255_ == 1)
{
lean_object* v___x_256_; lean_object* v___x_257_; 
lean_dec(v_x_253_);
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v_toks_251_);
lean_ctor_set(v___x_256_, 1, v_acc_252_);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v_stack_250_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
return v___x_257_;
}
else
{
uint8_t v___x_258_; 
v___x_258_ = lean_nat_dec_lt(v_level_249_, v_stack_250_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec(v_x_253_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v_toks_251_);
lean_ctor_set(v___x_259_, 1, v_acc_252_);
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v_stack_250_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
return v___x_260_;
}
else
{
lean_object* v_one_261_; lean_object* v_n_262_; lean_object* v___x_263_; lean_object* v_ph_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v_t1_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v_one_261_ = lean_unsigned_to_nat(1u);
v_n_262_ = lean_nat_sub(v_x_253_, v_one_261_);
lean_dec(v_x_253_);
v___x_263_ = l_List_lengthTR___redArg(v_toks_251_);
v_ph_264_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_263_);
v___x_265_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__0));
v___x_266_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPop___closed__3, &lp_lean_x2dftml_LeanFtml_bqPop___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bqPop___closed__3);
v___x_267_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__8, &lp_lean_x2dftml_LeanFtml_bqPush___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__8);
lean_inc(v_stack_250_);
v___x_268_ = lean_nat_to_int(v_stack_250_);
v___x_269_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__9, &lp_lean_x2dftml_LeanFtml_bqPush___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__9);
v___x_270_ = lean_int_sub(v___x_268_, v___x_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_267_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = lean_box(0);
v___x_274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_272_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_266_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_265_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___x_273_);
v_t1_278_ = l_List_appendTR___redArg(v_toks_251_, v___x_277_);
v___x_279_ = lean_nat_sub(v_stack_250_, v_one_261_);
lean_dec(v_stack_250_);
v___x_280_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__11));
v___x_281_ = l_List_appendTR___redArg(v_acc_252_, v___x_280_);
v___x_282_ = l_List_appendTR___redArg(v___x_281_, v_ph_264_);
v___x_283_ = l_List_appendTR___redArg(v___x_282_, v___x_280_);
v_stack_250_ = v___x_279_;
v_toks_251_ = v_t1_278_;
v_acc_252_ = v___x_283_;
v_x_253_ = v_n_262_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqPop___boxed(lean_object* v_level_285_, lean_object* v_stack_286_, lean_object* v_toks_287_, lean_object* v_acc_288_, lean_object* v_x_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = lp_lean_x2dftml_LeanFtml_bqPop(v_level_285_, v_stack_286_, v_toks_287_, v_acc_288_, v_x_289_);
lean_dec(v_level_285_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqDrain(lean_object* v_stack_291_, lean_object* v_toks_292_, lean_object* v_acc_293_, lean_object* v_x_294_){
_start:
{
lean_object* v_zero_295_; uint8_t v_isZero_296_; 
v_zero_295_ = lean_unsigned_to_nat(0u);
v_isZero_296_ = lean_nat_dec_eq(v_x_294_, v_zero_295_);
if (v_isZero_296_ == 1)
{
lean_object* v___x_297_; 
lean_dec(v_x_294_);
lean_dec(v_stack_291_);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v_toks_292_);
lean_ctor_set(v___x_297_, 1, v_acc_293_);
return v___x_297_;
}
else
{
uint8_t v___x_298_; 
v___x_298_ = lean_nat_dec_lt(v_zero_295_, v_stack_291_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; 
lean_dec(v_x_294_);
lean_dec(v_stack_291_);
v___x_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_299_, 0, v_toks_292_);
lean_ctor_set(v___x_299_, 1, v_acc_293_);
return v___x_299_;
}
else
{
lean_object* v_one_300_; lean_object* v_n_301_; lean_object* v___x_302_; lean_object* v_ph_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v_t1_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_one_300_ = lean_unsigned_to_nat(1u);
v_n_301_ = lean_nat_sub(v_x_294_, v_one_300_);
lean_dec(v_x_294_);
v___x_302_ = l_List_lengthTR___redArg(v_toks_292_);
v_ph_303_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_302_);
v___x_304_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__0));
v___x_305_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPop___closed__3, &lp_lean_x2dftml_LeanFtml_bqPop___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bqPop___closed__3);
v___x_306_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__8, &lp_lean_x2dftml_LeanFtml_bqPush___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__8);
lean_inc(v_stack_291_);
v___x_307_ = lean_nat_to_int(v_stack_291_);
v___x_308_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__9, &lp_lean_x2dftml_LeanFtml_bqPush___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__9);
v___x_309_ = lean_int_sub(v___x_307_, v___x_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
v___x_311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_306_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
v___x_312_ = lean_box(0);
v___x_313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_311_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
v___x_314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_305_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_304_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v___x_316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v___x_312_);
v_t1_317_ = l_List_appendTR___redArg(v_toks_292_, v___x_316_);
v___x_318_ = lean_nat_sub(v_stack_291_, v_one_300_);
lean_dec(v_stack_291_);
v___x_319_ = l_List_appendTR___redArg(v_acc_293_, v_ph_303_);
v_stack_291_ = v___x_318_;
v_toks_292_ = v_t1_317_;
v_acc_293_ = v___x_319_;
v_x_294_ = v_n_301_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bqEmit(lean_object* v_lines_321_, lean_object* v_stack_322_, lean_object* v_toks_323_, lean_object* v_acc_324_, lean_object* v_x_325_){
_start:
{
lean_object* v_zero_326_; uint8_t v_isZero_327_; 
v_zero_326_ = lean_unsigned_to_nat(0u);
v_isZero_327_ = lean_nat_dec_eq(v_x_325_, v_zero_326_);
if (v_isZero_327_ == 1)
{
lean_object* v___x_328_; 
lean_dec(v_x_325_);
lean_dec(v_stack_322_);
lean_dec(v_lines_321_);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v_acc_324_);
lean_ctor_set(v___x_328_, 1, v_toks_323_);
return v___x_328_;
}
else
{
if (lean_obj_tag(v_lines_321_) == 0)
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v_fst_334_; lean_object* v_snd_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
lean_dec(v_x_325_);
v___x_329_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_linesOf_go___closed__0));
v___x_330_ = l_List_appendTR___redArg(v_acc_324_, v___x_329_);
v___x_331_ = lean_unsigned_to_nat(1u);
v___x_332_ = lean_nat_add(v_stack_322_, v___x_331_);
v___x_333_ = lp_lean_x2dftml_LeanFtml_bqDrain(v_stack_322_, v_toks_323_, v___x_330_, v___x_332_);
v_fst_334_ = lean_ctor_get(v___x_333_, 0);
v_snd_335_ = lean_ctor_get(v___x_333_, 1);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_333_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_snd_335_);
lean_inc(v_fst_334_);
lean_dec(v___x_333_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 1, v_fst_334_);
lean_ctor_set(v___x_337_, 0, v_snd_335_);
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_snd_335_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_fst_334_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
else
{
lean_object* v_head_343_; lean_object* v_tail_344_; lean_object* v_fst_345_; lean_object* v_snd_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v_snd_350_; lean_object* v_fst_351_; lean_object* v_fst_352_; lean_object* v_snd_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_snd_356_; lean_object* v_fst_357_; lean_object* v_fst_358_; lean_object* v_snd_359_; lean_object* v_n_360_; lean_object* v___x_361_; 
v_head_343_ = lean_ctor_get(v_lines_321_, 0);
lean_inc(v_head_343_);
v_tail_344_ = lean_ctor_get(v_lines_321_, 1);
lean_inc(v_tail_344_);
lean_dec_ref_known(v_lines_321_, 2);
v_fst_345_ = lean_ctor_get(v_head_343_, 0);
lean_inc_n(v_fst_345_, 2);
v_snd_346_ = lean_ctor_get(v_head_343_, 1);
lean_inc(v_snd_346_);
lean_dec(v_head_343_);
v___x_347_ = lean_unsigned_to_nat(1u);
v___x_348_ = lean_nat_add(v_fst_345_, v___x_347_);
v___x_349_ = lp_lean_x2dftml_LeanFtml_bqPush(v_fst_345_, v_stack_322_, v_toks_323_, v_acc_324_, v___x_348_);
v_snd_350_ = lean_ctor_get(v___x_349_, 1);
lean_inc(v_snd_350_);
v_fst_351_ = lean_ctor_get(v___x_349_, 0);
lean_inc(v_fst_351_);
lean_dec_ref(v___x_349_);
v_fst_352_ = lean_ctor_get(v_snd_350_, 0);
lean_inc(v_fst_352_);
v_snd_353_ = lean_ctor_get(v_snd_350_, 1);
lean_inc(v_snd_353_);
lean_dec(v_snd_350_);
v___x_354_ = lean_nat_add(v_fst_351_, v___x_347_);
v___x_355_ = lp_lean_x2dftml_LeanFtml_bqPop(v_fst_345_, v_fst_351_, v_fst_352_, v_snd_353_, v___x_354_);
lean_dec(v_fst_345_);
v_snd_356_ = lean_ctor_get(v___x_355_, 1);
lean_inc(v_snd_356_);
v_fst_357_ = lean_ctor_get(v___x_355_, 0);
lean_inc(v_fst_357_);
lean_dec_ref(v___x_355_);
v_fst_358_ = lean_ctor_get(v_snd_356_, 0);
lean_inc(v_fst_358_);
v_snd_359_ = lean_ctor_get(v_snd_356_, 1);
lean_inc(v_snd_359_);
lean_dec(v_snd_356_);
v_n_360_ = lean_nat_sub(v_x_325_, v___x_347_);
lean_dec(v_x_325_);
v___x_361_ = l_List_appendTR___redArg(v_snd_359_, v_snd_346_);
v_lines_321_ = v_tail_344_;
v_stack_322_ = v_fst_357_;
v_toks_323_ = v_fst_358_;
v_acc_324_ = v___x_361_;
v_x_325_ = v_n_360_;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_blockquoteProcess_spec__1(lean_object* v_x_363_){
_start:
{
if (lean_obj_tag(v_x_363_) == 0)
{
uint8_t v___x_364_; 
v___x_364_ = 1;
return v___x_364_;
}
else
{
lean_object* v_head_365_; lean_object* v_tail_366_; lean_object* v_snd_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v_head_365_ = lean_ctor_get(v_x_363_, 0);
v_tail_366_ = lean_ctor_get(v_x_363_, 1);
v_snd_367_ = lean_ctor_get(v_head_365_, 1);
v___x_368_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_snd_367_);
v___x_369_ = l_List_isEmpty___redArg(v___x_368_);
lean_dec(v___x_368_);
if (v___x_369_ == 0)
{
return v___x_369_;
}
else
{
v_x_363_ = v_tail_366_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_blockquoteProcess_spec__1___boxed(lean_object* v_x_371_){
_start:
{
uint8_t v_res_372_; lean_object* v_r_373_; 
v_res_372_ = lp_lean_x2dftml_List_all___at___00LeanFtml_blockquoteProcess_spec__1(v_x_371_);
lean_dec(v_x_371_);
v_r_373_ = lean_box(v_res_372_);
return v_r_373_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_blockquoteProcess_spec__0(lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
if (lean_obj_tag(v_a_374_) == 0)
{
lean_object* v___x_376_; 
v___x_376_ = lean_array_to_list(v_a_375_);
return v___x_376_;
}
else
{
lean_object* v_head_377_; lean_object* v_tail_378_; lean_object* v___x_379_; 
v_head_377_ = lean_ctor_get(v_a_374_, 0);
lean_inc(v_head_377_);
v_tail_378_ = lean_ctor_get(v_a_374_, 1);
lean_inc(v_tail_378_);
lean_dec_ref_known(v_a_374_, 2);
v___x_379_ = lp_lean_x2dftml_LeanFtml_bqLine(v_head_377_);
if (lean_obj_tag(v___x_379_) == 0)
{
v_a_374_ = v_tail_378_;
goto _start;
}
else
{
lean_object* v_val_381_; lean_object* v___x_382_; 
v_val_381_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_val_381_);
lean_dec_ref_known(v___x_379_, 1);
v___x_382_ = lean_array_push(v_a_375_, v_val_381_);
v_a_374_ = v_tail_378_;
v_a_375_ = v___x_382_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteProcess(lean_object* v_run_389_, lean_object* v_toks_390_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v_parsed_394_; uint8_t v___x_395_; 
v___x_391_ = lp_lean_x2dftml_LeanFtml_linesOf(v_run_389_);
v___x_392_ = lean_unsigned_to_nat(0u);
v___x_393_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_blockquoteProcess___closed__0));
v_parsed_394_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_blockquoteProcess_spec__0(v___x_391_, v___x_393_);
v___x_395_ = lp_lean_x2dftml_List_all___at___00LeanFtml_blockquoteProcess_spec__1(v_parsed_394_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v_fst_401_; lean_object* v_snd_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_413_; 
v___x_396_ = lean_box(0);
v___x_397_ = l_List_lengthTR___redArg(v_parsed_394_);
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = lean_nat_add(v___x_397_, v___x_398_);
lean_dec(v___x_397_);
v___x_400_ = lp_lean_x2dftml_LeanFtml_bqEmit(v_parsed_394_, v___x_392_, v_toks_390_, v___x_396_, v___x_399_);
v_fst_401_ = lean_ctor_get(v___x_400_, 0);
v_snd_402_ = lean_ctor_get(v___x_400_, 1);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_413_ == 0)
{
v___x_404_ = v___x_400_;
v_isShared_405_ = v_isSharedCheck_413_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_snd_402_);
lean_inc(v_fst_401_);
lean_dec(v___x_400_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_413_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_406_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_linesOf_go___closed__0));
v___x_407_ = l_List_appendTR___redArg(v___x_406_, v_fst_401_);
v___x_408_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_blockquoteProcess___closed__1));
v___x_409_ = l_List_appendTR___redArg(v___x_407_, v___x_408_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v___x_409_);
v___x_411_ = v___x_404_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_snd_402_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
else
{
lean_object* v___x_414_; lean_object* v___x_415_; 
lean_dec(v_parsed_394_);
v___x_414_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_blockquoteProcess___closed__1));
v___x_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
lean_ctor_set(v___x_415_, 1, v_toks_390_);
return v___x_415_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteScan(lean_object* v_src_416_, lean_object* v_toks_417_, lean_object* v_x_418_){
_start:
{
lean_object* v_zero_419_; uint8_t v_isZero_420_; 
v_zero_419_ = lean_unsigned_to_nat(0u);
v_isZero_420_ = lean_nat_dec_eq(v_x_418_, v_zero_419_);
if (v_isZero_420_ == 1)
{
lean_object* v___x_421_; 
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v_src_416_);
lean_ctor_set(v___x_421_, 1, v_toks_417_);
return v___x_421_;
}
else
{
if (lean_obj_tag(v_src_416_) == 0)
{
lean_object* v___x_422_; 
v___x_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_422_, 0, v_src_416_);
lean_ctor_set(v___x_422_, 1, v_toks_417_);
return v___x_422_;
}
else
{
lean_object* v_head_423_; lean_object* v_tail_424_; lean_object* v_one_425_; lean_object* v_n_426_; lean_object* v___x_427_; 
v_head_423_ = lean_ctor_get(v_src_416_, 0);
lean_inc(v_head_423_);
v_tail_424_ = lean_ctor_get(v_src_416_, 1);
lean_inc(v_tail_424_);
v_one_425_ = lean_unsigned_to_nat(1u);
v_n_426_ = lean_nat_sub(v_x_418_, v_one_425_);
v___x_427_ = lp_lean_x2dftml_LeanFtml_blockquoteMatchAt(v_src_416_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v___x_428_; lean_object* v_fst_429_; lean_object* v_snd_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_438_; 
v___x_428_ = lp_lean_x2dftml_LeanFtml_blockquoteScan(v_tail_424_, v_toks_417_, v_n_426_);
lean_dec(v_n_426_);
v_fst_429_ = lean_ctor_get(v___x_428_, 0);
v_snd_430_ = lean_ctor_get(v___x_428_, 1);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_438_ == 0)
{
v___x_432_ = v___x_428_;
v_isShared_433_ = v_isSharedCheck_438_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_snd_430_);
lean_inc(v_fst_429_);
lean_dec(v___x_428_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_438_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_434_, 0, v_head_423_);
lean_ctor_set(v___x_434_, 1, v_fst_429_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v___x_434_);
v___x_436_ = v___x_432_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v_snd_430_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
else
{
lean_object* v_val_439_; lean_object* v_fst_440_; lean_object* v_snd_441_; lean_object* v___x_442_; lean_object* v_fst_443_; lean_object* v_snd_444_; lean_object* v___x_445_; lean_object* v_fst_446_; lean_object* v_snd_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_455_; 
lean_dec(v_tail_424_);
lean_dec(v_head_423_);
v_val_439_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_val_439_);
lean_dec_ref_known(v___x_427_, 1);
v_fst_440_ = lean_ctor_get(v_val_439_, 0);
lean_inc(v_fst_440_);
v_snd_441_ = lean_ctor_get(v_val_439_, 1);
lean_inc(v_snd_441_);
lean_dec(v_val_439_);
v___x_442_ = lp_lean_x2dftml_LeanFtml_blockquoteProcess(v_fst_440_, v_toks_417_);
v_fst_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_fst_443_);
v_snd_444_ = lean_ctor_get(v___x_442_, 1);
lean_inc(v_snd_444_);
lean_dec_ref(v___x_442_);
v___x_445_ = lp_lean_x2dftml_LeanFtml_blockquoteScan(v_snd_441_, v_snd_444_, v_n_426_);
lean_dec(v_n_426_);
v_fst_446_ = lean_ctor_get(v___x_445_, 0);
v_snd_447_ = lean_ctor_get(v___x_445_, 1);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_455_ == 0)
{
v___x_449_ = v___x_445_;
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_snd_447_);
lean_inc(v_fst_446_);
lean_dec(v___x_445_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_451_; lean_object* v___x_453_; 
v___x_451_ = l_List_appendTR___redArg(v_fst_443_, v_fst_446_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v___x_451_);
v___x_453_ = v___x_449_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_451_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_snd_447_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteScan___boxed(lean_object* v_src_456_, lean_object* v_toks_457_, lean_object* v_x_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = lp_lean_x2dftml_LeanFtml_blockquoteScan(v_src_456_, v_toks_457_, v_x_458_);
lean_dec(v_x_458_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteRule___lam__0(lean_object* v_src_460_, lean_object* v_toks_461_){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_462_ = l_List_lengthTR___redArg(v_src_460_);
v___x_463_ = lean_unsigned_to_nat(1u);
v___x_464_ = lean_nat_add(v___x_462_, v___x_463_);
lean_dec(v___x_462_);
v___x_465_ = lp_lean_x2dftml_LeanFtml_blockquoteScan(v_src_460_, v_toks_461_, v___x_464_);
lean_dec(v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_blockquoteRule(lean_object* v_st_467_){
_start:
{
lean_object* v___f_468_; lean_object* v___x_469_; 
v___f_468_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_blockquoteRule___closed__0));
v___x_469_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_467_, v___f_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__0(lean_object* v_l_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
if (lean_obj_tag(v_a_471_) == 0)
{
lean_dec_ref(v_a_472_);
lean_inc(v_l_470_);
return v_l_470_;
}
else
{
lean_object* v_head_473_; lean_object* v_tail_474_; lean_object* v___x_475_; uint8_t v___x_476_; 
v_head_473_ = lean_ctor_get(v_a_471_, 0);
lean_inc(v_head_473_);
v_tail_474_ = lean_ctor_get(v_a_471_, 1);
lean_inc(v_tail_474_);
lean_dec_ref_known(v_a_471_, 2);
v___x_475_ = lean_unsigned_to_nat(43u);
v___x_476_ = lean_nat_dec_eq(v_head_473_, v___x_475_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; 
lean_dec(v_tail_474_);
lean_dec(v_head_473_);
v___x_477_ = lean_array_to_list(v_a_472_);
return v___x_477_;
}
else
{
lean_object* v___x_478_; 
v___x_478_ = lean_array_push(v_a_472_, v_head_473_);
v_a_471_ = v_tail_474_;
v_a_472_ = v___x_478_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__0___boxed(lean_object* v_l_480_, lean_object* v_a_481_, lean_object* v_a_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__0(v_l_480_, v_a_481_, v_a_482_);
lean_dec(v_l_480_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__1(lean_object* v_l_484_, lean_object* v_a_485_, lean_object* v_a_486_){
_start:
{
if (lean_obj_tag(v_a_485_) == 0)
{
lean_dec_ref(v_a_486_);
lean_inc(v_l_484_);
return v_l_484_;
}
else
{
lean_object* v_head_487_; lean_object* v_tail_488_; lean_object* v___x_492_; uint8_t v___x_493_; 
v_head_487_ = lean_ctor_get(v_a_485_, 0);
lean_inc(v_head_487_);
v_tail_488_ = lean_ctor_get(v_a_485_, 1);
lean_inc(v_tail_488_);
lean_dec_ref_known(v_a_485_, 2);
v___x_492_ = lean_unsigned_to_nat(32u);
v___x_493_ = lean_nat_dec_eq(v_head_487_, v___x_492_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = lean_unsigned_to_nat(9u);
v___x_495_ = lean_nat_dec_eq(v_head_487_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; 
lean_dec(v_tail_488_);
lean_dec(v_head_487_);
v___x_496_ = lean_array_to_list(v_a_486_);
return v___x_496_;
}
else
{
goto v___jp_489_;
}
}
else
{
goto v___jp_489_;
}
v___jp_489_:
{
lean_object* v___x_490_; 
v___x_490_ = lean_array_push(v_a_486_, v_head_487_);
v_a_485_ = v_tail_488_;
v_a_486_ = v___x_490_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__1___boxed(lean_object* v_l_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__1(v_l_497_, v_a_498_, v_a_499_);
lean_dec(v_l_497_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingMatchLine(lean_object* v_line_501_){
_start:
{
lean_object* v___x_502_; lean_object* v_pluses_503_; uint8_t v___x_504_; 
v___x_502_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_optValBytes___closed__0));
lean_inc(v_line_501_);
v_pluses_503_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__0(v_line_501_, v_line_501_, v___x_502_);
v___x_504_ = l_List_isEmpty___redArg(v_pluses_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v_fst_508_; lean_object* v_snd_509_; uint8_t v___x_519_; 
v___x_505_ = lean_unsigned_to_nat(6u);
v___x_506_ = l_List_lengthTR___redArg(v_pluses_503_);
lean_dec(v_pluses_503_);
v___x_519_ = lean_nat_dec_lt(v___x_505_, v___x_506_);
if (v___x_519_ == 0)
{
uint8_t v___x_520_; lean_object* v_rest_521_; 
v___x_520_ = 1;
lean_inc(v___x_506_);
v_rest_521_ = l_List_drop___redArg(v___x_506_, v_line_501_);
lean_dec(v_line_501_);
if (lean_obj_tag(v_rest_521_) == 1)
{
lean_object* v_head_522_; lean_object* v_tail_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
v_head_522_ = lean_ctor_get(v_rest_521_, 0);
v_tail_523_ = lean_ctor_get(v_rest_521_, 1);
v___x_524_ = lean_unsigned_to_nat(42u);
v___x_525_ = lean_nat_dec_eq(v_head_522_, v___x_524_);
if (v___x_525_ == 0)
{
v_fst_508_ = v___x_520_;
v_snd_509_ = v_rest_521_;
goto v___jp_507_;
}
else
{
lean_inc(v_tail_523_);
lean_dec_ref_known(v_rest_521_, 2);
v_fst_508_ = v___x_519_;
v_snd_509_ = v_tail_523_;
goto v___jp_507_;
}
}
else
{
v_fst_508_ = v___x_520_;
v_snd_509_ = v_rest_521_;
goto v___jp_507_;
}
}
else
{
lean_object* v___x_526_; 
lean_dec(v___x_506_);
lean_dec(v_line_501_);
v___x_526_ = lean_box(0);
return v___x_526_;
}
v___jp_507_:
{
lean_object* v_ws_510_; uint8_t v___x_511_; 
lean_inc(v_snd_509_);
v_ws_510_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__1(v_snd_509_, v_snd_509_, v___x_502_);
v___x_511_ = l_List_isEmpty___redArg(v_ws_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_512_ = l_List_lengthTR___redArg(v_ws_510_);
lean_dec(v_ws_510_);
v___x_513_ = l_List_drop___redArg(v___x_512_, v_snd_509_);
lean_dec(v_snd_509_);
v___x_514_ = lean_box(v_fst_508_);
v___x_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
lean_ctor_set(v___x_515_, 1, v___x_513_);
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_506_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
return v___x_517_;
}
else
{
lean_object* v___x_518_; 
lean_dec(v_ws_510_);
lean_dec(v_snd_509_);
lean_dec(v___x_506_);
v___x_518_ = lean_box(0);
return v___x_518_;
}
}
}
else
{
lean_object* v___x_527_; 
lean_dec(v_pluses_503_);
lean_dec(v_line_501_);
v___x_527_ = lean_box(0);
return v___x_527_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingProcess___closed__2(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingProcess___closed__1));
v___x_531_ = l_String_toListImpl(v___x_530_);
return v___x_531_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingProcess___closed__4(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingProcess___closed__3));
v___x_534_ = l_String_toListImpl(v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingProcess___closed__6(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingProcess___closed__5));
v___x_537_ = l_String_toListImpl(v___x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingProcess(lean_object* v_level_539_, uint8_t v_hasToc_540_, lean_object* v_text_541_, lean_object* v_doc_542_, lean_object* v_toks_543_){
_start:
{
lean_object* v_page_544_; lean_object* v_site_545_; lean_object* v_inclusions_546_; lean_object* v_inclusionsNotExist_547_; lean_object* v_footnotes_548_; lean_object* v_bibitems_549_; lean_object* v_bibitemIds_550_; lean_object* v_headlineId_551_; lean_object* v_mathId_552_; lean_object* v_equations_553_; lean_object* v_collapsibleCount_554_; lean_object* v_tabviewCounter_555_; lean_object* v_scoredAnchors_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_621_; 
v_page_544_ = lean_ctor_get(v_doc_542_, 0);
v_site_545_ = lean_ctor_get(v_doc_542_, 1);
v_inclusions_546_ = lean_ctor_get(v_doc_542_, 2);
v_inclusionsNotExist_547_ = lean_ctor_get(v_doc_542_, 3);
v_footnotes_548_ = lean_ctor_get(v_doc_542_, 4);
v_bibitems_549_ = lean_ctor_get(v_doc_542_, 5);
v_bibitemIds_550_ = lean_ctor_get(v_doc_542_, 6);
v_headlineId_551_ = lean_ctor_get(v_doc_542_, 7);
v_mathId_552_ = lean_ctor_get(v_doc_542_, 8);
v_equations_553_ = lean_ctor_get(v_doc_542_, 9);
v_collapsibleCount_554_ = lean_ctor_get(v_doc_542_, 10);
v_tabviewCounter_555_ = lean_ctor_get(v_doc_542_, 11);
v_scoredAnchors_556_ = lean_ctor_get(v_doc_542_, 12);
v_isSharedCheck_621_ = !lean_is_exclusive(v_doc_542_);
if (v_isSharedCheck_621_ == 0)
{
v___x_558_ = v_doc_542_;
v_isShared_559_ = v_isSharedCheck_621_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_scoredAnchors_556_);
lean_inc(v_tabviewCounter_555_);
lean_inc(v_collapsibleCount_554_);
lean_inc(v_equations_553_);
lean_inc(v_mathId_552_);
lean_inc(v_headlineId_551_);
lean_inc(v_bibitemIds_550_);
lean_inc(v_bibitems_549_);
lean_inc(v_footnotes_548_);
lean_inc(v_inclusionsNotExist_547_);
lean_inc(v_inclusions_546_);
lean_inc(v_site_545_);
lean_inc(v_page_544_);
lean_dec(v_doc_542_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_621_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v_fst_561_; lean_object* v_fst_562_; lean_object* v_snd_563_; lean_object* v___y_608_; 
if (lean_obj_tag(v_headlineId_551_) == 0)
{
lean_object* v___x_619_; 
v___x_619_ = lean_unsigned_to_nat(0u);
v___y_608_ = v___x_619_;
goto v___jp_607_;
}
else
{
lean_object* v_val_620_; 
v_val_620_ = lean_ctor_get(v_headlineId_551_, 0);
lean_inc(v_val_620_);
lean_dec_ref_known(v_headlineId_551_, 1);
v___y_608_ = v_val_620_;
goto v___jp_607_;
}
v___jp_560_:
{
lean_object* v___x_564_; lean_object* v_startPh_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v_t1_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v_endPh_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v_t2_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_564_ = l_List_lengthTR___redArg(v_toks_543_);
v_startPh_565_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_564_);
v___x_566_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingProcess___closed__0));
v___x_567_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__2, &lp_lean_x2dftml_LeanFtml_bqPush___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__2);
lean_inc(v_fst_562_);
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v_fst_562_);
v___x_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_567_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
v___x_570_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__8, &lp_lean_x2dftml_LeanFtml_bqPush___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__8);
v___x_571_ = lean_nat_to_int(v_level_539_);
v___x_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
v___x_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_570_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingProcess___closed__2, &lp_lean_x2dftml_LeanFtml_headingProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_headingProcess___closed__2);
lean_inc(v_text_541_);
v___x_575_ = lp_lean_x2dftml_LeanFtml_textVal(v_text_541_);
v___x_576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_574_);
lean_ctor_set(v___x_576_, 1, v___x_575_);
v___x_577_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingProcess___closed__4, &lp_lean_x2dftml_LeanFtml_headingProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_headingProcess___closed__4);
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
lean_ctor_set(v___x_578_, 1, v_fst_561_);
v___x_579_ = lean_box(0);
v___x_580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_578_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
v___x_581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_576_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
lean_inc_ref(v___x_573_);
v___x_582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_573_);
lean_ctor_set(v___x_582_, 1, v___x_581_);
v___x_583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_569_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_566_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___x_585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
lean_ctor_set(v___x_585_, 1, v___x_579_);
v_t1_586_ = l_List_appendTR___redArg(v_toks_543_, v___x_585_);
v___x_587_ = l_List_lengthTR___redArg(v_t1_586_);
v___x_588_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__10));
v___x_589_ = l_List_appendTR___redArg(v___x_588_, v_startPh_565_);
v_endPh_590_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_587_);
v___x_591_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPop___closed__3, &lp_lean_x2dftml_LeanFtml_bqPop___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_bqPop___closed__3);
v___x_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_573_);
lean_ctor_set(v___x_592_, 1, v___x_579_);
v___x_593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_591_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_566_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
v___x_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
lean_ctor_set(v___x_595_, 1, v___x_579_);
v_t2_596_ = l_List_appendTR___redArg(v_t1_586_, v___x_595_);
v___x_597_ = l_List_appendTR___redArg(v___x_589_, v_text_541_);
v___x_598_ = l_List_appendTR___redArg(v___x_597_, v_endPh_590_);
v___x_599_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__11));
v___x_600_ = l_List_appendTR___redArg(v___x_598_, v___x_599_);
v___x_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_601_, 0, v_snd_563_);
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 7, v___x_601_);
v___x_603_ = v___x_558_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_page_544_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_site_545_);
lean_ctor_set(v_reuseFailAlloc_606_, 2, v_inclusions_546_);
lean_ctor_set(v_reuseFailAlloc_606_, 3, v_inclusionsNotExist_547_);
lean_ctor_set(v_reuseFailAlloc_606_, 4, v_footnotes_548_);
lean_ctor_set(v_reuseFailAlloc_606_, 5, v_bibitems_549_);
lean_ctor_set(v_reuseFailAlloc_606_, 6, v_bibitemIds_550_);
lean_ctor_set(v_reuseFailAlloc_606_, 7, v___x_601_);
lean_ctor_set(v_reuseFailAlloc_606_, 8, v_mathId_552_);
lean_ctor_set(v_reuseFailAlloc_606_, 9, v_equations_553_);
lean_ctor_set(v_reuseFailAlloc_606_, 10, v_collapsibleCount_554_);
lean_ctor_set(v_reuseFailAlloc_606_, 11, v_tabviewCounter_555_);
lean_ctor_set(v_reuseFailAlloc_606_, 12, v_scoredAnchors_556_);
v___x_603_ = v_reuseFailAlloc_606_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_604_, 0, v_t2_596_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
v___x_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_600_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
return v___x_605_;
}
}
v___jp_607_:
{
if (v_hasToc_540_ == 0)
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = lean_box(3);
v___x_610_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingProcess___closed__6, &lp_lean_x2dftml_LeanFtml_headingProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_headingProcess___closed__6);
v_fst_561_ = v___x_609_;
v_fst_562_ = v___x_610_;
v_snd_563_ = v___y_608_;
goto v___jp_560_;
}
else
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_611_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingProcess___closed__7));
lean_inc(v___y_608_);
v___x_612_ = l_Nat_reprFast(v___y_608_);
v___x_613_ = lean_string_append(v___x_611_, v___x_612_);
lean_dec_ref(v___x_612_);
v___x_614_ = l_String_toListImpl(v___x_613_);
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
v___x_616_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__4, &lp_lean_x2dftml_LeanFtml_bqPush___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__4);
v___x_617_ = lean_unsigned_to_nat(1u);
v___x_618_ = lean_nat_add(v___y_608_, v___x_617_);
lean_dec(v___y_608_);
v_fst_561_ = v___x_615_;
v_fst_562_ = v___x_616_;
v_snd_563_ = v___x_618_;
goto v___jp_560_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingProcess___boxed(lean_object* v_level_622_, lean_object* v_hasToc_623_, lean_object* v_text_624_, lean_object* v_doc_625_, lean_object* v_toks_626_){
_start:
{
uint8_t v_hasToc_boxed_627_; lean_object* v_res_628_; 
v_hasToc_boxed_627_ = lean_unbox(v_hasToc_623_);
v_res_628_ = lp_lean_x2dftml_LeanFtml_headingProcess(v_level_622_, v_hasToc_boxed_627_, v_text_624_, v_doc_625_, v_toks_626_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingScan(lean_object* v_src_629_, lean_object* v_toks_630_, lean_object* v_doc_631_, lean_object* v_x_632_){
_start:
{
lean_object* v_zero_633_; uint8_t v_isZero_634_; 
v_zero_633_ = lean_unsigned_to_nat(0u);
v_isZero_634_ = lean_nat_dec_eq(v_x_632_, v_zero_633_);
if (v_isZero_634_ == 1)
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v_toks_630_);
lean_ctor_set(v___x_635_, 1, v_doc_631_);
v___x_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_636_, 0, v_src_629_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
return v___x_636_;
}
else
{
if (lean_obj_tag(v_src_629_) == 0)
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v_toks_630_);
lean_ctor_set(v___x_637_, 1, v_doc_631_);
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v_src_629_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
return v___x_638_;
}
else
{
lean_object* v_one_639_; lean_object* v_n_640_; lean_object* v___x_641_; lean_object* v_line_642_; lean_object* v_fst_644_; lean_object* v_snd_645_; lean_object* v___x_682_; lean_object* v_after_683_; 
v_one_639_ = lean_unsigned_to_nat(1u);
v_n_640_ = lean_nat_sub(v_x_632_, v_one_639_);
v___x_641_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_optValBytes___closed__0));
lean_inc(v_src_629_);
v_line_642_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_linesOf_go_spec__0(v_src_629_, v_src_629_, v___x_641_);
v___x_682_ = l_List_lengthTR___redArg(v_line_642_);
v_after_683_ = l_List_drop___redArg(v___x_682_, v_src_629_);
lean_dec(v_src_629_);
if (lean_obj_tag(v_after_683_) == 1)
{
lean_object* v_head_686_; lean_object* v_tail_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v_head_686_ = lean_ctor_get(v_after_683_, 0);
v_tail_687_ = lean_ctor_get(v_after_683_, 1);
v___x_688_ = lean_unsigned_to_nat(10u);
v___x_689_ = lean_nat_dec_eq(v_head_686_, v___x_688_);
if (v___x_689_ == 0)
{
goto v___jp_684_;
}
else
{
lean_object* v___x_690_; 
lean_inc(v_tail_687_);
lean_dec_ref_known(v_after_683_, 2);
v___x_690_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_linesOf_go___closed__0));
v_fst_644_ = v___x_690_;
v_snd_645_ = v_tail_687_;
goto v___jp_643_;
}
}
else
{
goto v___jp_684_;
}
v___jp_643_:
{
lean_object* v___x_646_; 
lean_inc(v_line_642_);
v___x_646_ = lp_lean_x2dftml_LeanFtml_headingMatchLine(v_line_642_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v___x_647_; lean_object* v_fst_648_; lean_object* v_snd_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_658_; 
v___x_647_ = lp_lean_x2dftml_LeanFtml_headingScan(v_snd_645_, v_toks_630_, v_doc_631_, v_n_640_);
lean_dec(v_n_640_);
v_fst_648_ = lean_ctor_get(v___x_647_, 0);
v_snd_649_ = lean_ctor_get(v___x_647_, 1);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_658_ == 0)
{
v___x_651_ = v___x_647_;
v_isShared_652_ = v_isSharedCheck_658_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_snd_649_);
lean_inc(v_fst_648_);
lean_dec(v___x_647_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_658_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_656_; 
lean_inc(v_fst_644_);
v___x_653_ = l_List_appendTR___redArg(v_line_642_, v_fst_644_);
v___x_654_ = l_List_appendTR___redArg(v___x_653_, v_fst_648_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 0, v___x_654_);
v___x_656_ = v___x_651_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_654_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v_snd_649_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
else
{
lean_object* v_val_659_; lean_object* v_snd_660_; lean_object* v_fst_661_; lean_object* v_fst_662_; lean_object* v_snd_663_; uint8_t v___x_664_; lean_object* v___x_665_; lean_object* v_snd_666_; lean_object* v_fst_667_; lean_object* v_fst_668_; lean_object* v_snd_669_; lean_object* v___x_670_; lean_object* v_fst_671_; lean_object* v_snd_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_681_; 
lean_dec(v_line_642_);
v_val_659_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_val_659_);
lean_dec_ref_known(v___x_646_, 1);
v_snd_660_ = lean_ctor_get(v_val_659_, 1);
lean_inc(v_snd_660_);
v_fst_661_ = lean_ctor_get(v_val_659_, 0);
lean_inc(v_fst_661_);
lean_dec(v_val_659_);
v_fst_662_ = lean_ctor_get(v_snd_660_, 0);
lean_inc(v_fst_662_);
v_snd_663_ = lean_ctor_get(v_snd_660_, 1);
lean_inc(v_snd_663_);
lean_dec(v_snd_660_);
v___x_664_ = lean_unbox(v_fst_662_);
lean_dec(v_fst_662_);
v___x_665_ = lp_lean_x2dftml_LeanFtml_headingProcess(v_fst_661_, v___x_664_, v_snd_663_, v_doc_631_, v_toks_630_);
v_snd_666_ = lean_ctor_get(v___x_665_, 1);
lean_inc(v_snd_666_);
v_fst_667_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_fst_667_);
lean_dec_ref(v___x_665_);
v_fst_668_ = lean_ctor_get(v_snd_666_, 0);
lean_inc(v_fst_668_);
v_snd_669_ = lean_ctor_get(v_snd_666_, 1);
lean_inc(v_snd_669_);
lean_dec(v_snd_666_);
v___x_670_ = lp_lean_x2dftml_LeanFtml_headingScan(v_snd_645_, v_fst_668_, v_snd_669_, v_n_640_);
lean_dec(v_n_640_);
v_fst_671_ = lean_ctor_get(v___x_670_, 0);
v_snd_672_ = lean_ctor_get(v___x_670_, 1);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_681_ == 0)
{
v___x_674_ = v___x_670_;
v_isShared_675_ = v_isSharedCheck_681_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_snd_672_);
lean_inc(v_fst_671_);
lean_dec(v___x_670_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_681_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
lean_inc(v_fst_644_);
v___x_676_ = l_List_appendTR___redArg(v_fst_667_, v_fst_644_);
v___x_677_ = l_List_appendTR___redArg(v___x_676_, v_fst_671_);
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 0, v___x_677_);
v___x_679_ = v___x_674_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v_snd_672_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
v___jp_684_:
{
lean_object* v___x_685_; 
v___x_685_ = lean_box(0);
v_fst_644_ = v___x_685_;
v_snd_645_ = v_after_683_;
goto v___jp_643_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingScan___boxed(lean_object* v_src_691_, lean_object* v_toks_692_, lean_object* v_doc_693_, lean_object* v_x_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = lp_lean_x2dftml_LeanFtml_headingScan(v_src_691_, v_toks_692_, v_doc_693_, v_x_694_);
lean_dec(v_x_694_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingRule(lean_object* v_st_696_){
_start:
{
lean_object* v_work_697_; lean_object* v_tokens_698_; lean_object* v_doc_699_; uint8_t v_fatal_700_; lean_object* v_continuedDivLeads_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_718_; 
v_work_697_ = lean_ctor_get(v_st_696_, 0);
v_tokens_698_ = lean_ctor_get(v_st_696_, 1);
v_doc_699_ = lean_ctor_get(v_st_696_, 2);
v_fatal_700_ = lean_ctor_get_uint8(v_st_696_, sizeof(void*)*4);
v_continuedDivLeads_701_ = lean_ctor_get(v_st_696_, 3);
v_isSharedCheck_718_ = !lean_is_exclusive(v_st_696_);
if (v_isSharedCheck_718_ == 0)
{
v___x_703_ = v_st_696_;
v_isShared_704_ = v_isSharedCheck_718_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_continuedDivLeads_701_);
lean_inc(v_doc_699_);
lean_inc(v_tokens_698_);
lean_inc(v_work_697_);
lean_dec(v_st_696_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_718_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v_input_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v_snd_710_; lean_object* v_fst_711_; lean_object* v_fst_712_; lean_object* v_snd_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
v_input_705_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_697_);
v___x_706_ = l_List_lengthTR___redArg(v_input_705_);
v___x_707_ = lean_unsigned_to_nat(1u);
v___x_708_ = lean_nat_add(v___x_706_, v___x_707_);
lean_dec(v___x_706_);
v___x_709_ = lp_lean_x2dftml_LeanFtml_headingScan(v_input_705_, v_tokens_698_, v_doc_699_, v___x_708_);
lean_dec(v___x_708_);
v_snd_710_ = lean_ctor_get(v___x_709_, 1);
lean_inc(v_snd_710_);
v_fst_711_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_fst_711_);
lean_dec_ref(v___x_709_);
v_fst_712_ = lean_ctor_get(v_snd_710_, 0);
lean_inc(v_fst_712_);
v_snd_713_ = lean_ctor_get(v_snd_710_, 1);
lean_inc(v_snd_713_);
lean_dec(v_snd_710_);
v___x_714_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_711_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 2, v_snd_713_);
lean_ctor_set(v___x_703_, 1, v_fst_712_);
lean_ctor_set(v___x_703_, 0, v___x_714_);
v___x_716_ = v___x_703_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_fst_712_);
lean_ctor_set(v_reuseFailAlloc_717_, 2, v_snd_713_);
lean_ctor_set(v_reuseFailAlloc_717_, 3, v_continuedDivLeads_701_);
lean_ctor_set_uint8(v_reuseFailAlloc_717_, sizeof(void*)*4, v_fatal_700_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tocTail_spec__0(lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
if (lean_obj_tag(v_a_719_) == 0)
{
lean_object* v___x_721_; 
v___x_721_ = l_List_reverse___redArg(v_a_720_);
return v___x_721_;
}
else
{
lean_object* v_head_722_; lean_object* v_tail_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_736_; 
v_head_722_ = lean_ctor_get(v_a_719_, 0);
v_tail_723_ = lean_ctor_get(v_a_719_, 1);
v_isSharedCheck_736_ = !lean_is_exclusive(v_a_719_);
if (v_isSharedCheck_736_ == 0)
{
v___x_725_ = v_a_719_;
v_isShared_726_ = v_isSharedCheck_736_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_tail_723_);
lean_inc(v_head_722_);
lean_dec(v_a_719_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_736_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v_fst_727_; lean_object* v___x_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v_fst_727_ = lean_ctor_get(v_head_722_, 0);
v___x_728_ = lean_unsigned_to_nat(1u);
v___x_729_ = l_List_lengthTR___redArg(v_fst_727_);
v___x_730_ = lean_nat_dec_le(v___x_728_, v___x_729_);
lean_dec(v___x_729_);
if (v___x_730_ == 0)
{
lean_del_object(v___x_725_);
lean_dec(v_head_722_);
v_a_719_ = v_tail_723_;
goto _start;
}
else
{
lean_object* v___x_733_; 
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 1, v_a_720_);
v___x_733_ = v___x_725_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_head_722_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_a_720_);
v___x_733_ = v_reuseFailAlloc_735_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
v_a_719_ = v_tail_723_;
v_a_720_ = v___x_733_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocTail___closed__1(void){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocTail___closed__0));
v___x_739_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocTail(lean_object* v_s4_740_){
_start:
{
lean_object* v___y_742_; 
if (lean_obj_tag(v_s4_740_) == 1)
{
lean_object* v_head_761_; lean_object* v___x_762_; uint8_t v___x_763_; 
v_head_761_ = lean_ctor_get(v_s4_740_, 0);
v___x_762_ = lean_unsigned_to_nat(32u);
v___x_763_ = lean_nat_dec_eq(v_head_761_, v___x_762_);
if (v___x_763_ == 0)
{
goto v___jp_759_;
}
else
{
lean_object* v___x_764_; lean_object* v_line_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_764_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_optValBytes___closed__0));
lean_inc_ref(v_s4_740_);
v_line_765_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_linesOf_go_spec__0(v_s4_740_, v_s4_740_, v___x_764_);
v___x_766_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocTail___closed__1, &lp_lean_x2dftml_LeanFtml_tocTail___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tocTail___closed__1);
v___x_767_ = lp_lean_x2dftml_LeanFtml_occurrences(v___x_766_, v_line_765_);
v___x_768_ = lean_box(0);
v___x_769_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tocTail_spec__0(v___x_767_, v___x_768_);
v___x_770_ = l_List_getLast_x3f___redArg(v___x_769_);
lean_dec(v___x_769_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v___x_771_; 
v___x_771_ = lean_box(0);
v___y_742_ = v___x_771_;
goto v___jp_741_;
}
else
{
lean_object* v_val_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_793_; 
v_val_772_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_793_ == 0)
{
v___x_774_ = v___x_770_;
v_isShared_775_ = v_isSharedCheck_793_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_val_772_);
lean_dec(v___x_770_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_793_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v_fst_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_791_; 
v_fst_776_ = lean_ctor_get(v_val_772_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v_val_772_);
if (v_isSharedCheck_791_ == 0)
{
lean_object* v_unused_792_; 
v_unused_792_ = lean_ctor_get(v_val_772_, 1);
lean_dec(v_unused_792_);
v___x_778_ = v_val_772_;
v_isShared_779_ = v_isSharedCheck_791_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_fst_776_);
lean_dec(v_val_772_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_791_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
lean_inc(v_fst_776_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v_fst_776_);
v___x_781_ = v___x_774_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_fst_776_);
v___x_781_ = v_reuseFailAlloc_790_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_782_ = l_List_lengthTR___redArg(v_fst_776_);
lean_dec(v_fst_776_);
v___x_783_ = lean_unsigned_to_nat(2u);
v___x_784_ = lean_nat_add(v___x_782_, v___x_783_);
lean_dec(v___x_782_);
v___x_785_ = l_List_drop___redArg(v___x_784_, v_s4_740_);
lean_dec_ref_known(v_s4_740_, 2);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 1, v___x_785_);
lean_ctor_set(v___x_778_, 0, v___x_781_);
v___x_787_ = v___x_778_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_781_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v___x_785_);
v___x_787_ = v_reuseFailAlloc_789_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
lean_object* v___x_788_; 
v___x_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
return v___x_788_;
}
}
}
}
}
}
}
else
{
goto v___jp_759_;
}
v___jp_741_:
{
if (lean_obj_tag(v_s4_740_) == 1)
{
lean_object* v_head_743_; lean_object* v_tail_744_; lean_object* v___x_745_; uint8_t v___x_746_; 
v_head_743_ = lean_ctor_get(v_s4_740_, 0);
lean_inc(v_head_743_);
v_tail_744_ = lean_ctor_get(v_s4_740_, 1);
lean_inc(v_tail_744_);
lean_dec_ref_known(v_s4_740_, 2);
v___x_745_ = lean_unsigned_to_nat(93u);
v___x_746_ = lean_nat_dec_eq(v_head_743_, v___x_745_);
lean_dec(v_head_743_);
if (v___x_746_ == 0)
{
lean_dec(v_tail_744_);
lean_inc(v___y_742_);
return v___y_742_;
}
else
{
if (lean_obj_tag(v_tail_744_) == 1)
{
lean_object* v_head_747_; lean_object* v_tail_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_758_; 
v_head_747_ = lean_ctor_get(v_tail_744_, 0);
v_tail_748_ = lean_ctor_get(v_tail_744_, 1);
v_isSharedCheck_758_ = !lean_is_exclusive(v_tail_744_);
if (v_isSharedCheck_758_ == 0)
{
v___x_750_ = v_tail_744_;
v_isShared_751_ = v_isSharedCheck_758_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_tail_748_);
lean_inc(v_head_747_);
lean_dec(v_tail_744_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_758_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
uint8_t v___x_752_; 
v___x_752_ = lean_nat_dec_eq(v_head_747_, v___x_745_);
lean_dec(v_head_747_);
if (v___x_752_ == 0)
{
lean_del_object(v___x_750_);
lean_dec(v_tail_748_);
lean_inc(v___y_742_);
return v___y_742_;
}
else
{
lean_object* v___x_753_; lean_object* v___x_755_; 
v___x_753_ = lean_box(0);
if (v_isShared_751_ == 0)
{
lean_ctor_set_tag(v___x_750_, 0);
lean_ctor_set(v___x_750_, 0, v___x_753_);
v___x_755_ = v___x_750_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_753_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_tail_748_);
v___x_755_ = v_reuseFailAlloc_757_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_756_; 
v___x_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
return v___x_756_;
}
}
}
}
else
{
lean_dec(v_tail_744_);
lean_inc(v___y_742_);
return v___y_742_;
}
}
}
else
{
lean_dec(v_s4_740_);
lean_inc(v___y_742_);
return v___y_742_;
}
}
v___jp_759_:
{
lean_object* v___x_760_; 
v___x_760_ = lean_box(0);
v___y_742_ = v___x_760_;
goto v___jp_741_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___lam__0(lean_object* v_val_794_, lean_object* v_x_795_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = lean_box(0);
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
lean_ctor_set(v___x_797_, 1, v_val_794_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___lam__0___boxed(lean_object* v_val_798_, lean_object* v_x_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = lp_lean_x2dftml_LeanFtml_tocMatchAt___lam__0(v_val_798_, v_x_799_);
lean_dec(v_x_799_);
return v_res_800_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__0(void){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingProcess___closed__7));
v___x_802_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_801_);
return v___x_802_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__2(void){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__1));
v___x_805_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_804_);
return v___x_805_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__4(void){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__3));
v___x_808_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_807_);
return v___x_808_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__5(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__4, &lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__4);
v___x_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
return v___x_810_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__7(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__6));
v___x_813_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_812_);
return v___x_813_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__8(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__7, &lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__7);
v___x_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt(lean_object* v_src_816_){
_start:
{
lean_object* v___x_817_; lean_object* v_fst_819_; lean_object* v_snd_820_; lean_object* v___y_852_; lean_object* v___x_855_; lean_object* v_s1_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_817_ = lean_unsigned_to_nat(10u);
v___x_855_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_817_, v_src_816_);
v_s1_856_ = l_List_drop___redArg(v___x_855_, v_src_816_);
v___x_857_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__2, &lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__2);
v___x_858_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_857_, v_s1_856_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v___x_859_; 
v___x_859_ = lean_box(0);
return v___x_859_;
}
else
{
lean_object* v_val_860_; lean_object* v___y_862_; 
v_val_860_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_val_860_);
lean_dec_ref_known(v___x_858_, 1);
if (lean_obj_tag(v_val_860_) == 1)
{
lean_object* v_head_866_; lean_object* v_tail_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v_head_866_ = lean_ctor_get(v_val_860_, 0);
v_tail_867_ = lean_ctor_get(v_val_860_, 1);
v___x_868_ = lean_unsigned_to_nat(102u);
v___x_869_ = lean_nat_dec_eq(v_head_866_, v___x_868_);
if (v___x_869_ == 0)
{
goto v___jp_864_;
}
else
{
if (lean_obj_tag(v_tail_867_) == 1)
{
lean_object* v_head_870_; lean_object* v_tail_871_; lean_object* v___x_872_; uint8_t v___x_873_; 
v_head_870_ = lean_ctor_get(v_tail_867_, 0);
v_tail_871_ = lean_ctor_get(v_tail_867_, 1);
v___x_872_ = lean_unsigned_to_nat(60u);
v___x_873_ = lean_nat_dec_eq(v_head_870_, v___x_872_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_874_ = lean_unsigned_to_nat(62u);
v___x_875_ = lean_nat_dec_eq(v_head_870_, v___x_874_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; 
lean_inc_ref(v_tail_867_);
v___x_876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_868_);
lean_ctor_set(v___x_876_, 1, v_tail_867_);
v___y_862_ = v___x_876_;
goto v___jp_861_;
}
else
{
lean_object* v___x_877_; 
lean_inc(v_tail_871_);
lean_dec_ref_known(v_val_860_, 2);
v___x_877_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__5, &lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__5);
v_fst_819_ = v___x_877_;
v_snd_820_ = v_tail_871_;
goto v___jp_818_;
}
}
else
{
lean_object* v___x_878_; 
lean_inc(v_tail_871_);
lean_dec_ref_known(v_val_860_, 2);
v___x_878_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__8, &lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__8);
v_fst_819_ = v___x_878_;
v_snd_820_ = v_tail_871_;
goto v___jp_818_;
}
}
else
{
lean_object* v___x_879_; 
lean_inc(v_tail_867_);
v___x_879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_868_);
lean_ctor_set(v___x_879_, 1, v_tail_867_);
v___y_862_ = v___x_879_;
goto v___jp_861_;
}
}
}
else
{
goto v___jp_864_;
}
v___jp_861_:
{
lean_object* v___x_863_; 
v___x_863_ = lp_lean_x2dftml_LeanFtml_tocMatchAt___lam__0(v_val_860_, v___y_862_);
lean_dec(v___y_862_);
v___y_852_ = v___x_863_;
goto v___jp_851_;
}
v___jp_864_:
{
lean_object* v___x_865_; 
lean_inc(v_val_860_);
v___x_865_ = lp_lean_x2dftml_LeanFtml_tocMatchAt___lam__0(v_val_860_, v_val_860_);
lean_dec(v_val_860_);
v___y_852_ = v___x_865_;
goto v___jp_851_;
}
}
v___jp_818_:
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__0, &lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_tocMatchAt___closed__0);
v___x_822_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_821_, v_snd_820_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v___x_823_; 
lean_dec(v_fst_819_);
v___x_823_ = lean_box(0);
return v___x_823_;
}
else
{
lean_object* v_val_824_; lean_object* v___x_825_; 
v_val_824_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_val_824_);
lean_dec_ref_known(v___x_822_, 1);
v___x_825_ = lp_lean_x2dftml_LeanFtml_tocTail(v_val_824_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v___x_826_; 
lean_dec(v_fst_819_);
v___x_826_ = lean_box(0);
return v___x_826_;
}
else
{
lean_object* v_val_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_850_; 
v_val_827_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_850_ == 0)
{
v___x_829_ = v___x_825_;
v_isShared_830_ = v_isSharedCheck_850_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_val_827_);
lean_dec(v___x_825_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_850_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v_fst_831_; lean_object* v_snd_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_849_; 
v_fst_831_ = lean_ctor_get(v_val_827_, 0);
v_snd_832_ = lean_ctor_get(v_val_827_, 1);
v_isSharedCheck_849_ = !lean_is_exclusive(v_val_827_);
if (v_isSharedCheck_849_ == 0)
{
v___x_834_ = v_val_827_;
v_isShared_835_ = v_isSharedCheck_849_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_snd_832_);
lean_inc(v_fst_831_);
lean_dec(v_val_827_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_849_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v_trail_836_; lean_object* v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; lean_object* v___x_840_; lean_object* v___x_842_; 
v_trail_836_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_817_, v_snd_832_);
lean_inc(v_trail_836_);
v___x_837_ = l_List_drop___redArg(v_trail_836_, v_snd_832_);
lean_dec(v_snd_832_);
v___x_838_ = lean_unsigned_to_nat(0u);
v___x_839_ = lean_nat_dec_lt(v___x_838_, v_trail_836_);
lean_dec(v_trail_836_);
v___x_840_ = lean_box(v___x_839_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 1, v___x_840_);
lean_ctor_set(v___x_834_, 0, v___x_837_);
v___x_842_ = v___x_834_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___x_840_);
v___x_842_ = v_reuseFailAlloc_848_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_846_; 
v___x_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_843_, 0, v_fst_831_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
v___x_844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_844_, 0, v_fst_819_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 0, v___x_844_);
v___x_846_ = v___x_829_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_844_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
}
}
v___jp_851_:
{
lean_object* v_fst_853_; lean_object* v_snd_854_; 
v_fst_853_ = lean_ctor_get(v___y_852_, 0);
lean_inc(v_fst_853_);
v_snd_854_ = lean_ctor_get(v___y_852_, 1);
lean_inc(v_snd_854_);
lean_dec_ref(v___y_852_);
v_fst_819_ = v_fst_853_;
v_snd_820_ = v_snd_854_;
goto v___jp_818_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocMatchAt___boxed(lean_object* v_src_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = lp_lean_x2dftml_LeanFtml_tocMatchAt(v_src_880_);
lean_dec(v_src_880_);
return v_res_881_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__2(void){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_884_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocItems___closed__1));
v___x_885_ = l_String_toListImpl(v___x_884_);
return v___x_885_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__3(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocItems___closed__2, &lp_lean_x2dftml_LeanFtml_tocItems___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__2);
v___x_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_887_, 0, v___x_886_);
return v___x_887_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__4(void){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_888_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocItems___closed__3, &lp_lean_x2dftml_LeanFtml_tocItems___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__3);
v___x_889_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__2, &lp_lean_x2dftml_LeanFtml_bqPush___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__2);
v___x_890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_889_);
lean_ctor_set(v___x_890_, 1, v___x_888_);
return v___x_890_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__6(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_892_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocItems___closed__5));
v___x_893_ = l_String_toListImpl(v___x_892_);
return v___x_893_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__8(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocItems___closed__7));
v___x_896_ = l_String_toListImpl(v___x_895_);
return v___x_896_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__9(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocItems___closed__8, &lp_lean_x2dftml_LeanFtml_tocItems___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__8);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
return v___x_898_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__10(void){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_899_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocItems___closed__9, &lp_lean_x2dftml_LeanFtml_tocItems___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__9);
v___x_900_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__2, &lp_lean_x2dftml_LeanFtml_bqPush___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__2);
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
lean_ctor_set(v___x_901_, 1, v___x_899_);
return v___x_901_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__11(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = lean_unsigned_to_nat(0u);
v___x_903_ = lean_nat_to_int(v___x_902_);
return v___x_903_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__12(void){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocItems___closed__11, &lp_lean_x2dftml_LeanFtml_tocItems___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__11);
v___x_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocItems(lean_object* v_heads_906_, lean_object* v_toks_907_, lean_object* v_count_908_){
_start:
{
if (lean_obj_tag(v_heads_906_) == 0)
{
lean_object* v___x_909_; lean_object* v___x_910_; 
lean_dec(v_count_908_);
v___x_909_ = lean_box(0);
v___x_910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
lean_ctor_set(v___x_910_, 1, v_toks_907_);
return v___x_910_;
}
else
{
lean_object* v_head_911_; lean_object* v_tail_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_1006_; 
v_head_911_ = lean_ctor_get(v_heads_906_, 0);
v_tail_912_ = lean_ctor_get(v_heads_906_, 1);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_heads_906_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_914_ = v_heads_906_;
v_isShared_915_ = v_isSharedCheck_1006_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_tail_912_);
lean_inc(v_head_911_);
lean_dec(v_heads_906_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_1006_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v_opts_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_1004_; 
v_opts_916_ = lean_ctor_get(v_head_911_, 1);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_head_911_);
if (v_isSharedCheck_1004_ == 0)
{
lean_object* v_unused_1005_; 
v_unused_1005_ = lean_ctor_get(v_head_911_, 0);
lean_dec(v_unused_1005_);
v___x_918_ = v_head_911_;
v_isShared_919_ = v_isSharedCheck_1004_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_opts_916_);
lean_dec(v_head_911_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_1004_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__2, &lp_lean_x2dftml_LeanFtml_bqPush___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__2);
v___x_921_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_916_, v___x_920_);
if (lean_obj_tag(v___x_921_) == 1)
{
lean_object* v_val_922_; 
v_val_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_val_922_);
lean_dec_ref_known(v___x_921_, 1);
if (lean_obj_tag(v_val_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_1001_; 
v_a_923_ = lean_ctor_get(v_val_922_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v_val_922_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_925_ = v_val_922_;
v_isShared_926_ = v_isSharedCheck_1001_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v_val_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_1001_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_927_; uint8_t v___x_928_; 
v___x_927_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__4, &lp_lean_x2dftml_LeanFtml_bqPush___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__4);
v___x_928_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_923_, v___x_927_);
lean_dec(v_a_923_);
if (v___x_928_ == 0)
{
lean_del_object(v___x_925_);
lean_del_object(v___x_918_);
lean_dec(v_opts_916_);
lean_del_object(v___x_914_);
v_heads_906_ = v_tail_912_;
goto _start;
}
else
{
lean_object* v___x_930_; lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___y_934_; lean_object* v___y_935_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_993_; lean_object* v___x_998_; 
v___x_930_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingProcess___closed__4, &lp_lean_x2dftml_LeanFtml_headingProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_headingProcess___closed__4);
v___x_998_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_916_, v___x_930_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v___x_999_; 
v___x_999_ = lean_box(3);
v___y_993_ = v___x_999_;
goto v___jp_992_;
}
else
{
lean_object* v_val_1000_; 
v_val_1000_ = lean_ctor_get(v___x_998_, 0);
lean_inc(v_val_1000_);
lean_dec_ref_known(v___x_998_, 1);
v___y_993_ = v_val_1000_;
goto v___jp_992_;
}
v___jp_931_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_944_; 
v___x_936_ = l_List_lengthTR___redArg(v_toks_907_);
v___x_937_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocItems___closed__0));
v___x_938_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocItems___closed__4, &lp_lean_x2dftml_LeanFtml_tocItems___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__4);
v___x_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_930_);
lean_ctor_set(v___x_939_, 1, v___y_932_);
lean_inc(v___y_934_);
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v___y_934_);
lean_ctor_set(v___x_940_, 1, v___y_933_);
v___x_941_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocItems___closed__6, &lp_lean_x2dftml_LeanFtml_tocItems___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__6);
lean_inc(v_count_908_);
v___x_942_ = lean_nat_to_int(v_count_908_);
if (v_isShared_926_ == 0)
{
lean_ctor_set_tag(v___x_925_, 1);
lean_ctor_set(v___x_925_, 0, v___x_942_);
v___x_944_ = v___x_925_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_942_);
v___x_944_ = v_reuseFailAlloc_983_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_941_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = lean_box(0);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 1, v___x_946_);
lean_ctor_set(v___x_914_, 0, v___x_945_);
v___x_948_ = v___x_914_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v___x_946_);
v___x_948_ = v_reuseFailAlloc_982_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_953_; 
lean_inc_ref(v___x_940_);
v___x_949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_940_);
lean_ctor_set(v___x_949_, 1, v___x_948_);
v___x_950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_939_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
v___x_951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_938_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 1, v___x_951_);
lean_ctor_set(v___x_918_, 0, v___x_937_);
v___x_953_ = v___x_918_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v___x_951_);
v___x_953_ = v_reuseFailAlloc_981_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
lean_object* v___x_954_; lean_object* v_t1_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v_t2_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v_fst_966_; lean_object* v_snd_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_980_; 
v___x_954_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
lean_ctor_set(v___x_954_, 1, v___x_946_);
v_t1_955_ = l_List_appendTR___redArg(v_toks_907_, v___x_954_);
v___x_956_ = l_List_lengthTR___redArg(v_t1_955_);
v___x_957_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocItems___closed__10, &lp_lean_x2dftml_LeanFtml_tocItems___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__10);
v___x_958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_940_);
lean_ctor_set(v___x_958_, 1, v___x_946_);
v___x_959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_957_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_937_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
v___x_961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
lean_ctor_set(v___x_961_, 1, v___x_946_);
v_t2_962_ = l_List_appendTR___redArg(v_t1_955_, v___x_961_);
v___x_963_ = lean_unsigned_to_nat(1u);
v___x_964_ = lean_nat_add(v_count_908_, v___x_963_);
lean_dec(v_count_908_);
v___x_965_ = lp_lean_x2dftml_LeanFtml_tocItems(v_tail_912_, v_t2_962_, v___x_964_);
v_fst_966_ = lean_ctor_get(v___x_965_, 0);
v_snd_967_ = lean_ctor_get(v___x_965_, 1);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_980_ == 0)
{
v___x_969_ = v___x_965_;
v_isShared_970_ = v_isSharedCheck_980_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_snd_967_);
lean_inc(v_fst_966_);
lean_dec(v___x_965_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_980_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v_text_971_; lean_object* v_startPh_972_; lean_object* v_endPh_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_978_; 
v_text_971_ = lp_lean_x2dftml_LeanFtml_optValBytes(v___y_935_);
lean_dec(v___y_935_);
v_startPh_972_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_936_);
v_endPh_973_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_956_);
v___x_974_ = l_List_appendTR___redArg(v_startPh_972_, v_text_971_);
v___x_975_ = l_List_appendTR___redArg(v___x_974_, v_endPh_973_);
v___x_976_ = l_List_appendTR___redArg(v___x_975_, v_fst_966_);
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 0, v___x_976_);
v___x_978_ = v___x_969_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_976_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_snd_967_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
}
}
v___jp_984_:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingProcess___closed__2, &lp_lean_x2dftml_LeanFtml_headingProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_headingProcess___closed__2);
v___x_989_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_916_, v___x_988_);
lean_dec(v_opts_916_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v___x_990_; 
v___x_990_ = lean_box(3);
v___y_932_ = v___y_985_;
v___y_933_ = v___y_987_;
v___y_934_ = v___y_986_;
v___y_935_ = v___x_990_;
goto v___jp_931_;
}
else
{
lean_object* v_val_991_; 
v_val_991_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_val_991_);
lean_dec_ref_known(v___x_989_, 1);
v___y_932_ = v___y_985_;
v___y_933_ = v___y_987_;
v___y_934_ = v___y_986_;
v___y_935_ = v_val_991_;
goto v___jp_931_;
}
}
v___jp_992_:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__8, &lp_lean_x2dftml_LeanFtml_bqPush___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__8);
v___x_995_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_916_, v___x_994_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v___x_996_; 
v___x_996_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocItems___closed__12, &lp_lean_x2dftml_LeanFtml_tocItems___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__12);
v___y_985_ = v___y_993_;
v___y_986_ = v___x_994_;
v___y_987_ = v___x_996_;
goto v___jp_984_;
}
else
{
lean_object* v_val_997_; 
v_val_997_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_val_997_);
lean_dec_ref_known(v___x_995_, 1);
v___y_985_ = v___y_993_;
v___y_986_ = v___x_994_;
v___y_987_ = v_val_997_;
goto v___jp_984_;
}
}
}
}
}
else
{
lean_dec(v_val_922_);
lean_del_object(v___x_918_);
lean_dec(v_opts_916_);
lean_del_object(v___x_914_);
v_heads_906_ = v_tail_912_;
goto _start;
}
}
else
{
lean_dec(v___x_921_);
lean_del_object(v___x_918_);
lean_dec(v_opts_916_);
lean_del_object(v___x_914_);
v_heads_906_ = v_tail_912_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tocProcess_spec__0(lean_object* v_a_1007_, lean_object* v_a_1008_){
_start:
{
if (lean_obj_tag(v_a_1007_) == 0)
{
lean_object* v___x_1009_; 
v___x_1009_ = l_List_reverse___redArg(v_a_1008_);
return v___x_1009_;
}
else
{
lean_object* v_head_1010_; lean_object* v_tail_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1023_; 
v_head_1010_ = lean_ctor_get(v_a_1007_, 0);
v_tail_1011_ = lean_ctor_get(v_a_1007_, 1);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_a_1007_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1013_ = v_a_1007_;
v_isShared_1014_ = v_isSharedCheck_1023_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_tail_1011_);
lean_inc(v_head_1010_);
lean_dec(v_a_1007_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1023_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v_rule_1015_; lean_object* v___x_1016_; uint8_t v___x_1017_; 
v_rule_1015_ = lean_ctor_get(v_head_1010_, 0);
v___x_1016_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingProcess___closed__0));
v___x_1017_ = lean_string_dec_eq(v_rule_1015_, v___x_1016_);
if (v___x_1017_ == 0)
{
lean_del_object(v___x_1013_);
lean_dec(v_head_1010_);
v_a_1007_ = v_tail_1011_;
goto _start;
}
else
{
lean_object* v___x_1020_; 
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 1, v_a_1008_);
v___x_1020_ = v___x_1013_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_head_1010_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v_a_1008_);
v___x_1020_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
v_a_1007_ = v_tail_1011_;
v_a_1008_ = v___x_1020_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
if (lean_obj_tag(v_a_1024_) == 0)
{
lean_object* v___x_1026_; 
v___x_1026_ = l_List_reverse___redArg(v_a_1025_);
return v___x_1026_;
}
else
{
lean_object* v_head_1027_; lean_object* v_tail_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1047_; 
v_head_1027_ = lean_ctor_get(v_a_1024_, 0);
v_tail_1028_ = lean_ctor_get(v_a_1024_, 1);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_a_1024_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1030_ = v_a_1024_;
v_isShared_1031_ = v_isSharedCheck_1047_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_tail_1028_);
lean_inc(v_head_1027_);
lean_dec(v_a_1024_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1047_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v_fst_1032_; lean_object* v_snd_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1046_; 
v_fst_1032_ = lean_ctor_get(v_head_1027_, 0);
v_snd_1033_ = lean_ctor_get(v_head_1027_, 1);
v_isSharedCheck_1046_ = !lean_is_exclusive(v_head_1027_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1035_ = v_head_1027_;
v_isShared_1036_ = v_isSharedCheck_1046_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_snd_1033_);
lean_inc(v_fst_1032_);
lean_dec(v_head_1027_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1046_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1040_; 
v___x_1037_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_fst_1032_);
v___x_1038_ = lp_lean_x2dftml_LeanFtml_textVal(v_snd_1033_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 1, v___x_1038_);
lean_ctor_set(v___x_1035_, 0, v___x_1037_);
v___x_1040_ = v___x_1035_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1037_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v___x_1038_);
v___x_1040_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1042_; 
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 1, v_a_1025_);
lean_ctor_set(v___x_1030_, 0, v___x_1040_);
v___x_1042_ = v___x_1030_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1040_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v_a_1025_);
v___x_1042_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
v_a_1024_ = v_tail_1028_;
v_a_1025_ = v___x_1042_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__1(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocProcess___closed__0));
v___x_1050_ = l_String_toListImpl(v___x_1049_);
return v___x_1050_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__2(void){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocProcess___closed__1, &lp_lean_x2dftml_LeanFtml_tocProcess___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__1);
v___x_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
return v___x_1052_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__3(void){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1053_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocProcess___closed__2, &lp_lean_x2dftml_LeanFtml_tocProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__2);
v___x_1054_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__2, &lp_lean_x2dftml_LeanFtml_bqPush___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__2);
v___x_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
lean_ctor_set(v___x_1055_, 1, v___x_1053_);
return v___x_1055_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__4(void){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1056_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocItems___closed__12, &lp_lean_x2dftml_LeanFtml_tocItems___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_tocItems___closed__12);
v___x_1057_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__8, &lp_lean_x2dftml_LeanFtml_bqPush___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__8);
v___x_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set(v___x_1058_, 1, v___x_1056_);
return v___x_1058_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__6(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocProcess___closed__5));
v___x_1061_ = l_String_toListImpl(v___x_1060_);
return v___x_1061_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__8(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocProcess___closed__7));
v___x_1064_ = l_String_toListImpl(v___x_1063_);
return v___x_1064_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__10(void){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocProcess___closed__9));
v___x_1067_ = l_String_toListImpl(v___x_1066_);
return v___x_1067_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__11(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocProcess___closed__10, &lp_lean_x2dftml_LeanFtml_tocProcess___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__10);
v___x_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
return v___x_1069_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__12(void){
_start:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1070_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocProcess___closed__11, &lp_lean_x2dftml_LeanFtml_tocProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__11);
v___x_1071_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_bqPush___closed__2, &lp_lean_x2dftml_LeanFtml_bqPush___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_bqPush___closed__2);
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
lean_ctor_set(v___x_1072_, 1, v___x_1070_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocProcess(lean_object* v_align_1075_, lean_object* v_g2_1076_, uint8_t v_trailPos_1077_, lean_object* v_toks_1078_){
_start:
{
lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1126_; lean_object* v___y_1129_; 
if (lean_obj_tag(v_g2_1076_) == 0)
{
lean_object* v___x_1140_; 
v___x_1140_ = lean_box(0);
v___y_1129_ = v___x_1140_;
goto v___jp_1128_;
}
else
{
lean_object* v_val_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v_val_1141_ = lean_ctor_get(v_g2_1076_, 0);
v___x_1142_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v_val_1141_);
v___x_1143_ = lean_box(0);
v___x_1144_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(v___x_1142_, v___x_1143_);
v___y_1129_ = v___x_1144_;
goto v___jp_1128_;
}
v___jp_1079_:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v_t1_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v_fst_1102_; lean_object* v_snd_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1124_; 
v___x_1082_ = l_List_lengthTR___redArg(v_toks_1078_);
v___x_1083_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocItems___closed__0));
v___x_1084_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocProcess___closed__3, &lp_lean_x2dftml_LeanFtml_tocProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__3);
v___x_1085_ = lean_unsigned_to_nat(0u);
v___x_1086_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocProcess___closed__4, &lp_lean_x2dftml_LeanFtml_tocProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__4);
v___x_1087_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocProcess___closed__6, &lp_lean_x2dftml_LeanFtml_tocProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__6);
v___x_1088_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1088_, 0, v___y_1080_);
v___x_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1087_);
lean_ctor_set(v___x_1089_, 1, v___x_1088_);
v___x_1090_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocProcess___closed__8, &lp_lean_x2dftml_LeanFtml_tocProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__8);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set(v___x_1091_, 1, v___y_1081_);
v___x_1092_ = lean_box(0);
v___x_1093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
lean_inc_ref(v___x_1093_);
v___x_1094_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1089_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1086_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
v___x_1096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1084_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1083_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
lean_ctor_set(v___x_1098_, 1, v___x_1092_);
lean_inc(v_toks_1078_);
v_t1_1099_ = l_List_appendTR___redArg(v_toks_1078_, v___x_1098_);
v___x_1100_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tocProcess_spec__0(v_toks_1078_, v___x_1092_);
v___x_1101_ = lp_lean_x2dftml_LeanFtml_tocItems(v___x_1100_, v_t1_1099_, v___x_1085_);
v_fst_1102_ = lean_ctor_get(v___x_1101_, 0);
v_snd_1103_ = lean_ctor_get(v___x_1101_, 1);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1105_ = v___x_1101_;
v_isShared_1106_ = v_isSharedCheck_1124_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_snd_1103_);
lean_inc(v_fst_1102_);
lean_dec(v___x_1101_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1124_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v_startPh_1107_; lean_object* v___x_1108_; lean_object* v_endPh_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v_t3_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1122_; 
v_startPh_1107_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1082_);
v___x_1108_ = l_List_lengthTR___redArg(v_snd_1103_);
v_endPh_1109_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1108_);
v___x_1110_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocProcess___closed__12, &lp_lean_x2dftml_LeanFtml_tocProcess___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_tocProcess___closed__12);
v___x_1111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1086_);
lean_ctor_set(v___x_1111_, 1, v___x_1093_);
v___x_1112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1110_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1083_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
v___x_1114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
lean_ctor_set(v___x_1114_, 1, v___x_1092_);
v_t3_1115_ = l_List_appendTR___redArg(v_snd_1103_, v___x_1114_);
v___x_1116_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_bqPush___closed__11));
v___x_1117_ = l_List_appendTR___redArg(v___x_1116_, v_startPh_1107_);
v___x_1118_ = l_List_appendTR___redArg(v___x_1117_, v_fst_1102_);
v___x_1119_ = l_List_appendTR___redArg(v___x_1118_, v_endPh_1109_);
v___x_1120_ = l_List_appendTR___redArg(v___x_1119_, v___x_1116_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 1, v_t3_1115_);
lean_ctor_set(v___x_1105_, 0, v___x_1120_);
v___x_1122_ = v___x_1105_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1120_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v_t3_1115_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
v___jp_1125_:
{
lean_object* v___x_1127_; 
v___x_1127_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocProcess___closed__13));
v___y_1080_ = v___y_1126_;
v___y_1081_ = v___x_1127_;
goto v___jp_1079_;
}
v___jp_1128_:
{
if (lean_obj_tag(v_align_1075_) == 0)
{
if (lean_obj_tag(v_g2_1076_) == 0)
{
if (v_trailPos_1077_ == 0)
{
lean_object* v___x_1130_; 
v___x_1130_ = lean_box(3);
v___y_1080_ = v___y_1129_;
v___y_1081_ = v___x_1130_;
goto v___jp_1079_;
}
else
{
v___y_1126_ = v___y_1129_;
goto v___jp_1125_;
}
}
else
{
v___y_1126_ = v___y_1129_;
goto v___jp_1125_;
}
}
else
{
lean_object* v_val_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1139_; 
v_val_1131_ = lean_ctor_get(v_align_1075_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_align_1075_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1133_ = v_align_1075_;
v_isShared_1134_ = v_isSharedCheck_1139_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_val_1131_);
lean_dec(v_align_1075_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1139_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1135_; lean_object* v___x_1137_; 
v___x_1135_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_val_1131_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set_tag(v___x_1133_, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1135_);
v___x_1137_ = v___x_1133_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v___x_1135_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
v___y_1080_ = v___y_1129_;
v___y_1081_ = v___x_1137_;
goto v___jp_1079_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocProcess___boxed(lean_object* v_align_1145_, lean_object* v_g2_1146_, lean_object* v_trailPos_1147_, lean_object* v_toks_1148_){
_start:
{
uint8_t v_trailPos_boxed_1149_; lean_object* v_res_1150_; 
v_trailPos_boxed_1149_ = lean_unbox(v_trailPos_1147_);
v_res_1150_ = lp_lean_x2dftml_LeanFtml_tocProcess(v_align_1145_, v_g2_1146_, v_trailPos_boxed_1149_, v_toks_1148_);
lean_dec(v_g2_1146_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocScan(lean_object* v_src_1151_, lean_object* v_toks_1152_, uint8_t v_atStart_1153_, lean_object* v_x_1154_){
_start:
{
lean_object* v_zero_1155_; uint8_t v_isZero_1156_; 
v_zero_1155_ = lean_unsigned_to_nat(0u);
v_isZero_1156_ = lean_nat_dec_eq(v_x_1154_, v_zero_1155_);
if (v_isZero_1156_ == 1)
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1157_, 0, v_src_1151_);
lean_ctor_set(v___x_1157_, 1, v_toks_1152_);
return v___x_1157_;
}
else
{
if (lean_obj_tag(v_src_1151_) == 0)
{
lean_object* v___x_1158_; 
v___x_1158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1158_, 0, v_src_1151_);
lean_ctor_set(v___x_1158_, 1, v_toks_1152_);
return v___x_1158_;
}
else
{
lean_object* v_head_1159_; lean_object* v_tail_1160_; lean_object* v_one_1161_; lean_object* v_n_1162_; 
v_head_1159_ = lean_ctor_get(v_src_1151_, 0);
lean_inc(v_head_1159_);
v_tail_1160_ = lean_ctor_get(v_src_1151_, 1);
lean_inc(v_tail_1160_);
v_one_1161_ = lean_unsigned_to_nat(1u);
v_n_1162_ = lean_nat_sub(v_x_1154_, v_one_1161_);
if (v_atStart_1153_ == 0)
{
lean_dec_ref_known(v_src_1151_, 2);
goto v___jp_1163_;
}
else
{
lean_object* v___x_1177_; 
v___x_1177_ = lp_lean_x2dftml_LeanFtml_tocMatchAt(v_src_1151_);
lean_dec_ref_known(v_src_1151_, 2);
if (lean_obj_tag(v___x_1177_) == 0)
{
goto v___jp_1163_;
}
else
{
lean_object* v_val_1178_; lean_object* v_snd_1179_; lean_object* v_snd_1180_; lean_object* v_fst_1181_; lean_object* v_fst_1182_; lean_object* v_fst_1183_; lean_object* v_snd_1184_; uint8_t v___x_1185_; lean_object* v___x_1186_; lean_object* v_fst_1187_; lean_object* v_snd_1188_; uint8_t v___x_1189_; lean_object* v___x_1190_; lean_object* v_fst_1191_; lean_object* v_snd_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1200_; 
lean_dec(v_tail_1160_);
lean_dec(v_head_1159_);
v_val_1178_ = lean_ctor_get(v___x_1177_, 0);
lean_inc(v_val_1178_);
lean_dec_ref_known(v___x_1177_, 1);
v_snd_1179_ = lean_ctor_get(v_val_1178_, 1);
lean_inc(v_snd_1179_);
v_snd_1180_ = lean_ctor_get(v_snd_1179_, 1);
lean_inc(v_snd_1180_);
v_fst_1181_ = lean_ctor_get(v_val_1178_, 0);
lean_inc(v_fst_1181_);
lean_dec(v_val_1178_);
v_fst_1182_ = lean_ctor_get(v_snd_1179_, 0);
lean_inc(v_fst_1182_);
lean_dec(v_snd_1179_);
v_fst_1183_ = lean_ctor_get(v_snd_1180_, 0);
lean_inc(v_fst_1183_);
v_snd_1184_ = lean_ctor_get(v_snd_1180_, 1);
lean_inc(v_snd_1184_);
lean_dec(v_snd_1180_);
v___x_1185_ = lean_unbox(v_snd_1184_);
v___x_1186_ = lp_lean_x2dftml_LeanFtml_tocProcess(v_fst_1181_, v_fst_1182_, v___x_1185_, v_toks_1152_);
lean_dec(v_fst_1182_);
v_fst_1187_ = lean_ctor_get(v___x_1186_, 0);
lean_inc(v_fst_1187_);
v_snd_1188_ = lean_ctor_get(v___x_1186_, 1);
lean_inc(v_snd_1188_);
lean_dec_ref(v___x_1186_);
v___x_1189_ = lean_unbox(v_snd_1184_);
lean_dec(v_snd_1184_);
v___x_1190_ = lp_lean_x2dftml_LeanFtml_tocScan(v_fst_1183_, v_snd_1188_, v___x_1189_, v_n_1162_);
lean_dec(v_n_1162_);
v_fst_1191_ = lean_ctor_get(v___x_1190_, 0);
v_snd_1192_ = lean_ctor_get(v___x_1190_, 1);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1194_ = v___x_1190_;
v_isShared_1195_ = v_isSharedCheck_1200_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_snd_1192_);
lean_inc(v_fst_1191_);
lean_dec(v___x_1190_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1200_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1196_ = l_List_appendTR___redArg(v_fst_1187_, v_fst_1191_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 0, v___x_1196_);
v___x_1198_ = v___x_1194_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1199_, 1, v_snd_1192_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
v___jp_1163_:
{
lean_object* v___x_1164_; uint8_t v___x_1165_; lean_object* v___x_1166_; lean_object* v_fst_1167_; lean_object* v_snd_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1176_; 
v___x_1164_ = lean_unsigned_to_nat(10u);
v___x_1165_ = lean_nat_dec_eq(v_head_1159_, v___x_1164_);
v___x_1166_ = lp_lean_x2dftml_LeanFtml_tocScan(v_tail_1160_, v_toks_1152_, v___x_1165_, v_n_1162_);
lean_dec(v_n_1162_);
v_fst_1167_ = lean_ctor_get(v___x_1166_, 0);
v_snd_1168_ = lean_ctor_get(v___x_1166_, 1);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1170_ = v___x_1166_;
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_snd_1168_);
lean_inc(v_fst_1167_);
lean_dec(v___x_1166_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1174_; 
v___x_1172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1172_, 0, v_head_1159_);
lean_ctor_set(v___x_1172_, 1, v_fst_1167_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 0, v___x_1172_);
v___x_1174_ = v___x_1170_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v___x_1172_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_snd_1168_);
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocScan___boxed(lean_object* v_src_1201_, lean_object* v_toks_1202_, lean_object* v_atStart_1203_, lean_object* v_x_1204_){
_start:
{
uint8_t v_atStart_boxed_1205_; lean_object* v_res_1206_; 
v_atStart_boxed_1205_ = lean_unbox(v_atStart_1203_);
v_res_1206_ = lp_lean_x2dftml_LeanFtml_tocScan(v_src_1201_, v_toks_1202_, v_atStart_boxed_1205_, v_x_1204_);
lean_dec(v_x_1204_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocRule___lam__0(lean_object* v_src_1207_, lean_object* v_toks_1208_){
_start:
{
uint8_t v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1209_ = 1;
v___x_1210_ = l_List_lengthTR___redArg(v_src_1207_);
v___x_1211_ = lean_unsigned_to_nat(1u);
v___x_1212_ = lean_nat_add(v___x_1210_, v___x_1211_);
lean_dec(v___x_1210_);
v___x_1213_ = lp_lean_x2dftml_LeanFtml_tocScan(v_src_1207_, v_toks_1208_, v___x_1209_, v___x_1212_);
lean_dec(v___x_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocRule(lean_object* v_st_1215_){
_start:
{
lean_object* v___f_1216_; lean_object* v___x_1217_; 
v___f_1216_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocRule___closed__0));
v___x_1217_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1215_, v___f_1216_);
return v___x_1217_;
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
lean_object* initialize_lean_x2dftml_LeanFtml_NotesRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_BlockRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_NotesRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
