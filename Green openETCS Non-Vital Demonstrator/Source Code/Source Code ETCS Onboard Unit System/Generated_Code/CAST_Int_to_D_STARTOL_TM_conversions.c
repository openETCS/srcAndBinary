/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_STARTOL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_STARTOL */
D_STARTOL CAST_Int_to_D_STARTOL_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_STARTOL::d_startol_int */ kcg_int d_startol_int)
{
  /* TM_conversions::CAST_Int_to_D_STARTOL::d_startol */
  static D_STARTOL d_startol;
  
  d_startol = d_startol_int;
  return d_startol;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_STARTOL_TM_conversions.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

