/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_REVERSE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_REVERSE */
V_REVERSE CAST_Int_to_V_REVERSE_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_REVERSE::v_reverse_int */ kcg_int v_reverse_int)
{
  /* TM_conversions::CAST_Int_to_V_REVERSE::v_reverse */ V_REVERSE v_reverse;
  
  v_reverse = v_reverse_int * 5;
  return v_reverse;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_REVERSE_TM_conversions.c
** Generation date: 2015-12-07T14:47:42
*************************************************************$ */

