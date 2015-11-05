/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception03RejectIfPendingAckOf.h"

/* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData */
void Exception03RejectIfPendingAckOf(
  /* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception03RejectIfPendingAckOfTrainData::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = !inPendingAckOfTrainData;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception03RejectIfPendingAckOf.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

