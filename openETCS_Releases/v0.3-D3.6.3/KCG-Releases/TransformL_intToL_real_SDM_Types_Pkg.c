/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformL_intToL_real */
L_internal_real_Type_SDM_Types_Pkg TransformL_intToL_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformL_intToL_real::loc_int */ L_internal_Type_Obu_BasicTypes_Pkg loc_int)
{
  /* SDM_Types_Pkg::TransformL_intToL_real::loc_real */
  static L_internal_real_Type_SDM_Types_Pkg loc_real;
  
  loc_real = (kcg_real) loc_int / 100.0;
  return loc_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformL_intToL_real_SDM_Types_Pkg.c
** Generation date: 2015-11-05T08:55:26
*************************************************************$ */

