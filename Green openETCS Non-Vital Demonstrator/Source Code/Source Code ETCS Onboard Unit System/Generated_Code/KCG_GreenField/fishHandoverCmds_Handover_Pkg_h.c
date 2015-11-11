/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "fishHandoverCmds_Handover_Pkg_h.h"

/* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds */
void fishHandoverCmds_Handover_Pkg_h(
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::dataFromTrack */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::dataFromHandingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromHandingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p45_radioNetworkRegistrationOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrd,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p131_RBCTransitionOrder_decoced */ p131_q_rbcTransitionOrder_T_Han *p131_RBCTransitionOrder_decoced,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p131_RBCTransitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_RBCTransitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p42_terminateCmd_from_handingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOv,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::sessionCmdsFromTrack */ msgFromTrack_T_RCM_MsgTypes_Pkg *sessionCmdsFromTrack)
{
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L6 */
  static kcg_bool _L6;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L29 */
  static kcg_bool _L29;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L78 */
  static P45_RadioNetworkRegistration_T_ _L78;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L79 */
  static P131_OBU_T_TM _L79;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L115 */
  static P42_SessionManagement_T_Packet_ _L115;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L102 */
  static kcg_bool _L102;
  
  (*p131_RBCTransitionOrder_decoced).source = (*dataFromTrack).source;
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &(*p131_RBCTransitionOrder_decoced).location,
    (LocWithInAcc_T_Obu_BasicTypes_P *) &cLocWithInAcc_0_Obu_BasicTypes_);
  /* 1 */ Read_P045_TM(&(*dataFromTrack).packets, &_L6, &_L78);
  /* 1 */ Read_P131_TM(&(*dataFromTrack).packets, &_L102, &_L79);
  (*p131_RBCTransitionOrder_decoced).contactLastKnownRBC =
    cNID_RBC_contactLastKnownRBC_Mo == _L79.nid_rbc;
  (*p131_RBCTransitionOrder_decoced).useTheShortNumberStoredOnboard =
    _1_cNID_RADIO_useTheShortNumber == _L79.nid_radio;
  kcg_copy_P131_RBCTransitionOrde(
    &(*p131_RBCTransitionOrder_decoced).order,
    &_L79);
  _L29 = (*dataFromTrack).valid & _L79.valid & _L102;
  (*p131_RBCTransitionOrder_decoced).valid = _L29;
  /* 1 */ if (msrc_Eurobalise_Common_Types_Pk == (*dataFromTrack).source) {
    (*p131_RBCTransitionOrder_decoced).nid_lrbg = /* 1 */
      nidC_nidBG_2_NIDLRBG_CalculateT(
        (*dataFromTrack).BG_Common_Header.valid,
        (*dataFromTrack).BG_Common_Header.nid_c,
        (*dataFromTrack).BG_Common_Header.nid_bg);
  }
  else {
    (*p131_RBCTransitionOrder_decoced).nid_lrbg =
      (*dataFromTrack).Radio_Common_Header.nid_lrbg;
  }
  /* 1 */ Read_P042_TM(&(*dataFromHandingOverRBC).packets, &_L102, &_L115);
  /* 2 */ if ((*dataFromHandingOverRBC).valid &
    ((*dataFromHandingOverRBC).source == msrc_Euroradio_Common_Types_Pkg) &
    _L102 & (Q_RBC_Terminate_communication_s == _L115.q_rbc) & _L115.valid) {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      p42_terminateCmd_from_handingOv,
      dataFromHandingOverRBC);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      p42_terminateCmd_from_handingOv,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
  }
  /* 2 */ Read_P042_TM(&(*dataFromTrack).packets, &_L102, &_L115);
  /* 3 */ if (((*dataFromTrack).valid & _L102) | ((*dataFromTrack).valid &
      ((*dataFromTrack).source == msrc_Euroradio_Common_Types_Pkg) &
      (((*dataFromTrack).Radio_Common_Header.nid_message ==
          cm38_Initiation_of_a_Communicat) |
        ((*dataFromTrack).Radio_Common_Header.nid_message ==
          cm39_Acknowledgement_of_termina) |
        ((*dataFromTrack).Radio_Common_Header.nid_message ==
          cm32_RBC_RIU_System_Version_Id_)))) {
    kcg_copy_msgFromTrack_T_RCM_Msg(sessionCmdsFromTrack, dataFromTrack);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      sessionCmdsFromTrack,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
  }
  /* 4 */ if (_L6 & (*dataFromTrack).valid) {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      p45_radioNetworkRegistrationOrd,
      dataFromTrack);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      p45_radioNetworkRegistrationOrd,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
  }
  /* 5 */ if (_L29) {
    kcg_copy_msgFromTrack_T_RCM_Msg(p131_RBCTransitionOrder, dataFromTrack);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_Msg(
      p131_RBCTransitionOrder,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pk);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** fishHandoverCmds_Handover_Pkg_h.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

