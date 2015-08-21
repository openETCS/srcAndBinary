/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_MAIN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_MAIN */
V_MAIN CAST_Int_to_V_MAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_MAIN::v_main_int */kcg_int v_main_int)
{
  /* TM_conversions::CAST_Int_to_V_MAIN::v_main */
  static V_MAIN v_main;
  
  v_main = v_main_int * 5;
  return v_main;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_MAIN_TM_conversions.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

