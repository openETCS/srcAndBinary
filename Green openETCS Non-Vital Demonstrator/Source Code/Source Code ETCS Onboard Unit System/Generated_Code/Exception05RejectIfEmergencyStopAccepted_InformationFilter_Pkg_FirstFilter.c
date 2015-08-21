/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted */
void Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception05RejectIfEmergencyStopAccepted::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = !inEmergencyStopAccepted;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

