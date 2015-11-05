/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception06StoreOnboardIfPendin.h"

/* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition */
void Exception06StoreOnboardIfPendin(
  /* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception06StoreOnboardIfPendingNTCTransition::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  *outAcceptMessage = kcg_false;
  *outStoreInTransitionBuffer = inPendingNTCTransition;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception06StoreOnboardIfPendin.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

