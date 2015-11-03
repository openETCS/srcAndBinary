/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */
#ifndef _CheckBGConsistency_CheckBGCons
#define _CheckBGConsistency_CheckBGCons

#include "kcg_types.h"
#include "CaseLinkingNotInUse_CheckBGCons.h"
#include "CaseLinkingInUse_CheckBGConsist.h"
#include "CheckMode_CheckBGConsistency_Pk.h"
#include "CheckMVersion_CheckBGConsistenc.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckBGConsistency_Pkg::CheckBGConsistency */
extern void CheckBGConsistency_CheckBGConsi(
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
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_c */ NID_C *nid_c);

#endif /* _CheckBGConsistency_CheckBGCons */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckBGConsistency_CheckBGConsi.h
** Generation date: 2015-11-03T13:50:12
*************************************************************$ */

