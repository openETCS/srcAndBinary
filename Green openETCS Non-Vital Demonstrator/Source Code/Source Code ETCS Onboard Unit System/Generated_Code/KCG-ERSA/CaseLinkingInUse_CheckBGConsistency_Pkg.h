/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:08
*************************************************************$ */
#ifndef _CaseLinkingInUse_CheckBGConsistency_Pkg_H_
#define _CaseLinkingInUse_CheckBGConsistency_Pkg_H_

#include "kcg_types.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"
#include "IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckBGConsistency_Pkg::CaseLinkingInUse */
extern void CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */ kcg_bool *errorLinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG */ NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c */ NID_C *nid_c);

#endif /* _CaseLinkingInUse_CheckBGConsistency_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CaseLinkingInUse_CheckBGConsistency_Pkg.h
** Generation date: 2015-11-25T14:46:08
*************************************************************$ */

