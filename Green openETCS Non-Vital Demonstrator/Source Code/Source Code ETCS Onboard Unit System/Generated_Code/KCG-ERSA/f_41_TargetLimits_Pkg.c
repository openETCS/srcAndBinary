/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "f_41_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::f_41 */
V_internal_real_Type_SDM_Types_Pkg f_41_TargetLimits_Pkg(
  /* TargetLimits_Pkg::f_41::v_in */ V_internal_real_Type_SDM_Types_Pkg v_in)
{
  /* TargetLimits_Pkg::f_41::v_out */ V_internal_real_Type_SDM_Types_Pkg v_out;
  
  v_out = /* 1 */ limitPositive_SDM_Types_Pkg(v_in - 30.0 / 3.6) * (10.0 /
      (500.0 - 30.0) / 3.6) + 2.0 / 3.6;
  return v_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** f_41_TargetLimits_Pkg.c
** Generation date: 2015-11-25T14:46:11
*************************************************************$ */

