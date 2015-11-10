/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_TRAININT_TM_conve.h"

/* TM_conversions::CAST_Int_to_L_TRAININT */
L_TRAININT CAST_Int_to_L_TRAININT_TM_conve(
  /* TM_conversions::CAST_Int_to_L_TRAININT::l_trainint_int */ kcg_int l_trainint_int)
{
  /* TM_conversions::CAST_Int_to_L_TRAININT::l_trainint */
  static L_TRAININT l_trainint;
  
  l_trainint = l_trainint_int;
  return l_trainint;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_TRAININT_TM_conve.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

