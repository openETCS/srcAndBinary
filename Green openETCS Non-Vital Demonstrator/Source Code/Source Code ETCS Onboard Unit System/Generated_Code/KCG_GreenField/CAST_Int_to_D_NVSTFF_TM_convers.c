/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_NVSTFF_TM_convers.h"

/* TM_conversions::CAST_Int_to_D_NVSTFF */
D_NVSTFF CAST_Int_to_D_NVSTFF_TM_convers(
  /* TM_conversions::CAST_Int_to_D_NVSTFF::d_nvstff_int */ kcg_int d_nvstff_int)
{
  /* TM_conversions::CAST_Int_to_D_NVSTFF::d_nvstff */
  static D_NVSTFF d_nvstff;
  
  d_nvstff = d_nvstff_int;
  return d_nvstff;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_NVSTFF_TM_convers.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

