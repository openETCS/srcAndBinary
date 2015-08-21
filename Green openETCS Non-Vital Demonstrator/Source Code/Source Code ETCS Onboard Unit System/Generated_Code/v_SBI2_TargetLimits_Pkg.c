/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI2_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI2 */
void v_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI2::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_SBI2::V_est */V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI2::V_target */V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_SBI2::bec */bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::v_SBI2::D_maxsafefront */L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::v_SBI2::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI2::V_SBI2 */V_internal_real_Type_SDM_Types_Pkg *V_SBI2,
  /* TargetLimits_Pkg::v_SBI2::valid */kcg_bool *valid)
{
  static V_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::v_SBI2::_L5 */
  static kcg_real _L5;
  /* TargetLimits_Pkg::v_SBI2::_L11 */
  static kcg_bool _L11;
  
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(EBDcurve, V_target, &_L11, &tmp);
  _L5 = (*bec).d + D_maxsafefront + V_est * (*T).bs2;
  _L11 = tmp > _L5;
  if (_L11) {
    /* 1 */ getSpeedOnCurve_CalcBrakingCurves_types(EBDcurve, _L5, valid, &tmp);
    *V_SBI2 = tmp - ((*bec).v - V_est);
  }
  else {
    *valid = kcg_false;
    *V_SBI2 = V_target;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** v_SBI2_TargetLimits_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

