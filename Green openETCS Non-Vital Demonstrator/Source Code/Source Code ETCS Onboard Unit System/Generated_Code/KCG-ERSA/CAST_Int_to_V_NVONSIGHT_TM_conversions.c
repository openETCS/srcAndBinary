/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVONSIGHT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVONSIGHT */
V_NVONSIGHT CAST_Int_to_V_NVONSIGHT_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVONSIGHT::v_nvonsight_int */ kcg_int v_nvonsight_int)
{
  /* TM_conversions::CAST_Int_to_V_NVONSIGHT::v_nvonsight */ V_NVONSIGHT v_nvonsight;
  
  v_nvonsight = v_nvonsight_int * 5;
  return v_nvonsight;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_NVONSIGHT_TM_conversions.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

