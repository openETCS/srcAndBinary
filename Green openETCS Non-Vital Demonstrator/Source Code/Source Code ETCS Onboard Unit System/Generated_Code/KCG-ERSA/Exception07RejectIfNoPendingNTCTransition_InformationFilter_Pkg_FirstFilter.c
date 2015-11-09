/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception07RejectIfNoPendingNTCTransition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition */
void Exception07RejectIfNoPendingNTCTransition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception07RejectIfNoPendingNTCTransition::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = inPendingNTCTransition;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception07RejectIfNoPendingNTCTransition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

