// Lean compiler output
// Module: Init
// Imports: Init.Prelude Init.Notation Init.Tactics Init.TacticsExtra Init.ByCases Init.RCases Init.Core Init.Control Init.Data.Basic Init.WF Init.WFTactics Init.Data Init.System Init.Util Init.Dynamic Init.ShareCommon Init.MetaTypes Init.Meta Init.NotationExtra Init.SimpLemmas Init.PropLemmas Init.Hints Init.Conv Init.Guard Init.Simproc Init.SizeOfLemmas Init.BinderPredicates Init.Ext Init.Omega Init.MacroTrace Init.Grind Init.GrindInstances Init.While Init.Syntax Init.Internal Init.Try Init.BinderNameHint Init.Task
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
lean_object* initialize_Init_Prelude(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Notation(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Tactics(uint8_t builtin, lean_object*);
lean_object* initialize_Init_TacticsExtra(uint8_t builtin, lean_object*);
lean_object* initialize_Init_ByCases(uint8_t builtin, lean_object*);
lean_object* initialize_Init_RCases(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Core(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Control(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Init_WF(uint8_t builtin, lean_object*);
lean_object* initialize_Init_WFTactics(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Data(uint8_t builtin, lean_object*);
lean_object* initialize_Init_System(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Util(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Dynamic(uint8_t builtin, lean_object*);
lean_object* initialize_Init_ShareCommon(uint8_t builtin, lean_object*);
lean_object* initialize_Init_MetaTypes(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Meta(uint8_t builtin, lean_object*);
lean_object* initialize_Init_NotationExtra(uint8_t builtin, lean_object*);
lean_object* initialize_Init_SimpLemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Init_PropLemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Hints(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Conv(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Guard(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Simproc(uint8_t builtin, lean_object*);
lean_object* initialize_Init_SizeOfLemmas(uint8_t builtin, lean_object*);
lean_object* initialize_Init_BinderPredicates(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Ext(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Omega(uint8_t builtin, lean_object*);
lean_object* initialize_Init_MacroTrace(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Grind(uint8_t builtin, lean_object*);
lean_object* initialize_Init_GrindInstances(uint8_t builtin, lean_object*);
lean_object* initialize_Init_While(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Syntax(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Internal(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Try(uint8_t builtin, lean_object*);
lean_object* initialize_Init_BinderNameHint(uint8_t builtin, lean_object*);
lean_object* initialize_Init_Task(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Prelude(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Notation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Tactics(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_TacticsExtra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_RCases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Core(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WF(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WFTactics(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Util(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Dynamic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ShareCommon(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Meta(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_NotationExtra(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_SimpLemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_PropLemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Hints(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Conv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Guard(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Simproc(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_SizeOfLemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_BinderPredicates(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Ext(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MacroTrace(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_GrindInstances(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Syntax(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Internal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Try(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_BinderNameHint(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Task(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
