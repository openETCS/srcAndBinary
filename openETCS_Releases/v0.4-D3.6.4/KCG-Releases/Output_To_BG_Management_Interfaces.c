/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_BG_Management_Interfaces.h"

/* Interfaces::Output_To_BG_Management */
void Output_To_BG_Management_Interfaces(
  /* Interfaces::Output_To_BG_Management::End_Of_Mission_Procedure_Req */ kcg_bool End_Of_Mission_Procedure_Req,
  /* Interfaces::Output_To_BG_Management::Clean_BG_List_SH_Area */ kcg_bool Clean_BG_List_SH_Area,
  /* Interfaces::Output_To_BG_Management::MA_Req_To_RBC */ kcg_bool MA_Req_To_RBC,
  /* Interfaces::Output_To_BG_Management::Request_For_SH_To_RBC */ kcg_bool Request_For_SH_To_RBC,
  /* Interfaces::Output_To_BG_Management::Data_To_BG_Management */ T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management)
{
  (*Data_To_BG_Management).EoM_Procedure_req = End_Of_Mission_Procedure_Req;
  (*Data_To_BG_Management).Clean_BG_List_SH_Area = Clean_BG_List_SH_Area;
  (*Data_To_BG_Management).MA_Req = MA_Req_To_RBC;
  (*Data_To_BG_Management).Req_for_SH_from_Driver = Request_For_SH_To_RBC;
  (*Data_To_BG_Management).Connection_to_RBC_req = kcg_false;
  (*Data_To_BG_Management).Position_Repport_Needed = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_BG_Management_Interfaces.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

