/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_NVPOTRP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_NVPOTRP */
D_NVPOTRP CAST_Int_to_D_NVPOTRP_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_NVPOTRP::d_nvpotrp_int */ kcg_int d_nvpotrp_int)
{
  /* TM_conversions::CAST_Int_to_D_NVPOTRP::d_nvpotrp */
  static D_NVPOTRP d_nvpotrp;
  
  d_nvpotrp = d_nvpotrp_int;
  return d_nvpotrp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_NVPOTRP_TM_conversions.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

