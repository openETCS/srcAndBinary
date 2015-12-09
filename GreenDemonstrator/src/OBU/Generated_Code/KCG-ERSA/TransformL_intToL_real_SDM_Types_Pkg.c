/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformL_intToL_real */
L_internal_real_Type_SDM_Types_Pkg TransformL_intToL_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformL_intToL_real::loc_int */ L_internal_Type_Obu_BasicTypes_Pkg loc_int)
{
  /* SDM_Types_Pkg::TransformL_intToL_real::loc_real */ L_internal_real_Type_SDM_Types_Pkg loc_real;
  
  loc_real = (kcg_real) loc_int / 100.0;
  return loc_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformL_intToL_real_SDM_Types_Pkg.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

