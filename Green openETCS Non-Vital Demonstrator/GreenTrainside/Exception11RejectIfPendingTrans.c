/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception11RejectIfPendingTrans.h"

/* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition */
void Exception11RejectIfPendingTrans(
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inLevelTransitionInMessage */ kcg_bool inLevelTransitionInMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inPendingL1Transtion */ kcg_bool inPendingL1Transtion,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = !(inLevelTransitionInMessage | inPendingL1Transtion |
      inPendingL2L3Transition);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception11RejectIfPendingTrans.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

