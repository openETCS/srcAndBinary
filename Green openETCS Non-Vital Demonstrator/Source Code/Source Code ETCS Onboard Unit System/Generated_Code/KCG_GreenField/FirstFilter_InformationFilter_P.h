/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _FirstFilter_InformationFilter_
#define _FirstFilter_InformationFilter_

#include "kcg_types.h"
#include "LevelFilter_InformationFilter_P.h"
#include "GetPacketId_InformationFilter_P.h"
#include "SetValidFlag_InformationFilter_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::FirstFilter */
extern void FirstFilter_InformationFilter_P(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::outMessage */ ReceivedMessage_T_Common_Types_ *outMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer);

#endif /* _FirstFilter_InformationFilter_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FirstFilter_InformationFilter_P.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

