/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformA_intToA_real_SDM_Type.h"

/* SDM_Types_Pkg::TransformA_intToA_real */
A_internal_real_Type_SDM_Types_ TransformA_intToA_real_SDM_Type(
  /* SDM_Types_Pkg::TransformA_intToA_real::acc_int */ A_internal_Type_Obu_BasicTypes_ acc_int)
{
  /* SDM_Types_Pkg::TransformA_intToA_real::acc_real */
  static A_internal_real_Type_SDM_Types_ acc_real;
  
  acc_real = (kcg_real) acc_int / 100.0;
  return acc_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransformA_intToA_real_SDM_Type.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

