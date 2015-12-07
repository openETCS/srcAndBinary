/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dV_sbi_for_V_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::dV_sbi_for_V */
V_internal_real_Type_SDM_Types_ dV_sbi_for_V_SDM_Types_Pkg(
  /* SDM_Types_Pkg::dV_sbi_for_V::V_input */ V_internal_real_Type_SDM_Types_ V_input)
{
  /* SDM_Types_Pkg::dV_sbi_for_V::_L8 */
  static kcg_real _L8;
  /* SDM_Types_Pkg::dV_sbi_for_V::dv_sbi */
  static V_internal_real_Type_SDM_Types_ dv_sbi;
  
  _L8 = (V_input - V_sbi_min_SDM_Types_Pkg) * ((dV_sbi_max_SDM_Types_Pkg -
        dV_sbi_min_SDM_Types_Pkg) / (V_sbi_max_SDM_Types_Pkg -
        V_sbi_min_SDM_Types_Pkg)) + dV_sbi_min_SDM_Types_Pkg;
  /* 1 */ if (V_input > V_sbi_min_SDM_Types_Pkg) {
    /* 1 */ if (_L8 <= dV_sbi_max_SDM_Types_Pkg) {
      dv_sbi = _L8;
    }
    else {
      dv_sbi = dV_sbi_max_SDM_Types_Pkg;
    }
  }
  else {
    dv_sbi = dV_sbi_min_SDM_Types_Pkg;
  }
  return dv_sbi;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dV_sbi_for_V_SDM_Types_Pkg.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

