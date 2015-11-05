/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingNotInUse_CheckBGCons.h"

/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
void CaseLinkingNotInUse_CheckBGCons(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Typ *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ ReceivedMessage_T_Common_Types_ *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ kcg_bool *errorUnlinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG */ NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c */ NID_C *nid_c)
{
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
  static kcg_int tmp2;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
  static kcg_int tmp1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
  static ReceivedMessage_T_Common_Types_ tmp;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isComplete */
  static kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isSingle */
  static kcg_bool isSingle;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::lastTelegram */
  static Telegram_T_BG_Types_Pkg lastTelegram;
  
  /* 1 */
  CheckCompleteness_CheckBGConsis(
    &(*trackSideForCheck).telegramHeaders,
    &IfBlock1_clock,
    &isSingle,
    &lastTelegram);
  isComplete = IfBlock1_clock ^ isSingle;
  IfBlock1_clock = isComplete & isSingle;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    *applyServiceBrake = kcg_false;
    /* 1 */
    BuildCheckedMessage_CheckBGCons(
      trackSideForCheck,
      q_nvlocacc,
      passedBG_out);
    (*passedBG_out).BG_Common_Header.noCoordinateSystemHasBeenAssign = kcg_true;
    *nid_errorBG = 0;
    *nid_c = 0;
  }
  else /* ck_anon_activ */ if (isComplete) {
    *applyServiceBrake = kcg_false;
    tmp2 = /* 16 */
      N_PIG2int_CheckBGConsistency_Pk(lastTelegram.telegramheader.n_pig);
    tmp1 = /* 17 */
      N_PIG2int_CheckBGConsistency_Pk(
        (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.n_pig);
    /* 2 */
    BuildCheckedMessage_CheckBGCons(trackSideForCheck, q_nvlocacc, &tmp);
    /* 1 */
    WriteDirection2PassedBG_CheckBG(
      (kcg_bool) (tmp2 > tmp1),
      &tmp,
      passedBG_out);
    *nid_errorBG = 0;
    *nid_c = 0;
  }
  else {
    *applyServiceBrake = kcg_true;
    kcg_copy_ReceivedMessage_T_Comm(
      passedBG_out,
      (ReceivedMessage_T_Common_Types_ *) &cRecivedMesg_PlaceHolder_CheckB);
    *nid_errorBG =
      (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_bg;
    *nid_c =
      (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_c;
  }
  *errorUnlinkedBG = *applyServiceBrake;
  *badBaliseMessageToDMI = *applyServiceBrake;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CaseLinkingNotInUse_CheckBGCons.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

