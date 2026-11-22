// Lean compiler output
// Module: LeanFtml.IncludeExpr
// Imports: public import Init public meta import Init
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
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placeholder___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_placeholder___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_placeholder___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placeholder(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchPat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchPat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_repPass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeExpr_0__LeanFtml_repPass_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeExpr_0__LeanFtml_repPass_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeExpr_0__LeanFtml_repPass_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeExpr_0__LeanFtml_repPass_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_substitute_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_substitute(lean_object*, lean_object*);
static lean_object* _init_lp_lean_x2dftml_LeanFtml_placeholder___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1_; lean_object* v___x_2_; 
v___x_1_ = 125;
v___x_2_ = lean_box_uint32(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_placeholder___closed__0(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_box(0);
v___x_4_ = lp_lean_x2dftml_LeanFtml_placeholder___closed__0___boxed__const__1;
v___x_5_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__1(void){
_start:
{
uint32_t v___x_6_; lean_object* v___x_7_; 
v___x_6_ = 123;
v___x_7_ = lean_box_uint32(v___x_6_);
return v___x_7_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__2(void){
_start:
{
uint32_t v___x_8_; lean_object* v___x_9_; 
v___x_8_ = 36;
v___x_9_ = lean_box_uint32(v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placeholder(lean_object* v_key_10_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_11_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_placeholder___closed__0, &lp_lean_x2dftml_LeanFtml_placeholder___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_placeholder___closed__0);
v___x_12_ = l_List_appendTR___redArg(v_key_10_, v___x_11_);
v___x_13_ = lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__2;
v___x_14_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
v___x_15_ = lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__1;
v___x_16_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___x_14_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchPat(lean_object* v_x_17_, lean_object* v_x_18_){
_start:
{
if (lean_obj_tag(v_x_17_) == 0)
{
lean_object* v___x_19_; 
v___x_19_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_19_, 0, v_x_18_);
return v___x_19_;
}
else
{
if (lean_obj_tag(v_x_18_) == 0)
{
lean_object* v___x_20_; 
v___x_20_ = lean_box(0);
return v___x_20_;
}
else
{
lean_object* v_head_21_; lean_object* v_tail_22_; lean_object* v_head_23_; lean_object* v_tail_24_; uint32_t v___x_25_; uint32_t v___x_26_; uint8_t v___x_27_; 
v_head_21_ = lean_ctor_get(v_x_17_, 0);
v_tail_22_ = lean_ctor_get(v_x_17_, 1);
v_head_23_ = lean_ctor_get(v_x_18_, 0);
lean_inc(v_head_23_);
v_tail_24_ = lean_ctor_get(v_x_18_, 1);
lean_inc(v_tail_24_);
lean_dec_ref_known(v_x_18_, 2);
v___x_25_ = lean_unbox_uint32(v_head_21_);
v___x_26_ = lean_unbox_uint32(v_head_23_);
lean_dec(v_head_23_);
v___x_27_ = lean_uint32_dec_eq(v___x_25_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; 
lean_dec(v_tail_24_);
v___x_28_ = lean_box(0);
return v___x_28_;
}
else
{
v_x_17_ = v_tail_22_;
v_x_18_ = v_tail_24_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchPat___boxed(lean_object* v_x_30_, lean_object* v_x_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = lp_lean_x2dftml_LeanFtml_matchPat(v_x_30_, v_x_31_);
lean_dec(v_x_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_repPass(lean_object* v_l_33_, lean_object* v_key_34_, lean_object* v_val_35_){
_start:
{
if (lean_obj_tag(v_l_33_) == 0)
{
lean_dec(v_val_35_);
lean_dec(v_key_34_);
return v_l_33_;
}
else
{
lean_object* v_head_36_; lean_object* v_tail_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_head_36_ = lean_ctor_get(v_l_33_, 0);
lean_inc(v_head_36_);
v_tail_37_ = lean_ctor_get(v_l_33_, 1);
lean_inc(v_tail_37_);
lean_inc(v_key_34_);
v___x_38_ = lp_lean_x2dftml_LeanFtml_placeholder(v_key_34_);
v___x_39_ = lp_lean_x2dftml_LeanFtml_matchPat(v___x_38_, v_l_33_);
lean_dec(v___x_38_);
if (lean_obj_tag(v___x_39_) == 0)
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lp_lean_x2dftml_LeanFtml_repPass(v_tail_37_, v_key_34_, v_val_35_);
v___x_41_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_41_, 0, v_head_36_);
lean_ctor_set(v___x_41_, 1, v___x_40_);
return v___x_41_;
}
else
{
lean_object* v_val_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec(v_tail_37_);
lean_dec(v_head_36_);
v_val_42_ = lean_ctor_get(v___x_39_, 0);
lean_inc(v_val_42_);
lean_dec_ref_known(v___x_39_, 1);
lean_inc(v_val_35_);
v___x_43_ = lp_lean_x2dftml_LeanFtml_repPass(v_val_42_, v_key_34_, v_val_35_);
v___x_44_ = l_List_appendTR___redArg(v_val_35_, v___x_43_);
return v___x_44_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeExpr_0__LeanFtml_repPass_match__3_splitter___redArg(lean_object* v_l_45_, lean_object* v_h__1_46_, lean_object* v_h__2_47_){
_start:
{
if (lean_obj_tag(v_l_45_) == 0)
{
lean_object* v___x_48_; lean_object* v___x_49_; 
lean_dec(v_h__2_47_);
v___x_48_ = lean_box(0);
v___x_49_ = lean_apply_1(v_h__1_46_, v___x_48_);
return v___x_49_;
}
else
{
lean_object* v_head_50_; lean_object* v_tail_51_; lean_object* v___x_52_; 
lean_dec(v_h__1_46_);
v_head_50_ = lean_ctor_get(v_l_45_, 0);
lean_inc(v_head_50_);
v_tail_51_ = lean_ctor_get(v_l_45_, 1);
lean_inc(v_tail_51_);
lean_dec_ref_known(v_l_45_, 2);
v___x_52_ = lean_apply_2(v_h__2_47_, v_head_50_, v_tail_51_);
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeExpr_0__LeanFtml_repPass_match__3_splitter(lean_object* v_motive_53_, lean_object* v_l_54_, lean_object* v_h__1_55_, lean_object* v_h__2_56_){
_start:
{
if (lean_obj_tag(v_l_54_) == 0)
{
lean_object* v___x_57_; lean_object* v___x_58_; 
lean_dec(v_h__2_56_);
v___x_57_ = lean_box(0);
v___x_58_ = lean_apply_1(v_h__1_55_, v___x_57_);
return v___x_58_;
}
else
{
lean_object* v_head_59_; lean_object* v_tail_60_; lean_object* v___x_61_; 
lean_dec(v_h__1_55_);
v_head_59_ = lean_ctor_get(v_l_54_, 0);
lean_inc(v_head_59_);
v_tail_60_ = lean_ctor_get(v_l_54_, 1);
lean_inc(v_tail_60_);
lean_dec_ref_known(v_l_54_, 2);
v___x_61_ = lean_apply_2(v_h__2_56_, v_head_59_, v_tail_60_);
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeExpr_0__LeanFtml_repPass_match__1_splitter___redArg(lean_object* v_x_62_, lean_object* v_h__1_63_, lean_object* v_h__2_64_){
_start:
{
if (lean_obj_tag(v_x_62_) == 0)
{
lean_object* v___x_65_; 
lean_dec(v_h__1_63_);
v___x_65_ = lean_apply_1(v_h__2_64_, lean_box(0));
return v___x_65_;
}
else
{
lean_object* v_val_66_; lean_object* v___x_67_; 
lean_dec(v_h__2_64_);
v_val_66_ = lean_ctor_get(v_x_62_, 0);
lean_inc(v_val_66_);
lean_dec_ref_known(v_x_62_, 1);
v___x_67_ = lean_apply_2(v_h__1_63_, v_val_66_, lean_box(0));
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_IncludeExpr_0__LeanFtml_repPass_match__1_splitter(lean_object* v_motive_68_, lean_object* v_x_69_, lean_object* v_h__1_70_, lean_object* v_h__2_71_){
_start:
{
if (lean_obj_tag(v_x_69_) == 0)
{
lean_object* v___x_72_; 
lean_dec(v_h__1_70_);
v___x_72_ = lean_apply_1(v_h__2_71_, lean_box(0));
return v___x_72_;
}
else
{
lean_object* v_val_73_; lean_object* v___x_74_; 
lean_dec(v_h__2_71_);
v_val_73_ = lean_ctor_get(v_x_69_, 0);
lean_inc(v_val_73_);
lean_dec_ref_known(v_x_69_, 1);
v___x_74_ = lean_apply_2(v_h__1_70_, v_val_73_, lean_box(0));
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_substitute_spec__0(lean_object* v_x_75_, lean_object* v_x_76_){
_start:
{
if (lean_obj_tag(v_x_76_) == 0)
{
return v_x_75_;
}
else
{
lean_object* v_head_77_; lean_object* v_tail_78_; lean_object* v_fst_79_; lean_object* v_snd_80_; lean_object* v___x_81_; 
v_head_77_ = lean_ctor_get(v_x_76_, 0);
lean_inc(v_head_77_);
v_tail_78_ = lean_ctor_get(v_x_76_, 1);
lean_inc(v_tail_78_);
lean_dec_ref_known(v_x_76_, 2);
v_fst_79_ = lean_ctor_get(v_head_77_, 0);
lean_inc(v_fst_79_);
v_snd_80_ = lean_ctor_get(v_head_77_, 1);
lean_inc(v_snd_80_);
lean_dec(v_head_77_);
v___x_81_ = lp_lean_x2dftml_LeanFtml_repPass(v_x_75_, v_fst_79_, v_snd_80_);
v_x_75_ = v___x_81_;
v_x_76_ = v_tail_78_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_substitute(lean_object* v_content_83_, lean_object* v_args_84_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_substitute_spec__0(v_content_83_, v_args_84_);
return v___x_85_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_IncludeExpr(uint8_t builtin) {
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
lp_lean_x2dftml_LeanFtml_placeholder___closed__0___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_placeholder___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_placeholder___closed__0___boxed__const__1);
lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__1);
lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__2 = _init_lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__2();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_placeholder___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
