/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_realToV_odo_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_realToV_odo */
V_odometry_Type_Obu_BasicTypes_Pkg TransformV_realToV_odo_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformV_realToV_odo::v_real */ V_internal_real_Type_SDM_Types_Pkg v_real)
{
  /* SDM_Types_Pkg::TransformV_realToV_odo::v_odo */ V_odometry_Type_Obu_BasicTypes_Pkg v_odo;
  
  v_odo = (kcg_int) (v_real * 100.0);
  return v_odo;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformV_realToV_odo_SDM_Types_Pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

