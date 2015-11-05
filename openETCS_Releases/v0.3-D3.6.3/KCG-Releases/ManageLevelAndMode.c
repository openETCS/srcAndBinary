/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevelAndMode.h"

#ifndef KCG_USER_DEFINED_INIT
void ManageLevelAndMode_init(outC_ManageLevelAndMode *outC)
{
  outC->Service_Brake_Command = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->Data_To_DMI_Ack.valid = kcg_true;
  outC->Data_To_DMI_Ack.whichMode = M_MODE_Full_Supervision;
  outC->Data_To_DMI_Ack.SH_Req_RefusedByRBC = kcg_true;
  outC->Data_To_DMI_Ack.LevelNeedsAck = kcg_true;
  outC->announcedLevel.LevelTransition.is_set = kcg_true;
  outC->announcedLevel.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->announcedLevel.LevelTransition.transition.position = 0;
  outC->announcedLevel.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->announcedLevel.LevelTransition.transition.immediateAck = kcg_true;
  outC->announcedLevel.LevelTransition.transition.AckLength = 0;
  outC->announcedLevel.LevelTransition.LRBG = 0;
  outC->announcedLevel.LevelTransition.referenceLocation = 0;
  outC->announcedLevel.IsAvailableForUse = kcg_true;
  outC->Data_To_BG_Management.EoM_Procedure_req = kcg_true;
  outC->Data_To_BG_Management.Clean_BG_List_SH_Area = kcg_true;
  outC->Data_To_BG_Management.MA_Req = kcg_true;
  outC->Data_To_BG_Management.Req_for_SH_from_Driver = kcg_true;
  outC->Data_To_BG_Management.Connection_to_RBC_req = kcg_true;
  outC->Data_To_BG_Management.Position_Repport_Needed = kcg_true;
  outC->Compatible_Mode_And_Level.compatibleModeAndLevel = kcg_true;
  outC->Compatible_Mode_And_Level.level = M_LEVEL_Level_0;
  outC->Compatible_Mode_And_Level.newLevel = kcg_true;
  outC->Compatible_Mode_And_Level.Mode = M_MODE_Full_Supervision;
  outC->Compatible_Mode_And_Level.newMode = kcg_true;
  /* 1 */ Output_init(&outC->_2_Context_1);
  /* 1 */ ManageModes_init(&outC->_1_Context_1);
  /* 1 */ ManageLevels_init(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageLevelAndMode_reset(outC_ManageLevelAndMode *outC)
{
  /* 1 */ Output_reset(&outC->_2_Context_1);
  /* 1 */ ManageModes_reset(&outC->_1_Context_1);
  /* 1 */ ManageLevels_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ManageLevelAndMode */
void ManageLevelAndMode(
  /* ManageLevelAndMode::Data_From_DMI */ DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* ManageLevelAndMode::Data_From_Localisation */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* ManageLevelAndMode::Data_From_TIU */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* ManageLevelAndMode::Data_From_Track_Messages */ T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* ManageLevelAndMode::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* ManageLevelAndMode::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* ManageLevelAndMode::Cab_In */ cab_ID_T_TIU_Types_Pkg Cab_In,
  /* ManageLevelAndMode::driver_level_transition_In */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* ManageLevelAndMode::ERTMS_capabilities_In */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* ManageLevelAndMode::Data_from_Track_MASSPGradient */ T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_from_Track_MASSPGradient,
  /* ManageLevelAndMode::Data_From_F2_Functions */ T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* ManageLevelAndMode::Data_From_STM */ T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* ManageLevelAndMode::MemorizedLevelIn */ M_LEVEL MemorizedLevelIn,
  outC_ManageLevelAndMode *outC)
{
  /* ManageLevelAndMode::_L25 */
  static kcg_bool _L25;
  /* ManageLevelAndMode::_L28 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L28;
  /* ManageLevelAndMode::_L29 */
  static kcg_bool _L29;
  /* ManageLevelAndMode::_L30 */
  static trainPosition_T_TrainPosition_Types_Pck _L30;
  /* ManageLevelAndMode::_L33 */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _L33;
  /* ManageLevelAndMode::_L37 */
  static cab_ID_T_TIU_Types_Pkg _L37;
  /* ManageLevelAndMode::_L40 */
  static T_Data_From_DMI_Level_And_Mode_Types_Pkg _L40;
  /* ManageLevelAndMode::_L41 */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _L41;
  /* ManageLevelAndMode::_L42 */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _L42;
  /* ManageLevelAndMode::_L43 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L43;
  /* ManageLevelAndMode::_L44 */
  static T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg _L44;
  /* ManageLevelAndMode::_L94 */
  static T_Data_From_STM_Level_And_Mode_Types_Pkg _L94;
  /* ManageLevelAndMode::_L95 */
  static T_Data_From_F2_functions_Level_And_Mode_Types_Pkg _L95;
  /* ManageLevelAndMode::_L96 */
  static T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg _L96;
  /* ManageLevelAndMode::_L108 */
  static M_LEVEL _L108;
  
  /* 1 */
  Input(
    Data_From_DMI,
    Data_From_TIU,
    Data_From_Track_Messages,
    Data_From_Track_Packets,
    Data_From_STM,
    Data_From_Localisation,
    Data_From_Speed_and_Supervision,
    Data_From_F2_Functions,
    Cab_In,
    driver_level_transition_In,
    ERTMS_capabilities_In,
    Data_from_Track_MASSPGradient,
    MemorizedLevelIn,
    &_L25,
    &_L28,
    &_L29,
    &_L30,
    &_L33,
    &_L96,
    &_L108,
    &_L37,
    &_L40,
    &_L95,
    &_L41,
    &_L42,
    &_L94,
    &_L43,
    &_L44);
  /* 1 */
  ManageLevels(_L25, &_L28, _L29, &_L30, &_L33, &_L96, _L108, &outC->Context_1);
  /* 1 */
  ManageModes(
    outC->Context_1.nextLevel,
    _L37,
    &_L40,
    &_L95,
    &_L41,
    &_L42,
    &_L94,
    &_L43,
    &_L44,
    outC->Context_1.TripTrainRequested,
    &outC->_1_Context_1);
  /* 1 */
  Output(
    outC->Context_1.nextLevel,
    outC->Context_1.needsAckFromDriver,
    &outC->Context_1.announcedLevelTransition,
    outC->Context_1.serviceBrakeRequested,
    outC->Context_1.connectionToRBCRequested,
    outC->Context_1.positionReportNeeded,
    outC->Context_1.levelIsNew,
    outC->Context_1.isAvailableForUse,
    outC->_1_Context_1.currentMode,
    outC->_1_Context_1.EB_Requested,
    outC->_1_Context_1.Service_Brake_Command,
    &outC->_1_Context_1.Data_To_DMI,
    &outC->_1_Context_1.Data_To_BG_Management,
    /* 1 */
    CheckLevelAndMode(
      outC->Context_1.nextLevel,
      outC->_1_Context_1.currentMode),
    &outC->_2_Context_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->Compatible_Mode_And_Level,
    &outC->_2_Context_1.Compatible_Mode_And_Level);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &outC->_2_Context_1.Data_To_BG_Management);
  outC->Service_Brake_Command = outC->_2_Context_1.Service_Brake_Command;
  outC->EB_Requested = outC->_2_Context_1.EB_Requested;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel,
    &outC->_2_Context_1.announcedLevel);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI_Ack,
    &outC->_2_Context_1.Data_To_DMI_Ack);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ManageLevelAndMode.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

