/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_MA_RequestParameters_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void Receive_MA_RequestParameters_init_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
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
void Receive_MA_RequestParameters_reset_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::Receive_MA_RequestParameters */
void Receive_MA_RequestParameters_TA_MA_Request(
  /* TA_MA_Request::Receive_MA_RequestParameters::message_in */ ReceivedMessage_T_Common_Types_Pkg *message_in,
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  /* TA_MA_Request::Receive_MA_RequestParameters::_L8 */ P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg _L8;
  /* TA_MA_Request::Receive_MA_RequestParameters::_L11 */ P015_OBU_T_TM _L11;
  
  /* 1 */ Read_P057_TM(&(*message_in).packets, &outC->IsNew, &_L8);
  /* 1 */ Read_P015_TM(&(*message_in).packets, &outC->ma_received, &_L11);
  /* 1 */ if (outC->IsNew) {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &outC->MA_RequestParams,
      &_L8);
  }
  else /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &outC->MA_RequestParams,
      (P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *)
        &cMA_RequestParam_TA_MA_Request);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_MA_RequestParameters_TA_MA_Request.c
** Generation date: 2015-12-02T15:32:28
*************************************************************$ */

