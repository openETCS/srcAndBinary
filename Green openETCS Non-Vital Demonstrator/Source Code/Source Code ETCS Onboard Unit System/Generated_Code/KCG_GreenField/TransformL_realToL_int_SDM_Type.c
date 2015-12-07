/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformL_realToL_int_SDM_Type.h"

/* SDM_Types_Pkg::TransformL_realToL_int */
L_internal_Type_Obu_BasicTypes_ TransformL_realToL_int_SDM_Type(
  /* SDM_Types_Pkg::TransformL_realToL_int::loc_real */ L_internal_real_Type_SDM_Types_ loc_real)
{
  /* SDM_Types_Pkg::TransformL_realToL_int::loc_int */
  static L_internal_Type_Obu_BasicTypes_ loc_int;
  
  loc_int = (kcg_int) (loc_real * 100.0);
  return loc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformL_realToL_int_SDM_Type.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

