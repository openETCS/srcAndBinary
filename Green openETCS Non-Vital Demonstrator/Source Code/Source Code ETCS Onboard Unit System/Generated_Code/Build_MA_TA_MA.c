/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_TA_MA.h"

void Build_MA_reset_TA_MA(outC_Build_MA_TA_MA *outC)
{
  /* 1 */ StoreRaw_MA_reset_TA_MA(&outC->Context_1);
}

/* TA_MA::Build_MA */
void Build_MA_TA_MA(
  /* TA_MA::Build_MA::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_MA::Build_MA::NV_onboard_in */P003V1_OBU_T_TM_baseline2 *NV_onboard_in,
  outC_Build_MA_TA_MA *outC)
{
  /* TA_MA::Build_MA::_L3 */
  static P015_OBU_T_TM _L3;
  
  /* 1 */ StoreRaw_MA_TA_MA(&(*MessageIn).packets, &outC->Context_1);
  outC->vald_MA = outC->Context_1.vald_MA;
  outC->new_MA = outC->Context_1.new_MA;
  kcg_copy_P015_OBU_T_TM(&_L3, &outC->Context_1.MA_onboard_out);
  /* 1 */ Decode_P015_TA_MA(&_L3, NV_onboard_in, &outC->MA_onboard_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_TA_MA.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

