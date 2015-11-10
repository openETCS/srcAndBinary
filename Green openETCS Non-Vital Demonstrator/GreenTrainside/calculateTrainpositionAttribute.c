/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainpositionAttribute.h"

/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes */
void calculateTrainpositionAttribute(
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPositionInfo */ trainPositionInfo_T_TrainPositi *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition)
{
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L243 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L243;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L266 */
  static kcg_bool _L266;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L366 */
  static LocWithInAcc_T_Obu_BasicTypes_P _L366;
  
  (*trainPosition).valid = (*trainPositionInfo).valid;
  (*trainPosition).timestamp = (*trainPositionInfo).timestamp;
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &(*trainPosition).trainPosition,
    &(*trainPositionInfo).trainPosition);
  kcg_copy_positionedBG_T_TrainPo(
    &(*trainPosition).LRBG,
    &(*trainPositionInfo).lastPassedLinkedBG);
  kcg_copy_positionedBG_T_TrainPo(
    &(*trainPosition).prvLRBG,
    &(*trainPositionInfo).prevPassedLinkedBG);
  (*trainPosition).linkingIsUsedOnboard =
    (*trainPositionInfo).linkingIsUsedOnboard;
  _L266 = !(*trainPositionInfo).lastPassedLinkedBG.valid;
  (*trainPosition).noCoordinateSystemHasBeenAssign = _L266 |
    (*trainPositionInfo).lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssign;
  /* 1 */
  add_2_Distances_BasicLocationFu(
    &(*trainPositionInfo).trainPosition,
    &(*trainProperties).d_baliseAntenna_2_frontend,
    &_L243);
  (*trainPosition).estimatedFrontEndPosition = _L243.nominal;
  (*trainPosition).minSafeFrontEndPosition = _L243.nominal + _L243.d_min;
  (*trainPosition).maxSafeFrontEndPostion = _L243.nominal + _L243.d_max;
  /* 1 */
  sub_2_distances_BasicLocationFu(
    &_L243,
    &(*trainProperties).d_frontend_2_rearend,
    &_L366);
  (*trainPosition).estimatedRearEndPosition = _L366.nominal;
  (*trainPosition).minSafeRearEndPosition = _L366.nominal + _L366.d_min;
  (*trainPosition).maxSafeRearEndPosition = _L366.nominal + _L366.d_max;
  (*trainPosition).trainPositionIsUnknown = _L266 | (/* nidC_nidBG_2_NIDLRBG */
      nidC_nidBG_2_NIDLRBG_CalculateT(
        (*trainPositionInfo).lastPassedLinkedBG.valid,
        (*trainPositionInfo).lastPassedLinkedBG.nid_c,
        (*trainPositionInfo).lastPassedLinkedBG.nid_bg) ==
      cNID_LRBG_unknown_BG_Types_Pkg);
  (*trainPosition).nominalOrReverseToLRBG = /* 1 */
    frontendToLRBG_CalculateTrainPo(
      &(*trainPositionInfo).lastPassedLinkedBG,
      trainPositionInfo,
      trainProperties);
  /* 1 */ if (_L266) {
    (*trainPosition).trainOrientationToLRBG = Q_DIRLRBG_Unknown;
  }
  else {
    (*trainPosition).trainOrientationToLRBG =
      (*trainPositionInfo).lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG;
  }
  (*trainPosition).trainRunningDirectionToLRBG = /* 1 */
    trainMoveDir_vs_refBG_Calculate(
      currentOdometry,
      &(*trainPositionInfo).lastPassedLinkedBG);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainpositionAttribute.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

