/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_MAIN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_MAIN */
V_MAIN CAST_Int_to_V_MAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_MAIN::v_main_int */ kcg_int v_main_int)
{
  /* TM_conversions::CAST_Int_to_V_MAIN::v_main */ V_MAIN v_main;
  
  v_main = v_main_int * 5;
  return v_main;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_MAIN_TM_conversions.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

