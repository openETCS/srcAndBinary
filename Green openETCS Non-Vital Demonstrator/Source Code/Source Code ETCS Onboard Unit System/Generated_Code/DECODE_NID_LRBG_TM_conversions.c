/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DECODE_NID_LRBG_TM_conversions.h"

/* TM_conversions::DECODE_NID_LRBG */
void DECODE_NID_LRBG_TM_conversions(
  /* TM_conversions::DECODE_NID_LRBG::nid_lrbg */NID_LRBG nid_lrbg,
  /* TM_conversions::DECODE_NID_LRBG::nid_c */NID_C *nid_c,
  /* TM_conversions::DECODE_NID_LRBG::nid_bg */NID_BG *nid_bg)
{
  *nid_bg = nid_lrbg;
  if (*nid_bg == 0) {
    *nid_c = 0;
  }
  else {
    *nid_c = 426;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DECODE_NID_LRBG_TM_conversions.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

