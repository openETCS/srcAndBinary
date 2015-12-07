/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_TIMEOUTRQST_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_TIMEOUTRQST */
T_TIMEOUTRQST CAST_Int_to_T_TIMEOUTRQST_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::t_timeoutrqst_int */ kcg_int t_timeoutrqst_int)
{
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::t_timeoutrqst */
  static T_TIMEOUTRQST t_timeoutrqst;
  
  t_timeoutrqst = t_timeoutrqst_int;
  return t_timeoutrqst;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_TIMEOUTRQST_TM_conversions.c
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

