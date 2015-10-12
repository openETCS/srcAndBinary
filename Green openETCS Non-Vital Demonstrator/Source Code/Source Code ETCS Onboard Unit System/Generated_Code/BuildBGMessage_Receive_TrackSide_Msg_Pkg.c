/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void BuildBGMessage_init_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i1 = 0; i1 < 8; i1++) {
    outC->storeBGTelegramArray[i1].valid = kcg_true;
    outC->storeBGTelegramArray[i1].checkResult = kcg_true;
    outC->storeBGTelegramArray[i1].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->storeBGTelegramArray[i1].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->storeBGTelegramArray[i1].telegramheader.q_media = Q_MEDIA_Balise;
    outC->storeBGTelegramArray[i1].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->storeBGTelegramArray[i1].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->storeBGTelegramArray[i1].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->storeBGTelegramArray[i1].telegramheader.m_mcount = 0;
    outC->storeBGTelegramArray[i1].telegramheader.nid_c = 0;
    outC->storeBGTelegramArray[i1].telegramheader.nid_bg = 0;
    outC->storeBGTelegramArray[i1].telegramheader.q_link = Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->storeBGTelegramArray[i1].packets.PacketHeaders[i].nid_packet = 0;
      outC->storeBGTelegramArray[i1].packets.PacketHeaders[i].q_dir =
        Q_DIR_Reverse;
      outC->storeBGTelegramArray[i1].packets.PacketHeaders[i].valid = kcg_true;
      outC->storeBGTelegramArray[i1].packets.PacketHeaders[i].startAddress = 0;
      outC->storeBGTelegramArray[i1].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i = 0; i < 500; i++) {
      outC->storeBGTelegramArray[i1].packets.PacketData[i] = 0;
    }
  }
  outC->storeCollector.badBaliseFlag = kcg_true;
  outC->storeCollector.BGMessageSent = kcg_true;
  outC->storeCollector.C_ID = 0;
  outC->storeCollector.BG_ID = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storeCollector.collectedTelegrams = 0;
  outC->storeCollector.totalTelegrams = 0;
  outC->storeAdditionalTelegram.valid = kcg_true;
  outC->storeAdditionalTelegram.telegram.valid = kcg_true;
  outC->storeAdditionalTelegram.telegram.checkResult = kcg_true;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_media =
    Q_MEDIA_Balise;
  outC->storeAdditionalTelegram.telegram.telegramheader.n_pig =
    N_PIG_I_am_the_1st;
  outC->storeAdditionalTelegram.telegram.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_dup =
    M_DUP_No_duplicates;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_mcount = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.nid_c = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.nid_bg = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_link =
    Q_LINK_Unlinked;
  for (i1 = 0; i1 < 30; i1++) {
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i1].nid_packet =
      0;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i1].q_dir =
      Q_DIR_Reverse;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i1].valid =
      kcg_true;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i1].startAddress =
      0;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i1].endAddress =
      0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->storeAdditionalTelegram.telegram.packets.PacketData[i1] = 0;
  }
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.timestamp =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outBGMessage.present = kcg_true;
  for (i1 = 0; i1 < 8; i1++) {
    outC->outBGMessage.Telegrams[i1].valid = kcg_true;
    outC->outBGMessage.Telegrams[i1].checkResult = kcg_true;
    outC->outBGMessage.Telegrams[i1].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outBGMessage.Telegrams[i1].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outBGMessage.Telegrams[i1].telegramheader.q_media = Q_MEDIA_Balise;
    outC->outBGMessage.Telegrams[i1].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->outBGMessage.Telegrams[i1].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outBGMessage.Telegrams[i1].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->outBGMessage.Telegrams[i1].telegramheader.m_mcount = 0;
    outC->outBGMessage.Telegrams[i1].telegramheader.nid_c = 0;
    outC->outBGMessage.Telegrams[i1].telegramheader.nid_bg = 0;
    outC->outBGMessage.Telegrams[i1].telegramheader.q_link = Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->outBGMessage.Telegrams[i1].packets.PacketHeaders[i].nid_packet = 0;
      outC->outBGMessage.Telegrams[i1].packets.PacketHeaders[i].q_dir =
        Q_DIR_Reverse;
      outC->outBGMessage.Telegrams[i1].packets.PacketHeaders[i].valid =
        kcg_true;
      outC->outBGMessage.Telegrams[i1].packets.PacketHeaders[i].startAddress =
        0;
      outC->outBGMessage.Telegrams[i1].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i = 0; i < 500; i++) {
      outC->outBGMessage.Telegrams[i1].packets.PacketData[i] = 0;
    }
  }
  outC->outBGMessage.numberBalises = 0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
void BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inTelegramPresent */ kcg_bool inTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
  static TelegramStore_T_Receive_TrackSide_Msg_Pkg tmp5;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
  static Telegram_T_BG_Types_Pkg tmp4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
  static centerOfBalisePosition_T_BG_Types_Pkg tmp3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
  static kcg_bool tmp2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
  static kcg_bool tmp1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
  static kcg_bool tmp;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L11 */
  static Telegram_T_BG_Types_Pkg _L11_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L12 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L12_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L22 */
  static kcg_bool _L22_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg last_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg last_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */
  static kcg_bool BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */
  static kcg_bool telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L43 */
  static kcg_bool _L43;
  
  _L43 = !reset;
  /* ck_reset */ if (reset) {
    telegramPresent = kcg_false;
    tmp1 = kcg_false;
  }
  else {
    /* last_init_ck_storeAdditionalTelegram */ if (outC->init) {
      kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
        &tmp5,
        (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
          &cEmptyStore_Receive_TrackSide_Msg_Pkg);
    }
    else {
      kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
        &tmp5,
        &outC->storeAdditionalTelegram);
    }
    /* 3 */
    manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
      inDecodedTelegram,
      incenterOfBalisePosition,
      &tmp5,
      inTelegramPresent,
      &telegramPresent,
      &_L11_IfBlock4,
      &_L12_IfBlock4,
      &tmp1);
  }
  /* last_init_ck_storeBGTelegramArray */ if (outC->init) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &last_storeCollector,
      (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
        &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
    outC->init = kcg_false;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &last_storeCollector,
      &outC->storeCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      &outC->storeBGTelegramArray);
  }
  /* ck_telegramPresent */ if (telegramPresent) {
    /* ck_reset */ if (reset) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &tmp4,
        (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
      kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
        &tmp3,
        (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(&tmp4, &_L11_IfBlock4);
      kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&tmp3, &_L12_IfBlock4);
    }
    /* 1 */
    manageTelegram_Receive_TrackSide_Msg_Pkg(
      &tmp4,
      &tmp3,
      &last_storeCollector,
      &last_storeBGTelegramArray,
      &BGisComplete,
      &tmp,
      &tempCollectorStore,
      &tempBGTelegramArray,
      &_L22_IfBlock1);
  }
  else {
    IfBlock3_clock_IfBlock1 = _L43;
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
      /* 3 */
      checkOdometry_Receive_TrackSide_Msg_Pkg(
        inActualOdometry,
        &last_storeCollector,
        &BGisComplete,
        &tmp,
        &tempCollectorStore);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        &last_storeBGTelegramArray);
    }
    else {
      BGisComplete = kcg_false;
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &tempCollectorStore,
        (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
          &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
      tmp = kcg_false;
    }
  }
  /* ck_BGisComplete */ if (BGisComplete) {
    outC->outBGMessage.present = kcg_true;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outBGMessage.Telegrams,
      &tempBGTelegramArray);
    /* 1 */
    updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &tempCollectorStore,
      &outC->storeCollector);
    outC->outBGMessage.numberBalises = outC->storeCollector.collectedTelegrams;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->outBGMessage.centerOfBalisePosition,
      &outC->storeCollector.balisePosition);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &tempBGTelegramArray);
  }
  else {
    outC->outBGMessage.present = kcg_false;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outBGMessage.Telegrams,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
    outC->outBGMessage.numberBalises = 0;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->outBGMessage.centerOfBalisePosition,
      (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    /* ck_telegramPresent */ if (telegramPresent) {
      tmp2 = _L22_IfBlock1;
    }
    else /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
      tmp2 = kcg_false;
    }
    else {
      tmp2 = kcg_true;
    }
    /* ck_IfBlock3 */ if (tmp2) {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->storeCollector,
        &tempCollectorStore);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->storeBGTelegramArray,
        &tempBGTelegramArray);
    }
    else {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->storeCollector,
        &last_storeCollector);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->storeBGTelegramArray,
        &last_storeBGTelegramArray);
    }
  }
  /* 3 */ if (inTelegramPresent & (tmp1 | tmp) & _L43) {
    outC->storeAdditionalTelegram.valid = kcg_true;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->storeAdditionalTelegram.telegram,
      inDecodedTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->storeAdditionalTelegram.position,
      incenterOfBalisePosition);
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeAdditionalTelegram,
      (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
        &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BuildBGMessage_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

