/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
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
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

