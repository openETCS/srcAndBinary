/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Messages_InputManagement.h"

/* InputManagement::Input_Messages */
void Input_Messages_InputManagement(
  /* InputManagement::Input_Messages::Data_From_Track_Messages */ T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* InputManagement::Input_Messages::Emergency_Stop_Message_Received */ kcg_bool *Emergency_Stop_Message_Received,
  /* InputManagement::Input_Messages::Shunting_Granted_By_RBC */ kcg_bool *Shunting_Granted_By_RBC,
  /* InputManagement::Input_Messages::RCB_Ack_And_EB_Revocked */ kcg_bool *RCB_Ack_And_EB_Revocked,
  /* InputManagement::Input_Messages::RBC_Authorized_SR */ kcg_bool *RBC_Authorized_SR)
{
  *Shunting_Granted_By_RBC = (*Data_From_Track_Messages).Mess_27 |
    (*Data_From_Track_Messages).Mess_28;
  *Emergency_Stop_Message_Received = (*Data_From_Track_Messages).Mess_15 |
    (*Data_From_Track_Messages).Mess_16;
  *RCB_Ack_And_EB_Revocked = (*Data_From_Track_Messages).Mess_6;
  *RBC_Authorized_SR = (*Data_From_Track_Messages).Mess_2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Messages_InputManagement.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

