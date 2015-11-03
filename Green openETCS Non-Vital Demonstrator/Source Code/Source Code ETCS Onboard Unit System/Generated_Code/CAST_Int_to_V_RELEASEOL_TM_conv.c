/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_RELEASEOL_TM_conv.h"

/* TM_conversions::CAST_Int_to_V_RELEASEOL */
V_RELEASEOL CAST_Int_to_V_RELEASEOL_TM_conv(
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::v_releaseol_int */ kcg_int v_releaseol_int)
{
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::v_releaseol */
  static V_RELEASEOL v_releaseol;
  
  v_releaseol = v_releaseol_int * 5;
  return v_releaseol;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_RELEASEOL_TM_conv.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

