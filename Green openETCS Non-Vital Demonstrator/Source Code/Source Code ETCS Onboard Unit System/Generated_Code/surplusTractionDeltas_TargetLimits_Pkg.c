/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "surplusTractionDeltas_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::surplusTractionDeltas */
void surplusTractionDeltas_TargetLimits_Pkg(
  /* TargetLimits_Pkg::surplusTractionDeltas::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::surplusTractionDeltas::odometry */Odometry_real_T_SDM_Types_Pkg *odometry,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_b */t_Brake_t_SDMConversionModelPkg *T_b,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_target */V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_part */T_trac_t_TargetLimits_Pkg *T_part,
  /* TargetLimits_Pkg::surplusTractionDeltas::bec */bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_est */V_internal_real_Type_SDM_Types_Pkg *V_est,
  /* TargetLimits_Pkg::surplusTractionDeltas::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_ura */V_internal_real_Type_SDM_Types_Pkg *V_ura)
{
  static T_internal_real_Type_SDM_Types_Pkg tmp2;
  static array_real_3 tmp1;
  static kcg_real tmp;
  /* TargetLimits_Pkg::surplusTractionDeltas::T_berem */
  static T_internal_real_Type_SDM_Types_Pkg T_berem;
  /* TargetLimits_Pkg::surplusTractionDeltas::T_Traction */
  static T_internal_real_Type_SDM_Types_Pkg T_Traction;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L110 */
  static kcg_bool _L110;
  
  (*T).inhComp = (*T_part).inhComp;
  _L110 = V_target == 0.0;
  if (_L110) {
    tmp2 = (*T_b).service[0];
  }
  else {
    tmp2 = (*T_b).service[1];
  }
  (*T).bs = tmp2;
  *V_ura = (*odometry).speed.v_upper - (*odometry).speed.v_rawNominal;
  /* 1 */
  splitT_bs_TargetLimits_Pkg(
    tmp2,
    (*trainData_int).isSB_FBAvailable,
    (*trainData_int).isSB_CmdAvailable,
    &tmp,
    &T_Traction);
  (*T).bs1 = tmp;
  (*T).bs2 = T_Traction;
  if ((*trainData_int).isTCOAvailable) {
    tmp2 = (*trainData_int).T_traction_cut_off - (T_warning_SDM_Types_Pkg +
        T_Traction);
  }
  else {
    tmp2 = (*trainData_int).T_traction_cut_off;
  }
  T_Traction = /* 1 */ limitPositive_SDM_Types_Pkg(tmp2);
  tmp1[1] = T_Traction * (*odometry).acceleration;
  (*T).Traction = T_Traction;
  if (_L110) {
    tmp2 = (*T_b).emergency[0];
  }
  else {
    tmp2 = (*T_b).emergency[1];
  }
  T_berem = /* 3 */ limitPositive_SDM_Types_Pkg(tmp2 - T_Traction);
  (*T).berem = T_berem;
  *V_est = (*odometry).speed.v_safeNominal;
  if ((*T_part).inhComp) {
    tmp1[0] = 0.0;
  }
  else {
    tmp1[0] = *V_ura;
  }
  if (0.4 <= (*odometry).acceleration) {
    tmp = 0.4;
  }
  else {
    tmp = (*odometry).acceleration;
  }
  tmp1[2] = /* 2 */ limitPositive_SDM_Types_Pkg(tmp) * T_berem;
  /* 1 */ calcBec_TargetLimits_Pkg(&tmp1, V_target, *V_est, T, bec);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** surplusTractionDeltas_TargetLimits_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

