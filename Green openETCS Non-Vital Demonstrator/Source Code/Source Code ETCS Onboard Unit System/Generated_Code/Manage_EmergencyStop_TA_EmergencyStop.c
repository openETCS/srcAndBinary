/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_EmergencyStop_TA_EmergencyStop.h"

#ifndef KCG_USER_DEFINED_INIT
void Manage_EmergencyStop_init_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->rejectNewMA = kcg_true;
  outC->tripTrain = kcg_true;
  outC->cesAccepted = kcg_true;
  outC->updateEOA = kcg_true;
  outC->cesRevoked = kcg_true;
  for (i1 = 0; i1 < 5; i1++) {
    outC->bus_out[i1].Message.valid = kcg_true;
    outC->bus_out[i1].Message.nid_message = 0;
    outC->bus_out[i1].Message.l_message = 0;
    outC->bus_out[i1].Message.t_train = 0;
    outC->bus_out[i1].Message.nid_engine = 0;
    outC->bus_out[i1].Message.field1 = 0;
    outC->bus_out[i1].Message.field2 = 0;
    outC->bus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->bus_out[i1].OptionalPackets[i] = 0;
    }
  }
  outC->newEOA = 0;
  outC->message147.present = kcg_true;
  outC->message147.header.present = kcg_true;
  outC->message147.header.nid_message = 0;
  outC->message147.header.t_train = 0;
  outC->message147.header.nid_engine = 0;
  outC->message147.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->message147.header.xT_TRAIN = 0;
  outC->message147.header.xNID_EM = 0;
  outC->message147.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->message147.header.xNID_TEXTMESSAGE = 0;
  outC->message147.packets.p0.valid = kcg_true;
  outC->message147.packets.p0.packet0.NID_PACKET = 0;
  outC->message147.packets.p0.packet0.L_PACKET = 0;
  outC->message147.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p0.packet0.NID_LRBG = 0;
  outC->message147.packets.p0.packet0.D_LRBG = 0;
  outC->message147.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->message147.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->message147.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p0.packet0.L_TRAININT = 0;
  outC->message147.packets.p0.packet0.V_TRAIN = 0;
  outC->message147.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->message147.packets.p0.packet0.NID_NTC = 0;
  outC->message147.packets.p1.valid = kcg_true;
  outC->message147.packets.p1.packet1.NID_PACKET = 0;
  outC->message147.packets.p1.packet1.L_PACKET = 0;
  outC->message147.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p1.packet1.NID_LRBG = 0;
  outC->message147.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->message147.packets.p1.packet1.D_LRBG = 0;
  outC->message147.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->message147.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->message147.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p1.packet1.L_TRAININT = 0;
  outC->message147.packets.p1.packet1.V_TRAIN = 0;
  outC->message147.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->message147.packets.p1.packet1.NID_NTC = 0;
  outC->message147.packets.p3.valid = kcg_true;
  outC->message147.packets.p3.number = 0;
  outC->message147.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i1 = 0; i1 < 15; i1++) {
    outC->message147.packets.p3.aNID_RADIO[0].telephoneNumber[i1] = 0;
  }
  outC->message147.packets.p4.valid = kcg_true;
  outC->message147.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->message147.packets.p5.valid = kcg_true;
  outC->message147.packets.p5.TrainRunningNumber = 0;
  outC->message147.packets.p9.valid = kcg_true;
  outC->message147.packets.p9.transitionInformation = 0;
  outC->message147.packets.p11.valid = kcg_true;
  outC->message147.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->message147.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->message147.packets.p11.l_train = 0;
  outC->message147.packets.p11.v_maxtrain = 0;
  outC->message147.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->message147.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->message147.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->message147.packets.p11.n_axle = 0;
  outC->message147.packets.p11.nIter_tractionIdentity = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->message147.packets.p11.tractionIdentity[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message147.packets.p11.tractionIdentity[i1].nid_ctraction = 0;
  }
  outC->message147.packets.p11.nIter_ntc = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->message147.packets.p11.nid_ntc[i1] = 0;
  }
  /* 2 */ Send_M147_init_TM_radio_messages(&outC->Context_2);
  /* 1 */ ES_Process_Conditional_init_TA_EmergencyStop(&outC->_1_Context_1);
  /* 1 */ ES_Process_Unconditional_init_TA_EmergencyStop(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_EmergencyStop_reset_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  /* 2 */ Send_M147_reset_TM_radio_messages(&outC->Context_2);
  /* 1 */ ES_Process_Conditional_reset_TA_EmergencyStop(&outC->_1_Context_1);
  /* 1 */ ES_Process_Unconditional_reset_TA_EmergencyStop(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_EmergencyStop::Manage_EmergencyStop */
void Manage_EmergencyStop_TA_EmergencyStop(
  /* TA_EmergencyStop::Manage_EmergencyStop::messageIn */ ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::Manage_EmergencyStop::t_train */ T_TRAIN t_train,
  /* TA_EmergencyStop::Manage_EmergencyStop::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::Manage_EmergencyStop::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::Manage_EmergencyStop::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::Manage_EmergencyStop::TrainPositionIn */ trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::Manage_EmergencyStop::currentEOA */ L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  /* TA_EmergencyStop::Manage_EmergencyStop::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  /* TA_EmergencyStop::Manage_EmergencyStop */
  static M_147_T_TM_radio_messages tmp2;
  /* TA_EmergencyStop::Manage_EmergencyStop */
  static P000_TM_TrainToTrack tmp1;
  /* TA_EmergencyStop::Manage_EmergencyStop */
  static P001_TM_TrainToTrack tmp;
  /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg16 */
  static kcg_bool receivedMsg16;
  /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg15 */
  static kcg_bool receivedMsg15;
  /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg18 */
  static kcg_bool receivedMsg18;
  /* TA_EmergencyStop::Manage_EmergencyStop::sendMsg147 */
  static kcg_bool sendMsg147;
  /* TA_EmergencyStop::Manage_EmergencyStop::nid_em */
  static NID_EM nid_em;
  /* TA_EmergencyStop::Manage_EmergencyStop::q_scale */
  static Q_SCALE q_scale;
  /* TA_EmergencyStop::Manage_EmergencyStop::d_ref */
  static D_REF d_ref;
  /* TA_EmergencyStop::Manage_EmergencyStop::q_dir */
  static Q_DIR q_dir;
  /* TA_EmergencyStop::Manage_EmergencyStop::d_emergencystop */
  static D_EMERGENCYSTOP d_emergencystop;
  
  /* 1 */
  ES_ReceiveAndControl_TA_EmergencyStop(
    messageIn,
    &receivedMsg15,
    &receivedMsg16,
    &receivedMsg18,
    &sendMsg147);
  /* 3 */
  ES_ExtractMsgParams_TA_EmergencyStop(
    messageIn,
    (kcg_bool) (receivedMsg15 | receivedMsg16 | receivedMsg18),
    &nid_em,
    &q_scale,
    &d_ref,
    &q_dir,
    &d_emergencystop);
  /* 1 */
  ES_Process_Unconditional_TA_EmergencyStop(
    nid_em,
    receivedMsg16,
    receivedMsg18,
    &outC->Context_1);
  outC->tripTrain = outC->Context_1.uesActive;
  /* 1 */
  ES_Process_Conditional_TA_EmergencyStop(
    nid_em,
    q_scale,
    d_ref,
    q_dir,
    d_emergencystop,
    receivedMsg15,
    receivedMsg18,
    TrainPositionIn,
    currentEOA,
    &outC->_1_Context_1);
  outC->cesAccepted = outC->_1_Context_1.cesAccepted;
  outC->updateEOA = outC->_1_Context_1.updateEOA;
  outC->newEOA = outC->_1_Context_1.newEOA;
  outC->cesRevoked = outC->_1_Context_1.cesRevoked;
  outC->rejectNewMA = outC->tripTrain | outC->_1_Context_1.cesActive;
  /* ck_sendMsg147 */ if (sendMsg147) {
    /* 2 */
    ES_Build_Acknowledgement_TA_EmergencyStop(
      nid_em,
      t_train,
      trainProps,
      packet0,
      packet1,
      receivedMsg16,
      outC->cesAccepted,
      outC->updateEOA,
      &outC->message147);
    /* 1 */
    ES_Build_AcknowledgementNew_TA_EmergencyStop(
      nid_em,
      t_train,
      trainProps,
      receivedMsg16,
      outC->cesAccepted,
      outC->updateEOA,
      &tmp2);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
      &outC->message147,
      (Radio_TrainTrack_Message_T_TM_transitional *)
        &cMSG147_NONE_TA_EmergencyStop);
    kcg_copy_M_147_T_TM_radio_messages(
      &tmp2,
      (M_147_T_TM_radio_messages *) &DEFAULT_M147_TA_EmergencyStop);
  }
  /* 1 */ C_legacy_P000_TM_conversions_TrainToTrack(packet0, &tmp1);
  /* 1 */ C_legacy_P001_TM_conversions_TrainToTrack(packet1, &tmp);
  /* 2 */
  Send_M147_TM_radio_messages(
    t_train,
    bus_in,
    &tmp2,
    &tmp1,
    &tmp,
    cM_version_MA_Request,
    &outC->Context_2);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->Context_2.MessageBus_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_EmergencyStop_TA_EmergencyStop.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

