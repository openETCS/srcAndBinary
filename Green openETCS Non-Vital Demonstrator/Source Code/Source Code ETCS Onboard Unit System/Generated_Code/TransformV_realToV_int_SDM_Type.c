/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_realToV_int_SDM_Type.h"

/* SDM_Types_Pkg::TransformV_realToV_int */
V_internal_Type_Obu_BasicTypes_ TransformV_realToV_int_SDM_Type(
  /* SDM_Types_Pkg::TransformV_realToV_int::v_real */ V_internal_real_Type_SDM_Types_ v_real)
{
  /* SDM_Types_Pkg::TransformV_realToV_int::v_int */
  static V_internal_Type_Obu_BasicTypes_ v_int;
  
  v_int = (kcg_int) (v_real * 3.6);
  return v_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformV_realToV_int_SDM_Type.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

