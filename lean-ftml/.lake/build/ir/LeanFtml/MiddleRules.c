// Lean compiler output
// Module: LeanFtml.MiddleRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runCount(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runCount___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_lineEndAfter(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineEndAfter___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_clearfloatEnd(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_lineScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_lineScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lineScan___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_lineScan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_lineScan___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_lineScan___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lineScan___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_lineScan___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "side"};
static const lean_object* lp_lean_x2dftml_LeanFtml_lineScan___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lineScan___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_lineScan___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_lineScan___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_lineScan___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* lp_lean_x2dftml_LeanFtml_lineScan___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lineScan___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_lineScan___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_lineScan___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_lineScan___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_lineScan___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_lineScan___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_lineScan___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_lineScan___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_lineScan___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_lineScan___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_lineScan___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_lineScan___closed__9;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineScan(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_horizRule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Horiz"};
static const lean_object* lp_lean_x2dftml_LeanFtml_horizRule___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_horizRule___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_horizRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_horizRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_horizRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_horizRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_horizRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_horizRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_separatorRule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Separator"};
static const lean_object* lp_lean_x2dftml_LeanFtml_separatorRule___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_separatorRule___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_separatorRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_separatorRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_separatorRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_separatorRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_separatorRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_separatorRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_clearfloatRule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Clearfloat"};
static const lean_object* lp_lean_x2dftml_LeanFtml_clearfloatRule___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_clearfloatRule___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_clearfloatRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_clearfloatRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_clearfloatRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_clearfloatRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_clearfloatRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_clearfloatRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_breakScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Break"};
static const lean_object* lp_lean_x2dftml_LeanFtml_breakScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_breakScan___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_breakScan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_breakScan___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_breakScan___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_breakScan___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_breakScan___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_breakScan___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_breakScan___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_breakScan___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_breakScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_breakScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_breakRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_breakRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_breakRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_breakRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_breakRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_breakRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitAtByte(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitAtByte___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_centerScan_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_centerScan_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_centerScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_centerScan___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_centerScan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Center"};
static const lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_centerScan___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_centerScan___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_centerScan___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_centerScan___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_centerScan___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_centerScan___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_centerScan___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_centerScan___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__17;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_centerScan___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_centerScan___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_centerScan___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_centerScan___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_centerScan___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_centerScan___closed__19_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_centerScan(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_centerScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_centerRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_centerRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_centerRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_centerRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_centerRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_centerRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runCount(lean_object* v_x_1_, lean_object* v_x_2_, lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
return v_x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; uint8_t v___x_6_; 
v_head_4_ = lean_ctor_get(v_x_1_, 0);
v_tail_5_ = lean_ctor_get(v_x_1_, 1);
v___x_6_ = lean_nat_dec_eq(v_head_4_, v_x_2_);
if (v___x_6_ == 0)
{
return v_x_3_;
}
else
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(1u);
v___x_8_ = lean_nat_add(v_x_3_, v___x_7_);
lean_dec(v_x_3_);
v_x_1_ = v_tail_5_;
v_x_3_ = v___x_8_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runCount___boxed(lean_object* v_x_10_, lean_object* v_x_11_, lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = lp_lean_x2dftml_LeanFtml_runCount(v_x_10_, v_x_11_, v_x_12_);
lean_dec(v_x_11_);
lean_dec(v_x_10_);
return v_res_13_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_lineEndAfter(lean_object* v_x_14_){
_start:
{
if (lean_obj_tag(v_x_14_) == 0)
{
uint8_t v___x_15_; 
v___x_15_ = 1;
return v___x_15_;
}
else
{
lean_object* v_head_16_; lean_object* v___x_17_; uint8_t v___x_18_; 
v_head_16_ = lean_ctor_get(v_x_14_, 0);
v___x_17_ = lean_unsigned_to_nat(10u);
v___x_18_ = lean_nat_dec_eq(v_head_16_, v___x_17_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineEndAfter___boxed(lean_object* v_x_19_){
_start:
{
uint8_t v_res_20_; lean_object* v_r_21_; 
v_res_20_ = lp_lean_x2dftml_LeanFtml_lineEndAfter(v_x_19_);
lean_dec(v_x_19_);
v_r_21_ = lean_box(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_clearfloatEnd(lean_object* v_x_22_){
_start:
{
if (lean_obj_tag(v_x_22_) == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_23_ = lean_box(0);
v___x_24_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_24_, 0, v_x_22_);
lean_ctor_set(v___x_24_, 1, v___x_23_);
v___x_25_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
return v___x_25_;
}
else
{
lean_object* v_head_26_; lean_object* v_tail_27_; lean_object* v___x_48_; uint8_t v___x_49_; 
v_head_26_ = lean_ctor_get(v_x_22_, 0);
v_tail_27_ = lean_ctor_get(v_x_22_, 1);
v___x_48_ = lean_unsigned_to_nat(62u);
v___x_49_ = lean_nat_dec_eq(v_head_26_, v___x_48_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_50_ = lean_unsigned_to_nat(60u);
v___x_51_ = lean_nat_dec_eq(v_head_26_, v___x_50_);
if (v___x_51_ == 0)
{
goto v___jp_28_;
}
else
{
goto v___jp_35_;
}
}
else
{
goto v___jp_35_;
}
v___jp_28_:
{
lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_29_ = lean_unsigned_to_nat(10u);
v___x_30_ = lean_nat_dec_eq(v_head_26_, v___x_29_);
if (v___x_30_ == 0)
{
lean_object* v___x_31_; 
lean_dec_ref_known(v_x_22_, 2);
v___x_31_ = lean_box(0);
return v___x_31_;
}
else
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_32_ = lean_box(0);
v___x_33_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_33_, 0, v_x_22_);
lean_ctor_set(v___x_33_, 1, v___x_32_);
v___x_34_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
return v___x_34_;
}
}
v___jp_35_:
{
uint8_t v___x_36_; 
v___x_36_ = lp_lean_x2dftml_LeanFtml_lineEndAfter(v_tail_27_);
if (v___x_36_ == 0)
{
goto v___jp_28_;
}
else
{
lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_45_; 
lean_inc(v_tail_27_);
lean_inc(v_head_26_);
v_isSharedCheck_45_ = !lean_is_exclusive(v_x_22_);
if (v_isSharedCheck_45_ == 0)
{
lean_object* v_unused_46_; lean_object* v_unused_47_; 
v_unused_46_ = lean_ctor_get(v_x_22_, 1);
lean_dec(v_unused_46_);
v_unused_47_ = lean_ctor_get(v_x_22_, 0);
lean_dec(v_unused_47_);
v___x_38_ = v_x_22_;
v_isShared_39_ = v_isSharedCheck_45_;
goto v_resetjp_37_;
}
else
{
lean_dec(v_x_22_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_45_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_40_; lean_object* v___x_42_; 
v___x_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_40_, 0, v_head_26_);
if (v_isShared_39_ == 0)
{
lean_ctor_set_tag(v___x_38_, 0);
lean_ctor_set(v___x_38_, 1, v___x_40_);
lean_ctor_set(v___x_38_, 0, v_tail_27_);
v___x_42_ = v___x_38_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_tail_27_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v___x_40_);
v___x_42_ = v_reuseFailAlloc_44_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
lean_object* v___x_43_; 
v___x_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_lineScan___closed__3(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lineScan___closed__2));
v___x_60_ = l_String_toListImpl(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_lineScan___closed__5(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lineScan___closed__4));
v___x_63_ = l_String_toListImpl(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_lineScan___closed__6(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_lineScan___closed__5, &lp_lean_x2dftml_LeanFtml_lineScan___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_lineScan___closed__5);
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_lineScan___closed__8(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lineScan___closed__7));
v___x_68_ = l_String_toListImpl(v___x_67_);
return v___x_68_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_lineScan___closed__9(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_lineScan___closed__8, &lp_lean_x2dftml_LeanFtml_lineScan___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_lineScan___closed__8);
v___x_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineScan(lean_object* v_ch_71_, uint8_t v_withSide_72_, lean_object* v_preN_73_, lean_object* v_rule_74_, lean_object* v_x_75_, lean_object* v_x_76_, uint8_t v_x_77_, lean_object* v_x_78_){
_start:
{
lean_object* v_zero_79_; uint8_t v_isZero_80_; 
v_zero_79_ = lean_unsigned_to_nat(0u);
v_isZero_80_ = lean_nat_dec_eq(v_x_78_, v_zero_79_);
if (v_isZero_80_ == 1)
{
lean_object* v___x_81_; lean_object* v___x_82_; 
lean_dec(v_x_75_);
lean_dec_ref(v_rule_74_);
lean_dec(v_preN_73_);
v___x_81_ = lean_box(0);
v___x_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v_x_76_);
return v___x_82_;
}
else
{
if (lean_obj_tag(v_x_75_) == 0)
{
lean_object* v___x_83_; 
lean_dec_ref(v_rule_74_);
lean_dec(v_preN_73_);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v_x_75_);
lean_ctor_set(v___x_83_, 1, v_x_76_);
return v___x_83_;
}
else
{
lean_object* v_head_84_; lean_object* v_tail_85_; lean_object* v_one_86_; lean_object* v_n_87_; lean_object* v___y_103_; lean_object* v___y_104_; lean_object* v___y_128_; lean_object* v___y_129_; lean_object* v___y_136_; 
v_head_84_ = lean_ctor_get(v_x_75_, 0);
lean_inc(v_head_84_);
v_tail_85_ = lean_ctor_get(v_x_75_, 1);
lean_inc(v_tail_85_);
v_one_86_ = lean_unsigned_to_nat(1u);
v_n_87_ = lean_nat_sub(v_x_78_, v_one_86_);
if (v_x_77_ == 0)
{
lean_dec_ref_known(v_x_75_, 2);
goto v___jp_138_;
}
else
{
lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_152_ = lean_unsigned_to_nat(4u);
v___x_153_ = lp_lean_x2dftml_LeanFtml_runCount(v_x_75_, v_ch_71_, v_zero_79_);
v___x_154_ = lean_nat_dec_le(v___x_152_, v___x_153_);
if (v___x_154_ == 0)
{
lean_dec(v___x_153_);
lean_dec_ref_known(v_x_75_, 2);
goto v___jp_138_;
}
else
{
lean_object* v_afterRun_155_; 
v_afterRun_155_ = l_List_drop___redArg(v___x_153_, v_x_75_);
lean_dec_ref_known(v_x_75_, 2);
if (v_withSide_72_ == 0)
{
uint8_t v___x_156_; 
v___x_156_ = lp_lean_x2dftml_LeanFtml_lineEndAfter(v_afterRun_155_);
if (v___x_156_ == 0)
{
lean_dec(v_afterRun_155_);
goto v___jp_88_;
}
else
{
lean_dec(v_tail_85_);
lean_dec(v_head_84_);
v___y_136_ = v_afterRun_155_;
goto v___jp_135_;
}
}
else
{
lean_object* v___x_157_; 
v___x_157_ = lp_lean_x2dftml_LeanFtml_clearfloatEnd(v_afterRun_155_);
if (lean_obj_tag(v___x_157_) == 0)
{
goto v___jp_88_;
}
else
{
lean_object* v_val_158_; lean_object* v_snd_159_; 
lean_dec(v_tail_85_);
lean_dec(v_head_84_);
v_val_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_val_158_);
lean_dec_ref_known(v___x_157_, 1);
v_snd_159_ = lean_ctor_get(v_val_158_, 1);
if (lean_obj_tag(v_snd_159_) == 1)
{
lean_object* v_fst_160_; lean_object* v_val_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
lean_inc_ref(v_snd_159_);
v_fst_160_ = lean_ctor_get(v_val_158_, 0);
lean_inc(v_fst_160_);
lean_dec(v_val_158_);
v_val_161_ = lean_ctor_get(v_snd_159_, 0);
lean_inc(v_val_161_);
lean_dec_ref_known(v_snd_159_, 1);
v___x_162_ = lean_unsigned_to_nat(62u);
v___x_163_ = lean_nat_dec_eq(v_val_161_, v___x_162_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_164_ = lean_unsigned_to_nat(60u);
v___x_165_ = lean_nat_dec_eq(v_val_161_, v___x_164_);
lean_dec(v_val_161_);
if (v___x_165_ == 0)
{
v___y_136_ = v_fst_160_;
goto v___jp_135_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_lineScan___closed__6, &lp_lean_x2dftml_LeanFtml_lineScan___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_lineScan___closed__6);
v___y_128_ = v_fst_160_;
v___y_129_ = v___x_166_;
goto v___jp_127_;
}
}
else
{
lean_object* v___x_167_; 
lean_dec(v_val_161_);
v___x_167_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_lineScan___closed__9, &lp_lean_x2dftml_LeanFtml_lineScan___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_lineScan___closed__9);
v___y_128_ = v_fst_160_;
v___y_129_ = v___x_167_;
goto v___jp_127_;
}
}
else
{
lean_object* v_fst_168_; 
v_fst_168_ = lean_ctor_get(v_val_158_, 0);
lean_inc(v_fst_168_);
lean_dec(v_val_158_);
v___y_136_ = v_fst_168_;
goto v___jp_135_;
}
}
}
}
}
v___jp_88_:
{
lean_object* v___x_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v_fst_92_; lean_object* v_snd_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_101_; 
v___x_89_ = lean_unsigned_to_nat(10u);
v___x_90_ = lean_nat_dec_eq(v_head_84_, v___x_89_);
v___x_91_ = lp_lean_x2dftml_LeanFtml_lineScan(v_ch_71_, v_withSide_72_, v_preN_73_, v_rule_74_, v_tail_85_, v_x_76_, v___x_90_, v_n_87_);
lean_dec(v_n_87_);
v_fst_92_ = lean_ctor_get(v___x_91_, 0);
v_snd_93_ = lean_ctor_get(v___x_91_, 1);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_101_ == 0)
{
v___x_95_ = v___x_91_;
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_snd_93_);
lean_inc(v_fst_92_);
lean_dec(v___x_91_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_97_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_97_, 0, v_head_84_);
lean_ctor_set(v___x_97_, 1, v_fst_92_);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 0, v___x_97_);
v___x_99_ = v___x_95_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_97_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_snd_93_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
v___jp_102_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v_fst_110_; lean_object* v_snd_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_126_; 
lean_inc_ref(v_rule_74_);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v_rule_74_);
lean_ctor_set(v___x_105_, 1, v___y_104_);
v___x_106_ = lean_box(0);
v___x_107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_105_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
lean_inc(v_x_76_);
v___x_108_ = l_List_appendTR___redArg(v_x_76_, v___x_107_);
lean_inc(v_preN_73_);
v___x_109_ = lp_lean_x2dftml_LeanFtml_lineScan(v_ch_71_, v_withSide_72_, v_preN_73_, v_rule_74_, v___y_103_, v___x_108_, v_x_77_, v_n_87_);
lean_dec(v_n_87_);
v_fst_110_ = lean_ctor_get(v___x_109_, 0);
v_snd_111_ = lean_ctor_get(v___x_109_, 1);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_126_ == 0)
{
v___x_113_ = v___x_109_;
v_isShared_114_ = v_isSharedCheck_126_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_snd_111_);
lean_inc(v_fst_110_);
lean_dec(v___x_109_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_126_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_124_; 
v___x_115_ = lean_unsigned_to_nat(10u);
v___x_116_ = l_List_replicateTR___redArg(v_preN_73_, v___x_115_);
v___x_117_ = l_List_lengthTR___redArg(v_x_76_);
lean_dec(v_x_76_);
v___x_118_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_117_);
v___x_119_ = l_List_appendTR___redArg(v___x_116_, v___x_118_);
v___x_120_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_lineScan___closed__1));
v___x_121_ = l_List_appendTR___redArg(v___x_119_, v___x_120_);
v___x_122_ = l_List_appendTR___redArg(v___x_121_, v_fst_110_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_122_);
v___x_124_ = v___x_113_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_122_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v_snd_111_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
v___jp_127_:
{
if (v_withSide_72_ == 0)
{
lean_object* v___x_130_; 
v___x_130_ = lean_box(0);
v___y_103_ = v___y_128_;
v___y_104_ = v___x_130_;
goto v___jp_102_;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_131_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_lineScan___closed__3, &lp_lean_x2dftml_LeanFtml_lineScan___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_lineScan___closed__3);
lean_inc(v___y_129_);
v___x_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v___y_129_);
v___x_133_ = lean_box(0);
v___x_134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_132_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
v___y_103_ = v___y_128_;
v___y_104_ = v___x_134_;
goto v___jp_102_;
}
}
v___jp_135_:
{
lean_object* v___x_137_; 
v___x_137_ = lean_box(3);
v___y_128_ = v___y_136_;
v___y_129_ = v___x_137_;
goto v___jp_127_;
}
v___jp_138_:
{
lean_object* v___x_139_; uint8_t v___x_140_; lean_object* v___x_141_; lean_object* v_fst_142_; lean_object* v_snd_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_151_; 
v___x_139_ = lean_unsigned_to_nat(10u);
v___x_140_ = lean_nat_dec_eq(v_head_84_, v___x_139_);
v___x_141_ = lp_lean_x2dftml_LeanFtml_lineScan(v_ch_71_, v_withSide_72_, v_preN_73_, v_rule_74_, v_tail_85_, v_x_76_, v___x_140_, v_n_87_);
lean_dec(v_n_87_);
v_fst_142_ = lean_ctor_get(v___x_141_, 0);
v_snd_143_ = lean_ctor_get(v___x_141_, 1);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_151_ == 0)
{
v___x_145_ = v___x_141_;
v_isShared_146_ = v_isSharedCheck_151_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_snd_143_);
lean_inc(v_fst_142_);
lean_dec(v___x_141_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_151_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_147_; lean_object* v___x_149_; 
v___x_147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_147_, 0, v_head_84_);
lean_ctor_set(v___x_147_, 1, v_fst_142_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v___x_147_);
v___x_149_ = v___x_145_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v_snd_143_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lineScan___boxed(lean_object* v_ch_169_, lean_object* v_withSide_170_, lean_object* v_preN_171_, lean_object* v_rule_172_, lean_object* v_x_173_, lean_object* v_x_174_, lean_object* v_x_175_, lean_object* v_x_176_){
_start:
{
uint8_t v_withSide_boxed_177_; uint8_t v_x_701__boxed_178_; lean_object* v_res_179_; 
v_withSide_boxed_177_ = lean_unbox(v_withSide_170_);
v_x_701__boxed_178_ = lean_unbox(v_x_175_);
v_res_179_ = lp_lean_x2dftml_LeanFtml_lineScan(v_ch_169_, v_withSide_boxed_177_, v_preN_171_, v_rule_172_, v_x_173_, v_x_174_, v_x_701__boxed_178_, v_x_176_);
lean_dec(v_x_176_);
lean_dec(v_ch_169_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_horizRule___lam__0(lean_object* v_src_181_, lean_object* v_toks_182_){
_start:
{
lean_object* v___x_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_183_ = lean_unsigned_to_nat(45u);
v___x_184_ = 0;
v___x_185_ = lean_unsigned_to_nat(1u);
v___x_186_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_horizRule___lam__0___closed__0));
v___x_187_ = 1;
v___x_188_ = l_List_lengthTR___redArg(v_src_181_);
v___x_189_ = lean_nat_add(v___x_188_, v___x_185_);
lean_dec(v___x_188_);
v___x_190_ = lp_lean_x2dftml_LeanFtml_lineScan(v___x_183_, v___x_184_, v___x_185_, v___x_186_, v_src_181_, v_toks_182_, v___x_187_, v___x_189_);
lean_dec(v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_horizRule(lean_object* v_st_192_){
_start:
{
lean_object* v___f_193_; lean_object* v___x_194_; 
v___f_193_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_horizRule___closed__0));
v___x_194_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_192_, v___f_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_separatorRule___lam__0(lean_object* v_src_196_, lean_object* v_toks_197_){
_start:
{
lean_object* v___x_198_; uint8_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_198_ = lean_unsigned_to_nat(61u);
v___x_199_ = 0;
v___x_200_ = lean_unsigned_to_nat(1u);
v___x_201_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_separatorRule___lam__0___closed__0));
v___x_202_ = 1;
v___x_203_ = l_List_lengthTR___redArg(v_src_196_);
v___x_204_ = lean_nat_add(v___x_203_, v___x_200_);
lean_dec(v___x_203_);
v___x_205_ = lp_lean_x2dftml_LeanFtml_lineScan(v___x_198_, v___x_199_, v___x_200_, v___x_201_, v_src_196_, v_toks_197_, v___x_202_, v___x_204_);
lean_dec(v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_separatorRule(lean_object* v_st_207_){
_start:
{
lean_object* v___f_208_; lean_object* v___x_209_; 
v___f_208_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_separatorRule___closed__0));
v___x_209_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_207_, v___f_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_clearfloatRule___lam__0(lean_object* v_src_211_, lean_object* v_toks_212_){
_start:
{
lean_object* v___x_213_; uint8_t v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_213_ = lean_unsigned_to_nat(126u);
v___x_214_ = 1;
v___x_215_ = lean_unsigned_to_nat(2u);
v___x_216_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_clearfloatRule___lam__0___closed__0));
v___x_217_ = l_List_lengthTR___redArg(v_src_211_);
v___x_218_ = lean_unsigned_to_nat(1u);
v___x_219_ = lean_nat_add(v___x_217_, v___x_218_);
lean_dec(v___x_217_);
v___x_220_ = lp_lean_x2dftml_LeanFtml_lineScan(v___x_213_, v___x_214_, v___x_215_, v___x_216_, v_src_211_, v_toks_212_, v___x_214_, v___x_219_);
lean_dec(v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_clearfloatRule(lean_object* v_st_222_){
_start:
{
lean_object* v___f_223_; lean_object* v___x_224_; 
v___f_223_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_clearfloatRule___closed__0));
v___x_224_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_222_, v___f_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_breakScan(lean_object* v_x_232_, lean_object* v_x_233_, lean_object* v_x_234_){
_start:
{
lean_object* v_zero_235_; uint8_t v_isZero_236_; 
v_zero_235_ = lean_unsigned_to_nat(0u);
v_isZero_236_ = lean_nat_dec_eq(v_x_234_, v_zero_235_);
if (v_isZero_236_ == 1)
{
lean_object* v___x_237_; lean_object* v___x_238_; 
lean_dec(v_x_232_);
v___x_237_ = lean_box(0);
v___x_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v_x_233_);
return v___x_238_;
}
else
{
if (lean_obj_tag(v_x_232_) == 0)
{
lean_object* v___x_239_; 
v___x_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_239_, 0, v_x_232_);
lean_ctor_set(v___x_239_, 1, v_x_233_);
return v___x_239_;
}
else
{
lean_object* v_head_240_; lean_object* v_tail_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_300_; 
v_head_240_ = lean_ctor_get(v_x_232_, 0);
v_tail_241_ = lean_ctor_get(v_x_232_, 1);
v_isSharedCheck_300_ = !lean_is_exclusive(v_x_232_);
if (v_isSharedCheck_300_ == 0)
{
v___x_243_ = v_x_232_;
v_isShared_244_ = v_isSharedCheck_300_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_tail_241_);
lean_inc(v_head_240_);
lean_dec(v_x_232_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_300_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v_toks_246_; lean_object* v_fuel_247_; lean_object* v_one_261_; lean_object* v_n_262_; 
v_one_261_ = lean_unsigned_to_nat(1u);
v_n_262_ = lean_nat_sub(v_x_234_, v_one_261_);
if (lean_obj_tag(v_tail_241_) == 1)
{
lean_object* v_tail_275_; 
v_tail_275_ = lean_ctor_get(v_tail_241_, 1);
if (lean_obj_tag(v_tail_275_) == 1)
{
lean_object* v_head_276_; lean_object* v_head_277_; lean_object* v_tail_278_; lean_object* v___x_279_; uint8_t v___x_280_; 
lean_del_object(v___x_243_);
v_head_276_ = lean_ctor_get(v_tail_241_, 0);
v_head_277_ = lean_ctor_get(v_tail_275_, 0);
v_tail_278_ = lean_ctor_get(v_tail_275_, 1);
v___x_279_ = lean_unsigned_to_nat(32u);
v___x_280_ = lean_nat_dec_eq(v_head_240_, v___x_279_);
if (v___x_280_ == 0)
{
goto v___jp_263_;
}
else
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lean_unsigned_to_nat(95u);
v___x_282_ = lean_nat_dec_eq(v_head_276_, v___x_281_);
if (v___x_282_ == 0)
{
goto v___jp_263_;
}
else
{
lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_283_ = lean_unsigned_to_nat(10u);
v___x_284_ = lean_nat_dec_eq(v_head_277_, v___x_283_);
if (v___x_284_ == 0)
{
goto v___jp_263_;
}
else
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v_fst_288_; lean_object* v_snd_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_299_; 
lean_inc(v_tail_278_);
lean_dec_ref_known(v_tail_241_, 2);
lean_dec(v_head_240_);
v___x_285_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_breakScan___closed__2));
lean_inc(v_x_233_);
v___x_286_ = l_List_appendTR___redArg(v_x_233_, v___x_285_);
v___x_287_ = lp_lean_x2dftml_LeanFtml_breakScan(v_tail_278_, v___x_286_, v_n_262_);
lean_dec(v_n_262_);
v_fst_288_ = lean_ctor_get(v___x_287_, 0);
v_snd_289_ = lean_ctor_get(v___x_287_, 1);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_299_ == 0)
{
v___x_291_ = v___x_287_;
v_isShared_292_ = v_isSharedCheck_299_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_snd_289_);
lean_inc(v_fst_288_);
lean_dec(v___x_287_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_299_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_293_ = l_List_lengthTR___redArg(v_x_233_);
lean_dec(v_x_233_);
v___x_294_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_293_);
v___x_295_ = l_List_appendTR___redArg(v___x_294_, v_fst_288_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 0, v___x_295_);
v___x_297_ = v___x_291_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_295_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v_snd_289_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
}
}
else
{
v_toks_246_ = v_x_233_;
v_fuel_247_ = v_n_262_;
goto v___jp_245_;
}
}
else
{
v_toks_246_ = v_x_233_;
v_fuel_247_ = v_n_262_;
goto v___jp_245_;
}
v___jp_245_:
{
lean_object* v___x_248_; lean_object* v_fst_249_; lean_object* v_snd_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_260_; 
v___x_248_ = lp_lean_x2dftml_LeanFtml_breakScan(v_tail_241_, v_toks_246_, v_fuel_247_);
lean_dec(v_fuel_247_);
v_fst_249_ = lean_ctor_get(v___x_248_, 0);
v_snd_250_ = lean_ctor_get(v___x_248_, 1);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_260_ == 0)
{
v___x_252_ = v___x_248_;
v_isShared_253_ = v_isSharedCheck_260_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_snd_250_);
lean_inc(v_fst_249_);
lean_dec(v___x_248_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_260_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 1, v_fst_249_);
v___x_255_ = v___x_243_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_head_240_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_fst_249_);
v___x_255_ = v_reuseFailAlloc_259_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v___x_257_; 
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 0, v___x_255_);
v___x_257_ = v___x_252_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_255_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_snd_250_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
v___jp_263_:
{
lean_object* v___x_264_; lean_object* v_fst_265_; lean_object* v_snd_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_274_; 
v___x_264_ = lp_lean_x2dftml_LeanFtml_breakScan(v_tail_241_, v_x_233_, v_n_262_);
lean_dec(v_n_262_);
v_fst_265_ = lean_ctor_get(v___x_264_, 0);
v_snd_266_ = lean_ctor_get(v___x_264_, 1);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_274_ == 0)
{
v___x_268_ = v___x_264_;
v_isShared_269_ = v_isSharedCheck_274_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_snd_266_);
lean_inc(v_fst_265_);
lean_dec(v___x_264_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_274_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; lean_object* v___x_272_; 
v___x_270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_270_, 0, v_head_240_);
lean_ctor_set(v___x_270_, 1, v_fst_265_);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 0, v___x_270_);
v___x_272_ = v___x_268_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_270_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v_snd_266_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_breakScan___boxed(lean_object* v_x_301_, lean_object* v_x_302_, lean_object* v_x_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = lp_lean_x2dftml_LeanFtml_breakScan(v_x_301_, v_x_302_, v_x_303_);
lean_dec(v_x_303_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_breakRule___lam__0(lean_object* v_src_305_, lean_object* v_toks_306_){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_307_ = l_List_lengthTR___redArg(v_src_305_);
v___x_308_ = lean_unsigned_to_nat(1u);
v___x_309_ = lean_nat_add(v___x_307_, v___x_308_);
lean_dec(v___x_307_);
v___x_310_ = lp_lean_x2dftml_LeanFtml_breakScan(v_src_305_, v_toks_306_, v___x_309_);
lean_dec(v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_breakRule(lean_object* v_st_312_){
_start:
{
lean_object* v___f_313_; lean_object* v___x_314_; 
v___f_313_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_breakRule___closed__0));
v___x_314_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_312_, v___f_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitAtByte(lean_object* v_x_315_, lean_object* v_x_316_){
_start:
{
if (lean_obj_tag(v_x_315_) == 0)
{
lean_object* v___x_317_; 
v___x_317_ = lean_box(0);
return v___x_317_;
}
else
{
lean_object* v_head_318_; lean_object* v_tail_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_348_; 
v_head_318_ = lean_ctor_get(v_x_315_, 0);
v_tail_319_ = lean_ctor_get(v_x_315_, 1);
v_isSharedCheck_348_ = !lean_is_exclusive(v_x_315_);
if (v_isSharedCheck_348_ == 0)
{
v___x_321_ = v_x_315_;
v_isShared_322_ = v_isSharedCheck_348_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_tail_319_);
lean_inc(v_head_318_);
lean_dec(v_x_315_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_348_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
uint8_t v___x_323_; 
v___x_323_ = lean_nat_dec_eq(v_head_318_, v_x_316_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; 
v___x_324_ = lp_lean_x2dftml_LeanFtml_splitAtByte(v_tail_319_, v_x_316_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_del_object(v___x_321_);
lean_dec(v_head_318_);
return v___x_324_;
}
else
{
lean_object* v_val_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_344_; 
v_val_325_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_344_ == 0)
{
v___x_327_ = v___x_324_;
v_isShared_328_ = v_isSharedCheck_344_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_val_325_);
lean_dec(v___x_324_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_344_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v_fst_329_; lean_object* v_snd_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_343_; 
v_fst_329_ = lean_ctor_get(v_val_325_, 0);
v_snd_330_ = lean_ctor_get(v_val_325_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v_val_325_);
if (v_isSharedCheck_343_ == 0)
{
v___x_332_ = v_val_325_;
v_isShared_333_ = v_isSharedCheck_343_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_snd_330_);
lean_inc(v_fst_329_);
lean_dec(v_val_325_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_343_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 1, v_fst_329_);
v___x_335_ = v___x_321_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_head_318_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_fst_329_);
v___x_335_ = v_reuseFailAlloc_342_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
lean_object* v___x_337_; 
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v___x_335_);
v___x_337_ = v___x_332_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_335_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_snd_330_);
v___x_337_ = v_reuseFailAlloc_341_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
lean_object* v___x_339_; 
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v___x_337_);
v___x_339_ = v___x_327_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
lean_del_object(v___x_321_);
lean_dec(v_head_318_);
v___x_345_ = lean_box(0);
v___x_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v_tail_319_);
v___x_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
return v___x_347_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitAtByte___boxed(lean_object* v_x_349_, lean_object* v_x_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = lp_lean_x2dftml_LeanFtml_splitAtByte(v_x_349_, v_x_350_);
lean_dec(v_x_350_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_centerScan_spec__0(lean_object* v_head_352_, lean_object* v_l_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
if (lean_obj_tag(v_a_354_) == 0)
{
lean_dec_ref(v_a_355_);
lean_inc(v_l_353_);
return v_l_353_;
}
else
{
lean_object* v_head_356_; lean_object* v_tail_357_; lean_object* v___x_358_; uint8_t v___x_359_; 
v_head_356_ = lean_ctor_get(v_a_354_, 0);
lean_inc(v_head_356_);
v_tail_357_ = lean_ctor_get(v_a_354_, 1);
lean_inc(v_tail_357_);
lean_dec_ref_known(v_a_354_, 2);
v___x_358_ = lean_unsigned_to_nat(10u);
v___x_359_ = lean_nat_dec_eq(v_head_356_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_360_ = lean_unsigned_to_nat(32u);
v___x_361_ = lean_nat_dec_eq(v_head_352_, v___x_360_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; 
lean_dec(v_tail_357_);
lean_dec(v_head_356_);
v___x_362_ = lean_array_to_list(v_a_355_);
return v___x_362_;
}
else
{
lean_object* v___x_363_; 
v___x_363_ = lean_array_push(v_a_355_, v_head_356_);
v_a_354_ = v_tail_357_;
v_a_355_ = v___x_363_;
goto _start;
}
}
else
{
lean_object* v___x_365_; 
lean_dec(v_tail_357_);
lean_dec(v_head_356_);
v___x_365_ = lean_array_to_list(v_a_355_);
return v___x_365_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_centerScan_spec__0___boxed(lean_object* v_head_366_, lean_object* v_l_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_centerScan_spec__0(v_head_366_, v_l_367_, v_a_368_, v_a_369_);
lean_dec(v_l_367_);
lean_dec(v_head_366_);
return v_res_370_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__3(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_centerScan___closed__2));
v___x_376_ = l_String_toListImpl(v___x_375_);
return v___x_376_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__5(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_centerScan___closed__4));
v___x_379_ = l_String_toListImpl(v___x_378_);
return v___x_379_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__6(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__5, &lp_lean_x2dftml_LeanFtml_centerScan___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__5);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__7(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_382_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__6, &lp_lean_x2dftml_LeanFtml_centerScan___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__6);
v___x_383_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__3, &lp_lean_x2dftml_LeanFtml_centerScan___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__3);
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v___x_382_);
return v___x_384_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__8(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_385_ = lean_box(0);
v___x_386_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__7, &lp_lean_x2dftml_LeanFtml_centerScan___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__7);
v___x_387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
lean_ctor_set(v___x_387_, 1, v___x_385_);
return v___x_387_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__9(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v_startTok_390_; 
v___x_388_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__8, &lp_lean_x2dftml_LeanFtml_centerScan___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__8);
v___x_389_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_centerScan___closed__1));
v_startTok_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_startTok_390_, 0, v___x_389_);
lean_ctor_set(v_startTok_390_, 1, v___x_388_);
return v_startTok_390_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__11(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_centerScan___closed__10));
v___x_393_ = l_String_toListImpl(v___x_392_);
return v___x_393_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__12(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__11, &lp_lean_x2dftml_LeanFtml_centerScan___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__11);
v___x_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__13(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_396_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__12, &lp_lean_x2dftml_LeanFtml_centerScan___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__12);
v___x_397_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__3, &lp_lean_x2dftml_LeanFtml_centerScan___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__3);
v___x_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
lean_ctor_set(v___x_398_, 1, v___x_396_);
return v___x_398_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__14(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_399_ = lean_box(0);
v___x_400_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__13, &lp_lean_x2dftml_LeanFtml_centerScan___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__13);
v___x_401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
lean_ctor_set(v___x_401_, 1, v___x_399_);
return v___x_401_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__15(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v_endTok_404_; 
v___x_402_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__14, &lp_lean_x2dftml_LeanFtml_centerScan___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__14);
v___x_403_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_centerScan___closed__1));
v_endTok_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_endTok_404_, 0, v___x_403_);
lean_ctor_set(v_endTok_404_, 1, v___x_402_);
return v_endTok_404_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__16(void){
_start:
{
lean_object* v___x_405_; lean_object* v_endTok_406_; lean_object* v___x_407_; 
v___x_405_ = lean_box(0);
v_endTok_406_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__15, &lp_lean_x2dftml_LeanFtml_centerScan___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__15);
v___x_407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_407_, 0, v_endTok_406_);
lean_ctor_set(v___x_407_, 1, v___x_405_);
return v___x_407_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__17(void){
_start:
{
lean_object* v___x_408_; lean_object* v_startTok_409_; lean_object* v___x_410_; 
v___x_408_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__16, &lp_lean_x2dftml_LeanFtml_centerScan___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__16);
v_startTok_409_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__9, &lp_lean_x2dftml_LeanFtml_centerScan___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__9);
v___x_410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_410_, 0, v_startTok_409_);
lean_ctor_set(v___x_410_, 1, v___x_408_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_centerScan(lean_object* v_x_417_, lean_object* v_x_418_, uint8_t v_x_419_, lean_object* v_x_420_){
_start:
{
lean_object* v_zero_421_; uint8_t v_isZero_422_; 
v_zero_421_ = lean_unsigned_to_nat(0u);
v_isZero_422_ = lean_nat_dec_eq(v_x_420_, v_zero_421_);
if (v_isZero_422_ == 1)
{
lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec(v_x_417_);
v___x_423_ = lean_box(0);
v___x_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v_x_418_);
return v___x_424_;
}
else
{
if (lean_obj_tag(v_x_417_) == 0)
{
lean_object* v___x_425_; 
v___x_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_425_, 0, v_x_417_);
lean_ctor_set(v___x_425_, 1, v_x_418_);
return v___x_425_;
}
else
{
lean_object* v_head_426_; lean_object* v_tail_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_495_; 
v_head_426_ = lean_ctor_get(v_x_417_, 0);
v_tail_427_ = lean_ctor_get(v_x_417_, 1);
v_isSharedCheck_495_ = !lean_is_exclusive(v_x_417_);
if (v_isSharedCheck_495_ == 0)
{
v___x_429_ = v_x_417_;
v_isShared_430_ = v_isSharedCheck_495_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_tail_427_);
lean_inc(v_head_426_);
lean_dec(v_x_417_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_495_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v_one_431_; lean_object* v_n_432_; 
v_one_431_ = lean_unsigned_to_nat(1u);
v_n_432_ = lean_nat_sub(v_x_420_, v_one_431_);
if (lean_obj_tag(v_tail_427_) == 1)
{
if (v_x_419_ == 0)
{
goto v___jp_433_;
}
else
{
lean_object* v_head_449_; lean_object* v_tail_450_; lean_object* v___x_451_; uint8_t v___x_452_; 
v_head_449_ = lean_ctor_get(v_tail_427_, 0);
v_tail_450_ = lean_ctor_get(v_tail_427_, 1);
v___x_451_ = lean_unsigned_to_nat(61u);
v___x_452_ = lean_nat_dec_eq(v_head_426_, v___x_451_);
if (v___x_452_ == 0)
{
goto v___jp_433_;
}
else
{
lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_453_ = lean_unsigned_to_nat(32u);
v___x_454_ = lean_nat_dec_eq(v_head_449_, v___x_453_);
if (v___x_454_ == 0)
{
goto v___jp_433_;
}
else
{
lean_object* v___x_455_; lean_object* v_body_456_; lean_object* v___x_457_; lean_object* v_after_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v_fst_462_; lean_object* v_snd_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_481_; 
lean_inc_n(v_tail_450_, 2);
lean_inc(v_head_449_);
lean_dec_ref_known(v_tail_427_, 2);
lean_del_object(v___x_429_);
lean_dec(v_head_426_);
v___x_455_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_centerScan___closed__0));
v_body_456_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_centerScan_spec__0(v_head_449_, v_tail_450_, v_tail_450_, v___x_455_);
lean_dec(v_head_449_);
v___x_457_ = l_List_lengthTR___redArg(v_body_456_);
v_after_458_ = l_List_drop___redArg(v___x_457_, v_tail_450_);
lean_dec(v_tail_450_);
v___x_459_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_centerScan___closed__17, &lp_lean_x2dftml_LeanFtml_centerScan___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_centerScan___closed__17);
lean_inc(v_x_418_);
v___x_460_ = l_List_appendTR___redArg(v_x_418_, v___x_459_);
v___x_461_ = lp_lean_x2dftml_LeanFtml_centerScan(v_after_458_, v___x_460_, v_isZero_422_, v_n_432_);
lean_dec(v_n_432_);
v_fst_462_ = lean_ctor_get(v___x_461_, 0);
v_snd_463_ = lean_ctor_get(v___x_461_, 1);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_481_ == 0)
{
v___x_465_ = v___x_461_;
v_isShared_466_ = v_isSharedCheck_481_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_snd_463_);
lean_inc(v_fst_462_);
lean_dec(v___x_461_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_481_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_479_; 
v___x_467_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_centerScan___closed__19));
v___x_468_ = l_List_lengthTR___redArg(v_x_418_);
lean_dec(v_x_418_);
lean_inc(v___x_468_);
v___x_469_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_468_);
v___x_470_ = l_List_appendTR___redArg(v___x_467_, v___x_469_);
v___x_471_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_body_456_);
lean_dec(v_body_456_);
v___x_472_ = l_List_appendTR___redArg(v___x_470_, v___x_471_);
v___x_473_ = lean_nat_add(v___x_468_, v_one_431_);
lean_dec(v___x_468_);
v___x_474_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_473_);
v___x_475_ = l_List_appendTR___redArg(v___x_472_, v___x_474_);
v___x_476_ = l_List_appendTR___redArg(v___x_475_, v___x_467_);
v___x_477_ = l_List_appendTR___redArg(v___x_476_, v_fst_462_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 0, v___x_477_);
v___x_479_ = v___x_465_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_snd_463_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
}
else
{
lean_object* v___x_482_; uint8_t v___x_483_; lean_object* v___x_484_; lean_object* v_fst_485_; lean_object* v_snd_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_494_; 
lean_del_object(v___x_429_);
v___x_482_ = lean_unsigned_to_nat(10u);
v___x_483_ = lean_nat_dec_eq(v_head_426_, v___x_482_);
v___x_484_ = lp_lean_x2dftml_LeanFtml_centerScan(v_tail_427_, v_x_418_, v___x_483_, v_n_432_);
lean_dec(v_n_432_);
v_fst_485_ = lean_ctor_get(v___x_484_, 0);
v_snd_486_ = lean_ctor_get(v___x_484_, 1);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_494_ == 0)
{
v___x_488_ = v___x_484_;
v_isShared_489_ = v_isSharedCheck_494_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_snd_486_);
lean_inc(v_fst_485_);
lean_dec(v___x_484_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_494_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_490_, 0, v_head_426_);
lean_ctor_set(v___x_490_, 1, v_fst_485_);
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 0, v___x_490_);
v___x_492_ = v___x_488_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_snd_486_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
v___jp_433_:
{
lean_object* v___x_434_; uint8_t v___x_435_; lean_object* v___x_436_; lean_object* v_fst_437_; lean_object* v_snd_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_448_; 
v___x_434_ = lean_unsigned_to_nat(10u);
v___x_435_ = lean_nat_dec_eq(v_head_426_, v___x_434_);
v___x_436_ = lp_lean_x2dftml_LeanFtml_centerScan(v_tail_427_, v_x_418_, v___x_435_, v_n_432_);
lean_dec(v_n_432_);
v_fst_437_ = lean_ctor_get(v___x_436_, 0);
v_snd_438_ = lean_ctor_get(v___x_436_, 1);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_448_ == 0)
{
v___x_440_ = v___x_436_;
v_isShared_441_ = v_isSharedCheck_448_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_snd_438_);
lean_inc(v_fst_437_);
lean_dec(v___x_436_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_448_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 1, v_fst_437_);
v___x_443_ = v___x_429_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_head_426_);
lean_ctor_set(v_reuseFailAlloc_447_, 1, v_fst_437_);
v___x_443_ = v_reuseFailAlloc_447_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
lean_object* v___x_445_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_443_);
v___x_445_ = v___x_440_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v___x_443_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_snd_438_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_centerScan___boxed(lean_object* v_x_496_, lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_){
_start:
{
uint8_t v_x_738__boxed_500_; lean_object* v_res_501_; 
v_x_738__boxed_500_ = lean_unbox(v_x_498_);
v_res_501_ = lp_lean_x2dftml_LeanFtml_centerScan(v_x_496_, v_x_497_, v_x_738__boxed_500_, v_x_499_);
lean_dec(v_x_499_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_centerRule___lam__0(lean_object* v_src_502_, lean_object* v_toks_503_){
_start:
{
uint8_t v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_504_ = 1;
v___x_505_ = l_List_lengthTR___redArg(v_src_502_);
v___x_506_ = lean_unsigned_to_nat(1u);
v___x_507_ = lean_nat_add(v___x_505_, v___x_506_);
lean_dec(v___x_505_);
v___x_508_ = lp_lean_x2dftml_LeanFtml_centerScan(v_src_502_, v_toks_503_, v___x_504_, v___x_507_);
lean_dec(v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_centerRule(lean_object* v_st_510_){
_start:
{
lean_object* v___f_511_; lean_object* v___x_512_; 
v___f_511_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_centerRule___closed__0));
v___x_512_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_510_, v___f_511_);
return v___x_512_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FormRawRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ModuleRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_MiddleRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_FormRawRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ModuleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
