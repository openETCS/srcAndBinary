/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DisplayedPermittedSpeed_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::DisplayedPermittedSpeed */
V_internal_real_Type_SDM_Types_Pkg DisplayedPermittedSpeed_SDM_Types_Pkg(
  /* SDM_Types_Pkg::DisplayedPermittedSpeed::v_p_mrdt */V_internal_real_Type_SDM_Types_Pkg v_p_mrdt,
  /* SDM_Types_Pkg::DisplayedPermittedSpeed::v_target_mrdt */V_internal_real_Type_SDM_Types_Pkg v_target_mrdt,
  /* SDM_Types_Pkg::DisplayedPermittedSpeed::v_mrsp */V_internal_real_Type_SDM_Types_Pkg v_mrsp)
{
  /* SDM_Types_Pkg::DisplayedPermittedSpeed::_L4 */
  static V_internal_real_Type_SDM_Types_Pkg _L4;
  /* SDM_Types_Pkg::DisplayedPermittedSpeed::v_p_dmi */
  static V_internal_real_Type_SDM_Types_Pkg v_p_dmi;
  
  if (v_p_mrdt >= v_target_mrdt) {
    _L4 = v_p_mrdt;
  }
  else {
    _L4 = v_target_mrdt;
  }
  if (_L4 <= v_mrsp) {
    v_p_dmi = _L4;
  }
  else {
    v_p_dmi = v_mrsp;
  }
  return v_p_dmi;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DisplayedPermittedSpeed_SDM_Types_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

