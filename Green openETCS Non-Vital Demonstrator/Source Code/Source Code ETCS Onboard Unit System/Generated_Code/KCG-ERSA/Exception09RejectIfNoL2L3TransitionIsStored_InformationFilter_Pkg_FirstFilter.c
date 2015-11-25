/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored */
void Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored::inL2L3TransitionInTransitionBuffer */ kcg_bool inL2L3TransitionInTransitionBuffer,
  /* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception09RejectIfNoL2L3TransitionIsStored::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = inL2L3TransitionInTransitionBuffer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-25T14:46:12
*************************************************************$ */

