/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_BG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_BG */
NID_BG CAST_Int_to_NID_BG_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_BG::nid_bg_int */ kcg_int nid_bg_int)
{
  /* TM_conversions::CAST_Int_to_NID_BG::nid_bg */
  static NID_BG nid_bg;
  
  nid_bg = nid_bg_int;
  return nid_bg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_BG_TM_conversions.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

