/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "surplusTractionDeltas_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::surplusTractionDeltas */
void surplusTractionDeltas_TargetLimits_Pkg(
  /* TargetLimits_Pkg::surplusTractionDeltas::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::surplusTractionDeltas::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_part */ T_trac_t_TargetLimits_Pkg *T_part,
  /* TargetLimits_Pkg::surplusTractionDeltas::bec */ bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_est */ V_internal_real_Type_SDM_Types_Pkg *V_est,
  /* TargetLimits_Pkg::surplusTractionDeltas::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_ura */ V_internal_real_Type_SDM_Types_Pkg *V_ura)
{
  /* TargetLimits_Pkg::surplusTractionDeltas */
  static T_internal_real_Type_SDM_Types_Pkg tmp1;
  /* TargetLimits_Pkg::surplusTractionDeltas */
  static array_real_3 tmp;
  /* TargetLimits_Pkg::surplusTractionDeltas::T_berem */
  static T_internal_real_Type_SDM_Types_Pkg T_berem;
  /* TargetLimits_Pkg::surplusTractionDeltas::T_Traction */
  static T_internal_real_Type_SDM_Types_Pkg T_Traction;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L108 */
  static T_internal_real_Type_SDM_Types_Pkg _L108;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L110 */
  static kcg_bool _L110;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L145 */
  static A_internal_real_Type_SDM_Types_Pkg _L145;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L157 */
  static kcg_real _L157;
  
  (*T).inhComp = (*T_part).inhComp;
  _L110 = V_target == 0.0;
  /* 3 */ if (_L110) {
    _L108 = (*T_b).service[0];
    tmp1 = (*T_b).emergency[0];
  }
  else {
    _L108 = (*T_b).service[1];
    tmp1 = (*T_b).emergency[1];
  }
  (*T).bs = _L108;
  /* 1 */
  splitT_bs_TargetLimits_Pkg(
    _L108,
    (*trainData_int).isSB_FBAvailable,
    (*trainData_int).isSB_CmdAvailable,
    &(*T).bs1,
    &T_Traction);
  (*T).bs2 = T_Traction;
  /* 1 */ if ((*trainData_int).isTCOAvailable) {
    _L157 = (*trainData_int).T_traction_cut_off - (T_warning_SDM_Types_Pkg +
        T_Traction);
  }
  else {
    _L157 = (*trainData_int).T_traction_cut_off;
  }
  T_Traction = /* 1 */ limitPositive_SDM_Types_Pkg(_L157);
  (*T).Traction = T_Traction;
  T_berem = /* 3 */ limitPositive_SDM_Types_Pkg(tmp1 - T_Traction);
  (*T).berem = T_berem;
  *V_ura = /* 4 */
    TransformV_intToV_real_SDM_Types_Pkg((*odometry).speed.v_upper) - /* 3 */
    TransformV_intToV_real_SDM_Types_Pkg((*odometry).speed.v_rawNominal);
  _L157 = 0.8 * _L108;
  /* 4 */ if ((*trainData_int).isSB_FBAvailable) {
    (*T).indication = 5.0;
  }
  else /* 2 */ if (5.0 >= _L157) {
    (*T).indication = 5.0;
  }
  else {
    (*T).indication = _L157;
  }
  _L145 = /* 1 */
    TransformA_intToA_real_SDM_Types_Pkg((*odometry).acceleration);
  tmp[1] = T_Traction * _L145;
  *V_est = /* 2 */
    TransformV_intToV_real_SDM_Types_Pkg((*odometry).speed.v_safeNominal);
  /* 2 */ if ((*T_part).inhComp) {
    tmp[0] = 0.0;
  }
  else {
    tmp[0] = *V_ura;
  }
  /* 1 */ if (0.4 <= _L145) {
    _L157 = 0.4;
  }
  else {
    _L157 = _L145;
  }
  tmp[2] = /* 2 */ limitPositive_SDM_Types_Pkg(_L157) * T_berem;
  /* 1 */ calcBec_TargetLimits_Pkg(&tmp, V_target, *V_est, T, bec);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** surplusTractionDeltas_TargetLimits_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

