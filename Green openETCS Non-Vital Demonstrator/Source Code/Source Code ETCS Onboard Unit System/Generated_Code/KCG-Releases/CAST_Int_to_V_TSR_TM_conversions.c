/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_TSR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_TSR */
V_TSR CAST_Int_to_V_TSR_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_TSR::v_tsr_int */ kcg_int v_tsr_int)
{
  /* TM_conversions::CAST_Int_to_V_TSR::v_tsr */
  static V_TSR v_tsr;
  
  v_tsr = v_tsr_int * 5;
  return v_tsr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_TSR_TM_conversions.c
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

