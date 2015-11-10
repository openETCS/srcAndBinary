/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception07RejectIfNoPendingNTC.h"

/* InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition */
void Exception07RejectIfNoPendingNTC(
  /* InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = inPendingNTCTransition;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception07RejectIfNoPendingNTC.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

