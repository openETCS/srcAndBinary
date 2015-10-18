/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_odoToV_int_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_odoToV_int */
V_internal_Type_Obu_BasicTypes_Pkg TransformV_odoToV_int_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformV_odoToV_int::v_odo */ V_odometry_Type_Obu_BasicTypes_Pkg v_odo)
{
  /* SDM_Types_Pkg::TransformV_odoToV_int::v_int */
  static V_internal_Type_Obu_BasicTypes_Pkg v_int;
  
  v_int = /* 1 */
    TransformV_realToV_int_SDM_Types_Pkg(
      /* 1 */ TransformV_odoToV_real_SDM_Types_Pkg(v_odo));
  return v_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformV_odoToV_int_SDM_Types_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

