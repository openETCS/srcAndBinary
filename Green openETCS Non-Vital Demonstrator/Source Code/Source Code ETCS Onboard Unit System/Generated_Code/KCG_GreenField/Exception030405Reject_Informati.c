/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception030405Reject_Informati.h"

/* InformationFilter_Pkg::FirstFilter::Exception030405Reject */
void Exception030405Reject_Informati(
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L5 */
  static kcg_bool _L5;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L6 */
  static kcg_bool _L6;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L3 */
  static kcg_bool _L3;
  /* InformationFilter_Pkg::FirstFilter::Exception030405Reject::_L1 */
  static kcg_bool _L1;
  
  *outStoreInTransitionBuffer = kcg_false;
  /* 1 */ Exception03RejectIfPendingAckOf(inPendingAckOfTrainData, &_L1, &_L3);
  /* 1 */
  Exception04RejectIfSPPAndGradie(
    inSPPAndGradientOnBoard,
    inMACoverNotFullLength,
    &_L3,
    &_L5);
  /* 1 */ Exception05RejectIfEmergencySto(inEmergencyStopAccepted, &_L5, &_L6);
  *outAcceptMessage = _L1 | _L3 | _L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception030405Reject_Informati.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

