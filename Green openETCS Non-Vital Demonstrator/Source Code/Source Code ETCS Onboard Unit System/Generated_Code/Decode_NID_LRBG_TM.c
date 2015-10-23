/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_NID_LRBG_TM.h"

/* TM::Decode_NID_LRBG */
void Decode_NID_LRBG_TM(
  /* TM::Decode_NID_LRBG::NID_LRBG_in */ NID_LRBG NID_LRBG_in,
  /* TM::Decode_NID_LRBG::NID_C_out */ NID_C *NID_C_out,
  /* TM::Decode_NID_LRBG::NID_BG_out */ NID_BG *NID_BG_out)
{
  *NID_C_out = NID_LRBG_in / 100000;
  *NID_BG_out = NID_LRBG_in % 100000;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Decode_NID_LRBG_TM.c
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

