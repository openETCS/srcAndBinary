/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _CaseLinkingNotInUse_CheckBGCon
#define _CaseLinkingNotInUse_CheckBGCon

#include "kcg_types.h"
#include "CheckCompleteness_CheckBGConsis.h"
#include "BuildCheckedMessage_CheckBGCons.h"
#include "N_PIG2int_CheckBGConsistency_Pk.h"
#include "WriteDirection2PassedBG_CheckBG.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
extern void CaseLinkingNotInUse_CheckBGCons(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Typ *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ ReceivedMessage_T_Common_Types_ *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ kcg_bool *errorUnlinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG */ NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c */ NID_C *nid_c);

#endif /* _CaseLinkingNotInUse_CheckBGCon */
/* $**************** KCG Version 6.4 (build i21) ****************
** CaseLinkingNotInUse_CheckBGCons.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

