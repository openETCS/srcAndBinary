/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _LevelFilter_InformationFilter_
#define _LevelFilter_InformationFilter_

#include "kcg_types.h"
#include "MapPacketIdToRow_InformationFil.h"
#include "MapLevelToColumn_InformationFil.h"
#include "CheckLevelExceptions_Informatio.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::LevelFilter */
extern void LevelFilter_InformationFilter_P(
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketOrigin */ MsgSource_T_Common_Types_Pkg inPacketOrigin,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketId */ kcg_int inPacketId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outPacketAccept */ kcg_bool *outPacketAccept);

#endif /* _LevelFilter_InformationFilter_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** LevelFilter_InformationFilter_P.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

