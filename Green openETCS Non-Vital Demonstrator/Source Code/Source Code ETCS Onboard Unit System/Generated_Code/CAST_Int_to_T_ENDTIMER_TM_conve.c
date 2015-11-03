/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_ENDTIMER_TM_conve.h"

/* TM_conversions::CAST_Int_to_T_ENDTIMER */
T_ENDTIMER CAST_Int_to_T_ENDTIMER_TM_conve(
  /* TM_conversions::CAST_Int_to_T_ENDTIMER::t_endtimer_int */ kcg_int t_endtimer_int)
{
  /* TM_conversions::CAST_Int_to_T_ENDTIMER::t_endtimer */
  static T_ENDTIMER t_endtimer;
  
  t_endtimer = t_endtimer_int;
  return t_endtimer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_ENDTIMER_TM_conve.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

