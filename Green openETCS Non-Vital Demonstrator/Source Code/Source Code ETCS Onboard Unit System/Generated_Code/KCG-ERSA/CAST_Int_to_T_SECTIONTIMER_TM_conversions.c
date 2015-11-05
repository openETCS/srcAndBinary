/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_SECTIONTIMER_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_SECTIONTIMER */
T_SECTIONTIMER CAST_Int_to_T_SECTIONTIMER_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_SECTIONTIMER::t_sectiontimer_int */ kcg_int t_sectiontimer_int)
{
  /* TM_conversions::CAST_Int_to_T_SECTIONTIMER::t_sectiontimer */
  static T_SECTIONTIMER t_sectiontimer;
  
  t_sectiontimer = t_sectiontimer_int;
  return t_sectiontimer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_SECTIONTIMER_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

