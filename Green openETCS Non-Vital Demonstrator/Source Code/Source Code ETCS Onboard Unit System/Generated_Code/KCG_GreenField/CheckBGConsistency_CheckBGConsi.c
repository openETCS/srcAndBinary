/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckBGConsistency_CheckBGConsi.h"

/* CheckBGConsistency_Pkg::CheckBGConsistency */
void CheckBGConsistency_CheckBGConsi(
  /* CheckBGConsistency_Pkg::CheckBGConsistency::storedBGs */ positionedBGs_T_TrainPosition_T *storedBGs,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::mMode */ M_MODE mMode,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trackSide_ForCheck */ TrackSide_ForCheck_T_Common_Typ *trackSide_ForCheck,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainVersion */ M_VERSION trainVersion,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */ ReceivedMessage_T_Common_Types_ *passedBG_out,
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
  
  startTheCheck = /* 1 */ CheckMode_CheckBGConsistency_Pk(mMode) &
    (*trackSide_ForCheck).valid;
  /* 1 */
  CheckMVersion_CheckBGConsistenc(
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
    CaseLinkingInUse_CheckBGConsist(
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
      CaseLinkingNotInUse_CheckBGCons(
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
      kcg_copy_ReceivedMessage_T_Comm(
        passedBG_out,
        (ReceivedMessage_T_Common_Types_ *) &cRecivedMesg_PlaceHolder_CheckB);
      *errorUnlinkedBG = kcg_false;
      *nid_errorBG = 0;
      *nid_c = 0;
    }
  }
  *incompatibleVersion = !compatibleVersion;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckBGConsistency_CheckBGConsi.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

