/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_intToV_real_SDM_Type.h"

/* SDM_Types_Pkg::TransformV_intToV_real */
V_internal_real_Type_SDM_Types_ TransformV_intToV_real_SDM_Type(
  /* SDM_Types_Pkg::TransformV_intToV_real::v_int */ V_internal_Type_Obu_BasicTypes_ v_int)
{
  /* SDM_Types_Pkg::TransformV_intToV_real::v_real */
  static V_internal_real_Type_SDM_Types_ v_real;
  
  v_real = (kcg_real) v_int / 3.6;
  return v_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformV_intToV_real_SDM_Type.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

