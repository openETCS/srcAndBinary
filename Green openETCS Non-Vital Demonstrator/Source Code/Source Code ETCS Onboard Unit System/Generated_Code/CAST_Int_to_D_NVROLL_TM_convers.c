/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_NVROLL_TM_convers.h"

/* TM_conversions::CAST_Int_to_D_NVROLL */
D_NVROLL CAST_Int_to_D_NVROLL_TM_convers(
  /* TM_conversions::CAST_Int_to_D_NVROLL::d_nvroll_int */ kcg_int d_nvroll_int)
{
  /* TM_conversions::CAST_Int_to_D_NVROLL::d_nvroll */
  static D_NVROLL d_nvroll;
  
  d_nvroll = d_nvroll_int;
  return d_nvroll;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_NVROLL_TM_convers.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

