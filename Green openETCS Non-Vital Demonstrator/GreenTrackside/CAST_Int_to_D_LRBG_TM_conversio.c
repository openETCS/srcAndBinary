/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_LRBG_TM_conversio.h"

/* TM_conversions::CAST_Int_to_D_LRBG */
D_LRBG CAST_Int_to_D_LRBG_TM_conversio(
  /* TM_conversions::CAST_Int_to_D_LRBG::d_lrbg_int */ kcg_int d_lrbg_int)
{
  /* TM_conversions::CAST_Int_to_D_LRBG::d_lrbg */
  static D_LRBG d_lrbg;
  
  d_lrbg = d_lrbg_int;
  return d_lrbg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_LRBG_TM_conversio.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

