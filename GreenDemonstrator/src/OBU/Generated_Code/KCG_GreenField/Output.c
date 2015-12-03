/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output.h"

#ifndef KCG_USER_DEFINED_INIT
void Output_init(outC_Output *outC)
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
    M_TransitionType_Conditional_Le;
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
  /* 1 */ Output_Mode_Level_To_Use_init_O(&outC->_1_Context_1);
  /* 1 */ Output_To_DMI_init_OutputManage(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_reset(outC_Output *outC)
{
  /* 1 */ Output_Mode_Level_To_Use_reset_(&outC->_1_Context_1);
  /* 1 */ Output_To_DMI_reset_OutputManag(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Output */
void Output(
  /* Output::next_level */ M_LEVEL next_level,
  /* Output::needsAckFromDriver */ kcg_bool needsAckFromDriver,
  /* Output::announcedLevelTransition */ T_LevelTransition_Level_And_Mod *announcedLevelTransition,
  /* Output::service_brake_from_level */ kcg_bool service_brake_from_level,
  /* Output::Connection_to_RBC_Requested */ kcg_bool Connection_to_RBC_Requested,
  /* Output::PositionReportNeeded */ kcg_bool PositionReportNeeded,
  /* Output::isNewLevel */ kcg_bool isNewLevel,
  /* Output::isAvailableForUse */ kcg_bool isAvailableForUse,
  /* Output::currentMode */ T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* Output::EB_Requested_From_Mode */ kcg_bool EB_Requested_From_Mode,
  /* Output::Service_Brake_Command_From_Mode */ kcg_bool Service_Brake_Command_From_Mode,
  /* Output::Data_To_DMI_From_Mode */ T_Data_To_DMI_Level_And_Mode_Ty *Data_To_DMI_From_Mode,
  /* Output::Data_To_BG_Management_From_Mode */ T_Data_To_BG_Management_Level_A *Data_To_BG_Management_From_Mode,
  /* Output::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  outC_Output *outC)
{
  outC->EB_Requested = EB_Requested_From_Mode;
  /* 1 */
  Output_To_DMI_OutputManagement(
    Level_Mode_Compatible,
    needsAckFromDriver,
    Data_To_DMI_From_Mode,
    announcedLevelTransition,
    isAvailableForUse,
    &outC->Context_1);
  kcg_copy_T_AnnouncedLevel_Level(
    &outC->announcedLevel,
    &outC->Context_1.announcedLevel);
  kcg_copy_T_AcknoledgementReques(
    &outC->Data_To_DMI_Ack,
    &outC->Context_1.Data_To_DMI_Ack);
  /* 1 */
  Output_To_BG_Management_OutputM(
    Data_To_BG_Management_From_Mode,
    Connection_to_RBC_Requested,
    PositionReportNeeded,
    &outC->Data_To_BG_Management);
  /* 1 */
  Output_Mode_Level_To_Use_Output(
    next_level,
    currentMode,
    Level_Mode_Compatible,
    isNewLevel,
    &outC->_1_Context_1);
  kcg_copy_T_Mode_Level_Level_And(
    &outC->Compatible_Mode_And_Level,
    &outC->_1_Context_1.Compatible_Mode_And_Level);
  outC->Service_Brake_Command = service_brake_from_level |
    Service_Brake_Command_From_Mode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output.c
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

