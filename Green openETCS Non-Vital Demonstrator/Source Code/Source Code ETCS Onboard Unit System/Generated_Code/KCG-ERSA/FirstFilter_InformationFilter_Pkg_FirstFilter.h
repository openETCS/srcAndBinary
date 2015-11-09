/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */
#ifndef _FirstFilter_InformationFilter_Pkg_FirstFilter_H_
#define _FirstFilter_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "LevelFilter_InformationFilter_Pkg_FirstFilter.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"

/* =====================  no input structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::FirstFilter */
extern void FirstFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inSPPAndGradientOnBoard */kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMACoverNotFullLength */kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::outMessage */ReceivedMessage_T_Common_Types_Pkg *outMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer);

#endif /* _FirstFilter_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FirstFilter_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-11-09T11:52:21
*************************************************************$ */

