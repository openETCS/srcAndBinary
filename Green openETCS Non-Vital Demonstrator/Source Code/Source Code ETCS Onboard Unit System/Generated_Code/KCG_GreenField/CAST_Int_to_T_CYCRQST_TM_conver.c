/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_CYCRQST_TM_conver.h"

/* TM_conversions::CAST_Int_to_T_CYCRQST */
T_CYCRQST CAST_Int_to_T_CYCRQST_TM_conver(
  /* TM_conversions::CAST_Int_to_T_CYCRQST::t_cycloc_int */ kcg_int t_cycloc_int)
{
  /* TM_conversions::CAST_Int_to_T_CYCRQST::t_cycloc */
  static T_CYCRQST t_cycloc;
  
  t_cycloc = t_cycloc_int;
  return t_cycloc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_CYCRQST_TM_conver.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

