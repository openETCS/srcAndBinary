/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeMsgToBus_RCM_Utils_Pkg_enc.h"

#ifndef KCG_USER_DEFINED_INIT
void mergeMsgToBus_init_RCM_Utils_Pk(outC_mergeMsgToBus_RCM_Utils_Pk *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->SM1_state_nxt = SSM_st_notRequested_SM1;
  outC->t_train_assigned = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->messageBus_out[i1].Message.valid = kcg_true;
    outC->messageBus_out[i1].Message.nid_message = 0;
    outC->messageBus_out[i1].Message.l_message = 0;
    outC->messageBus_out[i1].Message.t_train = 0;
    outC->messageBus_out[i1].Message.nid_engine = 0;
    outC->messageBus_out[i1].Message.field1 = 0;
    outC->messageBus_out[i1].Message.field2 = 0;
    outC->messageBus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->messageBus_out[i1].OptionalPackets[i] = 0;
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mergeMsgToBus_reset_RCM_Utils_P(outC_mergeMsgToBus_RCM_Utils_Pk *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RCM_Utils_Pkg::encoders::mergeMsgToBus */
void mergeMsgToBus_RCM_Utils_Pkg_enc(
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::request */ kcg_bool request,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageAvailable */ kcg_bool messageAvailable,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::message */ M_TrainTrack_Message_T_TM_radio *message,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageBus_in */ M_TrainTrackMessageBus_t_TM_Tra *messageBus_in,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::t_train_global */ T_internal_Type_Obu_BasicTypes_ t_train_global,
  outC_mergeMsgToBus_RCM_Utils_Pk *outC)
{
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1::notRequested */
  static kcg_bool br_1_guard_SM1_notRequested;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static SSM_ST_SM1 SM1_state_sel;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
  static SSM_ST_SM1 SM1_state_act;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L5 */
  static kcg_int _L5;
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::_L9 */
  static kcg_bool _L9;
  
  /* init_SM1 */ if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_notRequested_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* 1 */
  CheckSpace_TM_TrainTrack_Bus(
    messageBus_in,
    &br_1_guard_SM1_notRequested,
    &_L5);
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_requested_SM1 :
      if (messageAvailable) {
        _L9 = kcg_true;
        SM1_state_act = SSM_st_notRequested_SM1;
      }
      else {
        _L9 = kcg_false;
        SM1_state_act = SSM_st_requested_SM1;
      }
      break;
    case SSM_st_notRequested_SM1 :
      br_1_guard_SM1_notRequested = request & messageAvailable;
      if (br_1_guard_SM1_notRequested) {
        _L9 = kcg_true;
        SM1_state_act = SSM_st_notRequested_SM1;
      }
      else {
        _L9 = kcg_false;
        if (request) {
          SM1_state_act = SSM_st_requested_SM1;
        }
        else {
          SM1_state_act = SSM_st_notRequested_SM1;
        }
      }
      break;
    
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_notRequested_SM1 :
      outC->SM1_state_nxt = SSM_st_notRequested_SM1;
      break;
    case SSM_st_requested_SM1 :
      outC->SM1_state_nxt = SSM_st_requested_SM1;
      break;
    
  }
  /* ck__L9 */ if (_L9) {
    /* 1 */
    MergeMessageToBus_TM_TrainTrack(
      message,
      _L5,
      messageBus_in,
      t_train_global,
      &outC->messageBus_out,
      &outC->t_train_assigned);
  }
  else {
    outC->t_train_assigned = t_train_global;
    kcg_copy_M_TrainTrackMessageBus(&outC->messageBus_out, messageBus_in);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeMsgToBus_RCM_Utils_Pkg_enc.c
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

