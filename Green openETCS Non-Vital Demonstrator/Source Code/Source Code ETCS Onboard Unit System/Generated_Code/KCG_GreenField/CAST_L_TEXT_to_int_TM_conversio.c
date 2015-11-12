/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_TEXT_to_int_TM_conversio.h"

/* TM_conversions::CAST_L_TEXT_to_int */
kcg_int CAST_L_TEXT_to_int_TM_conversio(
  /* TM_conversions::CAST_L_TEXT_to_int::l_text */ L_TEXT l_text)
{
  /* TM_conversions::CAST_L_TEXT_to_int::l_text_int */
  static kcg_int l_text_int;
  
  l_text_int = l_text;
  return l_text_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_L_TEXT_to_int_TM_conversio.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

