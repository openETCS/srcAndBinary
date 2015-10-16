/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProvidePositionReport_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void ProvidePositionReport_init_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 8; i++) {
    outC->rem_reportedBGs[i].valid = kcg_true;
    outC->rem_reportedBGs[i].nidBG = 0;
    outC->rem_reportedBGs[i].location.nominal = 0;
    outC->rem_reportedBGs[i].location.d_min = 0;
    outC->rem_reportedBGs[i].location.d_max = 0;
  }
  for (i = 0; i < 5; i++) {
    outC->posReport_ng[i].Message.valid = kcg_true;
    outC->posReport_ng[i].Message.nid_message = 0;
    outC->posReport_ng[i].Message.l_message = 0;
    outC->posReport_ng[i].Message.t_train = 0;
    outC->posReport_ng[i].Message.nid_engine = 0;
    outC->posReport_ng[i].Message.field1 = 0;
    outC->posReport_ng[i].Message.field2 = 0;
    outC->posReport_ng[i].Message.field3 = 0;
    for (i1 = 0; i1 < 50; i1++) {
      outC->posReport_ng[i].OptionalPackets[i1] = 0;
    }
  }
  outC->packet1.valid = kcg_true;
  outC->packet1.packet1.NID_PACKET = 0;
  outC->packet1.packet1.L_PACKET = 0;
  outC->packet1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->packet1.packet1.NID_LRBG = 0;
  outC->packet1.packet1.NID_PRVLRBG = 0;
  outC->packet1.packet1.D_LRBG = 0;
  outC->packet1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->packet1.packet1.L_DOUBTOVER = 0;
  outC->packet1.packet1.L_DOUBTUNDER = 0;
  outC->packet1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet1.packet1.L_TRAININT = 0;
  outC->packet1.packet1.V_TRAIN = 0;
  outC->packet1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet1.packet1.mode = M_MODE_Full_Supervision;
  outC->packet1.packet1.level = M_LEVEL_Level_0;
  outC->packet1.packet1.NID_NTC = 0;
  outC->packet0.valid = kcg_true;
  outC->packet0.packet0.NID_PACKET = 0;
  outC->packet0.packet0.L_PACKET = 0;
  outC->packet0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->packet0.packet0.NID_LRBG = 0;
  outC->packet0.packet0.D_LRBG = 0;
  outC->packet0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->packet0.packet0.L_DOUBTOVER = 0;
  outC->packet0.packet0.L_DOUBTUNDER = 0;
  outC->packet0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet0.packet0.L_TRAININT = 0;
  outC->packet0.packet0.V_TRAIN = 0;
  outC->packet0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet0.packet0.mode = M_MODE_Full_Supervision;
  outC->packet0.packet0.level = M_LEVEL_Level_0;
  outC->packet0.packet0.NID_NTC = 0;
  for (i = 0; i < 8; i++) {
    outC->out_reportedBGs[i].valid = kcg_true;
    outC->out_reportedBGs[i].nidBG = 0;
    outC->out_reportedBGs[i].location.nominal = 0;
    outC->out_reportedBGs[i].location.d_min = 0;
    outC->out_reportedBGs[i].location.d_max = 0;
  }
  outC->posRep.present = kcg_true;
  outC->posRep.header.present = kcg_true;
  outC->posRep.header.nid_message = 0;
  outC->posRep.header.t_train = 0;
  outC->posRep.header.nid_engine = 0;
  outC->posRep.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->posRep.header.xT_TRAIN = 0;
  outC->posRep.header.xNID_EM = 0;
  outC->posRep.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->posRep.header.xNID_TEXTMESSAGE = 0;
  outC->posRep.packets.p0.valid = kcg_true;
  outC->posRep.packets.p0.packet0.NID_PACKET = 0;
  outC->posRep.packets.p0.packet0.L_PACKET = 0;
  outC->posRep.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->posRep.packets.p0.packet0.NID_LRBG = 0;
  outC->posRep.packets.p0.packet0.D_LRBG = 0;
  outC->posRep.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->posRep.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->posRep.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->posRep.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->posRep.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->posRep.packets.p0.packet0.L_TRAININT = 0;
  outC->posRep.packets.p0.packet0.V_TRAIN = 0;
  outC->posRep.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->posRep.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->posRep.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->posRep.packets.p0.packet0.NID_NTC = 0;
  outC->posRep.packets.p1.valid = kcg_true;
  outC->posRep.packets.p1.packet1.NID_PACKET = 0;
  outC->posRep.packets.p1.packet1.L_PACKET = 0;
  outC->posRep.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->posRep.packets.p1.packet1.NID_LRBG = 0;
  outC->posRep.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->posRep.packets.p1.packet1.D_LRBG = 0;
  outC->posRep.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->posRep.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->posRep.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->posRep.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->posRep.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->posRep.packets.p1.packet1.L_TRAININT = 0;
  outC->posRep.packets.p1.packet1.V_TRAIN = 0;
  outC->posRep.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->posRep.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->posRep.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->posRep.packets.p1.packet1.NID_NTC = 0;
  outC->posRep.packets.p3.valid = kcg_true;
  outC->posRep.packets.p3.number = 0;
  outC->posRep.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->posRep.packets.p3.aNID_RADIO[0].telephoneNumber[i] = 0;
  }
  outC->posRep.packets.p4.valid = kcg_true;
  outC->posRep.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->posRep.packets.p5.valid = kcg_true;
  outC->posRep.packets.p5.TrainRunningNumber = 0;
  outC->posRep.packets.p9.valid = kcg_true;
  outC->posRep.packets.p9.transitionInformation = 0;
  outC->posRep.packets.p11.valid = kcg_true;
  outC->posRep.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->posRep.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->posRep.packets.p11.l_train = 0;
  outC->posRep.packets.p11.v_maxtrain = 0;
  outC->posRep.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->posRep.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->posRep.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->posRep.packets.p11.n_axle = 0;
  outC->posRep.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->posRep.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->posRep.packets.p11.tractionIdentity[i].nid_ctraction = 0;
  }
  outC->posRep.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->posRep.packets.p11.nid_ntc[i] = 0;
  }
  /* 1 */ nextGen_Msg136_init_radioOutput_Pkg(&outC->_3_Context_1);
  /* 1 */ Build_Packets0_1_init_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */
  PosReport_Supervision_init_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */
  ReceiveReportParameters_init_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ProvidePositionReport_reset_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ nextGen_Msg136_reset_radioOutput_Pkg(&outC->_3_Context_1);
  /* 1 */ Build_Packets0_1_reset_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */
  PosReport_Supervision_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */
  ReceiveReportParameters_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::ProvidePositionReport */
void ProvidePositionReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ProvidePositionReport::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::rcbComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rcbComm,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::BG_LinkingConsistencyError */ kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::LinkedBG_MessageConsistencyError */ kcg_bool LinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::UnlinkedBG_MessageConsistencyError */ kcg_bool UnlinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioMessageConsistencyError */ kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSequenceError */ kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSafeRadioConnectionError */ kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::SafetyCriticalFailure */ kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleLinkingError */ kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleRepositioningError */ kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inVersion */ M_VERSION inVersion,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::t_train */ T_TRAIN t_train,
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static array_82697 tmp4;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg tmp3;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg tmp2;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg tmp1;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg tmp;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L312 */
  static kcg_bool _L312;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L328 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L328;
  
  /* last_init_ck_reportedBGs */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      &_L328,
      (ReportedBGList_T_ProvidePositionReport_Pkg *)
        &cReportedBGList_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      &_L328,
      &outC->rem_reportedBGs);
  }
  /* 1 */
  ReceiveReportParameters_ProvidePositionReport_Pkg(
    &_L328,
    inMessage,
    &outC->Context_1);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &_L328,
    &outC->Context_1.out_reportedBGs);
  /* 1 */
  PosReport_Supervision_ProvidePositionReport_Pkg(
    outC->Context_1.present,
    &outC->Context_1.posRepParam,
    systemTime,
    rcbComm,
    trackInfo,
    train2trackStatus,
    trainPos,
    odometry,
    modeLevelStatus,
    posBGs,
    &outC->_1_Context_1);
  _L312 = outC->_1_Context_1.trigger;
  outC->posRep.present = _L312;
  /* 1 */
  Build_Packets0_1_ProvidePositionReport_Pkg(
    trainProps,
    posBGs,
    modeLevelStatus,
    odometry,
    trainPos,
    train2trackStatus,
    prvDirTrain,
    &outC->_2_Context_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->packet0,
    &outC->_2_Context_1.packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->packet1,
    &outC->_2_Context_1.packet1);
  /* AddBGToFIFO */
  AddBGToFIFO_ProvidePositionReport_Pkg(
    &_L328,
    _L312,
    trainPos,
    &outC->out_reportedBGs);
  /* ck__L312 */ if (_L312) {
    /* 1 */
    ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
      BG_LinkingConsistencyError,
      LinkedBG_MessageConsistencyError,
      UnlinkedBG_MessageConsistencyError,
      RadioMessageConsistencyError,
      RadioSequenceError,
      RadioSafeRadioConnectionError,
      SafetyCriticalFailure,
      DoubleLinkingError,
      DoubleRepositioningError,
      &tmp4);
    /* 1 */
    Build_PosReport_ProvidePositionReport_Pkg(
      trainProps,
      &outC->packet0,
      &outC->packet1,
      &tmp4,
      t_train,
      &outC->posRep.header,
      &tmp3,
      &tmp2,
      &tmp1,
      &tmp);
  }
  else {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &outC->posRep.header,
      (Radio_TrainTrack_Header_T_Radio_Types_Pkg *)
        &emptyHeader_ProvidePositionReport_Pkg);
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &tmp3,
      (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
        &emptyPacket0_ProvidePositionReport_Pkg);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &tmp2,
      (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
        &emptyPacket1_ProvidePositionReport_Pkg);
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &tmp1,
      (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
        &emptyPacket4_ProvidePositionReport_Pkg);
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &tmp,
      (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
        &emptyPacket5_ProvidePositionReport_Pkg);
  }
  /* 1 */
  AggregatePackets_ProvidePositionReport_Pkg(
    &tmp3,
    &tmp2,
    &tmp1,
    &tmp,
    &outC->posRep.packets);
  /* 1 */
  nextGen_Msg136_radioOutput_Pkg(
    MessageBus,
    &outC->posRep,
    inVersion,
    t_train,
    &outC->_3_Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->posReport_ng,
    &outC->_3_Context_1.MessageBus_out);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->rem_reportedBGs,
    reportedBGs);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ProvidePositionReport_ProvidePositionReport_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

