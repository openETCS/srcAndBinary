/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkingIsUsed_CalculateTrainPos.h"

#ifndef KCG_USER_DEFINED_INIT
void linkingIsUsed_init_CalculateTra(outC_linkingIsUsed_CalculateTra *outC)
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
void linkingIsUsed_reset_CalculateTr(outC_linkingIsUsed_CalculateTra *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
void linkingIsUsed_CalculateTrainPos(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::BGs */ positionedBGs_T_TrainPosition_T *BGs,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::recalculateBGs */ kcg_bool recalculateBGs,
  outC_linkingIsUsed_CalculateTra *outC)
{
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static positionedBG_T_TrainPosition_Ty tmp;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool _1_op_call;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed */
  static kcg_bool op_call;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::lastLinkedBG */
  static positionedBG_T_TrainPosition_Ty lastLinkedBG;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkingIsUsed::_L28 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L28;
  
  /* ck_recalculateBGs */ if (recalculateBGs) {
    /* 1 */
    indexOfLastBG_CalculateTrainPos(
      kcg_true,
      BGs,
      recalculateBGs,
      &outC->_L9,
      &outC->_L10,
      &_1_op_call);
    /* 1 */
    indexOfLastPassedBG_CalculateTr(
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
    outC->_L6 = cNoValidIndex_CalculateTrainPos;
    outC->_L9 = cNoValidIndex_CalculateTrainPos;
  }
  outC->init = kcg_false;
  if ((0 <= outC->_L9) & (outC->_L9 < 41)) {
    kcg_copy_positionedBG_T_TrainPo(&lastLinkedBG, &(*BGs)[outC->_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &lastLinkedBG,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  if ((0 <= outC->_L6) & (outC->_L6 < 41)) {
    kcg_copy_positionedBG_T_TrainPo(&tmp, &(*BGs)[outC->_L6]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPo(
      &tmp,
      (positionedBG_T_TrainPosition_Ty *) &cNoPositionedBG_CalculateTrainP);
  }
  /* 1 */ positionDerivedFromPassedBG_Cal(&(*currentOdometry).odo, &tmp, &_L28);
  outC->linkingIsUsed = !(_L28.nominal + _L28.d_min >
      lastLinkedBG.location.nominal + lastLinkedBG.location.d_max) &
    (outC->_L7 & (outC->_L6 < outC->_L9) & outC->_L10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** linkingIsUsed_CalculateTrainPos.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

