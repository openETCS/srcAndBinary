/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void linkingIsUsed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->linkingIsUsed = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L10 = kcg_true;
  outC->init = kcg_true;
  outC->_L9 = 0;
  outC->_L6 = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
void linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::recalculateBGs */ kcg_bool recalculateBGs,
  outC_linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */ positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */ kcg_bool _1_op_call;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */ kcg_bool op_call;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::lastLinkedBG */ positionedBG_T_TrainPosition_Types_Pck lastLinkedBG;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L28 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L28;
  
  /* ck_recalculateBGs */ if (recalculateBGs) {
    /* 1 */
    indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_true,
      BGs,
      recalculateBGs,
      &outC->_L9,
      &outC->_L10,
      &_1_op_call);
    /* 1 */
    indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_true,
      BGs,
      recalculateBGs,
      &outC->_L6,
      &outC->_L7,
      &op_call);
  }
  else if (outC->init) {
    outC->_L10 = kcg_false;
    outC->_L7 = kcg_false;
    outC->_L6 = cNoValidIndex_CalculateTrainPosition_Pkg;
    outC->_L9 = cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  outC->init = kcg_false;
  if ((0 <= outC->_L9) & (outC->_L9 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &lastLinkedBG,
      &(*BGs)[outC->_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &lastLinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  if ((0 <= outC->_L6) & (outC->_L6 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &(*BGs)[outC->_L6]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &(*currentOdometry).odo,
    &tmp,
    &_L28);
  outC->linkingIsUsed = !(_L28.nominal + _L28.d_min >
      lastLinkedBG.location.nominal + lastLinkedBG.location.d_max) &
    (outC->_L7 & (outC->_L6 < outC->_L9) & outC->_L10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

