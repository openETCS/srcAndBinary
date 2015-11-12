/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProvidePositionReport_ProvidePo.h"

#ifndef KCG_USER_DEFINED_INIT
void ProvidePositionReport_init_Prov(outC_ProvidePositionReport_Prov *outC)
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
    outC->posReport[i].Message.valid = kcg_true;
    outC->posReport[i].Message.nid_message = 0;
    outC->posReport[i].Message.l_message = 0;
    outC->posReport[i].Message.t_train = 0;
    outC->posReport[i].Message.nid_engine = 0;
    outC->posReport[i].Message.field1 = 0;
    outC->posReport[i].Message.field2 = 0;
    outC->posReport[i].Message.field3 = 0;
    for (i1 = 0; i1 < 50; i1++) {
      outC->posReport[i].OptionalPackets[i1] = 0;
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
  outC->packet1.packet1.length = Q_LENGTH_No_train_integrity_inf;
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
  outC->packet0.packet0.length = Q_LENGTH_No_train_integrity_inf;
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
  /* 1 */ nextGen_Msg136_init_radioOutput(&outC->_3_Context_1);
  /* 1 */ Build_Packets0_1_init_ProvidePo(&outC->_2_Context_1);
  /* 1 */ PosReport_Supervision_init_Prov(&outC->_1_Context_1);
  /* 1 */ ReceiveReportParameters_init_Pr(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ProvidePositionReport_reset_Pro(outC_ProvidePositionReport_Prov *outC)
{
  outC->init = kcg_true;
  /* 1 */ nextGen_Msg136_reset_radioOutpu(&outC->_3_Context_1);
  /* 1 */ Build_Packets0_1_reset_ProvideP(&outC->_2_Context_1);
  /* 1 */ PosReport_Supervision_reset_Pro(&outC->_1_Context_1);
  /* 1 */ ReceiveReportParameters_reset_P(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::ProvidePositionReport */
void ProvidePositionReport_ProvidePo(
  /* ProvidePositionReport_Pkg::ProvidePositionReport::posBGs */ positionedBGs_T_TrainPosition_T *posBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainPos */ trainPosition_T_TrainPosition_T *trainPos,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trackInfo */ LocationBasedEvents_T_ProvidePo *trackInfo,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::systemTime */ SystemTime_T_ProvidePositionRep systemTime,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::rcbComm */ RBC_Communication_T_ProvidePosi *rcbComm,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::train2trackStatus */ TrainToTrackStatus_T_BG_Types_P *train2trackStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::BG_LinkingConsistencyError */ kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::LinkedBG_MessageConsistencyError */ kcg_bool LinkedBG_MessageConsistencyErro,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::UnlinkedBG_MessageConsistencyError */ kcg_bool UnlinkedBG_MessageConsistencyEr,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioMessageConsistencyError */ kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSequenceError */ kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSafeRadioConnectionError */ kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::SafetyCriticalFailure */ kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleLinkingError */ kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleRepositioningError */ kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::modeLevelStatus */ ModeLevel2PositionReport_T_Prov *modeLevelStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::reportedBGs */ ReportedBGList_T_ProvidePositio *reportedBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::MessageBus */ M_TrainTrackMessageBus_t_TM_Tra *MessageBus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inVersion */ M_VERSION inVersion,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::t_train */ T_TRAIN t_train,
  outC_ProvidePositionReport_Prov *outC)
{
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static struct_101311 mk_struct;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static array_102250 tmp6;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static _10_Radio_TrainTrack_Header_T_R tmp5;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static outPackets_T_Common_Types_Pkg tmp4;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT0_PositionReport_T_Packet_Tra tmp3;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT1_PositionReport_2BG_T_Packet tmp2;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT4_ErrorReporting_T_Packet_Tra tmp1;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT5_TrainRunningNumber_Packet_T tmp;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L312 */
  static kcg_bool _L312;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L328 */
  static ReportedBGList_T_ProvidePositio _L328;
  
  /* last_init_ck_reportedBGs */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_ReportedBGList_T_Provi(
      &_L328,
      (ReportedBGList_T_ProvidePositio *) &cReportedBGList_ProvidePosition);
  }
  else {
    kcg_copy_ReportedBGList_T_Provi(&_L328, &outC->rem_reportedBGs);
  }
  /* 1 */ ReceiveReportParameters_Provide(&_L328, inMessage, &outC->Context_1);
  kcg_copy_ReportedBGList_T_Provi(&_L328, &outC->Context_1.out_reportedBGs);
  /* 1 */
  PosReport_Supervision_ProvidePo(
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
  /* 1 */
  Build_Packets0_1_ProvidePositio(
    trainProps,
    posBGs,
    modeLevelStatus,
    odometry,
    trainPos,
    train2trackStatus,
    prvDirTrain,
    &outC->_2_Context_1);
  kcg_copy_PT0_PositionReport_T_P(&outC->packet0, &outC->_2_Context_1.packet0);
  kcg_copy_PT1_PositionReport_2BG(&outC->packet1, &outC->_2_Context_1.packet1);
  /* AddBGToFIFO */
  AddBGToFIFO_ProvidePositionRepo(
    &_L328,
    _L312,
    trainPos,
    &outC->out_reportedBGs);
  /* ck__L312 */ if (_L312) {
    /* 1 */
    ErrorManager_ProvidePositionRep(
      BG_LinkingConsistencyError,
      LinkedBG_MessageConsistencyErro,
      UnlinkedBG_MessageConsistencyEr,
      RadioMessageConsistencyError,
      RadioSequenceError,
      RadioSafeRadioConnectionError,
      SafetyCriticalFailure,
      DoubleLinkingError,
      DoubleRepositioningError,
      &tmp6);
    /* 1 */
    Build_PosReport_ProvidePosition(
      trainProps,
      &outC->packet0,
      &outC->packet1,
      &tmp6,
      t_train,
      &tmp5,
      &tmp3,
      &tmp2,
      &tmp1,
      &tmp);
  }
  else {
    kcg_copy__10_Radio_TrainTrack_H(
      &tmp5,
      (_10_Radio_TrainTrack_Header_T_R *) &emptyHeader_ProvidePositionRepo);
    kcg_copy_PT0_PositionReport_T_P(
      &tmp3,
      (PT0_PositionReport_T_Packet_Tra *) &emptyPacket0_ProvidePositionRep);
    kcg_copy_PT1_PositionReport_2BG(
      &tmp2,
      (PT1_PositionReport_2BG_T_Packet *) &emptyPacket1_ProvidePositionRep);
    kcg_copy_PT4_ErrorReporting_T_P(
      &tmp1,
      (PT4_ErrorReporting_T_Packet_Tra *) &emptyPacket4_ProvidePositionRep);
    kcg_copy_PT5_TrainRunningNumber(
      &tmp,
      (PT5_TrainRunningNumber_Packet_T *) &emptyPacket5_ProvidePositionRep);
  }
  /* 1 */ AggregatePackets_ProvidePositio(&tmp3, &tmp2, &tmp1, &tmp, &tmp4);
  mk_struct.present = _L312;
  kcg_copy__10_Radio_TrainTrack_H(&mk_struct.header, &tmp5);
  kcg_copy_outPackets_T_Common_Ty(&mk_struct.packets, &tmp4);
  /* 1 */
  nextGen_Msg136_radioOutput_Pkg(
    MessageBus,
    &mk_struct,
    inVersion,
    t_train,
    &outC->_3_Context_1);
  kcg_copy_M_TrainTrackMessageBus(
    &outC->posReport,
    &outC->_3_Context_1.MessageBus_out);
  kcg_copy_ReportedBGList_T_Provi(&outC->rem_reportedBGs, reportedBGs);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ProvidePositionReport_ProvidePo.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

