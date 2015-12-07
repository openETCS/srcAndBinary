/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateSafeTrainLength_Provid.h"

/* ProvidePositionReport_Pkg::CalculateSafeTrainLength */
void CalculateSafeTrainLength_Provid(
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::safeTrainLength */ L_TRAININT *safeTrainLength,
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::minSafeRearEnd */ kcg_int *minSafeRearEnd)
{
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L20 */
  static kcg_int _L20;
  /* ProvidePositionReport_Pkg::CalculateSafeTrainLength::_L24 */
  static kcg_int _L24;
  
  /* 1 */ if ((*trainPosition).valid) {
    _L24 = (*trainPosition).minSafeFrontEndPosition - (*trainProps).l_train;
  }
  else {
    _L24 = cMinSafeRearEnd_ProvidePosition;
  }
  _L20 = _L24 - (*trainPosition).estimatedFrontEndPosition;
  /* 2 */ if (0 <= _L24) {
    *minSafeRearEnd = _L24;
  }
  else {
    *minSafeRearEnd = - _L24;
  }
  /* 2 */ if (0 <= _L20) {
    *safeTrainLength = _L20;
  }
  else {
    *safeTrainLength = - _L20;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateSafeTrainLength_Provid.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

