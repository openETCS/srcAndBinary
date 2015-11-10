/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_New_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC_New_init_RBC_Model_Pkg(outC_RBC_New_RBC_Model_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->dataBus.session.m_TrainData.nid_engine = 0;
  outC->dataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = 0;
  outC->dataBus.session.m_TrainData.m_OnboardPhoneNumbers[0].valid = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->dataBus.session.m_TrainData.m_OnboardPhoneNumbers[0].telephoneNumber[i] =
      0;
  }
  outC->dataBus.session.m_TrainData.t_train_ref = 0;
  outC->dataBus.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->dataBus.session.m_TrainData.nc_train = NC_TRAIN_Train_does_not_belong_;
  outC->dataBus.session.m_TrainData.l_train = 0;
  outC->dataBus.session.m_TrainData.v_maxtrain = 0;
  outC->dataBus.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_n;
  outC->dataBus.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->dataBus.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->dataBus.session.m_TrainData.n_axle = 0;
  for (i = 0; i < 4; i++) {
    outC->dataBus.session.m_TrainData.m_TractionIdentities[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->dataBus.session.m_TrainData.m_TractionIdentities[i].nid_ctraction = 0;
  }
  for (i = 0; i < 5; i++) {
    outC->dataBus.session.m_TrainData.m_NationalSystemIdentities[i] = 0;
  }
  outC->dataBus.session.m_TrainData.nid_operational = 0;
  outC->dataBus.session.m_PosData.nid_lrbg = 0;
  outC->dataBus.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->dataBus.session.m_PosData.d_lrbg = 0;
  outC->dataBus.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->dataBus.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->dataBus.session.m_PosData.l_doubtover = 0;
  outC->dataBus.session.m_PosData.l_doubtunder = 0;
  outC->dataBus.session.m_PosData.q_length = Q_LENGTH_No_train_integrity_inf;
  outC->dataBus.session.m_PosData.l_trainint = 0;
  outC->dataBus.session.m_PosData.v_train = 0;
  outC->dataBus.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->dataBus.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->dataBus.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->dataBus.session.m_PosData.nid_ntc = 0;
  outC->dataBus.session.m_PosData.nid_prvlrbg = 0;
  outC->dataBus.config.m_version = M_VERSION_Previous_versions_acc;
  outC->dataBus.config.m_NationalParams.nid_c = 0;
  outC->dataBus.config.m_NationalParams.v_nvshunt = 0;
  outC->dataBus.config.m_NationalParams.v_nvstff = 0;
  outC->dataBus.config.m_NationalParams.v_nvonsight = 0;
  outC->dataBus.config.m_NationalParams.v_nvunfit = 0;
  outC->dataBus.config.m_NationalParams.v_nvrel = 0;
  outC->dataBus.config.m_NationalParams.t_nvcontact = 0;
  outC->dataBus.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->dataBus.config.m_MAReqParams.t_mar = 0;
  outC->dataBus.config.m_MAReqParams.t_timeoutrqst = 0;
  outC->dataBus.config.m_MAReqParams.t_cycrqst = 0;
  outC->dataBus.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->dataBus.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->dataBus.config.m_PosRepParams.t_cycloc = 0;
  outC->dataBus.config.m_PosRepParams.d_cycloc = 0;
  outC->dataBus.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->dataBus.config.m_PosRepParams.m_NumberOfIncrementalDistancesA = 0;
  for (i = 0; i < 32; i++) {
    outC->dataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualif[i].d_loc =
      0;
    outC->dataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualif[i].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (i = 0; i < 16; i++) {
    outC->dataBus.diagnostic[i].valid = kcg_true;
    outC->dataBus.diagnostic[i].count = 0;
    outC->dataBus.diagnostic[i].timestamp = 0;
    outC->dataBus.diagnostic[i].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnos;
    outC->dataBus.diagnostic[i].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnost;
    outC->dataBus.diagnostic[i].diagText = DIAG_MSG_Empty_RBC_Diagnostic_P;
  }
  for (i = 0; i < 8; i++) {
    outC->dataBus.messageQueue.m_Entries[i].m_IsValid = kcg_true;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.radioDevice = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.receivedSystemTime =
      0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.nid_message = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.t_train = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.m_ack = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.nid_lrbg = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.t_train_reference =
      0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.nid_em = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.q_scale = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.d_sr = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.t_sh_rqst = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.d_ref = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.q_dir = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.d_emergencystop = 0;
    outC->dataBus.messageQueue.m_Entries[i].m_Entry.Header.m_version = 0;
    for (i1 = 0; i1 < 30; i1++) {
      outC->dataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].nid_packet =
        0;
      outC->dataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].q_dir =
        Q_DIR_Reverse;
      outC->dataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].valid =
        kcg_true;
      outC->dataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].startAddress =
        0;
      outC->dataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketHeaders[i1].endAddress =
        0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->dataBus.messageQueue.m_Entries[i].m_Entry.Messages.PacketData[i1] =
        0;
    }
  }
  outC->dataBus.clockk.m_Value = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.radioDevice = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.receivedSystemTime = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.nid_message = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.t_train = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.m_ack = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.nid_lrbg = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.t_train_reference = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.nid_em = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.q_scale = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.d_sr = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.t_sh_rqst = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.d_ref = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.q_dir = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.d_emergencystop = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.m_version = 0;
  for (i = 0; i < 30; i++) {
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].nid_packet =
      0;
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].valid =
      kcg_true;
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].startAddress =
      0;
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i].endAddress =
      0;
  }
  for (i = 0; i < 500; i++) {
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketData[i] = 0;
  }
  outC->outClock.m_Value = 0;
  outC->outRadioTrackTrainMessage.Header.radioDevice = 0;
  outC->outRadioTrackTrainMessage.Header.receivedSystemTime = 0;
  outC->outRadioTrackTrainMessage.Header.nid_message = 0;
  outC->outRadioTrackTrainMessage.Header.t_train = 0;
  outC->outRadioTrackTrainMessage.Header.m_ack = 0;
  outC->outRadioTrackTrainMessage.Header.nid_lrbg = 0;
  outC->outRadioTrackTrainMessage.Header.t_train_reference = 0;
  outC->outRadioTrackTrainMessage.Header.nid_em = 0;
  outC->outRadioTrackTrainMessage.Header.q_scale = 0;
  outC->outRadioTrackTrainMessage.Header.d_sr = 0;
  outC->outRadioTrackTrainMessage.Header.t_sh_rqst = 0;
  outC->outRadioTrackTrainMessage.Header.d_ref = 0;
  outC->outRadioTrackTrainMessage.Header.q_dir = 0;
  outC->outRadioTrackTrainMessage.Header.d_emergencystop = 0;
  outC->outRadioTrackTrainMessage.Header.m_version = 0;
  for (i = 0; i < 30; i++) {
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[i].nid_packet = 0;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[i].valid = kcg_true;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[i].startAddress = 0;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->outRadioTrackTrainMessage.Messages.PacketData[i] = 0;
  }
  outC->outSessionManagement.m_TrainData.nid_engine = 0;
  outC->outSessionManagement.m_TrainData.m_NumberOfOnboardPhoneNumbers = 0;
  outC->outSessionManagement.m_TrainData.m_OnboardPhoneNumbers[0].valid =
    kcg_true;
  for (i = 0; i < 15; i++) {
    outC->outSessionManagement.m_TrainData.m_OnboardPhoneNumbers[0].telephoneNumber[i] =
      0;
  }
  outC->outSessionManagement.m_TrainData.t_train_ref = 0;
  outC->outSessionManagement.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_m;
  outC->outSessionManagement.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_;
  outC->outSessionManagement.m_TrainData.l_train = 0;
  outC->outSessionManagement.m_TrainData.v_maxtrain = 0;
  outC->outSessionManagement.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_n;
  outC->outSessionManagement.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outSessionManagement.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outSessionManagement.m_TrainData.n_axle = 0;
  for (i = 0; i < 4; i++) {
    outC->outSessionManagement.m_TrainData.m_TractionIdentities[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_;
    outC->outSessionManagement.m_TrainData.m_TractionIdentities[i].nid_ctraction =
      0;
  }
  for (i = 0; i < 5; i++) {
    outC->outSessionManagement.m_TrainData.m_NationalSystemIdentities[i] = 0;
  }
  outC->outSessionManagement.m_TrainData.nid_operational = 0;
  outC->outSessionManagement.m_PosData.nid_lrbg = 0;
  outC->outSessionManagement.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outSessionManagement.m_PosData.d_lrbg = 0;
  outC->outSessionManagement.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outSessionManagement.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outSessionManagement.m_PosData.l_doubtover = 0;
  outC->outSessionManagement.m_PosData.l_doubtunder = 0;
  outC->outSessionManagement.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_inf;
  outC->outSessionManagement.m_PosData.l_trainint = 0;
  outC->outSessionManagement.m_PosData.v_train = 0;
  outC->outSessionManagement.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outSessionManagement.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outSessionManagement.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outSessionManagement.m_PosData.nid_ntc = 0;
  outC->outSessionManagement.m_PosData.nid_prvlrbg = 0;
  /* 1 */ RBC__ProcessController_init_RBC(&outC->_3_Context_1);
  /* 1 */ RadioTrainTrackInputHandler_ini(&outC->_2_Context_1);
  /* 1 */ ToOldRadioTrainTrackMsg_init_RB(&outC->_1_Context_1);
  /* 1 */ DataBusFactory_init_RBC_DataBus(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC_New_reset_RBC_Model_Pkg(outC_RBC_New_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ RBC__ProcessController_reset_RB(&outC->_3_Context_1);
  /* 1 */ RadioTrainTrackInputHandler_res(&outC->_2_Context_1);
  /* 1 */ ToOldRadioTrainTrackMsg_reset_R(&outC->_1_Context_1);
  /* 1 */ DataBusFactory_reset_RBC_DataBu(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Model_Pkg::RBC_New */
void RBC_New_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC_New::inDynamicConfigInit */ DynamicConfig_T *inDynamicConfigInit,
  /* RBC_Model_Pkg::RBC_New::inRadioTrainTrackMsg */ M_TrainTrack_Message_T_TM_radio *inRadioTrainTrackMsg,
  /* RBC_Model_Pkg::RBC_New::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessa,
  outC_RBC_New_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC_New::_L245 */
  static RBC_Data_T_RBC_DataBus_Pkg _L245;
  
  /* last_init_ck_dataBus */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_RBC_Data_T_RBC_DataBus(
      &_L245,
      (RBC_Data_T_RBC_DataBus_Pkg *) &RBC_DATA_BUS_DEFAULT_RBC_DataBu);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus(&_L245, &outC->dataBus);
  }
  /* 1 */
  DataBusFactory_RBC_DataBus_Pkg(inDynamicConfigInit, &_L245, &outC->Context_1);
  /* 1 */
  ToOldRadioTrainTrackMsg_RBC_Mod(inRadioTrainTrackMsg, &outC->_1_Context_1);
  /* 1 */
  RadioTrainTrackInputHandler_RBC(
    &outC->_1_Context_1.outOld,
    &outC->_2_Context_1);
  /* 1 */
  RBC__ProcessController_RBC_Mode(
    &outC->Context_1.outDataBus,
    &outC->_2_Context_1.outRadioTrainTrack,
    inTriggeredRadioTrackTrainMessa,
    &outC->_3_Context_1);
  /* 1 */
  RadioTrackTrainMsgQueue_RBC_Mes(
    &outC->_3_Context_1.outDataBus,
    &_L245,
    &outC->outRadioTrackTrainMessage);
  /* 1 */ RBC_Clock_Tick_RBC_Time_Pkg(&_L245, &outC->dataBus, &outC->outClock);
  kcg_copy_SessionManagement_T(
    &outC->outSessionManagement,
    &outC->dataBus.session);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_New_RBC_Model_Pkg.c
** Generation date: 2015-11-10T22:49:44
*************************************************************$ */

