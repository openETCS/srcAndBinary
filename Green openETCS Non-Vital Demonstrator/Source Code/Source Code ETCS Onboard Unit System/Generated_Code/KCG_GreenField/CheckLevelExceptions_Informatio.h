/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _CheckLevelExceptions_Informati
#define _CheckLevelExceptions_Informati

#include "kcg_types.h"
#include "Exception01StoreOnboardIfPendin.h"
#include "Exception02StoreOnboardIfPendin.h"
#include "Exception03RejectIfPendingAckOf.h"
#include "Exception05RejectIfEmergencySto.h"
#include "Exception06StoreOnboardIfPendin.h"
#include "Exception07RejectIfNoPendingNTC.h"
#include "Exception09RejectIfNoL2L3Transi.h"
#include "Exception11RejectIfPendingTrans.h"
#include "Exception12RejectIfTextMessageA.h"
#include "Exception13RejectIfNotWithImmed.h"
#include "Exception04RejectIfSPPAndGradie.h"
#include "Exception0102StoreOnboardIfPend.h"
#include "Exception030405Reject_Informati.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions */
extern void CheckLevelExceptions_Informatio(
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inAction */ LevelDecisionTableActionKind_Da inAction,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inEmergencyBrakeActive */ kcg_bool inEmergencyBrakeActive,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::MACoverNotFullLength */ kcg_bool MACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outAccept */ kcg_bool *outAccept,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer);

#endif /* _CheckLevelExceptions_Informati */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckLevelExceptions_Informatio.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */

