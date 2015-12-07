/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckEuroRadioMessage_CheckEuroradioMessage.h"

#ifndef KCG_USER_DEFINED_INIT
void CheckEuroRadioMessage_init_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
{
  kcg_int i;
  
  outC->radioSequenceError = kcg_true;
  outC->tNvContactError = kcg_true;
  outC->otherTimingError = kcg_true;
  outC->radioMessageConsistencyError = kcg_true;
  outC->checkedMessage.valid = kcg_true;
  outC->checkedMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->checkedMessage.radioMetadata.t_train_reference = kcg_true;
  outC->checkedMessage.radioMetadata.nid_em = kcg_true;
  outC->checkedMessage.radioMetadata.q_scale = kcg_true;
  outC->checkedMessage.radioMetadata.d_sr = kcg_true;
  outC->checkedMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->checkedMessage.radioMetadata.d_ref = kcg_true;
  outC->checkedMessage.radioMetadata.q_dir = kcg_true;
  outC->checkedMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->checkedMessage.radioMetadata.m_version = kcg_true;
  outC->checkedMessage.BG_Common_Header.valid = kcg_true;
  outC->checkedMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->checkedMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->checkedMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->checkedMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->checkedMessage.BG_Common_Header.m_mcount = 0;
  outC->checkedMessage.BG_Common_Header.nid_c = 0;
  outC->checkedMessage.BG_Common_Header.nid_bg = 0;
  outC->checkedMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->checkedMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->checkedMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->checkedMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->checkedMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->checkedMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->checkedMessage.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->checkedMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->checkedMessage.Radio_Common_Header.radioDevice = 0;
  outC->checkedMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->checkedMessage.Radio_Common_Header.nid_message = 0;
  outC->checkedMessage.Radio_Common_Header.t_train = 0;
  outC->checkedMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->checkedMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->checkedMessage.Radio_Common_Header.t_train_reference = 0;
  outC->checkedMessage.Radio_Common_Header.nid_em = 0;
  outC->checkedMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->checkedMessage.Radio_Common_Header.d_sr = 0;
  outC->checkedMessage.Radio_Common_Header.t_sh_rqst = 0;
  outC->checkedMessage.Radio_Common_Header.d_ref = 0;
  outC->checkedMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->checkedMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->checkedMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->checkedMessage.packets.PacketHeaders[i].nid_packet = 0;
    outC->checkedMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->checkedMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->checkedMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->checkedMessage.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->checkedMessage.packets.PacketData[i] = 0;
  }
  outC->checkedMessage.sendingRBC.valid = kcg_true;
  outC->checkedMessage.sendingRBC.nid_c = 0;
  outC->checkedMessage.sendingRBC.rbc_id = 0;
  outC->checkedMessage.sendingRBC.device_id = 0;
  /* 6 */ TimingChecker_init_CheckEuroradioMessage(&outC->Context_6);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckEuroRadioMessage_reset_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
{
  /* 6 */ TimingChecker_reset_CheckEuroradioMessage(&outC->Context_6);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CheckEuroradioMessage::CheckEuroRadioMessage */
void CheckEuroRadioMessage_CheckEuroradioMessage(
  /* CheckEuroradioMessage::CheckEuroRadioMessage::rtmMessage */ TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::tNvContact */ T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::activateCheck */ kcg_bool activateCheck,
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
{
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L95 */ kcg_bool _L95_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L86 */ kcg_bool _L86_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L85 */ kcg_bool _L85_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L64 */ kcg_bool _L64_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L73 */ kcg_bool _L73_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L76 */ ReceivedMessage_T_Common_Types_Pkg _L76_IfBlock1;
  
  /* ck_activateCheck */ if (activateCheck) {
    /* 6 */
    ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage(
      rtmMessage,
      &_L76_IfBlock1);
    _L64_IfBlock1 = /* 6 */
      CheckAllowedPacketsRadio_CheckEuroradioMessage(&_L76_IfBlock1);
    _L73_IfBlock1 = /* 6 */
      CheckMandatoryVariablesAndMA_CheckEuroradioMessage(&_L76_IfBlock1);
    /* 6 */
    TimingChecker_CheckEuroradioMessage(
      tNvContact * 1000,
      lastRelevantEventTimestamp,
      &_L76_IfBlock1,
      radioStatus,
      (*rtmMessage).systemTime,
      &outC->Context_6);
    _L85_IfBlock1 = outC->Context_6.tNvContactError;
    _L86_IfBlock1 = outC->Context_6.sequenceError;
    _L95_IfBlock1 = outC->Context_6.otherTimingError;
    /* 6 */
    BuildOutput_CheckEuroradioMessage(
      &_L76_IfBlock1,
      (kcg_bool)
        (_L64_IfBlock1 & _L73_IfBlock1 & !(_L85_IfBlock1 | _L86_IfBlock1 |
            _L95_IfBlock1)),
      &outC->checkedMessage);
    outC->radioSequenceError = (*rtmMessage).valid & _L86_IfBlock1;
    outC->tNvContactError = (*rtmMessage).valid & _L85_IfBlock1;
    outC->otherTimingError = (*rtmMessage).valid & _L95_IfBlock1;
    outC->radioMessageConsistencyError = (*rtmMessage).valid & (!_L64_IfBlock1 |
        !_L73_IfBlock1);
  }
  else {
    outC->radioMessageConsistencyError = kcg_false;
    outC->otherTimingError = kcg_false;
    outC->tNvContactError = kcg_false;
    outC->radioSequenceError = kcg_false;
    /* 7 */
    ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage(
      rtmMessage,
      &outC->checkedMessage);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckEuroRadioMessage_CheckEuroradioMessage.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

