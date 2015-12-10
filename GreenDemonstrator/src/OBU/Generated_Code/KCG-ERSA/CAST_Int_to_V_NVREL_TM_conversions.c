/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVREL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVREL */
V_NVREL CAST_Int_to_V_NVREL_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVREL::v_nvrel_int */ kcg_int v_nvrel_int)
{
  /* TM_conversions::CAST_Int_to_V_NVREL::v_nvrel */ V_NVREL v_nvrel;
  
  v_nvrel = v_nvrel_int * 5;
  return v_nvrel;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_NVREL_TM_conversions.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

