/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:52
*************************************************************$ */
#ifndef _CaseLinkingInUse_CheckBGConsis
#define _CaseLinkingInUse_CheckBGConsis

#include "kcg_types.h"
#include "CheckCompleteness_CheckBGConsis.h"
#include "BuildCheckedMessage_CheckBGCons.h"
#include "N_PIG2int_CheckBGConsistency_Pk.h"
#include "WriteDirection2PassedBG_CheckBG.h"
#include "IsBG_announced_CheckBGConsisten.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckBGConsistency_Pkg::CaseLinkingInUse */
extern void CaseLinkingInUse_CheckBGConsist(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */ positionedBGs_T_TrainPosition_T *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Typ *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ ReceivedMessage_T_Common_Types_ *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */ kcg_bool *errorLinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG */ NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c */ NID_C *nid_c);

#endif /* _CaseLinkingInUse_CheckBGConsis */
/* $**************** KCG Version 6.4 (build i21) ****************
** CaseLinkingInUse_CheckBGConsist.h
** Generation date: 2015-11-12T17:51:52
*************************************************************$ */

