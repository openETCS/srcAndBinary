/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_DIFF_TM_conversio.h"

/* TM_conversions::CAST_Int_to_V_DIFF */
V_DIFF CAST_Int_to_V_DIFF_TM_conversio(
  /* TM_conversions::CAST_Int_to_V_DIFF::v_diff_int */ kcg_int v_diff_int)
{
  /* TM_conversions::CAST_Int_to_V_DIFF::v_diff */
  static V_DIFF v_diff;
  
  v_diff = v_diff_int * 5;
  return v_diff;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_DIFF_TM_conversio.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

