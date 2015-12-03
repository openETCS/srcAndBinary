/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVUNFIT_TM_conver.h"

/* TM_conversions::CAST_Int_to_V_NVUNFIT */
V_NVUNFIT CAST_Int_to_V_NVUNFIT_TM_conver(
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::v_nvunfit_int */ kcg_int v_nvunfit_int)
{
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::v_nvunfit */
  static V_NVUNFIT v_nvunfit;
  
  v_nvunfit = v_nvunfit_int * 5;
  return v_nvunfit;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_NVUNFIT_TM_conver.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

