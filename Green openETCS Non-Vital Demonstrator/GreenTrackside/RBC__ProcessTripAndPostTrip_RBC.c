/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessTripAndPostTrip_RBC.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessTripAndPostTrip_ini(outC_RBC__ProcessTripAndPostTri *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->invalidAck = kcg_true;
  outC->validAck = kcg_true;
  outC->init = kcg_true;
  outC->recognitionMessageWasSentTimest = 0;
  outC->TRIP_AND_POST_TRIP_SM_state_nxt = SSM_st_IDLE_TRIP_AND_POST_TRIP_;
  outC->outTriggeredRadioTrackTrainMess.Header.radioDevice = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.receivedSystemTime = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.nid_message = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.t_train = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.m_ack = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.nid_lrbg = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.t_train_reference = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.nid_em = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.q_scale = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.d_sr = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.t_sh_rqst = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.d_ref = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.q_dir = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.d_emergencystop = 0;
  outC->outTriggeredRadioTrackTrainMess.Header.m_version = 0;
  for (i = 0; i < 30; i++) {
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketHeaders[i].nid_packet =
      0;
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketHeaders[i].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketHeaders[i].startAddress =
      0;
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->outTriggeredRadioTrackTrainMess.Messages.PacketData[i] = 0;
  }
  outC->outRadioTrainTrackMessage.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.nid_message = 0;
  outC->outRadioTrainTrackMessage.header.t_train = 0;
  outC->outRadioTrainTrackMessage.header.nid_engine = 0;
  outC->outRadioTrainTrackMessage.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_b;
  outC->outRadioTrainTrackMessage.header.xT_TRAIN = 0;
  outC->outRadioTrainTrackMessage.header.xNID_EM = 0;
  outC->outRadioTrainTrackMessage.header.xQ_EMERGENCYSTOP =
    _7_Q_EMERGENCYSTOP_Conditional_;
  outC->outRadioTrainTrackMessage.header.xNID_TEXTMESSAGE = 0;
  outC->outRadioTrainTrackMessage.packets.p0.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.D_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_inf;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_TRAININT = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.V_TRAIN = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_NTC = 0;
  outC->outRadioTrainTrackMessage.packets.p1.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.D_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_inf;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_TRAININT = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.V_TRAIN = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_NTC = 0;
  outC->outRadioTrainTrackMessage.packets.p3.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p3.number = 0;
  outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[0].telephoneNumber[i] =
      0;
  }
  outC->outRadioTrainTrackMessage.packets.p4.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p4.m_error =
    M_ERROR_Balise_group_linking_co;
  outC->outRadioTrainTrackMessage.packets.p5.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p5.TrainRunningNumber = 0;
  outC->outRadioTrainTrackMessage.packets.p9.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p9.transitionInformation = 0;
  outC->outRadioTrainTrackMessage.packets.p11.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->outRadioTrainTrackMessage.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_;
  outC->outRadioTrainTrackMessage.packets.p11.l_train = 0;
  outC->outRadioTrainTrackMessage.packets.p11.v_maxtrain = 0;
  outC->outRadioTrainTrackMessage.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_n;
  outC->outRadioTrainTrackMessage.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrackMessage.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrackMessage.packets.p11.n_axle = 0;
  outC->outRadioTrainTrackMessage.packets.p11.nIter_tractionIdentity = 0;
  for (i = 0; i < 4; i++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[i].nid_ctraction =
      0;
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 5; i++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[i] = 0;
  }
  outC->outDataBus.session.m_TrainData.nid_engine = 0;
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = 0;
  outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[0].valid =
    kcg_true;
  for (i = 0; i < 15; i++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[0].telephoneNumber[i] =
      0;
  }
  outC->outDataBus.session.m_TrainData.t_train_ref = 0;
  outC->outDataBus.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->outDataBus.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_;
  outC->outDataBus.session.m_TrainData.l_train = 0;
  outC->outDataBus.session.m_TrainData.v_maxtrain = 0;
  outC->outDataBus.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_n;
  outC->outDataBus.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outDataBus.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outDataBus.session.m_TrainData.n_axle = 0;
  for (i = 0; i < 4; i++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[i].nid_ctraction =
      0;
  }
  for (i = 0; i < 5; i++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[i] = 0;
  }
  outC->outDataBus.session.m_TrainData.nid_operational = 0;
  outC->outDataBus.session.m_PosData.nid_lrbg = 0;
  outC->outDataBus.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.session.m_PosData.d_lrbg = 0;
  outC->outDataBus.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outDataBus.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outDataBus.session.m_PosData.l_doubtover = 0;
  outC->outDataBus.session.m_PosData.l_doubtunder = 0;
  outC->outDataBus.session.m_PosData.q_length = Q_LENGTH_No_train_integrity_inf;
  outC->outDataBus.session.m_PosData.l_trainint = 0;
  outC->outDataBus.session.m_PosData.v_train = 0;
  outC->outDataBus.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outDataBus.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outDataBus.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outDataBus.session.m_PosData.nid_ntc = 0;
  outC->outDataBus.session.m_PosData.nid_prvlrbg = 0;
  outC->outDataBus.config.m_version = M_VERSION_Previous_versions_acc;
  outC->outDataBus.config.m_NationalParams.nid_c = 0;
  outC->outDataBus.config.m_NationalParams.v_nvshunt = 0;
  outC->outDataBus.config.m_NationalParams.v_nvstff = 0;
  outC->outDataBus.config.m_NationalParams.v_nvonsight = 0;
  outC->outDataBus.config.m_NationalParams.v_nvunfit = 0;
  outC->outDataBus.config.m_NationalParams.v_nvrel = 0;
  outC->outDataBus.config.m_NationalParams.t_nvcontact = 0;
  outC->outDataBus.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_MAReqParams.t_mar = 0;
  outC->outDataBus.config.m_MAReqParams.t_timeoutrqst = 0;
  outC->outDataBus.config.m_MAReqParams.t_cycrqst = 0;
  outC->outDataBus.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.config.m_PosRepParams.t_cycloc = 0;
  outC->outDataBus.config.m_PosRepParams.d_cycloc = 0;
  outC->outDataBus.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->outDataBus.config.m_PosRepParams.m_NumberOfIncrementalDistancesA = 0;
  for (i = 0; i < 32; i++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualif[i].d_loc =
      0;
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualif[i].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (i = 0; i < 16; i++) {
    outC->outDataBus.diagnostic[i].valid = kcg_true;
    outC->outDataBus.diagnostic[i].count = 0;
    outC->outDataBus.diagnostic[i].timestamp = 0;
    outC->outDataBus.diagnostic[i].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnos;
    outC->outDataBus.diagnostic[i].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnost;
    outC->outDataBus.diagnostic[i].diagText = DIAG_MSG_Empty_RBC_Diagnostic_P;
  }
  for (i = 0; i < 8; i++) {
    outC->outDataBus.messageQueue.m_Entries[i].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.radioDevice = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.receivedSystemTime =
      0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.nid_message = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.t_train = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.m_ack = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.nid_lrbg = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.t_train_reference =
      0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.nid_em = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.q_scale = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.d_sr = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.t_sh_rqst = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.d_ref = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.q_dir = 0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.d_emergencystop =
      0;
    outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Header.m_version = 0;
    for (i1 = 0; i1 < 30; i1++) {
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].nid_packet =
        0;
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].startAddress =
        0;
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].endAddress =
        0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->outDataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketData[i1] =
        0;
    }
  }
  outC->outDataBus.clockk.m_Value = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.radioDevice = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.receivedSystemTime = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_message = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_ack = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_lrbg = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train_reference = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_em = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_scale = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_sr = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_sh_rqst = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_ref = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_dir = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_emergencystop = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_version = 0;
  for (i = 0; i < 30; i++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].nid_packet =
      0;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].startAddress =
      0;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[i] = 0;
  }
  /* 3 */ RBC__ProcessModeAndLevel_init_R(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessTripAndPostTrip_res(outC_RBC__ProcessTripAndPostTri *outC)
{
  outC->init = kcg_true;
  /* 3 */ RBC__ProcessModeAndLevel_reset_(&outC->Context_3);
}

/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
void RBC__ProcessTripAndPostTrip_RBC(
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessTripAndPostTri *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
  static NID_MESSAGE tmp6;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
  static Radio_TrainTrack_Header_T_Radio tmp5;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
  static NID_MESSAGE tmp4;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
  static RadioTrackTrainMessageQueueEntr tmp3;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
  static CompressedRadioMessage_TM tmp2;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
  static NID_LRBG tmp1;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
  static PosData_T tmp;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L25 */
  static _6_Radio_TrackTrain_Header_T_TM _L25_TRIP_AND_POST_TRIP_SM_MODE;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L16 */
  static _6_Radio_TrackTrain_Header_T_TM _L16_TRIP_AND_POST_TRIP_SM_TRY_;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_TRIP_AND_POST_TR;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::recognitionMessageWasSentTimestamp */
  static T_TRAIN last_recognitionMessageWasSentT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_state_act;
  
  kcg_copy_CompressedRadioMessage(
    &outC->outTriggeredRadioTrackTrainMess,
    inTriggeredRadioTrackTrainMessa);
  kcg_copy_Radio_TrainTrack_Messa(
    &outC->outRadioTrainTrackMessage,
    inRadioTrainTrackMessage);
  /* init_TRIP_AND_POST_TRIP_SM */ if (outC->init) {
    last_invalidAck = kcg_false;
    TRIP_AND_POST_TRIP_SM_state_sel = SSM_st_IDLE_TRIP_AND_POST_TRIP_;
  }
  else {
    last_invalidAck = outC->invalidAck;
    TRIP_AND_POST_TRIP_SM_state_sel = outC->TRIP_AND_POST_TRIP_SM_state_nxt;
  }
  /* 1 */ RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &tmp5);
  tmp4 = /* 1 */ _148_RadioTrainTrackHeader__Get(&tmp5);
  /* 3 */
  RBC__ProcessModeAndLevel_RBC_Mo(inRadioTrainTrackMessage, &outC->Context_3);
  /* sel_TRIP_AND_POST_TRIP_SM */ switch (TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_ :
      if ((outC->Context_3.out_mode == M_MODE_Trip) &
        outC->Context_3.out_modeChanged) {
        TRIP_AND_POST_TRIP_SM_state_act = SSM_st_MODE_TRIP_TRIP_AND_POST_;
      }
      else {
        TRIP_AND_POST_TRIP_SM_state_act = SSM_st_IDLE_TRIP_AND_POST_TRIP_;
      }
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_ :
      if ((outC->Context_3.out_mode == M_MODE_Post_Trip) &
        outC->Context_3.out_modeChanged) {
        TRIP_AND_POST_TRIP_SM_state_act = SSM_st_SEND_MSG_06_TRIP_AND_POS;
      }
      else {
        TRIP_AND_POST_TRIP_SM_state_act = SSM_st_MODE_TRIP_TRIP_AND_POST_;
      }
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_ :
      if (tmp4 == 136) {
        TRIP_AND_POST_TRIP_SM_state_act = _29_SSM_st_TRY_PROCESS_ACKNOWLE;
      }
      else {
        TRIP_AND_POST_TRIP_SM_state_act = SSM_st_MODE_POST_TRIP_TRIP_AND_;
      }
      break;
    case _29_SSM_st_TRY_PROCESS_ACKNOWLE :
      /* last_init_ck_validAck */ if (outC->init) {
        IfBlock1_clock_TRIP_AND_POST_TR = kcg_false;
      }
      else {
        IfBlock1_clock_TRIP_AND_POST_TR = outC->validAck;
      }
      if (IfBlock1_clock_TRIP_AND_POST_TR) {
        TRIP_AND_POST_TRIP_SM_state_act = SSM_st_IDLE_TRIP_AND_POST_TRIP_;
      }
      else if (last_invalidAck & (tmp4 == 136)) {
        TRIP_AND_POST_TRIP_SM_state_act = _29_SSM_st_TRY_PROCESS_ACKNOWLE;
      }
      else if (last_invalidAck) {
        TRIP_AND_POST_TRIP_SM_state_act = SSM_st_MODE_POST_TRIP_TRIP_AND_;
      }
      else {
        TRIP_AND_POST_TRIP_SM_state_act = _29_SSM_st_TRY_PROCESS_ACKNOWLE;
      }
      break;
    case SSM_st_SEND_MSG_06_TRIP_AND_POS :
      TRIP_AND_POST_TRIP_SM_state_act = SSM_st_MODE_POST_TRIP_TRIP_AND_;
      break;
    
  }
  /* last_init_ck_recognitionMessageWasSentTimestamp */ if (outC->init) {
    outC->init = kcg_false;
    last_recognitionMessageWasSentT = T_TRAIN_MIN;
  }
  else {
    last_recognitionMessageWasSentT = outC->recognitionMessageWasSentTimest;
  }
  kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
  /* act_TRIP_AND_POST_TRIP_SM */ switch (TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POS :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      outC->recognitionMessageWasSentTimest = last_recognitionMessageWasSentT;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt = SSM_st_SEND_MSG_06_TRIP_AND_POS;
      /* 3 */ SessionManagement__GetPosData_R(&(*inDataBus).session, &tmp);
      tmp1 = /* 3 */ PosData__Get_NID_LRBG_RBC_Sessi(&tmp);
      /* 3 */
      _108_RadioTrackTrainFactory__Cr(
        T_TRAIN_MIN,
        M_ACK_Acknowledgement_required,
        tmp1,
        &tmp2);
      /* 3 */ _73_RadioTrackTrainMessageQueue(&tmp2, &tmp3);
      /* 3 */
      _77_RadioTrackTrainMessageQueue(
        &(*inDataBus).messageQueue,
        &tmp3,
        &outC->outDataBus.messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      break;
    case _29_SSM_st_TRY_PROCESS_ACKNOWLE :
      /* 3 */
      RadioTrackTrainMessage__GetHead(
        &(*inDataBus).lastSentTrackTrainMessage,
        &_L16_TRIP_AND_POST_TRIP_SM_TRY_);
      tmp6 = /* 3 */
        _100_RadioTrackTrainHeader__Get(&_L16_TRIP_AND_POST_TRIP_SM_TRY_);
      /* 2 */ if (tmp6 == 6) {
        outC->recognitionMessageWasSentTimest = /* 2 */
          RadioTrackTrainHeader__Get_T_TR(&_L16_TRIP_AND_POST_TRIP_SM_TRY_);
      }
      else {
        outC->recognitionMessageWasSentTimest = last_recognitionMessageWasSentT;
      }
      /* 2 */ RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &tmp5);
      IfBlock1_clock_TRIP_AND_POST_TR = /* 1 */
        _151_RadioTrainTrackHeader__Get(&tmp5) ==
        outC->recognitionMessageWasSentTimest;
      /* ck_IfBlock1 */ if (IfBlock1_clock_TRIP_AND_POST_TR) {
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      outC->TRIP_AND_POST_TRIP_SM_state_nxt = _29_SSM_st_TRY_PROCESS_ACKNOWLE;
      kcg_copy__9_RadioTrackTrainMess(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_ :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      /* 5 */
      RadioTrackTrainMessage__GetHead(
        &(*inDataBus).lastSentTrackTrainMessage,
        &_L25_TRIP_AND_POST_TRIP_SM_MODE);
      tmp4 = /* 5 */
        _100_RadioTrackTrainHeader__Get(&_L25_TRIP_AND_POST_TRIP_SM_MODE);
      /* 4 */ if (tmp4 == 6) {
        outC->recognitionMessageWasSentTimest = /* 4 */
          RadioTrackTrainHeader__Get_T_TR(&_L25_TRIP_AND_POST_TRIP_SM_MODE);
      }
      else {
        outC->recognitionMessageWasSentTimest = last_recognitionMessageWasSentT;
      }
      outC->TRIP_AND_POST_TRIP_SM_state_nxt = SSM_st_MODE_POST_TRIP_TRIP_AND_;
      kcg_copy__9_RadioTrackTrainMess(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_ :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      outC->recognitionMessageWasSentTimest = last_recognitionMessageWasSentT;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt = SSM_st_MODE_TRIP_TRIP_AND_POST_;
      kcg_copy__9_RadioTrackTrainMess(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_ :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      outC->recognitionMessageWasSentTimest = last_recognitionMessageWasSentT;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt = SSM_st_IDLE_TRIP_AND_POST_TRIP_;
      kcg_copy__9_RadioTrackTrainMess(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessTripAndPostTrip_RBC.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

