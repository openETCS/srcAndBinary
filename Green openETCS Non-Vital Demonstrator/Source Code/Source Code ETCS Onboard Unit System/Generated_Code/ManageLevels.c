/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevels.h"

#ifndef KCG_USER_DEFINED_INIT
void ManageLevels_init(outC_ManageLevels *outC)
{
  outC->TripTrainRequested = kcg_true;
  outC->needsAckFromDriver = kcg_true;
  outC->serviceBrakeRequested = kcg_true;
  outC->connectionToRBCRequested = kcg_true;
  outC->positionReportNeeded = kcg_true;
  outC->levelIsNew = kcg_true;
  outC->isAvailableForUse = kcg_true;
  outC->announcedLevelTransition.is_set = kcg_true;
  outC->announcedLevelTransition.transition.level = M_LEVEL_Level_0;
  outC->announcedLevelTransition.transition.position = 0;
  outC->announcedLevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Le;
  outC->announcedLevelTransition.transition.immediateAck = kcg_true;
  outC->announcedLevelTransition.transition.AckLength = 0;
  outC->announcedLevelTransition.LRBG = 0;
  outC->announcedLevelTransition.referenceLocation = 0;
  outC->nextLevel = M_LEVEL_Level_0;
  /* 1 */ ManageAck_init_Acknowledgement(&outC->_2_Context_1);
  /* 1 */ BuildOutputToRBC_init_OutputToR(&outC->_1_Context_1);
  /* 1 */ SelectLevelTransition_init_Leve(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageLevels_reset(outC_ManageLevels *outC)
{
  /* 1 */ ManageAck_reset_Acknowledgement(&outC->_2_Context_1);
  /* 1 */ BuildOutputToRBC_reset_OutputTo(&outC->_1_Context_1);
  /* 1 */ SelectLevelTransition_reset_Lev(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ManageLevels */
void ManageLevels(
  /* ManageLevels::trainStandstill */ kcg_bool trainStandstill,
  /* ManageLevels::driverLevelTransition */ T_LevelTransition_Level_And_Mod *driverLevelTransition,
  /* ManageLevels::levelAck */ kcg_bool levelAck,
  /* ManageLevels::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* ManageLevels::ERTMScapabilities */ T_ERTMS_capabilities_Level_And_ *ERTMScapabilities,
  /* ManageLevels::DataFromTrackToLevel */ T_Data_From_Track_To_Level_Leve *DataFromTrackToLevel,
  /* ManageLevels::MemorizedLevelIn */ M_LEVEL MemorizedLevelIn,
  outC_ManageLevels *outC)
{
  /* 1 */
  SelectLevelTransition_LevelTran(
    MemorizedLevelIn,
    trainStandstill,
    driverLevelTransition,
    ERTMScapabilities,
    DataFromTrackToLevel,
    &outC->Context_1);
  kcg_copy_T_LevelTransition_Leve(
    &outC->announcedLevelTransition,
    &outC->Context_1.selected_level_transition);
  outC->isAvailableForUse = outC->Context_1.IsAvailableForUse;
  /* 1 */
  ProceedOnLevelChange_LevelChang(
    MemorizedLevelIn,
    &outC->announcedLevelTransition,
    trainPosition,
    DataFromTrackToLevel,
    &outC->nextLevel,
    &outC->levelIsNew,
    &outC->TripTrainRequested);
  /* 1 */
  BuildOutputToRBC_OutputToRBC(
    &outC->announcedLevelTransition,
    MemorizedLevelIn,
    outC->nextLevel,
    trainPosition,
    &outC->_1_Context_1);
  outC->connectionToRBCRequested =
    outC->_1_Context_1.Connection_to_RBC_Requested;
  outC->positionReportNeeded = outC->_1_Context_1.PositionReportNeeded;
  /* 1 */
  ManageAck_Acknowledgement(
    &outC->announcedLevelTransition,
    trainPosition,
    MemorizedLevelIn,
    levelAck,
    outC->levelIsNew,
    &outC->_2_Context_1);
  outC->needsAckFromDriver = outC->_2_Context_1.needsAckFromDriver;
  outC->serviceBrakeRequested = outC->_2_Context_1.service_brake;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ManageLevels.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

