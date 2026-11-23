// Lean compiler output
// Module: LeanFtml.ServingRender
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.NotesRender public import LeanFtml.ServingRules public import LeanFtml.Pipeline
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
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_renderWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_phpTruthyBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_phpEmptyOpt(lean_object*);
extern lean_object* lp_lean_x2dftml_LeanFtml_freelinkExistingPages;
uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_explodeByte(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_galleryRowSrc(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_bytesContainsSub(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_startsWithBytes(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR41(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_convCRLF(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_ParseState_ofSource(lean_object*);
extern lean_object* lp_lean_x2dftml_LeanFtml_pipelineFull;
lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_runRules_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR48(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR48___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Image"};
static const lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__0_value;
static const lean_string_object lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "flickr:"};
static const lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__2;
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "User"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Gallery"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Freelink"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "textFromTitle"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "page"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Freelink:textFromTitle"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__10_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sources"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__12;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Gallery:FlickrHandler"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__14_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "src"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__16;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ":first"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__17_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__18;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Image:FlickrHandler"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__20_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "User:DB_OzoneUserPeer"};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__22_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_servingBoundaryNamesIn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_servingBoundaryNamesIn_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushUnique___at___00LeanFtml_servingBoundaryNamesIn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_servingBoundaryNamesIn_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryNamesIn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderWithR48_spec__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_renderWithR48___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_dispatchRenderR41___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_renderWithR48___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderWithR48___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderWithR48(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR48___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR48___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR48(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderServingE2E___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderServingE2E___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderServingE2E___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderServingE2E___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*13 + 0, .m_other = 13, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_renderServingE2E___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderServingE2E___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderServingE2E___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderServingE2E(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR48(uint8_t v_a_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lp_lean_x2dftml_LeanFtml_dispatchRenderR41(v_a_1_, v_a_2_, v_a_3_, v_a_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dispatchRenderR48___boxed(lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_){
_start:
{
uint8_t v_a_7__boxed_10_; lean_object* v_res_11_; 
v_a_7__boxed_10_ = lean_unbox(v_a_6_);
v_res_11_ = lp_lean_x2dftml_LeanFtml_dispatchRenderR48(v_a_7__boxed_10_, v_a_7_, v_a_8_, v_a_9_);
lean_dec_ref(v_a_8_);
return v_res_11_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__2(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = ((lean_object*)(lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__1));
v___x_15_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0(lean_object* v___x_16_, lean_object* v_x_17_){
_start:
{
if (lean_obj_tag(v_x_17_) == 0)
{
uint8_t v___x_18_; 
v___x_18_ = 0;
return v___x_18_;
}
else
{
lean_object* v_head_19_; lean_object* v_tail_20_; uint8_t v___y_22_; lean_object* v___x_24_; 
v_head_19_ = lean_ctor_get(v_x_17_, 0);
v_tail_20_ = lean_ctor_get(v_x_17_, 1);
v___x_24_ = lp_lean_x2dftml_LeanFtml_galleryRowSrc(v_head_19_);
if (lean_obj_tag(v___x_24_) == 0)
{
lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_25_ = ((lean_object*)(lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__0));
v___x_26_ = lean_string_dec_eq(v___x_16_, v___x_25_);
v___y_22_ = v___x_26_;
goto v___jp_21_;
}
else
{
lean_object* v_val_27_; lean_object* v___x_28_; uint8_t v___x_29_; 
v_val_27_ = lean_ctor_get(v___x_24_, 0);
lean_inc(v_val_27_);
lean_dec_ref_known(v___x_24_, 1);
v___x_28_ = lean_obj_once(&lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__2, &lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__2_once, _init_lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__2);
v___x_29_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v___x_28_, v_val_27_);
lean_dec(v_val_27_);
v___y_22_ = v___x_29_;
goto v___jp_21_;
}
v___jp_21_:
{
if (v___y_22_ == 0)
{
v_x_17_ = v_tail_20_;
goto _start;
}
else
{
return v___y_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___boxed(lean_object* v___x_30_, lean_object* v_x_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0(v___x_30_, v_x_31_);
lean_dec(v_x_31_);
lean_dec_ref(v___x_30_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__4(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__3));
v___x_39_ = l_String_toListImpl(v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__6(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__5));
v___x_42_ = l_String_toListImpl(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__8(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__7));
v___x_45_ = l_String_toListImpl(v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__12(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__11));
v___x_51_ = l_String_toListImpl(v___x_50_);
return v___x_51_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__16(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__15));
v___x_57_ = l_String_toListImpl(v___x_56_);
return v___x_57_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__18(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__17));
v___x_60_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf(lean_object* v_entry_67_){
_start:
{
lean_object* v_rule_68_; lean_object* v_opts_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
v_rule_68_ = lean_ctor_get(v_entry_67_, 0);
v_opts_69_ = lean_ctor_get(v_entry_67_, 1);
v___x_70_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__0));
v___x_71_ = lean_string_dec_eq(v_rule_68_, v___x_70_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_72_ = ((lean_object*)(lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__0));
v___x_73_ = lean_string_dec_eq(v_rule_68_, v___x_72_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__1));
v___x_75_ = lean_string_dec_eq(v_rule_68_, v___x_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_76_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__2));
v___x_77_ = lean_string_dec_eq(v_rule_68_, v___x_76_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; 
v___x_78_ = lean_box(0);
return v___x_78_;
}
else
{
lean_object* v___x_79_; lean_object* v_url_80_; uint8_t v___x_81_; 
v___x_79_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__4, &lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__4);
v_url_80_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_69_, v___x_79_);
v___x_81_ = lp_lean_x2dftml_LeanFtml_phpTruthyBytes(v_url_80_);
lean_dec(v_url_80_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; lean_object* v___x_83_; uint8_t v___x_84_; 
v___x_82_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__6, &lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__6);
v___x_83_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_69_, v___x_82_);
v___x_84_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v___x_83_);
lean_dec(v___x_83_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; lean_object* v_page_86_; lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_85_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__8, &lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__8);
v_page_86_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_69_, v___x_85_);
v___x_87_ = lp_lean_x2dftml_LeanFtml_freelinkExistingPages;
v___x_88_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(v_page_86_, v___x_87_);
lean_dec(v_page_86_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; 
v___x_89_ = lean_box(0);
return v___x_89_;
}
else
{
lean_object* v___x_90_; 
v___x_90_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__10));
return v___x_90_;
}
}
else
{
lean_object* v___x_91_; 
v___x_91_ = lean_box(0);
return v___x_91_;
}
}
else
{
lean_object* v___x_92_; 
v___x_92_ = lean_box(0);
return v___x_92_;
}
}
}
else
{
lean_object* v___x_93_; lean_object* v_sources_94_; uint8_t v___x_95_; 
v___x_93_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__12, &lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__12);
v_sources_94_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_69_, v___x_93_);
v___x_95_ = lp_lean_x2dftml_LeanFtml_phpTruthyBytes(v_sources_94_);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; 
lean_dec(v_sources_94_);
v___x_96_ = lean_box(0);
return v___x_96_;
}
else
{
lean_object* v___x_97_; lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_97_ = lean_unsigned_to_nat(10u);
v___x_98_ = lp_lean_x2dftml_LeanFtml_explodeByte(v___x_97_, v_sources_94_);
v___x_99_ = lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0(v_rule_68_, v___x_98_);
lean_dec(v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
v___x_100_ = lean_box(0);
return v___x_100_;
}
else
{
lean_object* v___x_101_; 
v___x_101_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__14));
return v___x_101_;
}
}
}
}
else
{
lean_object* v___x_102_; lean_object* v_src_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_102_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__16, &lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__16);
v_src_103_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_69_, v___x_102_);
v___x_104_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__18, &lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__18);
v___x_105_ = lp_lean_x2dftml_LeanFtml_startsWithBytes(v___x_104_, v_src_103_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_106_ = lean_obj_once(&lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__2, &lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__2_once, _init_lp_lean_x2dftml_List_any___at___00LeanFtml_servingBoundaryOf_spec__0___closed__2);
v___x_107_ = lp_lean_x2dftml_LeanFtml_bytesContainsSub(v___x_106_, v_src_103_);
lean_dec(v_src_103_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
v___x_108_ = lean_box(0);
return v___x_108_;
}
else
{
lean_object* v___x_109_; 
v___x_109_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__20));
return v___x_109_;
}
}
else
{
lean_object* v___x_110_; 
lean_dec(v_src_103_);
v___x_110_ = lean_box(0);
return v___x_110_;
}
}
}
else
{
lean_object* v___x_111_; 
v___x_111_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_servingBoundaryOf___closed__22));
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryOf___boxed(lean_object* v_entry_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = lp_lean_x2dftml_LeanFtml_servingBoundaryOf(v_entry_112_);
lean_dec_ref(v_entry_112_);
return v_res_113_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_servingBoundaryNamesIn_spec__0_spec__0(lean_object* v_a_114_, lean_object* v_x_115_){
_start:
{
if (lean_obj_tag(v_x_115_) == 0)
{
uint8_t v___x_116_; 
v___x_116_ = 0;
return v___x_116_;
}
else
{
lean_object* v_head_117_; lean_object* v_tail_118_; uint8_t v___x_119_; 
v_head_117_ = lean_ctor_get(v_x_115_, 0);
v_tail_118_ = lean_ctor_get(v_x_115_, 1);
v___x_119_ = lean_string_dec_eq(v_a_114_, v_head_117_);
if (v___x_119_ == 0)
{
v_x_115_ = v_tail_118_;
goto _start;
}
else
{
return v___x_119_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_servingBoundaryNamesIn_spec__0_spec__0___boxed(lean_object* v_a_121_, lean_object* v_x_122_){
_start:
{
uint8_t v_res_123_; lean_object* v_r_124_; 
v_res_123_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_servingBoundaryNamesIn_spec__0_spec__0(v_a_121_, v_x_122_);
lean_dec(v_x_122_);
lean_dec_ref(v_a_121_);
v_r_124_ = lean_box(v_res_123_);
return v_r_124_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushUnique___at___00LeanFtml_servingBoundaryNamesIn_spec__0(lean_object* v_xs_125_, lean_object* v_x_126_){
_start:
{
uint8_t v___x_127_; 
v___x_127_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_pushUnique___at___00LeanFtml_servingBoundaryNamesIn_spec__0_spec__0(v_x_126_, v_xs_125_);
if (v___x_127_ == 0)
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_128_ = lean_box(0);
v___x_129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_129_, 0, v_x_126_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = l_List_appendTR___redArg(v_xs_125_, v___x_129_);
return v___x_130_;
}
else
{
lean_dec_ref(v_x_126_);
return v_xs_125_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_servingBoundaryNamesIn_spec__1(lean_object* v_lookup_131_, lean_object* v_x_132_, lean_object* v_x_133_){
_start:
{
if (lean_obj_tag(v_x_133_) == 0)
{
lean_dec_ref(v_lookup_131_);
return v_x_132_;
}
else
{
lean_object* v_head_134_; 
v_head_134_ = lean_ctor_get(v_x_133_, 0);
if (lean_obj_tag(v_head_134_) == 0)
{
lean_object* v_tail_135_; 
v_tail_135_ = lean_ctor_get(v_x_133_, 1);
lean_inc(v_tail_135_);
lean_dec_ref_known(v_x_133_, 2);
v_x_133_ = v_tail_135_;
goto _start;
}
else
{
lean_object* v_tail_137_; lean_object* v_a_138_; lean_object* v___x_139_; 
lean_inc_ref(v_head_134_);
v_tail_137_ = lean_ctor_get(v_x_133_, 1);
lean_inc(v_tail_137_);
lean_dec_ref_known(v_x_133_, 2);
v_a_138_ = lean_ctor_get(v_head_134_, 0);
lean_inc(v_a_138_);
lean_dec_ref_known(v_head_134_, 1);
lean_inc_ref(v_lookup_131_);
v___x_139_ = lean_apply_1(v_lookup_131_, v_a_138_);
if (lean_obj_tag(v___x_139_) == 0)
{
v_x_133_ = v_tail_137_;
goto _start;
}
else
{
lean_object* v_val_141_; lean_object* v___x_142_; 
v_val_141_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_val_141_);
lean_dec_ref_known(v___x_139_, 1);
v___x_142_ = lp_lean_x2dftml_LeanFtml_servingBoundaryOf(v_val_141_);
lean_dec(v_val_141_);
if (lean_obj_tag(v___x_142_) == 0)
{
v_x_133_ = v_tail_137_;
goto _start;
}
else
{
lean_object* v_val_144_; lean_object* v___x_145_; 
v_val_144_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_val_144_);
lean_dec_ref_known(v___x_142_, 1);
v___x_145_ = lp_lean_x2dftml_LeanFtml_pushUnique___at___00LeanFtml_servingBoundaryNamesIn_spec__0(v_x_132_, v_val_144_);
v_x_132_ = v___x_145_;
v_x_133_ = v_tail_137_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_servingBoundaryNamesIn(lean_object* v_lookup_147_, lean_object* v_work_148_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_box(0);
v___x_150_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_servingBoundaryNamesIn_spec__1(v_lookup_147_, v___x_149_, v_work_148_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderWithR48_spec__0(lean_object* v_x_151_, lean_object* v_x_152_){
_start:
{
if (lean_obj_tag(v_x_152_) == 0)
{
return v_x_151_;
}
else
{
lean_object* v_head_153_; lean_object* v_tail_154_; lean_object* v___x_155_; 
v_head_153_ = lean_ctor_get(v_x_152_, 0);
lean_inc(v_head_153_);
v_tail_154_ = lean_ctor_get(v_x_152_, 1);
lean_inc(v_tail_154_);
lean_dec_ref_known(v_x_152_, 2);
v___x_155_ = lp_lean_x2dftml_LeanFtml_pushUnique___at___00LeanFtml_servingBoundaryNamesIn_spec__0(v_x_151_, v_head_153_);
v_x_151_ = v___x_155_;
v_x_152_ = v_tail_154_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderWithR48(lean_object* v_lookup_158_, lean_object* v_conf_159_, lean_object* v_work_160_, lean_object* v_doc_161_){
_start:
{
lean_object* v___f_162_; lean_object* v_base_163_; lean_object* v_output_164_; lean_object* v_unmirrored_165_; lean_object* v_missingKeys_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_175_; 
v___f_162_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderWithR48___closed__0));
lean_inc(v_work_160_);
lean_inc_ref(v_lookup_158_);
v_base_163_ = lp_lean_x2dftml_LeanFtml_renderWith(v___f_162_, v_lookup_158_, v_conf_159_, v_work_160_, v_doc_161_);
v_output_164_ = lean_ctor_get(v_base_163_, 0);
v_unmirrored_165_ = lean_ctor_get(v_base_163_, 1);
v_missingKeys_166_ = lean_ctor_get(v_base_163_, 2);
v_isSharedCheck_175_ = !lean_is_exclusive(v_base_163_);
if (v_isSharedCheck_175_ == 0)
{
v___x_168_ = v_base_163_;
v_isShared_169_ = v_isSharedCheck_175_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_missingKeys_166_);
lean_inc(v_unmirrored_165_);
lean_inc(v_output_164_);
lean_dec(v_base_163_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_175_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_173_; 
v___x_170_ = lp_lean_x2dftml_LeanFtml_servingBoundaryNamesIn(v_lookup_158_, v_work_160_);
v___x_171_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_renderWithR48_spec__0(v_unmirrored_165_, v___x_170_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 1, v___x_171_);
v___x_173_ = v___x_168_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_output_164_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_174_, 2, v_missingKeys_166_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR48___lam__0(lean_object* v_tokens_176_, lean_object* v_k_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_List_get_x3fInternal___redArg(v_tokens_176_, v_k_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR48___lam__0___boxed(lean_object* v_tokens_179_, lean_object* v_k_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = lp_lean_x2dftml_LeanFtml_renderStateR48___lam__0(v_tokens_179_, v_k_180_);
lean_dec(v_tokens_179_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStateR48(lean_object* v_conf_182_, lean_object* v_st_183_){
_start:
{
lean_object* v_work_184_; lean_object* v_tokens_185_; lean_object* v_doc_186_; lean_object* v___f_187_; lean_object* v___x_188_; 
v_work_184_ = lean_ctor_get(v_st_183_, 0);
lean_inc(v_work_184_);
v_tokens_185_ = lean_ctor_get(v_st_183_, 1);
lean_inc(v_tokens_185_);
v_doc_186_ = lean_ctor_get(v_st_183_, 2);
lean_inc_ref(v_doc_186_);
lean_dec_ref(v_st_183_);
v___f_187_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_renderStateR48___lam__0___boxed), 2, 1);
lean_closure_set(v___f_187_, 0, v_tokens_185_);
v___x_188_ = lp_lean_x2dftml_LeanFtml_renderWithR48(v___f_187_, v_conf_182_, v_work_184_, v_doc_186_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderServingE2E(lean_object* v_conf_196_, lean_object* v_tags_197_, lean_object* v_source_198_){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v_work_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_217_; 
v___x_199_ = lp_lean_x2dftml_LeanFtml_convCRLF(v_source_198_);
v___x_200_ = lp_lean_x2dftml_LeanFtml_ParseState_ofSource(v___x_199_);
v_work_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_217_ == 0)
{
lean_object* v_unused_218_; lean_object* v_unused_219_; lean_object* v_unused_220_; 
v_unused_218_ = lean_ctor_get(v___x_200_, 3);
lean_dec(v_unused_218_);
v_unused_219_ = lean_ctor_get(v___x_200_, 2);
lean_dec(v_unused_219_);
v_unused_220_ = lean_ctor_get(v___x_200_, 1);
lean_dec(v_unused_220_);
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_217_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_work_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_217_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; uint8_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v_st0_212_; 
v___x_205_ = lean_box(0);
v___x_206_ = 0;
v___x_207_ = lean_box(0);
v___x_208_ = lean_unsigned_to_nat(0u);
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_205_);
lean_ctor_set(v___x_209_, 1, v_tags_197_);
v___x_210_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
lean_ctor_set(v___x_210_, 1, v___x_205_);
lean_ctor_set(v___x_210_, 2, v___x_205_);
lean_ctor_set(v___x_210_, 3, v___x_205_);
lean_ctor_set(v___x_210_, 4, v___x_205_);
lean_ctor_set(v___x_210_, 5, v___x_205_);
lean_ctor_set(v___x_210_, 6, v___x_205_);
lean_ctor_set(v___x_210_, 7, v___x_207_);
lean_ctor_set(v___x_210_, 8, v___x_207_);
lean_ctor_set(v___x_210_, 9, v___x_205_);
lean_ctor_set(v___x_210_, 10, v___x_208_);
lean_ctor_set(v___x_210_, 11, v___x_208_);
lean_ctor_set(v___x_210_, 12, v___x_205_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 3, v___x_205_);
lean_ctor_set(v___x_203_, 2, v___x_210_);
lean_ctor_set(v___x_203_, 1, v___x_205_);
v_st0_212_ = v___x_203_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_work_201_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v___x_205_);
lean_ctor_set(v_reuseFailAlloc_216_, 2, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_216_, 3, v___x_205_);
v_st0_212_ = v_reuseFailAlloc_216_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
lean_object* v___x_213_; lean_object* v_st_214_; lean_object* v___x_215_; 
lean_ctor_set_uint8(v_st0_212_, sizeof(void*)*4, v___x_206_);
v___x_213_ = lp_lean_x2dftml_LeanFtml_pipelineFull;
v_st_214_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_runRules_spec__0(v_st0_212_, v___x_213_);
v___x_215_ = lp_lean_x2dftml_LeanFtml_renderStateR48(v_conf_196_, v_st_214_);
return v___x_215_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NotesRender(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ServingRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Pipeline(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_ServingRender(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_NotesRender(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ServingRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_Pipeline(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
