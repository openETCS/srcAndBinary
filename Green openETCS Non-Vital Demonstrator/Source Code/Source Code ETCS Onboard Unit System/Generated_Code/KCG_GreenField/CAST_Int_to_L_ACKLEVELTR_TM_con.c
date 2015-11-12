/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_ACKLEVELTR_TM_con.h"

/* TM_conversions::CAST_Int_to_L_ACKLEVELTR */
L_ACKLEVELTR CAST_Int_to_L_ACKLEVELTR_TM_con(
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::l_ackleveltr_int */ kcg_int l_ackleveltr_int)
{
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::l_ackleveltr */
  static L_ACKLEVELTR l_ackleveltr;
  
  l_ackleveltr = l_ackleveltr_int;
  return l_ackleveltr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_ACKLEVELTR_TM_con.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

