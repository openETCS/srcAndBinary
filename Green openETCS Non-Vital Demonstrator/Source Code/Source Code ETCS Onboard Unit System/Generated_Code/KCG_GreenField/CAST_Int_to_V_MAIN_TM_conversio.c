/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_MAIN_TM_conversio.h"

/* TM_conversions::CAST_Int_to_V_MAIN */
V_MAIN CAST_Int_to_V_MAIN_TM_conversio(
  /* TM_conversions::CAST_Int_to_V_MAIN::v_main_int */ kcg_int v_main_int)
{
  /* TM_conversions::CAST_Int_to_V_MAIN::v_main */
  static V_MAIN v_main;
  
  v_main = v_main_int * 5;
  return v_main;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_MAIN_TM_conversio.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

