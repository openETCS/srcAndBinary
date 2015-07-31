/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_BG_Management_Interfaces.h"

/* Interfaces::Output_To_BG_Management */
void Output_To_BG_Management_Interfaces(
  /* Interfaces::Output_To_BG_Management::End_Of_Mission_Procedure_Req */kcg_bool End_Of_Mission_Procedure_Req,
  /* Interfaces::Output_To_BG_Management::Clean_BG_List_SH_Area */kcg_bool Clean_BG_List_SH_Area,
  /* Interfaces::Output_To_BG_Management::MA_Req_To_RBC */kcg_bool MA_Req_To_RBC,
  /* Interfaces::Output_To_BG_Management::Request_For_SH_To_RBC */kcg_bool Request_For_SH_To_RBC,
  /* Interfaces::Output_To_BG_Management::Data_To_BG_Management */T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management)
{
  (*Data_To_BG_Management).EoM_Procedure_req = End_Of_Mission_Procedure_Req;
  (*Data_To_BG_Management).Clean_BG_List_SH_Area = Clean_BG_List_SH_Area;
  (*Data_To_BG_Management).MA_Req = MA_Req_To_RBC;
  (*Data_To_BG_Management).Req_for_SH_from_Driver = Request_For_SH_To_RBC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output_To_BG_Management_Interfaces.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

