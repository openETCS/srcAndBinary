/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToShunting_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToShunting_init_Conditions(outC_ToShunting_Conditions *outC)
{
  outC->Condition5 = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Condition23 = kcg_true;
  outC->Condition50 = kcg_true;
  outC->Condition51 = kcg_true;
  outC->Condition61 = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->SH_refused_By_RBC_To_DMI = kcg_true;
  /* 1 */ Procedure_SH_Ordered_By_Track_init_Procedures(&outC->_1_Context_1);
  /* 1 */ Procedure_SH_Initiated_By_Driver_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToShunting_reset_Conditions(outC_ToShunting_Conditions *outC)
{
  /* 1 */ Procedure_SH_Ordered_By_Track_reset_Procedures(&outC->_1_Context_1);
  /* 1 */ Procedure_SH_Initiated_By_Driver_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToShunting */
void ToShunting_Conditions(
  /* Conditions::ToShunting::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToShunting::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Conditions::ToShunting::Desk_Open */ kcg_bool Desk_Open,
  /* Conditions::ToShunting::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Conditions::ToShunting::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Conditions::ToShunting::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Conditions::ToShunting::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Conditions::ToShunting::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Conditions::ToShunting::Stop_Shunting_Stored */ kcg_bool Stop_Shunting_Stored,
  /* Conditions::ToShunting::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Conditions::ToShunting::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Conditions::ToShunting::Train_Standstill */ kcg_bool Train_Standstill,
  outC_ToShunting_Conditions *outC)
{
  outC->Condition23 = Desk_Open & !Stop_Shunting_Stored;
  /* 1 */
  Procedure_SH_Initiated_By_Driver_Procedures(
    Current_Level,
    Current_Mode,
    Driver_Req_SH,
    On_Going_Mission,
    Shunting_Granted_By_RBC,
    Train_Standstill,
    &outC->Context_1);
  outC->Condition5 = outC->Context_1.Condition5;
  outC->Condition6 = outC->Context_1.Condition6;
  outC->Clean_BG_List_SH_Area = outC->Context_1.Clean_BG_List_SH_Area;
  outC->End_Of_Mission_Procedure_Req =
    outC->Context_1.End_Of_Mission_Procedure_Req;
  outC->Request_For_SH_To_RBC = outC->Context_1.Request_For_SH_To_RBC;
  outC->SH_refused_By_RBC_To_DMI = outC->Context_1.SH_Refused_By_RBC_To_DMI;
  /* 1 */
  Procedure_SH_Ordered_By_Track_Procedures(
    Current_Mode,
    Driver_Ack_SH,
    Mode_Profile_On_Board,
    Train_Position,
    Train_Speed,
    &outC->_1_Context_1);
  outC->Condition50 = outC->_1_Context_1.Condition50;
  outC->Condition51 = outC->_1_Context_1.Condition51;
  outC->Condition61 = outC->_1_Context_1.Condition61;
  outC->Ack_SH_Req_To_Driver = outC->_1_Context_1.Ack_SH_Req_To_Driver;
  outC->Service_Brake_Command = outC->_1_Context_1.Service_Brake_Command;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToShunting_Conditions.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

