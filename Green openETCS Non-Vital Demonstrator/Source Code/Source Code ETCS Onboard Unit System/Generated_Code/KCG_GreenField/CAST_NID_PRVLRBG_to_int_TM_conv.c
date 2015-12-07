/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_PRVLRBG_to_int_TM_conv.h"

/* TM_conversions::CAST_NID_PRVLRBG_to_int */
kcg_int CAST_NID_PRVLRBG_to_int_TM_conv(
  /* TM_conversions::CAST_NID_PRVLRBG_to_int::nid_prvlrbg */ NID_PRVLRBG nid_prvlrbg)
{
  /* TM_conversions::CAST_NID_PRVLRBG_to_int::nid_prvlrbg_in */
  static kcg_int nid_prvlrbg_in;
  
  nid_prvlrbg_in = nid_prvlrbg;
  return nid_prvlrbg_in;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_PRVLRBG_to_int_TM_conv.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

