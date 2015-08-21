/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_ACKLEVELTR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_ACKLEVELTR */
L_ACKLEVELTR CAST_Int_to_L_ACKLEVELTR_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::l_ackleveltr_int */kcg_int l_ackleveltr_int)
{
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::l_ackleveltr */
  static L_ACKLEVELTR l_ackleveltr;
  
  l_ackleveltr = l_ackleveltr_int;
  return l_ackleveltr;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_L_ACKLEVELTR_TM_conversions.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

