/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "combineForLevelChange_xdebugSupport_Pkg.h"

void combineForLevelChange_reset_xdebugSupport_Pkg(
  outC_combineForLevelChange_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* xdebugSupport_Pkg::combineForLevelChange */
void combineForLevelChange_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::combineForLevelChange::actualMessage */ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::combineForLevelChange::ModeLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* xdebugSupport_Pkg::combineForLevelChange::transitionPositionPassed */kcg_bool transitionPositionPassed,
  /* xdebugSupport_Pkg::combineForLevelChange::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_combineForLevelChange_xdebugSupport_Pkg *outC)
{
  static M_LEVEL tmp;
  /* xdebugSupport_Pkg::combineForLevelChange::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* xdebugSupport_Pkg::combineForLevelChange::LRBGpositionNeeded */
  static kcg_bool last_LRBGpositionNeeded;
  /* xdebugSupport_Pkg::combineForLevelChange::infoForLevelTransition */
  static T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg last_infoForLevelTransition;
  
  if (outC->init) {
    last_LRBGpositionNeeded = kcg_true;
    kcg_copy_T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg(
      &last_infoForLevelTransition,
      (T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg *)
        &C_NoTrackLevelTransition_Level_And_Mode_Types_Pkg);
  }
  else {
    last_LRBGpositionNeeded = outC->LRBGpositionNeeded;
    kcg_copy_T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg(
      &last_infoForLevelTransition,
      &outC->forLevelManagement);
  }
  if ((*actualMessage).valid) {
    /* dataForLevelTransition */
    dataForLevelTransition_xdebugSupport_Pkg(
      actualMessage,
      &last_infoForLevelTransition,
      trainPosition,
      last_LRBGpositionNeeded,
      &outC->forLevelManagement,
      &outC->LRBGpositionNeeded);
  }
  else {
    if (outC->init) {
      tmp = M_LEVEL_Level_0;
    }
    else {
      tmp = outC->rem_level;
    }
    else_clock_IfBlock1 = ((*ModeLevel).level != tmp) |
      transitionPositionPassed;
    if (else_clock_IfBlock1) {
      outC->LRBGpositionNeeded = kcg_false;
      kcg_copy_T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg(
        &outC->forLevelManagement,
        (T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg *)
          &C_NoTrackLevelTransition_Level_And_Mode_Types_Pkg);
    }
    else {
      kcg_copy_T_Data_From_TrackForLevelChange_Level_And_Mode_Types_Pkg(
        &outC->forLevelManagement,
        &last_infoForLevelTransition);
      outC->LRBGpositionNeeded = last_LRBGpositionNeeded;
    }
  }
  outC->init = kcg_false;
  outC->rem_level = (*ModeLevel).level;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** combineForLevelChange_xdebugSupport_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

