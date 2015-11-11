/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RTM_Toolbox_TrainModules.h"

#ifndef KCG_USER_DEFINED_INIT
void RTM_init_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC)
{
  static kcg_int i;
  
  outC->registrationFinished = kcg_true;
  outC->connectionEstablished = kcg_true;
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  outC->init3 = kcg_true;
  outC->GSM_R_MobileManagement_state_nx = SSM_st_Not_registered_GSM_R_Mob;
  outC->fby_RTM_Toolbox_TrainModules.idx = 0;
  outC->_1_fby_RTM_Toolbox_TrainModules.idx = 0;
  for (i = 0; i < 5; i++) {
    outC->fby_RTM_Toolbox_TrainModules.items[i] = kcg_true;
    outC->_1_fby_RTM_Toolbox_TrainModules.items[i] = kcg_true;
  }
  outC->mobileHWStatus.valid = kcg_true;
  outC->mobileHWStatus.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->mobileHWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->mobileHWStatus.connectionLost = kcg_true;
  outC->TrackMessage.valid = kcg_true;
  outC->TrackMessage.systemTimeMsgReceived = 0;
  outC->TrackMessage.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->TrackMessage.btm_msg.present = kcg_true;
  outC->TrackMessage.btm_msg.checkResult = kcg_true;
  outC->TrackMessage.btm_msg.api_bad_balise_received = kcg_true;
  outC->TrackMessage.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->TrackMessage.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->TrackMessage.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->TrackMessage.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->TrackMessage.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->TrackMessage.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->TrackMessage.btm_msg.api_header.m_mcount = 0;
  outC->TrackMessage.btm_msg.api_header.nid_c = 0;
  outC->TrackMessage.btm_msg.api_header.nid_bg = 0;
  outC->TrackMessage.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->TrackMessage.rtm_msg.present = kcg_true;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_requir;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i = 0; i < 30; i++) {
    outC->TrackMessage.packets.PacketHeaders[i].nid_packet = 0;
    outC->TrackMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->TrackMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->TrackMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->TrackMessage.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->TrackMessage.packets.PacketData[i] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RTM_reset_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC)
{
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  outC->init3 = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::TrainModules::RTM */
void RTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::RTM::systemTime */ T_internal_Type_Obu_BasicTypes_ systemTime,
  /* Toolbox::TrainModules::RTM::Packets */ CompressedPackets_T_Common_Type *Packets,
  /* Toolbox::TrainModules::RTM::RadioHeader */ _4_Radio_TrackTrain_Header_T_TM *RadioHeader,
  /* Toolbox::TrainModules::RTM::RadioManagementMessage */ RadioManagement_T_API_RadioComm *RadioManagementMessage,
  outC_RTM_Toolbox_TrainModules *outC)
{
  static kcg_int i;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registering */
  static kcg_bool _16_br_2_guard_GSM_R_MobileMana;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registered */
  static kcg_bool _15_br_2_guard_GSM_R_MobileMana;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registered */
  static kcg_bool br_1_guard_GSM_R_MobileManageme;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connecting */
  static kcg_bool _14_br_2_guard_GSM_R_MobileMana;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connected */
  static kcg_bool br_2_guard_GSM_R_MobileManageme;
  /* Toolbox::TrainModules::RTM::IfBlock1::else */
  static kcg_bool _13_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else */
  static kcg_bool _10_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::connectionEstablished */
  static kcg_bool last_connectionEstablished;
  /* Toolbox::TrainModules::RTM::registrationFinished */
  static kcg_bool last_registrationFinished;
  /* Toolbox::TrainModules::RTM::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_se;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_ac;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool GSM_R_MobileManagement_reset_ac;
  /* Toolbox::TrainModules::RTM::_L51 */
  static Radio_TrackTrain_Header_T_TM_tr _L51;
  
  outC->TrackMessage.systemTimeMsgReceived = systemTime;
  outC->TrackMessage.msg_type = msrc_Euroradio_Common_Types_Pkg;
  kcg_copy_API_TelegramHeader_T_A(
    &outC->TrackMessage.btm_msg,
    (API_TelegramHeader_T_API_Msg_Pk *) &cEmptyBtmMessageHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Co(&outC->TrackMessage.packets, Packets);
  /* last_init_ck_registrationFinished */ if (outC->init3) {
    GSM_R_MobileManagement_state_se = SSM_st_Not_registered_GSM_R_Mob;
    last_connectionEstablished = kcg_false;
    outC->init3 = kcg_false;
    last_registrationFinished = kcg_false;
  }
  else {
    GSM_R_MobileManagement_state_se = outC->GSM_R_MobileManagement_state_nx;
    last_connectionEstablished = outC->connectionEstablished;
    last_registrationFinished = outC->registrationFinished;
  }
  /* 1 */ C_Int_TrackTrainMessage_TM_conv(RadioHeader, &_L51);
  IfBlock1_clock = _L51.nid_message != 0;
  outC->TrackMessage.valid = IfBlock1_clock;
  outC->TrackMessage.rtm_msg.present = IfBlock1_clock;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_false;
  kcg_copy__11_Radio_TrackTrain_H(
    &outC->TrackMessage.rtm_msg.Radio_Common_Header,
    &_L51);
  outC->TrackMessage.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.device_id = 0;
  IfBlock1_clock = (*RadioHeader).nid_message == 2;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference = kcg_false;
    outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_false;
    outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_true;
    outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_true;
    outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_false;
    outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_false;
    outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_false;
    outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_false;
    outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_false;
  }
  else {
    _13_else_clock_IfBlock1 = (*RadioHeader).nid_message == 3;
    /* ck_anon_activ */ if (_13_else_clock_IfBlock1) {
      outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference = kcg_false;
      outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_false;
      outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_false;
      outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_false;
      outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_false;
      outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_false;
      outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_false;
      outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_false;
      outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_false;
    }
    else {
      _12_else_clock_IfBlock1 = (*RadioHeader).nid_message == 6;
      /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
        outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference = kcg_false;
        outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_false;
        outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_false;
        outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_false;
        outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_false;
        outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_false;
        outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_false;
        outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_false;
        outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_false;
      }
      else {
        _11_else_clock_IfBlock1 = (*RadioHeader).nid_message == 8;
        /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
          outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
            kcg_true;
          outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_false;
          outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_false;
          outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_false;
          outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_false;
          outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_false;
          outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_false;
          outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_false;
          outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_false;
        }
        else {
          _10_else_clock_IfBlock1 = (*RadioHeader).nid_message == 9;
          /* ck_anon_activ */ if (_10_else_clock_IfBlock1) {
            outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
              kcg_false;
            outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_false;
            outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_false;
            outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_false;
            outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_false;
            outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_false;
            outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_false;
            outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
              kcg_false;
            outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_false;
          }
          else {
            _9_else_clock_IfBlock1 = (*RadioHeader).nid_message == 15;
            /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
              outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                kcg_false;
              outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_true;
              outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_true;
              outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_false;
              outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_false;
              outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_true;
              outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_true;
              outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                kcg_true;
              outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_false;
            }
            else {
              _8_else_clock_IfBlock1 = (*RadioHeader).nid_message == 16;
              /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
                outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                  kcg_false;
                outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_true;
                outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_false;
                outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_false;
                outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_false;
                outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_false;
                outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_false;
                outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                  kcg_false;
                outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_false;
              }
              else {
                _7_else_clock_IfBlock1 = (*RadioHeader).nid_message == 18;
                /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
                  outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                    kcg_false;
                  outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_true;
                  outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_false;
                  outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_false;
                  outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                    kcg_false;
                  outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_false;
                  outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_false;
                  outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                    kcg_false;
                  outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                    kcg_false;
                }
                else {
                  _6_else_clock_IfBlock1 = (*RadioHeader).nid_message == 24;
                  /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
                    outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                      kcg_false;
                    outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                      kcg_false;
                    outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                      kcg_false;
                    outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_false;
                    outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                      kcg_false;
                    outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_false;
                    outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_false;
                    outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                      kcg_false;
                    outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                      kcg_false;
                  }
                  else {
                    _5_else_clock_IfBlock1 = (*RadioHeader).nid_message == 27;
                    /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
                      outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                        kcg_true;
                      outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                        kcg_false;
                      outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                        kcg_false;
                      outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                        kcg_false;
                      outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                        kcg_false;
                      outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                        kcg_false;
                      outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                        kcg_false;
                      outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                        kcg_false;
                      outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                        kcg_false;
                    }
                    else {
                      _4_else_clock_IfBlock1 = (*RadioHeader).nid_message == 28;
                      /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                        outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                          kcg_true;
                        outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                          kcg_false;
                        outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                          kcg_false;
                        outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                          kcg_false;
                        outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                          kcg_false;
                        outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                          kcg_false;
                        outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                          kcg_false;
                        outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                          kcg_false;
                        outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                          kcg_false;
                      }
                      else {
                        _3_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                          32;
                        /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                          outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                            kcg_false;
                          outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                            kcg_false;
                          outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                            kcg_false;
                          outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                            kcg_false;
                          outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                            kcg_false;
                          outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                            kcg_false;
                          outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                            kcg_false;
                          outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                            kcg_false;
                          outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                            kcg_true;
                        }
                        else {
                          _2_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                            33;
                          /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                            outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                              kcg_false;
                            outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                              kcg_false;
                            outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                              kcg_true;
                            outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                              kcg_false;
                            outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                              kcg_false;
                            outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                              kcg_true;
                            outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                              kcg_false;
                            outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                              kcg_false;
                            outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                              kcg_false;
                          }
                          else {
                            _1_else_clock_IfBlock1 =
                              (*RadioHeader).nid_message == 34;
                            /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                              outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                                kcg_false;
                              outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                                kcg_false;
                              outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                                kcg_true;
                              outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                                kcg_false;
                              outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                                kcg_false;
                              outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                                kcg_true;
                              outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                                kcg_true;
                              outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                                kcg_false;
                              outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                                kcg_false;
                            }
                            else {
                              else_clock_IfBlock1 =
                                (*RadioHeader).nid_message == 37;
                              /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                                  kcg_false;
                                outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                                  kcg_false;
                                outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                                  kcg_false;
                                outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                                  kcg_false;
                                outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                                  kcg_false;
                                outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                                  kcg_false;
                                outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                                  kcg_false;
                                outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                                  kcg_false;
                                outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                                  kcg_false;
                              }
                              else {
                                GSM_R_MobileManagement_reset_ac =
                                  (*RadioHeader).nid_message == 38;
                                /* ck_anon_activ */ if (GSM_R_MobileManagement_reset_ac) {
                                  outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                                    kcg_false;
                                  outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                                    kcg_false;
                                  outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                                    kcg_false;
                                  outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                                    kcg_false;
                                  outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                                    kcg_false;
                                  outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                                    kcg_false;
                                  outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                                    kcg_false;
                                  outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                                    kcg_false;
                                  outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                                    kcg_false;
                                }
                                else {
                                  _16_br_2_guard_GSM_R_MobileMana =
                                    (*RadioHeader).nid_message == 39;
                                  /* ck_anon_activ */ if (_16_br_2_guard_GSM_R_MobileMana) {
                                    outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                                      kcg_false;
                                    outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                                      kcg_false;
                                    outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                                      kcg_false;
                                    outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                                      kcg_false;
                                    outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                                      kcg_false;
                                    outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                                      kcg_false;
                                    outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                                      kcg_false;
                                    outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                                      kcg_false;
                                    outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                                      kcg_false;
                                  }
                                  else {
                                    _15_br_2_guard_GSM_R_MobileMana =
                                      (*RadioHeader).nid_message == 40;
                                    /* ck_anon_activ */ if (_15_br_2_guard_GSM_R_MobileMana) {
                                      outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                                        kcg_false;
                                      outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                                        kcg_false;
                                      outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                                        kcg_false;
                                      outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                                        kcg_false;
                                      outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                                        kcg_false;
                                      outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                                        kcg_false;
                                      outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                                        kcg_false;
                                      outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                                        kcg_false;
                                      outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                                        kcg_false;
                                    }
                                    else {
                                      br_1_guard_GSM_R_MobileManageme =
                                        (*RadioHeader).nid_message == 41;
                                      /* ck_anon_activ */ if (br_1_guard_GSM_R_MobileManageme) {
                                        outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                                          kcg_false;
                                        outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                                          kcg_false;
                                        outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                                          kcg_false;
                                        outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                                          kcg_false;
                                        outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                                          kcg_false;
                                        outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                                          kcg_false;
                                        outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                                          kcg_false;
                                        outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                                          kcg_false;
                                        outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                                          kcg_false;
                                      }
                                      else {
                                        _14_br_2_guard_GSM_R_MobileMana =
                                          (*RadioHeader).nid_message == 43;
                                        /* ck_anon_activ */ if (_14_br_2_guard_GSM_R_MobileMana) {
                                          outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                                            kcg_false;
                                          outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                                            kcg_false;
                                          outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                                            kcg_false;
                                          outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                                            kcg_false;
                                          outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                                            kcg_false;
                                          outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                                            kcg_false;
                                          outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                                            kcg_false;
                                          outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                                            kcg_false;
                                          outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                                            kcg_false;
                                        }
                                        else {
                                          br_2_guard_GSM_R_MobileManageme =
                                            (*RadioHeader).nid_message == 45;
                                          /* ck_anon_activ */ if (br_2_guard_GSM_R_MobileManageme) {
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                                              kcg_false;
                                          }
                                          else {
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop =
                                              kcg_false;
                                            outC->TrackMessage.rtm_msg.Radio_MetaData.m_version =
                                              kcg_false;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  /* sel_GSM_R_MobileManagement */ switch (GSM_R_MobileManagement_state_se) {
    case SSM_st_Connected_GSM_R_MobileMa :
      IfBlock1_clock = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd == cmdr_disconnection_request_API_);
      br_2_guard_GSM_R_MobileManageme = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd == cmdr_reset_connection_API_Radio);
      if (IfBlock1_clock) {
        GSM_R_MobileManagement_state_ac = SSM_st_Registered_GSM_R_MobileM;
        GSM_R_MobileManagement_reset_ac = kcg_true;
      }
      else {
        if (br_2_guard_GSM_R_MobileManageme) {
          GSM_R_MobileManagement_state_ac = SSM_st_Not_registered_GSM_R_Mob;
        }
        else {
          GSM_R_MobileManagement_state_ac = SSM_st_Connected_GSM_R_MobileMa;
        }
        GSM_R_MobileManagement_reset_ac = br_2_guard_GSM_R_MobileManageme;
      }
      break;
    case SSM_st_Connecting_GSM_R_MobileM :
      _14_br_2_guard_GSM_R_MobileMana = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd == cmdr_reset_connection_API_Radio);
      if (last_connectionEstablished) {
        GSM_R_MobileManagement_state_ac = SSM_st_Connected_GSM_R_MobileMa;
        GSM_R_MobileManagement_reset_ac = kcg_true;
      }
      else {
        if (_14_br_2_guard_GSM_R_MobileMana) {
          GSM_R_MobileManagement_state_ac = SSM_st_Not_registered_GSM_R_Mob;
        }
        else {
          GSM_R_MobileManagement_state_ac = SSM_st_Connecting_GSM_R_MobileM;
        }
        GSM_R_MobileManagement_reset_ac = _14_br_2_guard_GSM_R_MobileMana;
      }
      break;
    case SSM_st_Registered_GSM_R_MobileM :
      br_1_guard_GSM_R_MobileManageme = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd == cmdr_connection_request_API_Rad);
      _15_br_2_guard_GSM_R_MobileMana = ((*RadioManagementMessage).valid &
          ((*RadioManagementMessage).cmd == cmdr_reset_connection_API_Radio)) |
        ((*RadioManagementMessage).cmd == cmdr_networkUnregister_API_Radi);
      if (br_1_guard_GSM_R_MobileManageme) {
        GSM_R_MobileManagement_state_ac = SSM_st_Connecting_GSM_R_MobileM;
        GSM_R_MobileManagement_reset_ac = kcg_true;
      }
      else {
        if (_15_br_2_guard_GSM_R_MobileMana) {
          GSM_R_MobileManagement_state_ac = SSM_st_Not_registered_GSM_R_Mob;
        }
        else {
          GSM_R_MobileManagement_state_ac = SSM_st_Registered_GSM_R_MobileM;
        }
        GSM_R_MobileManagement_reset_ac = _15_br_2_guard_GSM_R_MobileMana;
      }
      break;
    case SSM_st_Registering_GSM_R_Mobile :
      _16_br_2_guard_GSM_R_MobileMana = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd == cmdr_reset_connection_API_Radio);
      if (last_registrationFinished) {
        GSM_R_MobileManagement_state_ac = SSM_st_Registered_GSM_R_MobileM;
        GSM_R_MobileManagement_reset_ac = kcg_true;
      }
      else {
        if (_16_br_2_guard_GSM_R_MobileMana) {
          GSM_R_MobileManagement_state_ac = SSM_st_Not_registered_GSM_R_Mob;
        }
        else {
          GSM_R_MobileManagement_state_ac = SSM_st_Registering_GSM_R_Mobile;
        }
        GSM_R_MobileManagement_reset_ac = _16_br_2_guard_GSM_R_MobileMana;
      }
      break;
    case SSM_st_Not_registered_GSM_R_Mob :
      GSM_R_MobileManagement_reset_ac = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd == cmdr_networkRegister_API_RadioC);
      if (GSM_R_MobileManagement_reset_ac) {
        GSM_R_MobileManagement_state_ac = SSM_st_Registering_GSM_R_Mobile;
      }
      else {
        GSM_R_MobileManagement_state_ac = SSM_st_Not_registered_GSM_R_Mob;
      }
      break;
    
  }
  /* act_GSM_R_MobileManagement */ switch (GSM_R_MobileManagement_state_ac) {
    case SSM_st_Connected_GSM_R_MobileMa :
      kcg_copy_mobileHWStatus_Type_Mo(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Connected_MoRC_);
      outC->registrationFinished = last_registrationFinished;
      outC->connectionEstablished = last_connectionEstablished;
      outC->GSM_R_MobileManagement_state_nx = SSM_st_Connected_GSM_R_MobileMa;
      break;
    case SSM_st_Connecting_GSM_R_MobileM :
      kcg_copy_mobileHWStatus_Type_Mo(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC);
      outC->registrationFinished = last_registrationFinished;
      /* 4 */ if (GSM_R_MobileManagement_reset_ac) {
        outC->init = kcg_true;
      }
      /* 4 */ if (outC->init) {
        /* 4 */ for (i = 0; i < 5; i++) {
          outC->fby_RTM_Toolbox_TrainModules.items[i] = kcg_false;
        }
        outC->fby_RTM_Toolbox_TrainModules.idx = 0;
      }
      outC->connectionEstablished =
        outC->fby_RTM_Toolbox_TrainModules.items[outC->fby_RTM_Toolbox_TrainModules.idx];
      outC->GSM_R_MobileManagement_state_nx = SSM_st_Connecting_GSM_R_MobileM;
      outC->fby_RTM_Toolbox_TrainModules.items[outC->fby_RTM_Toolbox_TrainModules.idx] =
        kcg_true;
      outC->fby_RTM_Toolbox_TrainModules.idx =
        (outC->fby_RTM_Toolbox_TrainModules.idx + 1) % 5;
      outC->init = kcg_false;
      break;
    case SSM_st_Registered_GSM_R_MobileM :
      kcg_copy_mobileHWStatus_Type_Mo(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC);
      outC->registrationFinished = last_registrationFinished;
      outC->connectionEstablished = last_connectionEstablished;
      outC->GSM_R_MobileManagement_state_nx = SSM_st_Registered_GSM_R_MobileM;
      break;
    case SSM_st_Registering_GSM_R_Mobile :
      kcg_copy_mobileHWStatus_Type_Mo(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_M);
      /* 3 */ if (GSM_R_MobileManagement_reset_ac) {
        outC->init2 = kcg_true;
      }
      /* 3 */ if (outC->init2) {
        /* 3 */ for (i = 0; i < 5; i++) {
          outC->_1_fby_RTM_Toolbox_TrainModules.items[i] = kcg_false;
        }
        outC->_1_fby_RTM_Toolbox_TrainModules.idx = 0;
      }
      outC->registrationFinished =
        outC->_1_fby_RTM_Toolbox_TrainModules.items[outC->_1_fby_RTM_Toolbox_TrainModules.idx];
      outC->connectionEstablished = last_connectionEstablished;
      outC->GSM_R_MobileManagement_state_nx = SSM_st_Registering_GSM_R_Mobile;
      outC->_1_fby_RTM_Toolbox_TrainModules.items[outC->_1_fby_RTM_Toolbox_TrainModules.idx] =
        kcg_true;
      outC->_1_fby_RTM_Toolbox_TrainModules.idx =
        (outC->_1_fby_RTM_Toolbox_TrainModules.idx + 1) % 5;
      outC->init2 = kcg_false;
      break;
    case SSM_st_Not_registered_GSM_R_Mob :
      kcg_copy_mobileHWStatus_Type_Mo(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_M);
      outC->registrationFinished = last_registrationFinished;
      outC->connectionEstablished = last_connectionEstablished;
      outC->GSM_R_MobileManagement_state_nx = SSM_st_Not_registered_GSM_R_Mob;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RTM_Toolbox_TrainModules.c
** Generation date: 2015-11-11T16:04:22
*************************************************************$ */

