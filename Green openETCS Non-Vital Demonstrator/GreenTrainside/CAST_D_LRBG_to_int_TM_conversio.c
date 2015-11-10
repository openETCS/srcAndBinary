/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_LRBG_to_int_TM_conversio.h"

/* TM_conversions::CAST_D_LRBG_to_int */
kcg_int CAST_D_LRBG_to_int_TM_conversio(
  /* TM_conversions::CAST_D_LRBG_to_int::d_lrbg */ D_LRBG d_lrbg)
{
  /* TM_conversions::CAST_D_LRBG_to_int::d_lrbg_int */
  static kcg_int d_lrbg_int;
  
  d_lrbg_int = d_lrbg;
  return d_lrbg_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_D_LRBG_to_int_TM_conversio.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

