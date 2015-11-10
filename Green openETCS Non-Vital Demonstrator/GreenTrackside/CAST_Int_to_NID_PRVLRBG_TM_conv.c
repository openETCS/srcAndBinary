/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_PRVLRBG_TM_conv.h"

/* TM_conversions::CAST_Int_to_NID_PRVLRBG */
NID_PRVLRBG CAST_Int_to_NID_PRVLRBG_TM_conv(
  /* TM_conversions::CAST_Int_to_NID_PRVLRBG::nid_prvlrbg_in */ kcg_int nid_prvlrbg_in)
{
  /* TM_conversions::CAST_Int_to_NID_PRVLRBG::nid_prvlgb */
  static NID_PRVLRBG nid_prvlgb;
  
  nid_prvlgb = nid_prvlrbg_in;
  return nid_prvlgb;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_PRVLRBG_TM_conv.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

