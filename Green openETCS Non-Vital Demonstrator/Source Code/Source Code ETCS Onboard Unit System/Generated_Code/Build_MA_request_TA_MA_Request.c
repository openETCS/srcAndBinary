/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_request_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_MA_request_init_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
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
  outC->message132.present = kcg_true;
  outC->message132.header.present = kcg_true;
  outC->message132.header.nid_message = 0;
  outC->message132.header.t_train = 0;
  outC->message132.header.nid_engine = 0;
  outC->message132.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->message132.header.xT_TRAIN = 0;
  outC->message132.header.xNID_EM = 0;
  outC->message132.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->message132.header.xNID_TEXTMESSAGE = 0;
  outC->message132.packets.p0.valid = kcg_true;
  outC->message132.packets.p0.packet0.NID_PACKET = 0;
  outC->message132.packets.p0.packet0.L_PACKET = 0;
  outC->message132.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->message132.packets.p0.packet0.NID_LRBG = 0;
  outC->message132.packets.p0.packet0.D_LRBG = 0;
  outC->message132.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message132.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->message132.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->message132.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->message132.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message132.packets.p0.packet0.L_TRAININT = 0;
  outC->message132.packets.p0.packet0.V_TRAIN = 0;
  outC->message132.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message132.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->message132.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->message132.packets.p0.packet0.NID_NTC = 0;
  outC->message132.packets.p1.valid = kcg_true;
  outC->message132.packets.p1.packet1.NID_PACKET = 0;
  outC->message132.packets.p1.packet1.L_PACKET = 0;
  outC->message132.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->message132.packets.p1.packet1.NID_LRBG = 0;
  outC->message132.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->message132.packets.p1.packet1.D_LRBG = 0;
  outC->message132.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message132.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->message132.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->message132.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->message132.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message132.packets.p1.packet1.L_TRAININT = 0;
  outC->message132.packets.p1.packet1.V_TRAIN = 0;
  outC->message132.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message132.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->message132.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->message132.packets.p1.packet1.NID_NTC = 0;
  outC->message132.packets.p3.valid = kcg_true;
  outC->message132.packets.p3.number = 0;
  outC->message132.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i1 = 0; i1 < 15; i1++) {
    outC->message132.packets.p3.aNID_RADIO[0].telephoneNumber[i1] = 0;
  }
  outC->message132.packets.p4.valid = kcg_true;
  outC->message132.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->message132.packets.p5.valid = kcg_true;
  outC->message132.packets.p5.TrainRunningNumber = 0;
  outC->message132.packets.p9.valid = kcg_true;
  outC->message132.packets.p9.transitionInformation = 0;
  outC->message132.packets.p11.valid = kcg_true;
  outC->message132.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->message132.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->message132.packets.p11.l_train = 0;
  outC->message132.packets.p11.v_maxtrain = 0;
  outC->message132.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->message132.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->message132.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->message132.packets.p11.n_axle = 0;
  outC->message132.packets.p11.nIter_tractionIdentity = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->message132.packets.p11.tractionIdentity[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message132.packets.p11.tractionIdentity[i1].nid_ctraction = 0;
  }
  outC->message132.packets.p11.nIter_ntc = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->message132.packets.p11.nid_ntc[i1] = 0;
  }
  /* 1 */ Send_M132_init_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_MA_request_reset_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC)
{
  /* 1 */ Send_M132_reset_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::Build_MA_request */
void Build_MA_request_TA_MA_Request(
  /* TA_MA_Request::Build_MA_request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* TA_MA_Request::Build_MA_request::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_MA_Request::Build_MA_request::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_MA_Request::Build_MA_request::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_MA_Request::Build_MA_request::t_train */ T_TRAIN t_train,
  /* TA_MA_Request::Build_MA_request::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Build_MA_request_TA_MA_Request *outC)
{
  /* TA_MA_Request::Build_MA_request */
  static M_132_T_TM_radio_messages mk_struct;
  /* TA_MA_Request::Build_MA_request */
  static P000_TM_TrainToTrack tmp1;
  /* TA_MA_Request::Build_MA_request */
  static P001_TM_TrainToTrack tmp;
  /* TA_MA_Request::Build_MA_request::q_marqrstreason_local */
  static Q_MARQSTREASON q_marqrstreason_local;
  
  outC->message132.present = kcg_true;
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->message132.packets.p0,
    packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->message132.packets.p1,
    packet1);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->message132.packets.p3,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cPT3_OBUTelephoneNumber_TA_MA_Request);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->message132.packets.p4,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &cPT4_ErrorReporting_TA_MA_Request);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->message132.packets.p5,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &cPT5_TrainRunningNumber_TA_MA_Request);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->message132.packets.p9,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cPT9_Level23_TA_MA_Request);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->message132.packets.p11,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cPT11_ValidateTrainData_TA_MA_Request);
  outC->message132.header.t_train = t_train;
  outC->message132.header.nid_engine = (*trainProps).nid_engine;
  outC->message132.header.xT_TRAIN = outC->message132.header.t_train;
  outC->message132.header.present = kcg_true;
  outC->message132.header.nid_message = 132;
  outC->message132.header.xNID_EM = cNid_em_TA_MA_Request;
  outC->message132.header.xQ_EMERGENCYSTOP = cQemergencyStop_TA_MA_Request;
  outC->message132.header.xNID_TEXTMESSAGE = cNidTextMessage_TA_MA_Request;
  /* 1 */ if (trackDescrDeleted) {
    q_marqrstreason_local = Q_MARQSTREASON_Track_description_deleted;
  }
  else {
    q_marqrstreason_local = Q_MARQSTREASON_Start_selected_by_driver;
  }
  outC->message132.header.xQ_MARQSTREASON = q_marqrstreason_local;
  /* 1 */ C_legacy_P000_TM_conversions_TrainToTrack(packet0, &tmp1);
  /* 1 */ C_legacy_P001_TM_conversions_TrainToTrack(packet1, &tmp);
  mk_struct.valid = kcg_true;
  mk_struct.nid_message = 132;
  mk_struct.l_message = 0;
  mk_struct.t_train = 0;
  mk_struct.nid_engine = (*trainProps).nid_engine;
  mk_struct.q_marqstreason = q_marqrstreason_local;
  /* 1 */
  Send_M132_TM_radio_messages(
    t_train,
    bus_in,
    &mk_struct,
    &tmp1,
    &tmp,
    (P009_TM_TrainToTrack *) &DEFAULT_P009_TA_MA_Request,
    cM_version_TA_MA_Request,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->Context_1.MessageBus_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_request_TA_MA_Request.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

