/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_NVPOTRP_TM_conver.h"

/* TM_conversions::CAST_Int_to_D_NVPOTRP */
D_NVPOTRP CAST_Int_to_D_NVPOTRP_TM_conver(
  /* TM_conversions::CAST_Int_to_D_NVPOTRP::d_nvpotrp_int */ kcg_int d_nvpotrp_int)
{
  /* TM_conversions::CAST_Int_to_D_NVPOTRP::d_nvpotrp */
  static D_NVPOTRP d_nvpotrp;
  
  d_nvpotrp = d_nvpotrp_int;
  return d_nvpotrp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_NVPOTRP_TM_conver.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

