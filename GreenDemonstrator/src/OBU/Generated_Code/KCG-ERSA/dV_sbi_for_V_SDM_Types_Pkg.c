/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dV_sbi_for_V_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::dV_sbi_for_V */
V_odometry_Type_Obu_BasicTypes_Pkg dV_sbi_for_V_SDM_Types_Pkg(
  /* SDM_Types_Pkg::dV_sbi_for_V::V_input */ V_odometry_Type_Obu_BasicTypes_Pkg V_input)
{
  /* SDM_Types_Pkg::dV_sbi_for_V::_L8 */ kcg_int _L8;
  /* SDM_Types_Pkg::dV_sbi_for_V::dv_sbi */ V_odometry_Type_Obu_BasicTypes_Pkg dv_sbi;
  
  _L8 = (kcg_int)
      ((kcg_real) (V_input - V_sbi_min_SDM_Types_Pkg) * ((kcg_real)
            (dV_sbi_max_SDM_Types_Pkg - dV_sbi_min_SDM_Types_Pkg) / (kcg_real)
            (V_sbi_max_SDM_Types_Pkg - V_sbi_min_SDM_Types_Pkg))) +
    dV_sbi_min_SDM_Types_Pkg;
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
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

