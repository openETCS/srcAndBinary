/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_ReleaseOnboardIterator_Target.h"

/* TargetLimits_Pkg::v_ReleaseOnboardIterator */
void v_ReleaseOnboardIterator_Target(
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_release */ V_internal_real_Type_SDM_Types_ V_release,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::EBDcurve */ ParabolaCurve_T_CalcBrakingCurv *EBDcurve,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_ura */ V_internal_real_Type_SDM_Types_ V_ura,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_target */ V_internal_real_Type_SDM_Types_ V_target,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::D_tripEOA */ L_internal_real_Type_SDM_Types_ D_tripEOA,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::run_condition */ kcg_bool *run_condition,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_release_next */ V_internal_real_Type_SDM_Types_ *V_release_next)
{
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator */
  static kcg_real tmp;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::v_delta0rsob */
  static V_internal_real_Type_SDM_Types_ v_delta0rsob;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L21 */
  static V_internal_real_Type_SDM_Types_ _L21;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L20 */
  static kcg_bool _L20;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L32 */
  static L_internal_real_Type_SDM_Types_ _L32;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L31 */
  static kcg_bool _L31;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L40 */
  static kcg_real _L40;
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::_L50 */
  static kcg_bool _L50;
  
  _L21 = /* 1 */ f_41_TargetLimits_Pkg(V_release);
  _L20 = !(*T).inhComp;
  /* ck__L10 */ if (_L20) {
    /* 2 */ if (V_ura >= _L21) {
      v_delta0rsob = V_ura;
    }
    else {
      v_delta0rsob = _L21;
    }
  }
  else {
    v_delta0rsob = 0.0;
  }
  tmp = D_tripEOA + (V_release + v_delta0rsob) * ((*T).berem + (*T).Traction);
  /* 1 */ getSpeedOnCurve_CalcBrakingCurv(EBDcurve, tmp, &_L20, &_L21);
  _L40 = _L21 - v_delta0rsob;
  /* 1 */ getLocationOnCurve_CalcBrakingC(EBDcurve, V_target, &_L31, &_L32);
  /* 1 */ if ((_L32 <= tmp) | (_L40 <= V_target)) {
    _L21 = V_target;
  }
  else {
    _L21 = _L40;
  }
  _L40 = _L21 - V_release;
  _L50 = _L31 & _L20;
  /* 2 */ if (0. <= _L40) {
    tmp = _L40;
  }
  else {
    tmp = - _L40;
  }
  *run_condition = _L50 & !(tmp <= 1.0 / 3.6);
  /* 2 */ if (_L50) {
    *V_release_next = _L21;
  }
  else {
    *V_release_next = - 1.0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** v_ReleaseOnboardIterator_Target.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

