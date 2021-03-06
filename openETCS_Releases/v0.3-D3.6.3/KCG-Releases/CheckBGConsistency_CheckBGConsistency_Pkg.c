/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckBGConsistency_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CheckBGConsistency */
void CheckBGConsistency_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckBGConsistency::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::mMode */ M_MODE mMode,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trackSide_ForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSide_ForCheck,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainVersion */ M_VERSION trainVersion,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */ kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */ kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */ kcg_bool *errorLinkedBG,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */ kcg_bool *errorUnlinkedBG,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::incompatibleVersion */ kcg_bool *incompatibleVersion,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_errorBG */ NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_c */ NID_C *nid_c)
{
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::startTheCheck */
  static kcg_bool startTheCheck;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::compatibleVersion */
  static kcg_bool compatibleVersion;
  
  startTheCheck = /* 1 */ CheckMode_CheckBGConsistency_Pkg_SubFunction(mMode) &
    (*trackSide_ForCheck).valid;
  /* 1 */
  CheckMVersion_CheckBGConsistency_Pkg_SubFunction(
    (*trackSide_ForCheck).telegramHeaders.Telegrams[0].telegramheader.m_version,
    trainVersion,
    &IfBlock1_clock,
    &compatibleVersion);
  IfBlock1_clock = startTheCheck & ((*trainPosition).linkingIsUsedOnboard &
      (*trainPosition).valid) &
    ((*trackSide_ForCheck).telegramHeaders.Telegrams[0].telegramheader.q_link ==
      Q_LINK_Linked) & compatibleVersion;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    *errorUnlinkedBG = kcg_false;
    *badBaliseMessageToDMI = kcg_false;
    *applyServiceBrake = kcg_false;
    /* 2 */
    CaseLinkingInUse_CheckBGConsistency_Pkg(
      storedBGs,
      trackSide_ForCheck,
      q_nvlocacc,
      passedBG_out,
      errorLinkedBG,
      nid_errorBG,
      nid_c);
  }
  else {
    *errorLinkedBG = kcg_false;
    else_clock_IfBlock1 = startTheCheck & compatibleVersion;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      /* 3 */
      CaseLinkingNotInUse_CheckBGConsistency_Pkg(
        trackSide_ForCheck,
        q_nvlocacc,
        applyServiceBrake,
        badBaliseMessageToDMI,
        passedBG_out,
        errorUnlinkedBG,
        nid_errorBG,
        nid_c);
    }
    else {
      *badBaliseMessageToDMI = kcg_false;
      *applyServiceBrake = kcg_false;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        passedBG_out,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
      *errorUnlinkedBG = kcg_false;
      *nid_errorBG = 0;
      *nid_c = 0;
    }
  }
  *incompatibleVersion = !compatibleVersion;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckBGConsistency_CheckBGConsistency_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

