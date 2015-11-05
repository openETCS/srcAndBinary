/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVREL_TM_conversi.h"

/* TM_conversions::CAST_Int_to_V_NVREL */
V_NVREL CAST_Int_to_V_NVREL_TM_conversi(
  /* TM_conversions::CAST_Int_to_V_NVREL::v_nvrel_int */ kcg_int v_nvrel_int)
{
  /* TM_conversions::CAST_Int_to_V_NVREL::v_nvrel */
  static V_NVREL v_nvrel;
  
  v_nvrel = v_nvrel_int * 5;
  return v_nvrel;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_NVREL_TM_conversi.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

