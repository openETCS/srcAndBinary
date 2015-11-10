/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessController_RBC_Mode.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessController_init_RBC(outC_RBC__ProcessController_RBC *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->invalidAckForMessage129 = kcg_true;
  outC->trainDataValidated = kcg_true;
  outC->invalidAckForMAandPosRepParams = kcg_true;
  outC->paramsSent = kcg_true;
  outC->init = kcg_true;
  outC->init8 = kcg_true;
  outC->init9 = kcg_true;
  outC->init10 = kcg_true;
  outC->init11 = kcg_true;
  outC->SESSION_ESTABLISHED_SM_state_nx = SSM_st_PROCESS_SESSION_ESTABLIS;
  outC->radioTrackTrainMessageWasSentTi = 0;
  outC->SEND_MA_AMD_POS_REP_PARAMS_SM_s = SSM_st_START_CONTROLLER_SM_SESS;
  outC->PROCESS_VALIDATED_TRAIN_DATA_SM = _18_SSM_st_START_CONTROLLER_SM_;
  outC->_12_radioTrackTrainMessageWasSe = 0;
  outC->CONTROLLER_SM_state_nxt = SSM_st_SESSION_TERMINATED_CONTR;
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
  /* 2 */ RBC__ProcessGeneralMessage_init(&outC->_7_Context_2);
  /* 1 */ RBC__ProcessTripAndPostTrip_ini(&outC->_6_Context_1);
  /* 1 */ RBC__ProcessRevocationOfE_init_(&outC->_5_Context_1);
  /* 1 */ RBC__ProcessMovementAuthority_i(&outC->_4_Context_1);
  /* 1 */ RBC__ProcessUnconditional_init_(&outC->_3_Context_1);
  /* 1 */ RBC__ProcessConditionalEm_init_(&outC->_2_Context_1);
  /* 1 */ RBC__PingTrain_init_RBC_Model_P(&outC->_1_Context_1);
  /* 1 */ RBC__ProcessPositionReport_init(&outC->Context_1);
  /* 2 */ RBC__PingTrain_init_RBC_Model_P(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC__ProcessController_reset_RB(outC_RBC__ProcessController_RBC *outC)
{
  outC->init = kcg_true;
  outC->init8 = kcg_true;
  outC->init9 = kcg_true;
  outC->init10 = kcg_true;
  outC->init11 = kcg_true;
  /* 2 */ RBC__ProcessGeneralMessage_rese(&outC->_7_Context_2);
  /* 1 */ RBC__ProcessTripAndPostTrip_res(&outC->_6_Context_1);
  /* 1 */ RBC__ProcessRevocationOfE_reset(&outC->_5_Context_1);
  /* 1 */ RBC__ProcessMovementAuthority_r(&outC->_4_Context_1);
  /* 1 */ RBC__ProcessUnconditional_reset(&outC->_3_Context_1);
  /* 1 */ RBC__ProcessConditionalEm_reset(&outC->_2_Context_1);
  /* 1 */ RBC__PingTrain_reset_RBC_Model_(&outC->_1_Context_1);
  /* 1 */ RBC__ProcessPositionReport_rese(&outC->Context_1);
  /* 2 */ RBC__PingTrain_reset_RBC_Model_(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Model_Pkg::RBC__ProcessController */
void RBC__ProcessController_RBC_Mode(
  /* RBC_Model_Pkg::RBC__ProcessController::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessController::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radi *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessController::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC__ProcessController_RBC *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessController */
  static NID_MESSAGE tmp47;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static Radio_TrainTrack_Header_T_Radio tmp46;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static NID_MESSAGE tmp45;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static Radio_TrainTrack_Header_T_Radio tmp44;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static PosData_T tmp43;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static PT3_OnboardTelephoneNumbers_T_P tmp42;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static outPackets_T_Common_Types_Pkg tmp41;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static PosData_T tmp40;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static PosData_T tmp39;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static RadioTrackTrainMessageQueueEntr tmp38;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static CompressedRadioMessage_TM tmp37;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static NID_LRBG tmp36;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static PosData_T tmp35;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static RadioTrackTrainMessageQueueEntr tmp34;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static CompressedRadioMessage_TM tmp33;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static NID_LRBG tmp32;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static PosData_T tmp31;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static P057_trackside_int_T_TM tmp30;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static Q_DIR tmp29;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static T_MAR tmp28;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static T_TIMEOUTRQST tmp27;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static T_CYCRQST tmp26;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static P058_trackside_int_T_TM tmp25;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static Q_DIR tmp24;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static Q_SCALE tmp23;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static T_CYCLOC tmp22;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static D_CYCLOC tmp21;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static M_LOC tmp20;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static N_ITER tmp19;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static array_44858 tmp18;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static SessionManagement_T tmp17;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static TrainData_T tmp16;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static TrainData_T tmp15;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static RadioTrackTrainMessageQueueEntr tmp14;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static CompressedRadioMessage_TM tmp13;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static NID_LRBG tmp12;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static T_TRAIN tmp11;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static Radio_TrainTrack_Header_T_Radio tmp10;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static TrainData_T tmp9;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static TrainData_T tmp8;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static TrainData_T tmp7;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static TrainData_T tmp6;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static NID_ENGINE tmp5;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static Radio_TrainTrack_Header_T_Radio tmp4;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static RadioTrackTrainMessageQueueEntr tmp3;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static CompressedRadioMessage_TM tmp2;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static M_VERSION tmp1;
  /* RBC_Model_Pkg::RBC__ProcessController */
  static NID_MESSAGE tmp;
  /* RBC_Model_Pkg::RBC__ProcessController::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool CONTROLLER_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM CONTROLLER_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM CONTROLLER_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessController::invalidAckForMessage129 */
  static kcg_bool last_invalidAckForMessage129;
  /* RBC_Model_Pkg::RBC__ProcessController::trainDataValidated */
  static kcg_bool last_trainDataValidated;
  /* RBC_Model_Pkg::RBC__ProcessController::invalidAckForMAandPosRepParams */
  static kcg_bool last_invalidAckForMAandPosRepPa;
  /* RBC_Model_Pkg::RBC__ProcessController::paramsSent */
  static kcg_bool last_paramsSent;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::valid */
  static kcg_bool valid_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_ _51_PROCESS_VALIDATED_TRAIN_DAT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_ PROCESS_VALIDATED_TRAIN_DATA_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN last_radioTrackTrainMessageWasS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L14 */
  static PosData_T _L14_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L20 */
  static _6_Radio_TrackTrain_Header_T_TM _L20_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool _48_IfBlock1_clock_CONTROLLER_S;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L48 */
  static T_TRAIN _L48_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L44 */
  static _6_Radio_TrackTrain_Header_T_TM _L44_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L177 */
  static RBC_Data_T_RBC_DataBus_Pkg _L177_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L176 */
  static RBC_Data_T_RBC_DataBus_Pkg _L176_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L175 */
  static RBC_Data_T_RBC_DataBus_Pkg _L175_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L174 */
  static RBC_Data_T_RBC_DataBus_Pkg _L174_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L173 */
  static RBC_Data_T_RBC_DataBus_Pkg _L173_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L171 */
  static RBC_Data_T_RBC_DataBus_Pkg _L171_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L170 */
  static RBC_Data_T_RBC_DataBus_Pkg _L170_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L165 */
  static Radio_TrainTrack_Message_T_Radi _L165_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L168 */
  static CompressedRadioMessage_TM _L168_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L151 */
  static Radio_TrainTrack_Message_T_Radi _L151_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L154 */
  static CompressedRadioMessage_TM _L154_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L144 */
  static Radio_TrainTrack_Message_T_Radi _L144_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L147 */
  static CompressedRadioMessage_TM _L147_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L136 */
  static Radio_TrainTrack_Message_T_Radi _L136_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L139 */
  static CompressedRadioMessage_TM _L139_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L129 */
  static Radio_TrainTrack_Message_T_Radi _L129_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L132 */
  static CompressedRadioMessage_TM _L132_CONTROLLER_SM_SESSION_EST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L54 */
  static CompressedRadioMessage_TM _L54_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L38 */
  static Radio_TrainTrack_Message_T_Radi _L38_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L35 */
  static Radio_TrainTrack_Message_T_Radi _L35_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L27 */
  static CompressedRadioMessage_TM _L27_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool SEND_MA_AMD_POS_REP_PARAMS_SM_r;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARA _49_SEND_MA_AMD_POS_REP_PARAMS_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARA SEND_MA_AMD_POS_REP_PARAMS_SM_s;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSIO;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_CONTROLLER_SM_SE;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L6 */
  static _6_Radio_TrackTrain_Header_T_TM _L6_CONTROLLER_SM_SESSION_ESTAB;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L23 */
  static PosRepParams_T _L23_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L12 */
  static MAReqParams_T _L12_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RBC_REQUEST_SESSION_TERMINATION::_L42 */
  static RBC_Data_T_RBC_DataBus_Pkg _L42_CONTROLLER_SM_SESSION_ESTA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::START */
  static kcg_bool br_2_guard_CONTROLLER_SM_SESSIO;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::START */
  static kcg_bool _50_br_1_guard_CONTROLLER_SM_SE;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_C SESSION_ESTABLISHED_SM_state_se;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_C SESSION_ESTABLISHED_SM_state_ac;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool SESSION_ESTABLISHED_SM_reset_ac;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L16 */
  static SessionManagement_T _L16_CONTROLLER_SM_SEND_RBC_VER;
  
  /* 1 */ RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &tmp4);
  radioTrainTrackMessageId = /* 1 */ _148_RadioTrainTrackHeader__Get(&tmp4);
  /* last_init_ck_invalidAckForMessage129 */ if (outC->init11) {
    last_paramsSent = kcg_false;
    CONTROLLER_SM_state_sel = SSM_st_SESSION_TERMINATED_CONTR;
    last_trainDataValidated = kcg_false;
    last_invalidAckForMAandPosRepPa = kcg_false;
    outC->init11 = kcg_false;
    last_invalidAckForMessage129 = kcg_false;
  }
  else {
    last_paramsSent = outC->paramsSent;
    CONTROLLER_SM_state_sel = outC->CONTROLLER_SM_state_nxt;
    last_trainDataValidated = outC->trainDataValidated;
    last_invalidAckForMAandPosRepPa = outC->invalidAckForMAandPosRepParams;
    last_invalidAckForMessage129 = outC->invalidAckForMessage129;
  }
  /* sel_CONTROLLER_SM */ switch (CONTROLLER_SM_state_sel) {
    case SSM_st_SESSION_TERMINATED_CONTR :
      CONTROLLER_SM_reset_act = radioTrainTrackMessageId == 155;
      if (CONTROLLER_SM_reset_act) {
        CONTROLLER_SM_state_act = SSM_st_SEND_RBC_VERSION_CONTROL;
      }
      else {
        CONTROLLER_SM_state_act = SSM_st_SESSION_TERMINATED_CONTR;
      }
      break;
    case SSM_st_SEND_RBC_VERSION_CONTROL :
      CONTROLLER_SM_reset_act = kcg_true;
      if ((radioTrainTrackMessageId == 159) | (radioTrainTrackMessageId ==
          154)) {
        CONTROLLER_SM_state_act = SSM_st_SESSION_ESTABLISHED_CONT;
      }
      else {
        CONTROLLER_SM_state_act = SSM_st_AWAIT_SESSION_ESTABLISHE;
      }
      break;
    case SSM_st_AWAIT_SESSION_ESTABLISHE :
      CONTROLLER_SM_reset_act = (radioTrainTrackMessageId == 159) |
        (radioTrainTrackMessageId == 154);
      if (CONTROLLER_SM_reset_act) {
        CONTROLLER_SM_state_act = SSM_st_SESSION_ESTABLISHED_CONT;
      }
      else {
        CONTROLLER_SM_state_act = SSM_st_AWAIT_SESSION_ESTABLISHE;
      }
      break;
    case SSM_st_SESSION_ESTABLISHED_CONT :
      CONTROLLER_SM_reset_act = radioTrainTrackMessageId == 156;
      if (CONTROLLER_SM_reset_act) {
        CONTROLLER_SM_state_act = SSM_st_SESSION_TERMINATION_REQU;
      }
      else {
        CONTROLLER_SM_state_act = SSM_st_SESSION_ESTABLISHED_CONT;
      }
      break;
    case SSM_st_SESSION_TERMINATION_REQU :
      CONTROLLER_SM_reset_act = kcg_true;
      if (radioTrainTrackMessageId == 155) {
        CONTROLLER_SM_state_act = SSM_st_SEND_RBC_VERSION_CONTROL;
      }
      else {
        CONTROLLER_SM_state_act = SSM_st_SESSION_TERMINATED_CONTR;
      }
      break;
    
  }
  /* act_CONTROLLER_SM */ switch (CONTROLLER_SM_state_act) {
    case SSM_st_SESSION_TERMINATION_REQU :
      outC->invalidAckForMAandPosRepParams = kcg_false;
      outC->paramsSent = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      outC->trainDataValidated = kcg_false;
      kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
      /* 1 */
      SessionManagement__Reset_RBC_Se(
        &(*inDataBus).session,
        &outC->outDataBus.session);
      /* 5 */ SessionManagement__GetPosData_R(&(*inDataBus).session, &tmp35);
      tmp36 = /* 4 */ PosData__Get_NID_LRBG_RBC_Sessi(&tmp35);
      /* 1 */ _105_RadioTrackTrainFactory__Cr(T_TRAIN_MIN, tmp36, &tmp37);
      /* 5 */ _73_RadioTrackTrainMessageQueue(&tmp37, &tmp38);
      /* 5 */
      _77_RadioTrackTrainMessageQueue(
        &(*inDataBus).messageQueue,
        &tmp38,
        &outC->outDataBus.messageQueue);
      outC->CONTROLLER_SM_state_nxt = SSM_st_SESSION_TERMINATION_REQU;
      break;
    case SSM_st_SESSION_ESTABLISHED_CONT :
      if (CONTROLLER_SM_reset_act) {
        outC->init10 = kcg_true;
      }
      /* init_SESSION_ESTABLISHED_SM */ if (outC->init10) {
        SESSION_ESTABLISHED_SM_state_se = _23_SSM_st_START_CONTROLLER_SM_;
      }
      else {
        SESSION_ESTABLISHED_SM_state_se = outC->SESSION_ESTABLISHED_SM_state_nx;
      }
      /* sel_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_se) {
        case SSM_st_RBC_REQUEST_SESSION_TERM :
          SESSION_ESTABLISHED_SM_reset_ac = kcg_true;
          SESSION_ESTABLISHED_SM_state_ac = SSM_st_AWAIT_SESSION_TERMINATIO;
          break;
        case _22_SSM_st_SEND_MA_AND_POS_REP_ :
          if (last_paramsSent) {
            SESSION_ESTABLISHED_SM_state_ac = SSM_st_RECEIVE_AND_TRIGGER_CONT;
          }
          else {
            SESSION_ESTABLISHED_SM_state_ac = _22_SSM_st_SEND_MA_AND_POS_REP_;
          }
          SESSION_ESTABLISHED_SM_reset_ac = last_paramsSent;
          break;
        case SSM_st_AWAIT_SESSION_TERMINATIO :
          SESSION_ESTABLISHED_SM_reset_ac = kcg_false;
          SESSION_ESTABLISHED_SM_state_ac = SSM_st_AWAIT_SESSION_TERMINATIO;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DA :
          SESSION_ESTABLISHED_SM_reset_ac = radioTrainTrackMessageId == 129;
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            SESSION_ESTABLISHED_SM_state_ac = _24_SSM_st_PROCESS_VALIDATED_TR;
          }
          else {
            SESSION_ESTABLISHED_SM_state_ac = SSM_st_AWAIT_VALIDATED_TRAIN_DA;
          }
          break;
        case _23_SSM_st_START_CONTROLLER_SM_ :
          _50_br_1_guard_CONTROLLER_SM_SE = radioTrainTrackMessageId == 159;
          br_2_guard_CONTROLLER_SM_SESSIO = radioTrainTrackMessageId == 154;
          if (_50_br_1_guard_CONTROLLER_SM_SE) {
            SESSION_ESTABLISHED_SM_reset_ac = kcg_true;
            SESSION_ESTABLISHED_SM_state_ac = SSM_st_PROCESS_SESSION_ESTABLIS;
          }
          else {
            if (br_2_guard_CONTROLLER_SM_SESSIO) {
              SESSION_ESTABLISHED_SM_state_ac = SSM_st_AWAIT_SESSION_TERMINATIO;
            }
            else {
              SESSION_ESTABLISHED_SM_state_ac = _23_SSM_st_START_CONTROLLER_SM_;
            }
            SESSION_ESTABLISHED_SM_reset_ac = br_2_guard_CONTROLLER_SM_SESSIO;
          }
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          SESSION_ESTABLISHED_SM_reset_ac = radioTrainTrackMessageId == 150;
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            SESSION_ESTABLISHED_SM_state_ac = SSM_st_RBC_REQUEST_SESSION_TERM;
          }
          else {
            SESSION_ESTABLISHED_SM_state_ac = SSM_st_RECEIVE_AND_TRIGGER_CONT;
          }
          break;
        case _24_SSM_st_PROCESS_VALIDATED_TR :
          if (last_trainDataValidated) {
            SESSION_ESTABLISHED_SM_state_ac = _22_SSM_st_SEND_MA_AND_POS_REP_;
          }
          else {
            SESSION_ESTABLISHED_SM_state_ac = _24_SSM_st_PROCESS_VALIDATED_TR;
          }
          SESSION_ESTABLISHED_SM_reset_ac = last_trainDataValidated;
          break;
        case SSM_st_PROCESS_SESSION_ESTABLIS :
          SESSION_ESTABLISHED_SM_reset_ac = kcg_true;
          if (radioTrainTrackMessageId == 129) {
            SESSION_ESTABLISHED_SM_state_ac = _24_SSM_st_PROCESS_VALIDATED_TR;
          }
          else {
            SESSION_ESTABLISHED_SM_state_ac = SSM_st_AWAIT_VALIDATED_TRAIN_DA;
          }
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case _22_SSM_st_SEND_MA_AND_POS_REP_ :
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            outC->init8 = kcg_true;
          }
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        outC->init8 = kcg_true;
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case _22_SSM_st_SEND_MA_AND_POS_REP_ :
          /* init_SEND_MA_AMD_POS_REP_PARAMS_SM */ if (outC->init8) {
            SEND_MA_AMD_POS_REP_PARAMS_SM_s = SSM_st_START_CONTROLLER_SM_SESS;
          }
          else {
            SEND_MA_AMD_POS_REP_PARAMS_SM_s =
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_s;
          }
          /* sel_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (SEND_MA_AMD_POS_REP_PARAMS_SM_s) {
            case SSM_st_TRY_PROCESS_ACKNOWLEDGME :
              br_1_guard_CONTROLLER_SM_SESSIO = (radioTrainTrackMessageId ==
                  146) & last_invalidAckForMAandPosRepPa;
              if (br_1_guard_CONTROLLER_SM_SESSIO) {
                _49_SEND_MA_AMD_POS_REP_PARAMS_ =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGME;
                SEND_MA_AMD_POS_REP_PARAMS_SM_r = kcg_true;
              }
              else {
                if (last_invalidAckForMAandPosRepPa) {
                  _49_SEND_MA_AMD_POS_REP_PARAMS_ =
                    SSM_st_AWAIT_ACKNOWLEDGMENT_CON;
                }
                else {
                  _49_SEND_MA_AMD_POS_REP_PARAMS_ =
                    SSM_st_TRY_PROCESS_ACKNOWLEDGME;
                }
                SEND_MA_AMD_POS_REP_PARAMS_SM_r =
                  last_invalidAckForMAandPosRepPa;
              }
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CON :
              SEND_MA_AMD_POS_REP_PARAMS_SM_r = radioTrainTrackMessageId == 146;
              if (SEND_MA_AMD_POS_REP_PARAMS_SM_r) {
                _49_SEND_MA_AMD_POS_REP_PARAMS_ =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGME;
              }
              else {
                _49_SEND_MA_AMD_POS_REP_PARAMS_ =
                  SSM_st_AWAIT_ACKNOWLEDGMENT_CON;
              }
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARA :
              if (radioTrainTrackMessageId == 146) {
                _49_SEND_MA_AMD_POS_REP_PARAMS_ =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGME;
              }
              else {
                _49_SEND_MA_AMD_POS_REP_PARAMS_ =
                  SSM_st_AWAIT_ACKNOWLEDGMENT_CON;
              }
              SEND_MA_AMD_POS_REP_PARAMS_SM_r = kcg_true;
              break;
            case SSM_st_START_CONTROLLER_SM_SESS :
              _49_SEND_MA_AMD_POS_REP_PARAMS_ = SSM_st_SEND_MA_AND_POS_REP_PARA;
              SEND_MA_AMD_POS_REP_PARAMS_SM_r = kcg_true;
              break;
            
          }
          /* act_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (_49_SEND_MA_AMD_POS_REP_PARAMS_) {
            case SSM_st_TRY_PROCESS_ACKNOWLEDGME :
              /* 4 */
              RadioTrackTrainMessage__GetHead(
                &(*inDataBus).lastSentTrackTrainMessage,
                &_L6_CONTROLLER_SM_SESSION_ESTAB);
              if (SEND_MA_AMD_POS_REP_PARAMS_SM_r) {
                outC->init = kcg_true;
              }
              break;
            
          }
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            outC->init = kcg_true;
          }
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        outC->init = kcg_true;
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_PROCESS_SESSION_ESTABLIS :
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->paramsSent = kcg_false;
          break;
        case _24_SSM_st_PROCESS_VALIDATED_TR :
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->paramsSent = kcg_false;
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            outC->init9 = kcg_true;
          }
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->paramsSent = kcg_false;
          break;
        case _23_SSM_st_START_CONTROLLER_SM_ :
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->paramsSent = kcg_false;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DA :
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->paramsSent = kcg_false;
          break;
        case SSM_st_AWAIT_SESSION_TERMINATIO :
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->paramsSent = kcg_false;
          break;
        case _22_SSM_st_SEND_MA_AND_POS_REP_ :
          /* act_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (_49_SEND_MA_AMD_POS_REP_PARAMS_) {
            case SSM_st_START_CONTROLLER_SM_SESS :
              outC->invalidAckForMAandPosRepParams = kcg_false;
              outC->paramsSent = kcg_false;
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARA :
              outC->invalidAckForMAandPosRepParams = kcg_false;
              outC->paramsSent = kcg_false;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CON :
              outC->invalidAckForMAandPosRepParams = kcg_false;
              outC->paramsSent = kcg_false;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGME :
              tmp47 = /* 4 */
                _100_RadioTrackTrainHeader__Get(
                  &_L6_CONTROLLER_SM_SESSION_ESTAB);
              /* 5 */ if (tmp47 == 24) {
                outC->radioTrackTrainMessageWasSentTi = /* 5 */
                  RadioTrackTrainHeader__Get_T_TR(
                    &_L6_CONTROLLER_SM_SESSION_ESTAB);
              }
              else /* last_init_ck_radioTrackTrainMessageWasSentTimestamp */ if (outC->init) {
                outC->radioTrackTrainMessageWasSentTi = T_TRAIN_MIN;
              }
              /* 7 */
              RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &tmp46);
              IfBlock1_clock_CONTROLLER_SM_SE = /* 2 */
                _151_RadioTrainTrackHeader__Get(&tmp46) ==
                outC->radioTrackTrainMessageWasSentTi;
              /* ck_IfBlock1 */ if (IfBlock1_clock_CONTROLLER_SM_SE) {
                outC->invalidAckForMAandPosRepParams = kcg_false;
                outC->paramsSent = kcg_true;
              }
              else {
                outC->invalidAckForMAandPosRepParams = kcg_true;
                outC->paramsSent = kcg_false;
              }
              break;
            
          }
          break;
        case SSM_st_RBC_REQUEST_SESSION_TERM :
          outC->invalidAckForMAandPosRepParams = kcg_false;
          outC->paramsSent = kcg_false;
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        outC->init9 = kcg_true;
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_RBC_REQUEST_SESSION_TERM :
          outC->invalidAckForMessage129 = kcg_false;
          outC->trainDataValidated = kcg_false;
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            /* 2 */ RBC__PingTrain_reset_RBC_Model_(&outC->Context_2);
          }
          break;
        case _22_SSM_st_SEND_MA_AND_POS_REP_ :
          outC->invalidAckForMessage129 = kcg_false;
          outC->trainDataValidated = kcg_false;
          break;
        case SSM_st_AWAIT_SESSION_TERMINATIO :
          outC->invalidAckForMessage129 = kcg_false;
          outC->trainDataValidated = kcg_false;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DA :
          outC->invalidAckForMessage129 = kcg_false;
          outC->trainDataValidated = kcg_false;
          break;
        case _23_SSM_st_START_CONTROLLER_SM_ :
          outC->invalidAckForMessage129 = kcg_false;
          outC->trainDataValidated = kcg_false;
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          outC->invalidAckForMessage129 = kcg_false;
          outC->trainDataValidated = kcg_false;
          break;
        case _24_SSM_st_PROCESS_VALIDATED_TR :
          /* last_init_ck_radioTrackTrainMessageWasSentTimestamp */ if (outC->init9) {
            PROCESS_VALIDATED_TRAIN_DATA_SM = _18_SSM_st_START_CONTROLLER_SM_;
            last_radioTrackTrainMessageWasS = T_TRAIN_MIN;
          }
          else {
            PROCESS_VALIDATED_TRAIN_DATA_SM =
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM;
            last_radioTrackTrainMessageWasS =
              outC->_12_radioTrackTrainMessageWasSe;
          }
          /* sel_PROCESS_VALIDATED_TRAIN_DATA_SM */ switch (PROCESS_VALIDATED_TRAIN_DATA_SM) {
            case _18_SSM_st_START_CONTROLLER_SM_ :
              _51_PROCESS_VALIDATED_TRAIN_DAT = SSM_st_PROCESS_VALIDATED_TRAIN_;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEM :
              if ((radioTrainTrackMessageId == 146) &
                last_invalidAckForMessage129) {
                _51_PROCESS_VALIDATED_TRAIN_DAT =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEM;
              }
              else if (last_invalidAckForMessage129) {
                _51_PROCESS_VALIDATED_TRAIN_DAT =
                  SSM_st_AWAIT_ACKNOWLEDGEMENT_CO;
              }
              else {
                _51_PROCESS_VALIDATED_TRAIN_DAT =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEM;
              }
              break;
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CO :
              if (radioTrainTrackMessageId == 146) {
                _51_PROCESS_VALIDATED_TRAIN_DAT =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEM;
              }
              else {
                _51_PROCESS_VALIDATED_TRAIN_DAT =
                  SSM_st_AWAIT_ACKNOWLEDGEMENT_CO;
              }
              break;
            case SSM_st_PROCESS_VALIDATED_TRAIN_ :
              if (radioTrainTrackMessageId == 146) {
                _51_PROCESS_VALIDATED_TRAIN_DAT =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEM;
              }
              else {
                _51_PROCESS_VALIDATED_TRAIN_DAT =
                  SSM_st_AWAIT_ACKNOWLEDGEMENT_CO;
              }
              break;
            
          }
          /* act_PROCESS_VALIDATED_TRAIN_DATA_SM */ switch (_51_PROCESS_VALIDATED_TRAIN_DAT) {
            case SSM_st_PROCESS_VALIDATED_TRAIN_ :
              outC->invalidAckForMessage129 = kcg_false;
              outC->trainDataValidated = kcg_false;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CO :
              outC->invalidAckForMessage129 = kcg_false;
              outC->trainDataValidated = kcg_false;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEM :
              /* 1 */
              RadioTrackTrainMessage__GetHead(
                &(*inDataBus).lastSentTrackTrainMessage,
                &_L44_CONTROLLER_SM_SESSION_ESTA);
              tmp45 = /* 1 */
                _100_RadioTrackTrainHeader__Get(
                  &_L44_CONTROLLER_SM_SESSION_ESTA);
              /* 4 */ if (tmp45 == 8) {
                _L48_CONTROLLER_SM_SESSION_ESTA = /* 1 */
                  RadioTrackTrainHeader__Get_T_TR(
                    &_L44_CONTROLLER_SM_SESSION_ESTA);
              }
              else {
                _L48_CONTROLLER_SM_SESSION_ESTA =
                  last_radioTrackTrainMessageWasS;
              }
              /* 2 */
              RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &tmp44);
              _48_IfBlock1_clock_CONTROLLER_S = /* 1 */
                _151_RadioTrainTrackHeader__Get(&tmp44) ==
                _L48_CONTROLLER_SM_SESSION_ESTA;
              /* ck_IfBlock1 */ if (_48_IfBlock1_clock_CONTROLLER_S) {
                outC->invalidAckForMessage129 = kcg_false;
                outC->trainDataValidated = kcg_true;
              }
              else {
                outC->invalidAckForMessage129 = kcg_true;
                outC->trainDataValidated = kcg_false;
              }
              break;
            case _18_SSM_st_START_CONTROLLER_SM_ :
              outC->invalidAckForMessage129 = kcg_false;
              outC->trainDataValidated = kcg_false;
              break;
            
          }
          break;
        case SSM_st_PROCESS_SESSION_ESTABLIS :
          outC->invalidAckForMessage129 = kcg_false;
          outC->trainDataValidated = kcg_false;
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        /* 2 */ RBC__PingTrain_reset_RBC_Model_(&outC->Context_2);
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            /* 1 */ RBC__ProcessPositionReport_rese(&outC->Context_1);
          }
          break;
        case _22_SSM_st_SEND_MA_AND_POS_REP_ :
          /* act_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (_49_SEND_MA_AMD_POS_REP_PARAMS_) {
            case SSM_st_SEND_MA_AND_POS_REP_PARA :
              /* 2 */
              DynamicConfig__GetMAReqParams_R(
                &(*inDataBus).config,
                &_L12_CONTROLLER_SM_SESSION_ESTA);
              /* 2 */
              DynamicConfig__GetPosRepParams_(
                &(*inDataBus).config,
                &_L23_CONTROLLER_SM_SESSION_ESTA);
              break;
            
          }
          break;
        case SSM_st_RBC_REQUEST_SESSION_TERM :
          /* 2 */
          RBC__PingTrain_RBC_Model_Pkg(
            (P042_trackside_int_T_TM *) &P042_RequestSessionTermination,
            inDataBus,
            inRadioTrainTrackMessage,
            inTriggeredRadioTrackTrainMessa,
            &outC->Context_2);
          kcg_copy_RBC_Data_T_RBC_DataBus(
            &_L42_CONTROLLER_SM_SESSION_ESTA,
            &outC->Context_2.outDataBus);
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        /* 1 */ RBC__ProcessPositionReport_rese(&outC->Context_1);
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          /* 1 */
          RBC__ProcessPositionReport_RBC_(
            inDataBus,
            inRadioTrainTrackMessage,
            inTriggeredRadioTrackTrainMessa,
            &outC->Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus(
            &_L174_CONTROLLER_SM_SESSION_EST,
            &outC->Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Messa(
            &_L38_CONTROLLER_SM_SESSION_ESTA,
            &outC->Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage(
            &_L54_CONTROLLER_SM_SESSION_ESTA,
            &outC->Context_1.outTriggeredRadioTrackTrainMess);
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            /* 1 */ RBC__PingTrain_reset_RBC_Model_(&outC->_1_Context_1);
          }
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        /* 1 */ RBC__PingTrain_reset_RBC_Model_(&outC->_1_Context_1);
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          /* 1 */
          RBC__PingTrain_RBC_Model_Pkg(
            (P042_trackside_int_T_TM *) &P042_DEFAULT,
            &_L174_CONTROLLER_SM_SESSION_EST,
            &_L38_CONTROLLER_SM_SESSION_ESTA,
            &_L54_CONTROLLER_SM_SESSION_ESTA,
            &outC->_1_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus(
            &_L170_CONTROLLER_SM_SESSION_EST,
            &outC->_1_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Messa(
            &_L136_CONTROLLER_SM_SESSION_EST,
            &outC->_1_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage(
            &_L139_CONTROLLER_SM_SESSION_EST,
            &outC->_1_Context_1.outTriggeredRadioTrackTrainMess);
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            /* 1 */ RBC__ProcessConditionalEm_reset(&outC->_2_Context_1);
          }
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        /* 1 */ RBC__ProcessConditionalEm_reset(&outC->_2_Context_1);
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          /* 1 */
          RBC__ProcessConditionalEm_RBC_M(
            &_L170_CONTROLLER_SM_SESSION_EST,
            &_L136_CONTROLLER_SM_SESSION_EST,
            &_L139_CONTROLLER_SM_SESSION_EST,
            &outC->_2_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus(
            &_L171_CONTROLLER_SM_SESSION_EST,
            &outC->_2_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Messa(
            &_L129_CONTROLLER_SM_SESSION_EST,
            &outC->_2_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage(
            &_L132_CONTROLLER_SM_SESSION_EST,
            &outC->_2_Context_1.outTriggeredRadioTrackTrainMess);
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            /* 1 */ RBC__ProcessUnconditional_reset(&outC->_3_Context_1);
          }
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        /* 1 */ RBC__ProcessUnconditional_reset(&outC->_3_Context_1);
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          /* 1 */
          RBC__ProcessUnconditional_RBC_M(
            &_L171_CONTROLLER_SM_SESSION_EST,
            &_L129_CONTROLLER_SM_SESSION_EST,
            &_L132_CONTROLLER_SM_SESSION_EST,
            &outC->_3_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus(
            &_L177_CONTROLLER_SM_SESSION_EST,
            &outC->_3_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Messa(
            &_L144_CONTROLLER_SM_SESSION_EST,
            &outC->_3_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage(
            &_L147_CONTROLLER_SM_SESSION_EST,
            &outC->_3_Context_1.outTriggeredRadioTrackTrainMess);
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            /* 1 */ RBC__ProcessMovementAuthority_r(&outC->_4_Context_1);
          }
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        /* 1 */ RBC__ProcessMovementAuthority_r(&outC->_4_Context_1);
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          /* 1 */
          RBC__ProcessMovementAuthority_R(
            &_L177_CONTROLLER_SM_SESSION_EST,
            &_L144_CONTROLLER_SM_SESSION_EST,
            &_L147_CONTROLLER_SM_SESSION_EST,
            &outC->_4_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus(
            &_L173_CONTROLLER_SM_SESSION_EST,
            &outC->_4_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Messa(
            &_L35_CONTROLLER_SM_SESSION_ESTA,
            &outC->_4_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage(
            &_L27_CONTROLLER_SM_SESSION_ESTA,
            &outC->_4_Context_1.outTriggeredRadioTrackTrainMess);
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            /* 1 */ RBC__ProcessRevocationOfE_reset(&outC->_5_Context_1);
          }
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        /* 1 */ RBC__ProcessRevocationOfE_reset(&outC->_5_Context_1);
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          /* 1 */
          RBC__ProcessRevocationOfE_RBC_M(
            &_L173_CONTROLLER_SM_SESSION_EST,
            &_L35_CONTROLLER_SM_SESSION_ESTA,
            &_L27_CONTROLLER_SM_SESSION_ESTA,
            &outC->_5_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus(
            &_L175_CONTROLLER_SM_SESSION_EST,
            &outC->_5_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Messa(
            &_L151_CONTROLLER_SM_SESSION_EST,
            &outC->_5_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage(
            &_L154_CONTROLLER_SM_SESSION_EST,
            &outC->_5_Context_1.outTriggeredRadioTrackTrainMess);
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            /* 1 */ RBC__ProcessTripAndPostTrip_res(&outC->_6_Context_1);
          }
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        /* 1 */ RBC__ProcessTripAndPostTrip_res(&outC->_6_Context_1);
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          /* 1 */
          RBC__ProcessTripAndPostTrip_RBC(
            &_L175_CONTROLLER_SM_SESSION_EST,
            &_L151_CONTROLLER_SM_SESSION_EST,
            &_L154_CONTROLLER_SM_SESSION_EST,
            &outC->_6_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus(
            &_L176_CONTROLLER_SM_SESSION_EST,
            &outC->_6_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Messa(
            &_L165_CONTROLLER_SM_SESSION_EST,
            &outC->_6_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage(
            &_L168_CONTROLLER_SM_SESSION_EST,
            &outC->_6_Context_1.outTriggeredRadioTrackTrainMess);
          if (SESSION_ESTABLISHED_SM_reset_ac) {
            /* 2 */ RBC__ProcessGeneralMessage_rese(&outC->_7_Context_2);
          }
          break;
        
      }
      if (CONTROLLER_SM_reset_act) {
        /* 2 */ RBC__ProcessGeneralMessage_rese(&outC->_7_Context_2);
      }
      outC->CONTROLLER_SM_state_nxt = SSM_st_SESSION_ESTABLISHED_CONT;
      outC->init10 = kcg_false;
      /* act_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_state_ac) {
        case SSM_st_RBC_REQUEST_SESSION_TERM :
          kcg_copy_RBC_Data_T_RBC_DataBus(
            &outC->outDataBus,
            &_L42_CONTROLLER_SM_SESSION_ESTA);
          outC->SESSION_ESTABLISHED_SM_state_nx =
            SSM_st_RBC_REQUEST_SESSION_TERM;
          break;
        case _22_SSM_st_SEND_MA_AND_POS_REP_ :
          kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
          outC->SESSION_ESTABLISHED_SM_state_nx =
            _22_SSM_st_SEND_MA_AND_POS_REP_;
          outC->init8 = kcg_false;
          /* act_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (_49_SEND_MA_AMD_POS_REP_PARAMS_) {
            case SSM_st_TRY_PROCESS_ACKNOWLEDGME :
              kcg_copy__9_RadioTrackTrainMess(
                &outC->outDataBus.messageQueue,
                &(*inDataBus).messageQueue);
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_s =
                SSM_st_TRY_PROCESS_ACKNOWLEDGME;
              outC->init = kcg_false;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CON :
              kcg_copy__9_RadioTrackTrainMess(
                &outC->outDataBus.messageQueue,
                &(*inDataBus).messageQueue);
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_s =
                SSM_st_AWAIT_ACKNOWLEDGMENT_CON;
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARA :
              /* 7 */
              SessionManagement__GetPosData_R(&(*inDataBus).session, &tmp31);
              tmp32 = /* 9 */ PosData__Get_NID_LRBG_RBC_Sessi(&tmp31);
              tmp29 = /* 2 */
                MAReqParams__Get_Q_DIR_RBC_Conf(
                  &_L12_CONTROLLER_SM_SESSION_ESTA);
              tmp28 = /* 2 */
                MAReqParams__Get_T_MAR_RBC_Conf(
                  &_L12_CONTROLLER_SM_SESSION_ESTA);
              tmp27 = /* 2 */
                MAReqParams__Get_T_TIMEOUTRQST_(
                  &_L12_CONTROLLER_SM_SESSION_ESTA);
              tmp26 = /* 2 */
                MAReqParams__Get_T_CYCRQST_RBC_(
                  &_L12_CONTROLLER_SM_SESSION_ESTA);
              /* 2 */
              _107_RadioTrackTrainFactory__Cr(
                tmp29,
                tmp28,
                tmp27,
                tmp26,
                &tmp30);
              tmp24 = /* 2 */
                PosRepParams__Get_Q_DIR_RBC_Con(
                  &_L23_CONTROLLER_SM_SESSION_ESTA);
              tmp23 = /* 2 */
                PosRepParams__Get_Q_SCALE_RBC_C(
                  &_L23_CONTROLLER_SM_SESSION_ESTA);
              tmp22 = /* 2 */
                PosRepParams__Get_T_CYCLOC_RBC_(
                  &_L23_CONTROLLER_SM_SESSION_ESTA);
              tmp21 = /* 2 */
                PosRepParams__Get_D_CYCLOC_RBC_(
                  &_L23_CONTROLLER_SM_SESSION_ESTA);
              tmp20 = /* 2 */
                PosRepParams__Get_M_LOC_RBC_Con(
                  &_L23_CONTROLLER_SM_SESSION_ESTA);
              tmp19 = /* 2 */
                PosRepParams__CountIncrementalD(
                  &_L23_CONTROLLER_SM_SESSION_ESTA);
              /* 2 */
              PosRepParams__GetIncrementalDis(
                &_L23_CONTROLLER_SM_SESSION_ESTA,
                &tmp18);
              /* 2 */
              _106_RadioTrackTrainFactory__Cr(
                tmp24,
                tmp23,
                tmp22,
                tmp21,
                tmp20,
                tmp19,
                &tmp18,
                &tmp25);
              /* 2 */
              _109_RadioTrackTrainFactory__Cr(
                T_TRAIN_MIN,
                M_ACK_Acknowledgement_required,
                tmp32,
                (P003V1_trackside_int_T_TM_basel *) &P003_DEFAULT,
                (P005_trackside_int_T_TM *) &P005_DEFAULT,
                (P042_trackside_int_T_TM *) &P042_DEFAULT,
                &tmp30,
                &tmp25,
                &tmp33);
              /* 9 */ _73_RadioTrackTrainMessageQueue(&tmp33, &tmp34);
              /* 9 */
              _77_RadioTrackTrainMessageQueue(
                &(*inDataBus).messageQueue,
                &tmp34,
                &outC->outDataBus.messageQueue);
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_s =
                SSM_st_SEND_MA_AND_POS_REP_PARA;
              break;
            case SSM_st_START_CONTROLLER_SM_SESS :
              kcg_copy__9_RadioTrackTrainMess(
                &outC->outDataBus.messageQueue,
                &(*inDataBus).messageQueue);
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_s =
                SSM_st_START_CONTROLLER_SM_SESS;
              break;
            
          }
          break;
        case SSM_st_AWAIT_SESSION_TERMINATIO :
          kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
          outC->SESSION_ESTABLISHED_SM_state_nx =
            SSM_st_AWAIT_SESSION_TERMINATIO;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DA :
          kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
          outC->SESSION_ESTABLISHED_SM_state_nx =
            SSM_st_AWAIT_VALIDATED_TRAIN_DA;
          break;
        case _23_SSM_st_START_CONTROLLER_SM_ :
          outC->SESSION_ESTABLISHED_SM_state_nx =
            _23_SSM_st_START_CONTROLLER_SM_;
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONT :
          /* 2 */
          RBC__ProcessGeneralMessage_RBC_(
            &_L176_CONTROLLER_SM_SESSION_EST,
            &_L165_CONTROLLER_SM_SESSION_EST,
            &_L168_CONTROLLER_SM_SESSION_EST,
            &outC->_7_Context_2);
          kcg_copy_RBC_Data_T_RBC_DataBus(
            &outC->outDataBus,
            &outC->_7_Context_2.outDataBus);
          outC->SESSION_ESTABLISHED_SM_state_nx =
            SSM_st_RECEIVE_AND_TRIGGER_CONT;
          break;
        case _24_SSM_st_PROCESS_VALIDATED_TR :
          outC->SESSION_ESTABLISHED_SM_state_nx =
            _24_SSM_st_PROCESS_VALIDATED_TR;
          /* act_PROCESS_VALIDATED_TRAIN_DATA_SM */ switch (_51_PROCESS_VALIDATED_TRAIN_DAT) {
            case SSM_st_PROCESS_VALIDATED_TRAIN_ :
              /* 1 */
              SessionManagement__GetPosData_R(&(*inDataBus).session, &tmp43);
              /* 1 */
              PosData__Update_RBC_Session_Pkg(
                &tmp43,
                inRadioTrainTrackMessage,
                &_L14_CONTROLLER_SM_SESSION_ESTA);
              kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
              /* 3 */
              SessionManagement__SetPosData_R(
                &(*inDataBus).session,
                &_L14_CONTROLLER_SM_SESSION_ESTA,
                &tmp17);
              /* 11 */
              SessionManagement__GetTrainData(&(*inDataBus).session, &tmp15);
              /* 2 */
              TrainData__UpdateWithP011_RBC_S(
                &tmp15,
                inRadioTrainTrackMessage,
                &tmp16);
              /* 11 */
              SessionManagement__SetTrainData(
                &tmp17,
                &tmp16,
                &outC->outDataBus.session);
              tmp12 = /* 7 */
                PosData__Get_NID_LRBG_RBC_Sessi(
                  &_L14_CONTROLLER_SM_SESSION_ESTA);
              /* 6 */
              RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &tmp10);
              tmp11 = /* 2 */ RadioTrainTrackHeader__Get_T_TR(&tmp10);
              /* 2 */
              _110_RadioTrackTrainFactory__Cr(
                T_TRAIN_MIN,
                M_ACK_Acknowledgement_required,
                tmp12,
                tmp11,
                &tmp13);
              /* 7 */ _73_RadioTrackTrainMessageQueue(&tmp13, &tmp14);
              /* 7 */
              _77_RadioTrackTrainMessageQueue(
                &(*inDataBus).messageQueue,
                &tmp14,
                &outC->outDataBus.messageQueue);
              outC->_12_radioTrackTrainMessageWasSe =
                last_radioTrackTrainMessageWasS;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM =
                SSM_st_PROCESS_VALIDATED_TRAIN_;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CO :
              kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
              /* 3 */
              RadioTrackTrainMessage__GetHead(
                &(*inDataBus).lastSentTrackTrainMessage,
                &_L20_CONTROLLER_SM_SESSION_ESTA);
              tmp = /* 3 */
                _100_RadioTrackTrainHeader__Get(
                  &_L20_CONTROLLER_SM_SESSION_ESTA);
              /* 2 */ if (tmp == 8) {
                outC->_12_radioTrackTrainMessageWasSe = /* 4 */
                  RadioTrackTrainHeader__Get_T_TR(
                    &_L20_CONTROLLER_SM_SESSION_ESTA);
              }
              else {
                outC->_12_radioTrackTrainMessageWasSe =
                  last_radioTrackTrainMessageWasS;
              }
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM =
                SSM_st_AWAIT_ACKNOWLEDGEMENT_CO;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEM :
              kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
              outC->_12_radioTrackTrainMessageWasSe =
                _L48_CONTROLLER_SM_SESSION_ESTA;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM =
                SSM_st_TRY_PROCESS_ACKNOWLEDGEM;
              break;
            case _18_SSM_st_START_CONTROLLER_SM_ :
              outC->_12_radioTrackTrainMessageWasSe =
                last_radioTrackTrainMessageWasS;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM =
                _18_SSM_st_START_CONTROLLER_SM_;
              break;
            
          }
          outC->init9 = kcg_false;
          break;
        case SSM_st_PROCESS_SESSION_ESTABLIS :
          /* 1 */
          RadioTrainTrackMessage__GetPack(inRadioTrainTrackMessage, &tmp41);
          /* 1 */ _152_RadioTrainTrackPackets__Ge(&tmp41, &tmp42);
          valid_CONTROLLER_SM_SESSION_EST = /* 1 */
            RadioTrainTrackPacket003__IsVal(&tmp42);
          kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
          /* ck_valid */ if (valid_CONTROLLER_SM_SESSION_EST) {
            /* 9 */
            SessionManagement__GetTrainData(&(*inDataBus).session, &tmp8);
            /* 7 */
            TrainData__UpdateWithP003_RBC_S(
              &tmp8,
              inRadioTrainTrackMessage,
              &tmp9);
            /* 9 */
            SessionManagement__SetTrainData(
              &(*inDataBus).session,
              &tmp9,
              &outC->outDataBus.session);
          }
          else {
            kcg_copy_SessionManagement_T(
              &outC->outDataBus.session,
              &(*inDataBus).session);
          }
          outC->SESSION_ESTABLISHED_SM_state_nx =
            SSM_st_PROCESS_SESSION_ESTABLIS;
          break;
        
      }
      break;
    case SSM_st_AWAIT_SESSION_ESTABLISHE :
      outC->invalidAckForMAandPosRepParams = kcg_false;
      outC->paramsSent = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      outC->trainDataValidated = kcg_false;
      kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
      outC->CONTROLLER_SM_state_nxt = SSM_st_AWAIT_SESSION_ESTABLISHE;
      break;
    case SSM_st_SEND_RBC_VERSION_CONTROL :
      outC->invalidAckForMAandPosRepParams = kcg_false;
      outC->paramsSent = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      outC->trainDataValidated = kcg_false;
      /* 2 */ SessionManagement__GetPosData_R(&(*inDataBus).session, &tmp39);
      /* 1 */ PosData__Set_NID_LRBG_RBC_Sessi(&tmp39, NID_LRBG_UNKNOWN, &tmp40);
      /* 2 */
      SessionManagement__SetPosData_R(
        &(*inDataBus).session,
        &tmp40,
        &_L16_CONTROLLER_SM_SEND_RBC_VER);
      kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
      /* 10 */
      SessionManagement__GetTrainData(&_L16_CONTROLLER_SM_SEND_RBC_VER, &tmp6);
      /* 5 */ RadioTrainTrackMessage__GetHead(inRadioTrainTrackMessage, &tmp4);
      tmp5 = /* 2 */ _153_RadioTrainTrackHeader__Get(&tmp4);
      /* 2 */ TrainData__Set_NID_ENGINE_RBC_S(&tmp6, tmp5, &tmp7);
      /* 10 */
      SessionManagement__SetTrainData(
        &_L16_CONTROLLER_SM_SEND_RBC_VER,
        &tmp7,
        &outC->outDataBus.session);
      tmp1 = /* 2 */ DynamicConfig__Get_M_VERSION_RB(&(*inDataBus).config);
      /* 2 */
      _111_RadioTrackTrainFactory__Cr(
        T_TRAIN_MIN,
        M_ACK_No_acknowledgement_requir,
        NID_LRBG_UNKNOWN,
        tmp1,
        &tmp2);
      /* 6 */ _73_RadioTrackTrainMessageQueue(&tmp2, &tmp3);
      /* 6 */
      _77_RadioTrackTrainMessageQueue(
        &(*inDataBus).messageQueue,
        &tmp3,
        &outC->outDataBus.messageQueue);
      outC->CONTROLLER_SM_state_nxt = SSM_st_SEND_RBC_VERSION_CONTROL;
      break;
    case SSM_st_SESSION_TERMINATED_CONTR :
      outC->invalidAckForMAandPosRepParams = kcg_false;
      outC->paramsSent = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      outC->trainDataValidated = kcg_false;
      kcg_copy_RBC_Data_T_RBC_DataBus(&outC->outDataBus, inDataBus);
      /* 2 */
      Clock__Reset_RBC_Time_Pkg(&(*inDataBus).clockk, &outC->outDataBus.clockk);
      outC->CONTROLLER_SM_state_nxt = SSM_st_SESSION_TERMINATED_CONTR;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessController_RBC_Mode.c
** Generation date: 2015-11-10T22:49:43
*************************************************************$ */

