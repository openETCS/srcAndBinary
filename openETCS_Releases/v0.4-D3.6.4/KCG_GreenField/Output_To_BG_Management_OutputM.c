/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_BG_Management_OutputM.h"

/* OutputManagement::Output_To_BG_Management */
void Output_To_BG_Management_OutputM(
  /* OutputManagement::Output_To_BG_Management::Data_To_BG_Management_From_Mode */ T_Data_To_BG_Management_Level_A *Data_To_BG_Management_From_Mode,
  /* OutputManagement::Output_To_BG_Management::Connection_to_RBC_Requested */ kcg_bool Connection_to_RBC_Requested,
  /* OutputManagement::Output_To_BG_Management::PositionReportNeeded */ kcg_bool PositionReportNeeded,
  /* OutputManagement::Output_To_BG_Management::Data_To_BG_Management */ T_Data_To_BG_Management_Level_A *Data_To_BG_Management)
{
  kcg_copy_T_Data_To_BG_Managemen(
    Data_To_BG_Management,
    Data_To_BG_Management_From_Mode);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_BG_Management_OutputM.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

