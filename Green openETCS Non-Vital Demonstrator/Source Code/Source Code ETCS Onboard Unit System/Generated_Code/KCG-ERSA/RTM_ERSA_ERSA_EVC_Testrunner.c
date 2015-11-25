/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RTM_ERSA_ERSA_EVC_Testrunner.h"

#ifndef KCG_USER_DEFINED_INIT
void RTM_ERSA_init_ERSA_EVC_Testrunner(outC_RTM_ERSA_ERSA_EVC_Testrunner *outC)
{
  kcg_int i;
  
  outC->registrationFinished = kcg_true;
  outC->connectionEstablished = kcg_true;
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  outC->init3 = kcg_true;
  outC->GSM_R_MobileManagement_state_nxt =
    SSM_st_Not_registered_GSM_R_MobileManagement;
  outC->fby_RTM_ERSA_ERSA_EVC_Testrunner.idx = 0;
  outC->_1_fby_RTM_ERSA_ERSA_EVC_Testrunner.idx = 0;
  for (i = 0; i < 5; i++) {
    outC->fby_RTM_ERSA_ERSA_EVC_Testrunner.items[i] = kcg_true;
    outC->_1_fby_RTM_ERSA_ERSA_EVC_Testrunner.items[i] = kcg_true;
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
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
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
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->TrackMessage.rtm_msg.present = kcg_true;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
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
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
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
void RTM_ERSA_reset_ERSA_EVC_Testrunner(outC_RTM_ERSA_ERSA_EVC_Testrunner *outC)
{
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  outC->init3 = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ERSA_EVC_Testrunner::RTM_ERSA */
void RTM_ERSA_ERSA_EVC_Testrunner(
  /* ERSA_EVC_Testrunner::RTM_ERSA::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* ERSA_EVC_Testrunner::RTM_ERSA::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* ERSA_EVC_Testrunner::RTM_ERSA::RadioHeader */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioHeader,
  /* ERSA_EVC_Testrunner::RTM_ERSA::RadioManagementMessage */ RadioManagement_T_API_RadioCommunication_Pkg *RadioManagementMessage,
  outC_RTM_ERSA_ERSA_EVC_Testrunner *outC)
{
  kcg_int i;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else */ kcg_bool _18_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else */ kcg_bool _16_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else */ kcg_bool _14_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else */ kcg_bool _12_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else */ kcg_bool _10_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _8_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _6_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _5_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */ kcg_bool _7_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else::else::else */ kcg_bool _9_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else::else::else */ kcg_bool _11_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else::else::else */ kcg_bool _13_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else::else::else */ kcg_bool _15_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1::else::else */ kcg_bool _17_else_clock_IfBlock1;
  /* ERSA_EVC_Testrunner::RTM_ERSA::connectionEstablished */ kcg_bool last_connectionEstablished;
  /* ERSA_EVC_Testrunner::RTM_ERSA::registrationFinished */ kcg_bool last_registrationFinished;
  /* ERSA_EVC_Testrunner::RTM_ERSA::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* ERSA_EVC_Testrunner::RTM_ERSA::GSM_R_MobileManagement */ SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_sel;
  /* ERSA_EVC_Testrunner::RTM_ERSA::GSM_R_MobileManagement */ SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_act;
  /* ERSA_EVC_Testrunner::RTM_ERSA::GSM_R_MobileManagement */ kcg_bool GSM_R_MobileManagement_reset_act;
  /* ERSA_EVC_Testrunner::RTM_ERSA::_L30 */ kcg_bool _L30;
  
  outC->TrackMessage.systemTimeMsgReceived = systemTime;
  outC->TrackMessage.msg_type = msrc_Euroradio_Common_Types_Pkg;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(
    &outC->TrackMessage.btm_msg,
    (API_TelegramHeader_T_API_Msg_Pkg *) &cEmptyBtmMessageHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->TrackMessage.packets,
    Packets);
  /* last_init_ck_registrationFinished */ if (outC->init3) {
    GSM_R_MobileManagement_state_sel =
      SSM_st_Not_registered_GSM_R_MobileManagement;
    last_connectionEstablished = kcg_false;
    outC->init3 = kcg_false;
    last_registrationFinished = kcg_false;
  }
  else {
    GSM_R_MobileManagement_state_sel = outC->GSM_R_MobileManagement_state_nxt;
    last_connectionEstablished = outC->connectionEstablished;
    last_registrationFinished = outC->registrationFinished;
  }
  /* sel_GSM_R_MobileManagement */ switch (GSM_R_MobileManagement_state_sel) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      _L30 = (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_disconnection_request_API_RadioCommunication_Pkg);
      IfBlock1_clock = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (_L30) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Registered_GSM_R_MobileManagement;
        GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        if (IfBlock1_clock) {
          GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
        }
        else {
          GSM_R_MobileManagement_state_act =
            SSM_st_Connected_GSM_R_MobileManagement;
        }
        GSM_R_MobileManagement_reset_act = IfBlock1_clock;
      }
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      else_clock_IfBlock1 = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (last_connectionEstablished) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Connected_GSM_R_MobileManagement;
        GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        if (else_clock_IfBlock1) {
          GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
        }
        else {
          GSM_R_MobileManagement_state_act =
            SSM_st_Connecting_GSM_R_MobileManagement;
        }
        GSM_R_MobileManagement_reset_act = else_clock_IfBlock1;
      }
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      _1_else_clock_IfBlock1 = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_connection_request_API_RadioCommunication_Pkg);
      _2_else_clock_IfBlock1 = ((*RadioManagementMessage).valid &
          ((*RadioManagementMessage).cmd ==
            cmdr_reset_connection_API_RadioCommunication_Pkg)) |
        ((*RadioManagementMessage).cmd ==
          cmdr_networkUnregister_API_RadioCommunication_Pkg);
      if (_1_else_clock_IfBlock1) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Connecting_GSM_R_MobileManagement;
        GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        if (_2_else_clock_IfBlock1) {
          GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
        }
        else {
          GSM_R_MobileManagement_state_act =
            SSM_st_Registered_GSM_R_MobileManagement;
        }
        GSM_R_MobileManagement_reset_act = _2_else_clock_IfBlock1;
      }
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      _3_else_clock_IfBlock1 = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (last_registrationFinished) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Registered_GSM_R_MobileManagement;
        GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        if (_3_else_clock_IfBlock1) {
          GSM_R_MobileManagement_state_act =
            SSM_st_Not_registered_GSM_R_MobileManagement;
        }
        else {
          GSM_R_MobileManagement_state_act =
            SSM_st_Registering_GSM_R_MobileManagement;
        }
        GSM_R_MobileManagement_reset_act = _3_else_clock_IfBlock1;
      }
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      GSM_R_MobileManagement_reset_act = (*RadioManagementMessage).valid &
        ((*RadioManagementMessage).cmd ==
          cmdr_networkRegister_API_RadioCommunication_Pkg);
      if (GSM_R_MobileManagement_reset_act) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Registering_GSM_R_MobileManagement;
      }
      else {
        GSM_R_MobileManagement_state_act =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      break;
    
  }
  _L30 = (*RadioHeader).nid_message != 0;
  outC->TrackMessage.valid = _L30;
  outC->TrackMessage.rtm_msg.present = _L30;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_false;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->TrackMessage.rtm_msg.Radio_Common_Header,
    RadioHeader);
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
    _18_else_clock_IfBlock1 = (*RadioHeader).nid_message == 3;
    /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
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
      _17_else_clock_IfBlock1 = (*RadioHeader).nid_message == 6;
      /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
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
        _16_else_clock_IfBlock1 = (*RadioHeader).nid_message == 8;
        /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
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
          _15_else_clock_IfBlock1 = (*RadioHeader).nid_message == 9;
          /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
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
            _14_else_clock_IfBlock1 = (*RadioHeader).nid_message == 15;
            /* ck_anon_activ */ if (_14_else_clock_IfBlock1) {
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
              _13_else_clock_IfBlock1 = (*RadioHeader).nid_message == 16;
              /* ck_anon_activ */ if (_13_else_clock_IfBlock1) {
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
                _12_else_clock_IfBlock1 = (*RadioHeader).nid_message == 18;
                /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
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
                  _11_else_clock_IfBlock1 = (*RadioHeader).nid_message == 24;
                  /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
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
                    _10_else_clock_IfBlock1 = (*RadioHeader).nid_message == 27;
                    /* ck_anon_activ */ if (_10_else_clock_IfBlock1) {
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
                      _9_else_clock_IfBlock1 = (*RadioHeader).nid_message == 28;
                      /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
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
                        _8_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                          32;
                        /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
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
                          _7_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                            33;
                          /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
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
                            _6_else_clock_IfBlock1 =
                              (*RadioHeader).nid_message == 34;
                            /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
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
                              _5_else_clock_IfBlock1 =
                                (*RadioHeader).nid_message == 37;
                              /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
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
                                _4_else_clock_IfBlock1 =
                                  (*RadioHeader).nid_message == 38;
                                /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
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
                                  _L30 = (*RadioHeader).nid_message == 39;
                                  /* ck_anon_activ */ if (_L30) {
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
                                    _3_else_clock_IfBlock1 =
                                      (*RadioHeader).nid_message == 40;
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
                                        kcg_false;
                                    }
                                    else {
                                      _2_else_clock_IfBlock1 =
                                        (*RadioHeader).nid_message == 41;
                                      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
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
                                        _1_else_clock_IfBlock1 =
                                          (*RadioHeader).nid_message == 43;
                                        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
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
                                          else_clock_IfBlock1 =
                                            (*RadioHeader).nid_message == 45;
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
  /* act_GSM_R_MobileManagement */ switch (GSM_R_MobileManagement_state_act) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Connected_MoRC_Pck);
      outC->registrationFinished = last_registrationFinished;
      outC->connectionEstablished = last_connectionEstablished;
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Connected_GSM_R_MobileManagement;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      outC->registrationFinished = last_registrationFinished;
      /* 4 */ if (GSM_R_MobileManagement_reset_act) {
        outC->init = kcg_true;
      }
      /* 4 */ if (outC->init) {
        /* 4 */ for (i = 0; i < 5; i++) {
          outC->fby_RTM_ERSA_ERSA_EVC_Testrunner.items[i] = kcg_false;
        }
        outC->fby_RTM_ERSA_ERSA_EVC_Testrunner.idx = 0;
      }
      outC->connectionEstablished =
        outC->fby_RTM_ERSA_ERSA_EVC_Testrunner.items[outC->fby_RTM_ERSA_ERSA_EVC_Testrunner.idx];
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Connecting_GSM_R_MobileManagement;
      outC->fby_RTM_ERSA_ERSA_EVC_Testrunner.items[outC->fby_RTM_ERSA_ERSA_EVC_Testrunner.idx] =
        kcg_true;
      outC->fby_RTM_ERSA_ERSA_EVC_Testrunner.idx =
        (outC->fby_RTM_ERSA_ERSA_EVC_Testrunner.idx + 1) % 5;
      outC->init = kcg_false;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      outC->registrationFinished = last_registrationFinished;
      outC->connectionEstablished = last_connectionEstablished;
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Registered_GSM_R_MobileManagement;
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
      /* 3 */ if (GSM_R_MobileManagement_reset_act) {
        outC->init2 = kcg_true;
      }
      /* 3 */ if (outC->init2) {
        /* 3 */ for (i = 0; i < 5; i++) {
          outC->_1_fby_RTM_ERSA_ERSA_EVC_Testrunner.items[i] = kcg_false;
        }
        outC->_1_fby_RTM_ERSA_ERSA_EVC_Testrunner.idx = 0;
      }
      outC->registrationFinished =
        outC->_1_fby_RTM_ERSA_ERSA_EVC_Testrunner.items[outC->_1_fby_RTM_ERSA_ERSA_EVC_Testrunner.idx];
      outC->connectionEstablished = last_connectionEstablished;
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Registering_GSM_R_MobileManagement;
      outC->_1_fby_RTM_ERSA_ERSA_EVC_Testrunner.items[outC->_1_fby_RTM_ERSA_ERSA_EVC_Testrunner.idx] =
        kcg_true;
      outC->_1_fby_RTM_ERSA_ERSA_EVC_Testrunner.idx =
        (outC->_1_fby_RTM_ERSA_ERSA_EVC_Testrunner.idx + 1) % 5;
      outC->init2 = kcg_false;
      break;
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
      outC->registrationFinished = last_registrationFinished;
      outC->connectionEstablished = last_connectionEstablished;
      outC->GSM_R_MobileManagement_state_nxt =
        SSM_st_Not_registered_GSM_R_MobileManagement;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RTM_ERSA_ERSA_EVC_Testrunner.c
** Generation date: 2015-11-25T12:17:43
*************************************************************$ */

