/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI2_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI2 */
void v_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI2::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_SBI2::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI2::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_SBI2::bec */ bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::v_SBI2::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::v_SBI2::t_driver */ T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* TargetLimits_Pkg::v_SBI2::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::v_SBI2::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::v_SBI2::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI2::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::v_SBI2::V_SBI2 */ V_internal_real_Type_SDM_Types_Pkg *V_SBI2)
{
  /* TargetLimits_Pkg::v_SBI2 */
  static L_internal_real_Type_SDM_Types_Pkg tmp3;
  /* TargetLimits_Pkg::v_SBI2 */
  static V_internal_real_Type_SDM_Types_Pkg tmp2;
  /* TargetLimits_Pkg::v_SBI2 */
  static kcg_bool tmp1;
  /* TargetLimits_Pkg::v_SBI2 */
  static V_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::v_SBI2::_L19 */
  static L_internal_real_Type_SDM_Types_Pkg _L19;
  /* TargetLimits_Pkg::v_SBI2::_L33 */
  static kcg_bool _L33;
  /* TargetLimits_Pkg::v_SBI2::_L49 */
  static kcg_real _L49;
  /* TargetLimits_Pkg::v_SBI2::_L48 */
  static kcg_bool _L48;
  /* TargetLimits_Pkg::v_SBI2::_L47 */
  static kcg_bool _L47;
  /* TargetLimits_Pkg::v_SBI2::_L54 */
  static kcg_bool _L54;
  
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(EBDcurve, V_target, &_L54, &_L19);
  _L49 = D_maxsafefront + V_est * ((*T).bs2 + t_driver) + (*bec).d;
  /* ck_guiCurveEnabled */ if (guiCurveEnabled) {
    /* 3 */
    getLocationOnCurve_CalcBrakingCurves_types(
      GUIcurve,
      V_target,
      &_L54,
      &tmp3);
  }
  else {
    _L54 = kcg_false;
    tmp3 = 0.0;
  }
  _L33 = (_L54 & (tmp3 > D_maxsafefront)) | (_L19 > _L49);
  tmp1 = _L54 & _L33;
  /* ck__L45 */ if (tmp1) {
    /* 2 */
    getSpeedOnCurve_CalcBrakingCurves_types(
      GUIcurve,
      D_maxsafefront,
      &_L54,
      &tmp2);
  }
  else {
    _L54 = kcg_false;
    tmp2 = 0.0;
  }
  /* ck__L33 */ if (_L33) {
    /* 1 */
    getSpeedOnCurve_CalcBrakingCurves_types(EBDcurve, _L49, &tmp1, &tmp);
  }
  else {
    tmp1 = kcg_false;
    tmp = 0.0;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(
    _L54,
    tmp2,
    tmp1,
    tmp - ((*bec).v - V_est),
    &_L47,
    &_L48,
    &_L49);
  /* 1 */ if (_L33) {
    *V_SBI2 = _L49;
  }
  else {
    *V_SBI2 = V_target;
  }
  *valid = !_L33 | _L48;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** v_SBI2_TargetLimits_Pkg.c
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

