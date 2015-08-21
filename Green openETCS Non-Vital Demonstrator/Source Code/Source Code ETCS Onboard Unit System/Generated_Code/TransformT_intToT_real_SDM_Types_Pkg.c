/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformT_intToT_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformT_intToT_real */
V_internal_real_Type_SDM_Types_Pkg TransformT_intToT_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformT_intToT_real::time_int */V_internal_Type_Obu_BasicTypes_Pkg time_int)
{
  /* SDM_Types_Pkg::TransformT_intToT_real::time_real */
  static V_internal_real_Type_SDM_Types_Pkg time_real;
  
  time_real = (kcg_real) time_int / 1000.0;
  return time_real;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransformT_intToT_real_SDM_Types_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

