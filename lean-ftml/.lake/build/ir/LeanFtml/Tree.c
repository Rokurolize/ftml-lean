// Lean compiler output
// Module: LeanFtml.Tree
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
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorIdx___impl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorIdx___impl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_leaf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_leaf_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_list_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_list_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorIdx___impl___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorIdx___impl___redArg___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = lp_lean_x2dftml_LeanFtml_SpecTree_ctorIdx___impl___redArg(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorIdx___impl(lean_object* v_L_5_, lean_object* v_T_6_, lean_object* v_x_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_tag_nat(v_x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorIdx___impl___boxed(lean_object* v_L_9_, lean_object* v_T_10_, lean_object* v_x_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = lp_lean_x2dftml_LeanFtml_SpecTree_ctorIdx___impl(v_L_9_, v_T_10_, v_x_11_);
lean_dec_ref(v_x_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim___redArg(lean_object* v_t_13_, lean_object* v_k_14_){
_start:
{
if (lean_obj_tag(v_t_13_) == 0)
{
lean_object* v_a_15_; lean_object* v___x_16_; 
v_a_15_ = lean_ctor_get(v_t_13_, 0);
lean_inc(v_a_15_);
lean_dec_ref_known(v_t_13_, 1);
v___x_16_ = lean_apply_1(v_k_14_, v_a_15_);
return v___x_16_;
}
else
{
lean_object* v_a_17_; lean_object* v_a_18_; lean_object* v___x_19_; 
v_a_17_ = lean_ctor_get(v_t_13_, 0);
lean_inc(v_a_17_);
v_a_18_ = lean_ctor_get(v_t_13_, 1);
lean_inc(v_a_18_);
lean_dec_ref_known(v_t_13_, 2);
v___x_19_ = lean_apply_2(v_k_14_, v_a_17_, v_a_18_);
return v___x_19_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim(lean_object* v_L_20_, lean_object* v_T_21_, lean_object* v_motive__1_22_, lean_object* v_ctorIdx_23_, lean_object* v_t_24_, lean_object* v_h_25_, lean_object* v_k_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim___redArg(v_t_24_, v_k_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim___boxed(lean_object* v_L_28_, lean_object* v_T_29_, lean_object* v_motive__1_30_, lean_object* v_ctorIdx_31_, lean_object* v_t_32_, lean_object* v_h_33_, lean_object* v_k_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim(v_L_28_, v_T_29_, v_motive__1_30_, v_ctorIdx_31_, v_t_32_, v_h_33_, v_k_34_);
lean_dec(v_ctorIdx_31_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_leaf_elim___redArg(lean_object* v_t_36_, lean_object* v_leaf_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim___redArg(v_t_36_, v_leaf_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_leaf_elim(lean_object* v_L_39_, lean_object* v_T_40_, lean_object* v_motive__1_41_, lean_object* v_t_42_, lean_object* v_h_43_, lean_object* v_leaf_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim___redArg(v_t_42_, v_leaf_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_list_elim___redArg(lean_object* v_t_46_, lean_object* v_list_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim___redArg(v_t_46_, v_list_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_SpecTree_list_elim(lean_object* v_L_49_, lean_object* v_T_50_, lean_object* v_motive__1_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_list_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lp_lean_x2dftml_LeanFtml_SpecTree_ctorElim___redArg(v_t_52_, v_list_54_);
return v___x_55_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_Tree(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
