/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_realToV_odo_SDM_Type.h"

/* SDM_Types_Pkg::TransformV_realToV_odo */
V_odometry_Type_Obu_BasicTypes_ TransformV_realToV_odo_SDM_Type(
  /* SDM_Types_Pkg::TransformV_realToV_odo::v_real */ V_internal_real_Type_SDM_Types_ v_real)
{
  /* SDM_Types_Pkg::TransformV_realToV_odo::v_odo */
  static V_odometry_Type_Obu_BasicTypes_ v_odo;
  
  v_odo = (kcg_int) (v_real * 100.0);
  return v_odo;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformV_realToV_odo_SDM_Type.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

