/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_MA_RequestParameters_TA.h"

#ifndef KCG_USER_DEFINED_INIT
void Receive_MA_RequestParameters_in(outC_Receive_MA_RequestParamete *outC)
{
  outC->IsNew = kcg_true;
  outC->ma_received = kcg_true;
  outC->init = kcg_true;
  outC->MA_RequestParams.valid = kcg_true;
  outC->MA_RequestParams.q_dir = Q_DIR_Reverse;
  outC->MA_RequestParams.t_mar = 0;
  outC->MA_RequestParams.t_timeoutrqst = 0;
  outC->MA_RequestParams.t_cycrqst = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_MA_RequestParameters_re(outC_Receive_MA_RequestParamete *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::Receive_MA_RequestParameters */
void Receive_MA_RequestParameters_TA(
  /* TA_MA_Request::Receive_MA_RequestParameters::message_in */ ReceivedMessage_T_Common_Types_ *message_in,
  outC_Receive_MA_RequestParamete *outC)
{
  /* TA_MA_Request::Receive_MA_RequestParameters::_L8 */
  static P57_MovementAuthorityRequestPar _L8;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L11 */
  static P015_OBU_T_TM _L11;
  
  /* 1 */ Read_P057_TM(&(*message_in).packets, &outC->IsNew, &_L8);
  /* 1 */ Read_P015_TM(&(*message_in).packets, &outC->ma_received, &_L11);
  /* 1 */ if (outC->IsNew) {
    kcg_copy_P57_MovementAuthorityR(&outC->MA_RequestParams, &_L8);
  }
  else /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_P57_MovementAuthorityR(
      &outC->MA_RequestParams,
      (P57_MovementAuthorityRequestPar *) &cMA_RequestParam_TA_MA_Request);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_MA_RequestParameters_TA.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

