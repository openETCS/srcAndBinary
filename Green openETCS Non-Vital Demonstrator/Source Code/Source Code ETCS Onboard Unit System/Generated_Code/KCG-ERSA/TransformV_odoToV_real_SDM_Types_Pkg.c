/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_odoToV_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_odoToV_real */
V_internal_real_Type_SDM_Types_Pkg TransformV_odoToV_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformV_odoToV_real::v_odo */ V_odometry_Type_Obu_BasicTypes_Pkg v_odo)
{
  /* SDM_Types_Pkg::TransformV_odoToV_real::v_real */
  static V_internal_real_Type_SDM_Types_Pkg v_real;
  
  v_real = (kcg_real) v_odo / 100.0;
  return v_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformV_odoToV_real_SDM_Types_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

