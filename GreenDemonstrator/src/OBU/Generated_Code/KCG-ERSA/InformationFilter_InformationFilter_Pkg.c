/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InformationFilter_InformationFilter_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void InformationFilter_init_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  kcg_int i;
  
  outC->storeInBuffer = kcg_true;
  outC->bufferHasPriority = kcg_true;
  outC->init = kcg_true;
  outC->rem_inSupervisingDevice = 0;
  outC->_L108.valid = kcg_true;
  outC->_L108.source = msrc_undefined_Common_Types_Pkg;
  outC->_L108.radioMetadata.t_train_reference = kcg_true;
  outC->_L108.radioMetadata.nid_em = kcg_true;
  outC->_L108.radioMetadata.q_scale = kcg_true;
  outC->_L108.radioMetadata.d_sr = kcg_true;
  outC->_L108.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L108.radioMetadata.d_ref = kcg_true;
  outC->_L108.radioMetadata.q_dir = kcg_true;
  outC->_L108.radioMetadata.d_emergencystop = kcg_true;
  outC->_L108.radioMetadata.m_version = kcg_true;
  outC->_L108.BG_Common_Header.valid = kcg_true;
  outC->_L108.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L108.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L108.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L108.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L108.BG_Common_Header.m_mcount = 0;
  outC->_L108.BG_Common_Header.nid_c = 0;
  outC->_L108.BG_Common_Header.nid_bg = 0;
  outC->_L108.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L108.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L108.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L108.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L108.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L108.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L108.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L108.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L108.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L108.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L108.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L108.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L108.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L108.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L108.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L108.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L108.BG_Common_Header.q_nvlocacc = 0;
  outC->_L108.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L108.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L108.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L108.Radio_Common_Header.radioDevice = 0;
  outC->_L108.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L108.Radio_Common_Header.nid_message = 0;
  outC->_L108.Radio_Common_Header.t_train = 0;
  outC->_L108.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L108.Radio_Common_Header.nid_lrbg = 0;
  outC->_L108.Radio_Common_Header.t_train_reference = 0;
  outC->_L108.Radio_Common_Header.nid_em = 0;
  outC->_L108.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L108.Radio_Common_Header.d_sr = 0;
  outC->_L108.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L108.Radio_Common_Header.d_ref = 0;
  outC->_L108.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L108.Radio_Common_Header.d_emergencystop = 0;
  outC->_L108.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->_L108.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L108.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L108.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L108.packets.PacketHeaders[i].startAddress = 0;
    outC->_L108.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->_L108.packets.PacketData[i] = 0;
  }
  outC->_L108.sendingRBC.valid = kcg_true;
  outC->_L108.sendingRBC.nid_c = 0;
  outC->_L108.sendingRBC.rbc_id = 0;
  outC->_L108.sendingRBC.device_id = 0;
  outC->currBuffersize = 0;
  outC->bufferMsg.valid = kcg_true;
  outC->bufferMsg.source = msrc_undefined_Common_Types_Pkg;
  outC->bufferMsg.radioMetadata.t_train_reference = kcg_true;
  outC->bufferMsg.radioMetadata.nid_em = kcg_true;
  outC->bufferMsg.radioMetadata.q_scale = kcg_true;
  outC->bufferMsg.radioMetadata.d_sr = kcg_true;
  outC->bufferMsg.radioMetadata.t_sh_rqst = kcg_true;
  outC->bufferMsg.radioMetadata.d_ref = kcg_true;
  outC->bufferMsg.radioMetadata.q_dir = kcg_true;
  outC->bufferMsg.radioMetadata.d_emergencystop = kcg_true;
  outC->bufferMsg.radioMetadata.m_version = kcg_true;
  outC->bufferMsg.BG_Common_Header.valid = kcg_true;
  outC->bufferMsg.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->bufferMsg.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->bufferMsg.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->bufferMsg.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->bufferMsg.BG_Common_Header.m_mcount = 0;
  outC->bufferMsg.BG_Common_Header.nid_c = 0;
  outC->bufferMsg.BG_Common_Header.nid_bg = 0;
  outC->bufferMsg.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->bufferMsg.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->bufferMsg.BG_Common_Header.bgPosition.timestamp = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.acceleration = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->bufferMsg.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->bufferMsg.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->bufferMsg.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->bufferMsg.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->bufferMsg.BG_Common_Header.q_nvlocacc = 0;
  outC->bufferMsg.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->bufferMsg.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->bufferMsg.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->bufferMsg.Radio_Common_Header.radioDevice = 0;
  outC->bufferMsg.Radio_Common_Header.receivedSystemTime = 0;
  outC->bufferMsg.Radio_Common_Header.nid_message = 0;
  outC->bufferMsg.Radio_Common_Header.t_train = 0;
  outC->bufferMsg.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->bufferMsg.Radio_Common_Header.nid_lrbg = 0;
  outC->bufferMsg.Radio_Common_Header.t_train_reference = 0;
  outC->bufferMsg.Radio_Common_Header.nid_em = 0;
  outC->bufferMsg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->bufferMsg.Radio_Common_Header.d_sr = 0;
  outC->bufferMsg.Radio_Common_Header.t_sh_rqst = 0;
  outC->bufferMsg.Radio_Common_Header.d_ref = 0;
  outC->bufferMsg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->bufferMsg.Radio_Common_Header.d_emergencystop = 0;
  outC->bufferMsg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->bufferMsg.packets.PacketHeaders[i].nid_packet = 0;
    outC->bufferMsg.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->bufferMsg.packets.PacketHeaders[i].valid = kcg_true;
    outC->bufferMsg.packets.PacketHeaders[i].startAddress = 0;
    outC->bufferMsg.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->bufferMsg.packets.PacketData[i] = 0;
  }
  outC->bufferMsg.sendingRBC.valid = kcg_true;
  outC->bufferMsg.sendingRBC.nid_c = 0;
  outC->bufferMsg.sendingRBC.rbc_id = 0;
  outC->bufferMsg.sendingRBC.device_id = 0;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
  outC->IF_toML.P12_received = kcg_true;
  outC->IF_toML.P15_received = kcg_true;
  outC->IF_toML.P21_received = kcg_true;
  outC->IF_toML.P27_received = kcg_true;
  outC->outMessage.valid = kcg_true;
  outC->outMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outMessage.radioMetadata.nid_em = kcg_true;
  outC->outMessage.radioMetadata.q_scale = kcg_true;
  outC->outMessage.radioMetadata.d_sr = kcg_true;
  outC->outMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outMessage.radioMetadata.d_ref = kcg_true;
  outC->outMessage.radioMetadata.q_dir = kcg_true;
  outC->outMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outMessage.radioMetadata.m_version = kcg_true;
  outC->outMessage.BG_Common_Header.valid = kcg_true;
  outC->outMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outMessage.BG_Common_Header.m_mcount = 0;
  outC->outMessage.BG_Common_Header.nid_c = 0;
  outC->outMessage.BG_Common_Header.nid_bg = 0;
  outC->outMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessage.Radio_Common_Header.radioDevice = 0;
  outC->outMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outMessage.Radio_Common_Header.nid_message = 0;
  outC->outMessage.Radio_Common_Header.t_train = 0;
  outC->outMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->outMessage.Radio_Common_Header.t_train_reference = 0;
  outC->outMessage.Radio_Common_Header.nid_em = 0;
  outC->outMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outMessage.Radio_Common_Header.d_sr = 0;
  outC->outMessage.Radio_Common_Header.t_sh_rqst = 0;
  outC->outMessage.Radio_Common_Header.d_ref = 0;
  outC->outMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->outMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->outMessage.packets.PacketHeaders[i].nid_packet = 0;
    outC->outMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->outMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->outMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->outMessage.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->outMessage.packets.PacketData[i] = 0;
  }
  outC->outMessage.sendingRBC.valid = kcg_true;
  outC->outMessage.sendingRBC.nid_c = 0;
  outC->outMessage.sendingRBC.rbc_id = 0;
  outC->outMessage.sendingRBC.device_id = 0;
  /* 1 */ flagsForLevelChange_init_InformationFilter_Pkg(&outC->_1_Context_1);
  /* 1 */ TransitionBuffer_init_InformationFilter_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ flagsForLevelChange_reset_InformationFilter_Pkg(&outC->_1_Context_1);
  /* 1 */ TransitionBuffer_reset_InformationFilter_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::InformationFilter */
void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */ kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */ kcg_bool inTrainDataValid,
  /* InformationFilter_Pkg::InformationFilter::inMorcStatus */ morcStatus_T_RCM_Session_Types_Pkg *inMorcStatus,
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  /* InformationFilter_Pkg::InformationFilter */ kcg_int tmp2;
  /* InformationFilter_Pkg::InformationFilter */ ReceivedMessage_T_Common_Types_Pkg tmp1;
  /* InformationFilter_Pkg::InformationFilter */ kcg_bool tmp;
  /* InformationFilter_Pkg::InformationFilter::currBuffersize */ kcg_int last_currBuffersize;
  /* InformationFilter_Pkg::InformationFilter::SM1 */ _34_SSM_ST_SM1 SM1_state_sel;
  /* InformationFilter_Pkg::InformationFilter::SM1 */ _34_SSM_ST_SM1 SM1_state_act;
  /* InformationFilter_Pkg::InformationFilter::_L99 */ ReceivedMessage_T_Common_Types_Pkg _L99;
  
  /* last_init_ck_storeInBuffer */ if (outC->init) {
    SM1_state_sel = SSM_st_State1_SM1;
    last_currBuffersize = 0;
    tmp = kcg_false;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L99,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
    last_currBuffersize = outC->currBuffersize;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L99, &outC->bufferMsg);
    tmp = outC->storeInBuffer;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_State1_SM1 :
      SM1_state_act = _33_SSM_st_State2_SM1;
      break;
    case _33_SSM_st_State2_SM1 :
      /* last_init_ck_inSupervisingDevice */ if (outC->init) {
        tmp2 = 0;
      }
      else {
        tmp2 = outC->rem_inSupervisingDevice;
      }
      if (((inSupervisingDevice != tmp2) | (*inModeLevel).newLevel) &
        (last_currBuffersize > 0)) {
        SM1_state_act = SSM_st_State3_SM1;
      }
      else {
        SM1_state_act = _33_SSM_st_State2_SM1;
      }
      break;
    case SSM_st_State3_SM1 :
      if (last_currBuffersize == 0) {
        SM1_state_act = _33_SSM_st_State2_SM1;
      }
      else {
        SM1_state_act = SSM_st_State3_SM1;
      }
      break;
    
  }
  /* 4 */ if (_L99.valid & tmp) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&tmp1, &_L99);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &tmp1,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_State3_SM1 :
      outC->bufferHasPriority = kcg_true;
      outC->SM1_state_nxt = SSM_st_State3_SM1;
      break;
    case _33_SSM_st_State2_SM1 :
      outC->bufferHasPriority = kcg_false;
      outC->SM1_state_nxt = _33_SSM_st_State2_SM1;
      break;
    case SSM_st_State1_SM1 :
      /* last_init_ck_bufferHasPriority */ if (outC->init) {
        outC->bufferHasPriority = kcg_false;
      }
      outC->SM1_state_nxt = SSM_st_State1_SM1;
      break;
    
  }
  /* 1 */
  TransitionBuffer_InformationFilter_Pkg(
    &tmp1,
    outC->bufferHasPriority,
    (kcg_bool)
      ((*inMorcStatus).session.phase == sp_terminated_RCM_Session_Types_Pkg),
    &outC->Context_1);
  outC->currBuffersize = outC->Context_1.outStacksize;
  /* 1 */ if ((*inMessage).valid & outC->bufferHasPriority) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L108, inMessage);
  }
  else /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L108,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  outC->init = kcg_false;
  /* 3 */ if (outC->bufferHasPriority) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L99, &outC->Context_1.Out);
  }
  else /* 5 */ if (!kcg_comp_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L108,
      (struct_124442 *) &cDefaultRM_Common_Types_Pkg)) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L99, &outC->_L108);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L99, inMessage);
  }
  /* 1 */
  flagsForLevelChange_InformationFilter_Pkg(
    inModeLevel,
    inMessage,
    inFilterEvents,
    &outC->_1_Context_1);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->IF_toML,
    &outC->_1_Context_1.IF_toML);
  /* 2 */ if (_L99.valid) {
    /* FilterSequence */
    FilterSequence_InformationFilter_Pkg(
      &_L99,
      (*inModeLevel).level,
      &outC->_1_Context_1.outFilterEvents,
      inSupervisingDevice,
      (*inModeLevel).Mode,
      &outC->outMessage,
      &outC->bufferMsg,
      &outC->storeInBuffer);
  }
  else {
    outC->storeInBuffer = kcg_false;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->bufferMsg,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &_L99);
  }
  outC->rem_inSupervisingDevice = inSupervisingDevice;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InformationFilter_InformationFilter_Pkg.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

