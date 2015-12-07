/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingInUse_CheckBGConsist.h"

/* CheckBGConsistency_Pkg::CaseLinkingInUse */
void CaseLinkingInUse_CheckBGConsist(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */ positionedBGs_T_TrainPosition_T *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Typ *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ ReceivedMessage_T_Common_Types_ *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */ kcg_bool *errorLinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG */ NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c */ NID_C *nid_c)
{
  /* CheckBGConsistency_Pkg::CaseLinkingInUse */
  static kcg_int tmp1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse */
  static kcg_int tmp;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isComplete */
  static kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::lastTelegram */
  static Telegram_T_BG_Types_Pkg lastTelegram;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBGlocal */
  static ReceivedMessage_T_Common_Types_ passedBGlocal;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isAnnounced */
  static kcg_bool isAnnounced;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_linkorientation_local */
  static Q_LINKORIENTATION q_linkorientation_local;
  
  /* 2 */
  CheckCompleteness_CheckBGConsis(
    &(*trackSideForCheck).telegramHeaders,
    &isAnnounced,
    &else_clock_IfBlock1,
    &lastTelegram);
  isComplete = isAnnounced ^ else_clock_IfBlock1;
  /* 1 */
  BuildCheckedMessage_CheckBGCons(
    trackSideForCheck,
    q_nvlocacc,
    &passedBGlocal);
  /* 1 */
  IsBG_announced_CheckBGConsisten(
    &passedBGlocal.BG_Common_Header,
    storedBGs,
    &isAnnounced,
    &q_linkorientation_local);
  IfBlock1_clock = isComplete & else_clock_IfBlock1 & isAnnounced;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    *errorLinkedBG = kcg_false;
    /* 1 */
    WriteDirection2PassedBG_CheckBG(
      (kcg_bool) (Q_LINKORIENTATION_The_balise_gr == q_linkorientation_local),
      &passedBGlocal,
      passedBG_out);
    *nid_errorBG = 16383;
    *nid_c = 0;
  }
  else {
    else_clock_IfBlock1 = isComplete & isAnnounced;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      *errorLinkedBG = kcg_false;
      tmp1 = /* 16 */
        N_PIG2int_CheckBGConsistency_Pk(lastTelegram.telegramheader.n_pig);
      tmp = /* 17 */
        N_PIG2int_CheckBGConsistency_Pk(
          (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.n_pig);
      /* 2 */
      WriteDirection2PassedBG_CheckBG(
        (kcg_bool)
          ((tmp1 > tmp) & (Q_LINKORIENTATION_The_balise_gr ==
              q_linkorientation_local)),
        &passedBGlocal,
        passedBG_out);
      *nid_errorBG = 16383;
      *nid_c = 0;
    }
    else {
      *errorLinkedBG = kcg_true;
      kcg_copy_ReceivedMessage_T_Comm(
        passedBG_out,
        (ReceivedMessage_T_Common_Types_ *) &cRecivedMesg_PlaceHolder_CheckB);
      *nid_errorBG =
        (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_bg;
      *nid_c =
        (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_c;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CaseLinkingInUse_CheckBGConsist.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

