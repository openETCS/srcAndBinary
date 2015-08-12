/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "P_SpeedRelatedToEBD_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::P_SpeedRelatedToEBD */
void P_SpeedRelatedToEBD_SDM_Types_Pkg(
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::d_maxSafefront */L_internal_real_Type_SDM_Types_Pkg d_maxSafefront,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::d_maxSafefrontEBDtarget */L_internal_real_Type_SDM_Types_Pkg d_maxSafefrontEBDtarget,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::v_est */V_internal_real_Type_SDM_Types_Pkg v_est,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::ebdParabola */ParabolaCurve_T_CalcBrakingCurves_types *ebdParabola,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::guiParabola */ParabolaCurve_T_CalcBrakingCurves_types *guiParabola,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::t_bs2 */T_internal_real_Type_SDM_Types_Pkg t_bs2,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::v_target */V_internal_real_Type_SDM_Types_Pkg v_target,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::d_bec */L_internal_real_Type_SDM_Types_Pkg d_bec,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::v_bec */V_internal_real_Type_SDM_Types_Pkg v_bec,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::p_speed */V_internal_real_Type_SDM_Types_Pkg *p_speed,
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::valid */kcg_bool *valid)
{
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L29 */
  static kcg_bool _L29_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L27 */
  static V_internal_real_Type_SDM_Types_Pkg _L27_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L26 */
  static V_internal_real_Type_SDM_Types_Pkg _L26_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L25 */
  static L_internal_real_Type_SDM_Types_Pkg _L25_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L24 */
  static L_internal_real_Type_SDM_Types_Pkg _L24_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L10 */
  static kcg_bool _L10_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L21 */
  static kcg_bool _L21_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L16 */
  static kcg_bool _L16_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L17 */
  static kcg_real _L17_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::then::_L12 */
  static kcg_bool _L12_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::else::_L16 */
  static L_internal_real_Type_SDM_Types_Pkg _L161_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::else::_L15 */
  static V_internal_real_Type_SDM_Types_Pkg _L15_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::else::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::else::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::IfBlock1::else::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* SDM_Types_Pkg::P_SpeedRelatedToEBD::dist */
  static L_internal_real_Type_SDM_Types_Pkg dist;
  
  dist = d_bec + d_maxSafefront + (t_bs2 + T_driver_SDM_Types_Pkg) * v_est;
  if (guiCurveEnabled) {
    /* 3 */
    getSpeedOnCurve_CalcBrakingCurves_types(
      ebdParabola,
      dist,
      &_L16_IfBlock1,
      &_L26_IfBlock1);
    _L17_IfBlock1 = _L26_IfBlock1 - (v_bec - v_est);
    /* 4 */
    getSpeedOnCurve_CalcBrakingCurves_types(
      guiParabola,
      d_maxSafefrontEBDtarget,
      &_L21_IfBlock1,
      &_L27_IfBlock1);
    _L29_IfBlock1 = _L17_IfBlock1 <= _L27_IfBlock1;
    /* 4 */
    getLocationOnCurve_CalcBrakingCurves_types(
      guiParabola,
      v_target,
      &_L10_IfBlock1,
      &_L25_IfBlock1);
    /* 3 */
    getLocationOnCurve_CalcBrakingCurves_types(
      ebdParabola,
      v_target,
      &_L7_IfBlock1,
      &_L24_IfBlock1);
    _L12_IfBlock1 = ((dist >= _L24_IfBlock1) & _L7_IfBlock1) |
      ((d_maxSafefront >= _L25_IfBlock1) & _L10_IfBlock1);
    if (_L12_IfBlock1) {
      *p_speed = v_target;
      *valid = _L12_IfBlock1;
    }
    else if (_L29_IfBlock1) {
      *p_speed = _L17_IfBlock1;
      *valid = _L16_IfBlock1;
    }
    else {
      *p_speed = _L27_IfBlock1;
      *valid = _L21_IfBlock1;
    }
  }
  else {
    /* 2 */
    getLocationOnCurve_CalcBrakingCurves_types(
      ebdParabola,
      v_target,
      &_L5_IfBlock1,
      &_L161_IfBlock1);
    /* 2 */
    getSpeedOnCurve_CalcBrakingCurves_types(
      ebdParabola,
      dist,
      &_L8_IfBlock1,
      &_L15_IfBlock1);
    _L6_IfBlock1 = dist >= _L161_IfBlock1;
    if (_L6_IfBlock1) {
      *p_speed = v_target;
      *valid = _L5_IfBlock1;
    }
    else {
      *p_speed = _L15_IfBlock1 - (v_bec - v_est);
      *valid = _L8_IfBlock1;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** P_SpeedRelatedToEBD_SDM_Types_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
