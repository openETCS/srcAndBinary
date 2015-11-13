/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformT_intToT_real_SDM_Type.h"

/* SDM_Types_Pkg::TransformT_intToT_real */
T_internal_real_Type_SDM_Types_ TransformT_intToT_real_SDM_Type(
  /* SDM_Types_Pkg::TransformT_intToT_real::time_int */ T_internal_Type_Obu_BasicTypes_ time_int)
{
  /* SDM_Types_Pkg::TransformT_intToT_real::time_real */
  static T_internal_real_Type_SDM_Types_ time_real;
  
  time_real = (kcg_real) time_int / 1000.0;
  return time_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformT_intToT_real_SDM_Type.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

