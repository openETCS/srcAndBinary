/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void mobileBusRouter_out_init_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->msgBus_2_RBC_2[i1].Message.valid = kcg_true;
    outC->msgBus_2_RBC_2[i1].Message.nid_message = 0;
    outC->msgBus_2_RBC_2[i1].Message.l_message = 0;
    outC->msgBus_2_RBC_2[i1].Message.t_train = 0;
    outC->msgBus_2_RBC_2[i1].Message.nid_engine = 0;
    outC->msgBus_2_RBC_2[i1].Message.field1 = 0;
    outC->msgBus_2_RBC_2[i1].Message.field2 = 0;
    outC->msgBus_2_RBC_2[i1].Message.field3 = 0;
    outC->msgBus_2_RBC_1[i1].Message.valid = kcg_true;
    outC->msgBus_2_RBC_1[i1].Message.nid_message = 0;
    outC->msgBus_2_RBC_1[i1].Message.l_message = 0;
    outC->msgBus_2_RBC_1[i1].Message.t_train = 0;
    outC->msgBus_2_RBC_1[i1].Message.nid_engine = 0;
    outC->msgBus_2_RBC_1[i1].Message.field1 = 0;
    outC->msgBus_2_RBC_1[i1].Message.field2 = 0;
    outC->msgBus_2_RBC_1[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->msgBus_2_RBC_2[i1].OptionalPackets[i] = 0;
      outC->msgBus_2_RBC_1[i1].OptionalPackets[i] = 0;
    }
  }
  /* 5 */ mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_5);
  /* 2 */ genMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_2);
  /* 3 */ genMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_3);
  /* 7 */ mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_7);
  /* 1 */ genMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->_1_Context_1);
  /* 1 */ mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_1);
  /* 4 */ mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mobileBusRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* 5 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_5);
  /* 2 */ genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_2);
  /* 3 */ genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_3);
  /* 7 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_7);
  /* 1 */ genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->_1_Context_1);
  /* 1 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_1);
  /* 4 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out */
void mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::morcMsgTriggersToRBC_1 */ msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::morcMsgTriggersToRBC_2 */ msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::handingOverRBC_is_RBC_1 */ kcg_bool handingOverRBC_is_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_acceptingRBC */ kcg_bool sendPositionReport_2_acceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_handingOverRBC */ kcg_bool sendPositionReport_2_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_RBC_1 */ kcg_bool sendPositionReport_2_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_RBC_2 */ kcg_bool sendPositionReport_2_RBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendTrainData_2_acceptingRBC */ kcg_bool sendTrainData_2_acceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::t_train */ T_TRAIN t_train,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBusToRBC_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::nid_engine */ NID_ENGINE nid_engine,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::m_version */ M_VERSION m_version,
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus tmp3;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus tmp2;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus tmp1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus tmp;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L294 */
  static kcg_bool _L294_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L295 */
  static M_TrainTrack_Message_T_TM_radio_messages _L295_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 3 */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      morcMsgTriggersToRBC_1,
      t_train,
      t_train_global,
      msgBusToRBC_in,
      nid_engine,
      onboardPhoneNumbers_b,
      m_version,
      &outC->Context_3);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_1,
      &outC->Context_3.msgBus_out);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_2,
      (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
        &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
  }
  else {
    /* 1 */
    extractPositionReportFromBus_RCM_Utils_Pkg_encoders(
      msgBusToRBC_in,
      &_L294_IfBlock1,
      &_L295_IfBlock1);
    /* 6 */ if (useInformationFromAcceptingRBC) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp3,
        (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
          &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp2,
        msgBusToRBC_in);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp3,
        msgBusToRBC_in);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp2,
        (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
          &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
    }
    /* 4 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      sendPositionReport_2_handingOverRBC,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &tmp3,
      t_train_global,
      &outC->Context_4);
    /* 1 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      sendPositionReport_2_acceptingRBC,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &tmp2,
      t_train_global,
      &outC->Context_1);
    /* 8 */ if (handingOverRBC_is_RBC_1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp1,
        &outC->Context_4.messageBus_out);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp,
        &outC->Context_1.messageBus_out);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp1,
        &outC->Context_1.messageBus_out);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp,
        &outC->Context_4.messageBus_out);
    }
    /* 1 */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      morcMsgTriggersToRBC_1,
      t_train,
      t_train_global,
      &tmp1,
      nid_engine,
      onboardPhoneNumbers_b,
      m_version,
      &outC->_1_Context_1);
    /* 7 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      sendPositionReport_2_RBC_1,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &outC->_1_Context_1.msgBus_out,
      t_train_global,
      &outC->Context_7);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_1,
      &outC->Context_7.messageBus_out);
    /* 2 */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      morcMsgTriggersToRBC_2,
      t_train,
      t_train_global,
      &tmp,
      nid_engine,
      onboardPhoneNumbers_b,
      m_version,
      &outC->Context_2);
    /* 5 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      sendPositionReport_2_RBC_2,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &outC->Context_2.msgBus_out,
      t_train_global,
      &outC->Context_5);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_2,
      &outC->Context_5.messageBus_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-12-07T14:52:35
*************************************************************$ */

