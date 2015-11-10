/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_LTRBG_TM_conver.h"

/* TM_conversions::CAST_Int_to_NID_LTRBG */
NID_LTRBG CAST_Int_to_NID_LTRBG_TM_conver(
  /* TM_conversions::CAST_Int_to_NID_LTRBG::nid_ltrbg_int */ kcg_int nid_ltrbg_int)
{
  /* TM_conversions::CAST_Int_to_NID_LTRBG::nid_ltrbg */
  static NID_LTRBG nid_ltrbg;
  
  nid_ltrbg = nid_ltrbg_int;
  return nid_ltrbg;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_LTRBG_TM_conver.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

