/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_NVOVTRP_TM_conver.h"

/* TM_conversions::CAST_Int_to_D_NVOVTRP */
D_NVOVTRP CAST_Int_to_D_NVOVTRP_TM_conver(
  /* TM_conversions::CAST_Int_to_D_NVOVTRP::d_nvovtrp_int */ kcg_int d_nvovtrp_int)
{
  /* TM_conversions::CAST_Int_to_D_NVOVTRP::d_nvovtrp */
  static D_NVOVTRP d_nvovtrp;
  
  d_nvovtrp = d_nvovtrp_int;
  return d_nvovtrp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_NVOVTRP_TM_conver.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

