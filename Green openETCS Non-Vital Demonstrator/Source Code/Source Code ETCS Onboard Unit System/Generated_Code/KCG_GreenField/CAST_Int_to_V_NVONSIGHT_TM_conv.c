/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVONSIGHT_TM_conv.h"

/* TM_conversions::CAST_Int_to_V_NVONSIGHT */
V_NVONSIGHT CAST_Int_to_V_NVONSIGHT_TM_conv(
  /* TM_conversions::CAST_Int_to_V_NVONSIGHT::v_nvonsight_int */ kcg_int v_nvonsight_int)
{
  /* TM_conversions::CAST_Int_to_V_NVONSIGHT::v_nvonsight */
  static V_NVONSIGHT v_nvonsight;
  
  v_nvonsight = v_nvonsight_int * 5;
  return v_nvonsight;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_NVONSIGHT_TM_conv.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

