/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_RELEASEOL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_RELEASEOL */
V_RELEASEOL CAST_Int_to_V_RELEASEOL_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::v_releaseol_int */ kcg_int v_releaseol_int)
{
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::v_releaseol */ V_RELEASEOL v_releaseol;
  
  v_releaseol = v_releaseol_int * 5;
  return v_releaseol;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_RELEASEOL_TM_conversions.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

