/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "P_SpeedRelatedToSBD_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::P_SpeedRelatedToSBD */
V_internal_real_Type_SDM_Types_Pkg P_SpeedRelatedToSBD_SDM_Types_Pkg(
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::d_estfront */L_internal_real_Type_SDM_Types_Pkg d_estfront,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::v_est */V_internal_real_Type_SDM_Types_Pkg v_est,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::guiParabola */ParabolaCurve_T_CalcBrakingCurves_types *guiParabola,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::t_bs1 */T_internal_real_Type_SDM_Types_Pkg t_bs1,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::sdbParabola */ParabolaCurve_T_CalcBrakingCurves_types *sdbParabola,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::d_eoa */L_internal_real_Type_SDM_Types_Pkg d_eoa)
{
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::_L14 */
  static kcg_real _L14;
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::_L3 */
  static kcg_bool _L3;
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::_L4 */
  static kcg_bool _L4;
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::_L24 */
  static V_internal_real_Type_SDM_Types_Pkg _L24;
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::_L25 */
  static V_internal_real_Type_SDM_Types_Pkg _L25;
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::p_speed */
  static V_internal_real_Type_SDM_Types_Pkg p_speed;
  
  /* 3 */
  getSpeedOnCurve_CalcBrakingCurves_types(guiParabola, v_est, &_L4, &_L25);
  _L14 = d_estfront + v_est * (T_driver_SDM_Types_Pkg + t_bs1);
  /* 2 */
  getSpeedOnCurve_CalcBrakingCurves_types(sdbParabola, _L14, &_L3, &_L24);
  if ((d_eoa > _L14) & _L3) {
    if (guiCurveEnabled & _L4) {
      if (_L25 <= _L24) {
        p_speed = _L25;
      }
      else {
        p_speed = _L24;
      }
    }
    else {
      p_speed = _L24;
    }
  }
  else {
    p_speed = 0.0;
  }
  return p_speed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** P_SpeedRelatedToSBD_SDM_Types_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

