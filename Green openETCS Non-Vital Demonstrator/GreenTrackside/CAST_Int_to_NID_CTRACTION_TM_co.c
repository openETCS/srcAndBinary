/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_CTRACTION_TM_co.h"

/* TM_conversions::CAST_Int_to_NID_CTRACTION */
NID_CTRACTION CAST_Int_to_NID_CTRACTION_TM_co(
  /* TM_conversions::CAST_Int_to_NID_CTRACTION::nid_ctraction_int */ kcg_int nid_ctraction_int)
{
  /* TM_conversions::CAST_Int_to_NID_CTRACTION::nid_ctraction */
  static NID_CTRACTION nid_ctraction;
  
  nid_ctraction = nid_ctraction_int;
  return nid_ctraction;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_CTRACTION_TM_co.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

