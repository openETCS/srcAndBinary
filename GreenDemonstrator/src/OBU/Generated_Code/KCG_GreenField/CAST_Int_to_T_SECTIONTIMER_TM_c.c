/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_SECTIONTIMER_TM_c.h"

/* TM_conversions::CAST_Int_to_T_SECTIONTIMER */
T_SECTIONTIMER CAST_Int_to_T_SECTIONTIMER_TM_c(
  /* TM_conversions::CAST_Int_to_T_SECTIONTIMER::t_sectiontimer_int */ kcg_int t_sectiontimer_int)
{
  /* TM_conversions::CAST_Int_to_T_SECTIONTIMER::t_sectiontimer */
  static T_SECTIONTIMER t_sectiontimer;
  
  t_sectiontimer = t_sectiontimer_int;
  return t_sectiontimer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_SECTIONTIMER_TM_c.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

