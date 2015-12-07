/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception0102StoreOnboardIfPend.h"

/* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition */
void Exception0102StoreOnboardIfPend(
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::inPendingL1L2Transition */ kcg_bool inPendingL1L2Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L3 */
  static kcg_bool _L3;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L4 */
  static kcg_bool _L4;
  /* InformationFilter_Pkg::FirstFilter::Exception0102StoreOnboardIfPendingTransition::_L2 */
  static kcg_bool _L2;
  
  *outAcceptMessage = kcg_false;
  /* 1 */ Exception01StoreOnboardIfPendin(inPendingL1Transition, &_L3, &_L2);
  /* 1 */ Exception02StoreOnboardIfPendin(inPendingL1L2Transition, &_L3, &_L4);
  *outStoreInTransitionBuffer = _L2 | _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Exception0102StoreOnboardIfPend.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

