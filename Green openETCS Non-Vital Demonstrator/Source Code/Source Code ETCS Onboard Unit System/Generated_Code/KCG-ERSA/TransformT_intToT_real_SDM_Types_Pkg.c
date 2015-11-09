/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformT_intToT_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformT_intToT_real */
T_internal_real_Type_SDM_Types_Pkg TransformT_intToT_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformT_intToT_real::time_int */T_internal_Type_Obu_BasicTypes_Pkg time_int)
{
  /* SDM_Types_Pkg::TransformT_intToT_real::time_real */
  static T_internal_real_Type_SDM_Types_Pkg time_real;
  
  time_real = (kcg_real) time_int / 1000.0;
  return time_real;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransformT_intToT_real_SDM_Types_Pkg.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

