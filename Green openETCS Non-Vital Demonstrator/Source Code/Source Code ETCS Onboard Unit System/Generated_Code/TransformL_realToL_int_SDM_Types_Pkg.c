/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformL_realToL_int_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformL_realToL_int */
L_internal_Type_Obu_BasicTypes_Pkg TransformL_realToL_int_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformL_realToL_int::loc_real */L_internal_real_Type_SDM_Types_Pkg loc_real)
{
  /* SDM_Types_Pkg::TransformL_realToL_int::loc_int */
  static L_internal_Type_Obu_BasicTypes_Pkg loc_int;
  
  loc_int = (kcg_int) (loc_real * 100.0);
  return loc_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransformL_realToL_int_SDM_Types_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

