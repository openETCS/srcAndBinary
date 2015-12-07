/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformA_intToA_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformA_intToA_real */
A_internal_real_Type_SDM_Types_Pkg TransformA_intToA_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformA_intToA_real::acc_int */ A_internal_Type_Obu_BasicTypes_Pkg acc_int)
{
  /* SDM_Types_Pkg::TransformA_intToA_real::acc_real */ A_internal_real_Type_SDM_Types_Pkg acc_real;
  
  acc_real = (kcg_real) acc_int / 100.0;
  return acc_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformA_intToA_real_SDM_Types_Pkg.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

