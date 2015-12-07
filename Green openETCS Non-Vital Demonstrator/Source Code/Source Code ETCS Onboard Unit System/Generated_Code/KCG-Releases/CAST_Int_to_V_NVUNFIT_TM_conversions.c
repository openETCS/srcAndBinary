/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVUNFIT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVUNFIT */
V_NVUNFIT CAST_Int_to_V_NVUNFIT_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::v_nvunfit_int */ kcg_int v_nvunfit_int)
{
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::v_nvunfit */
  static V_NVUNFIT v_nvunfit;
  
  v_nvunfit = v_nvunfit_int * 5;
  return v_nvunfit;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_NVUNFIT_TM_conversions.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

