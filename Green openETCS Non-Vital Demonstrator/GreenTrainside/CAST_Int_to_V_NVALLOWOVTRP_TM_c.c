/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVALLOWOVTRP_TM_c.h"

/* TM_conversions::CAST_Int_to_V_NVALLOWOVTRP */
V_NVALLOWOVTRP CAST_Int_to_V_NVALLOWOVTRP_TM_c(
  /* TM_conversions::CAST_Int_to_V_NVALLOWOVTRP::v_nvallowovtrp_int */ kcg_int v_nvallowovtrp_int)
{
  /* TM_conversions::CAST_Int_to_V_NVALLOWOVTRP::v_nvallowovtrp */
  static V_NVALLOWOVTRP v_nvallowovtrp;
  
  v_nvallowovtrp = v_nvallowovtrp_int * 5;
  return v_nvallowovtrp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_NVALLOWOVTRP_TM_c.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

