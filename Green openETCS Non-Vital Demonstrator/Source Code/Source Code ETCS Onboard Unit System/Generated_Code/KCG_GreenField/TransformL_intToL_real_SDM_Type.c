/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformL_intToL_real_SDM_Type.h"

/* SDM_Types_Pkg::TransformL_intToL_real */
L_internal_real_Type_SDM_Types_ TransformL_intToL_real_SDM_Type(
  /* SDM_Types_Pkg::TransformL_intToL_real::loc_int */ L_internal_Type_Obu_BasicTypes_ loc_int)
{
  /* SDM_Types_Pkg::TransformL_intToL_real::loc_real */
  static L_internal_real_Type_SDM_Types_ loc_real;
  
  loc_real = (kcg_real) loc_int / 100.0;
  return loc_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformL_intToL_real_SDM_Type.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

