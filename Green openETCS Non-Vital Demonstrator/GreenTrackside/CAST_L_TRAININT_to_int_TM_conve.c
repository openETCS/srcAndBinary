/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_TRAININT_to_int_TM_conve.h"

/* TM_conversions::CAST_L_TRAININT_to_int */
kcg_int CAST_L_TRAININT_to_int_TM_conve(
  /* TM_conversions::CAST_L_TRAININT_to_int::l_trainint */ L_TRAININT l_trainint)
{
  /* TM_conversions::CAST_L_TRAININT_to_int::l_trainint_int */
  static kcg_int l_trainint_int;
  
  l_trainint_int = l_trainint;
  return l_trainint_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_L_TRAININT_to_int_TM_conve.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

