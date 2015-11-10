/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainMoveDir_vs_refBG_Calculate.h"

/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG */
Q_DIRTRAIN trainMoveDir_vs_refBG_Calculate(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::refBG */ positionedBG_T_TrainPosition_Ty *refBG)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMoveDir_vs_refBG::direction */
  static Q_DIRTRAIN direction;
  
  /* 2 */ if (((*currentOdometry).motionDirection ==
      unknownDirection_Obu_BasicTypes) | !(*currentOdometry).valid |
    !(*refBG).valid | !(*refBG).infoFromPassing.valid |
    !(*refBG).infoFromPassing.BG_Header.valid |
    !(*refBG).infoFromPassing.BG_Header.bgPosition.valid) {
    direction = Q_DIRTRAIN_Unknown;
  }
  else /* 1 */ if ((*currentOdometry).motionDirection ==
    (*refBG).infoFromPassing.BG_Header.bgPosition.motionDirection) {
    direction = (*refBG).infoFromPassing.BG_Header.trainRunningDirectionToBG;
  }
  else {
    direction = /* 1 */
      invert_Q_DIRTRAIN_CalculateTrai(
        (*refBG).infoFromPassing.BG_Header.trainRunningDirectionToBG);
  }
  return direction;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trainMoveDir_vs_refBG_Calculate.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

