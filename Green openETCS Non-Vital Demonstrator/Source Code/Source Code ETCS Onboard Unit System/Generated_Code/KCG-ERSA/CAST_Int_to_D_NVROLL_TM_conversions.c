/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_NVROLL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_NVROLL */
D_NVROLL CAST_Int_to_D_NVROLL_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_NVROLL::d_nvroll_int */ kcg_int d_nvroll_int)
{
  /* TM_conversions::CAST_Int_to_D_NVROLL::d_nvroll */
  static D_NVROLL d_nvroll;
  
  d_nvroll = d_nvroll_int;
  return d_nvroll;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_NVROLL_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

