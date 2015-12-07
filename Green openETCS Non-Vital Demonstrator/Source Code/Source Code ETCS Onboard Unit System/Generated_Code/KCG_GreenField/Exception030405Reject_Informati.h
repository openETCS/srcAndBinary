/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */
#ifndef _Exception030405Reject_Informat
#define _Exception030405Reject_Informat

#include "kcg_types.h"
#include "Exception03RejectIfPendingAckOf.h"
#include "Exception05RejectIfEmergencySto.h"
#include "Exception04RejectIfSPPAndGradie.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::Exception030405Reject */
extern void Exception030405Reject_Informati(
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer);

#endif /* _Exception030405Reject_Informat */
/* $**************** KCG Version 6.4 (build i21) ****************
** Exception030405Reject_Informati.h
** Generation date: 2015-12-07T14:50:17
*************************************************************$ */

