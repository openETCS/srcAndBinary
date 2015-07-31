/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _Output_H_
#define _Output_H_

#include "kcg_types.h"
#include "Output_To_DMI_OutputManagement.h"
#include "Output_To_BG_Management_OutputManagement.h"
#include "Output_Mode_Level_To_Use_OutputManagement.h"

/* =====================  no input structure  ====================== */


/* Output */
extern void Output(
  /* Output::next_level */M_LEVEL next_level,
  /* Output::TripTrain */kcg_bool TripTrain,
  /* Output::previous_level */M_LEVEL previous_level,
  /* Output::needsAckFromDriver */kcg_bool needsAckFromDriver,
  /* Output::announced_level */T_LevelTransition_Level_And_Mode_Types_Pkg *announced_level,
  /* Output::announce_driver_selection */kcg_bool announce_driver_selection,
  /* Output::service_brake_from_level */kcg_bool service_brake_from_level,
  /* Output::currentMode */T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* Output::EB_Requested_From_Mode */kcg_bool EB_Requested_From_Mode,
  /* Output::Service_Brake_Command_From_Mode */kcg_bool Service_Brake_Command_From_Mode,
  /* Output::Data_To_DMI_From_Mode */T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* Output::Data_To_BG_Management_From_Mode */T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management_From_Mode,
  /* Output::Level_Mode_Compatible */kcg_bool Level_Mode_Compatible,
  /* Output::Valid_Mode_And_Level */T_Mode_Level_Level_And_Mode_Types_Pkg *Valid_Mode_And_Level,
  /* Output::Data_To_DMI */DMI_ModesToDMI_T_DMI_Types_Pkg *Data_To_DMI,
  /* Output::Data_To_BG_Management */T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management,
  /* Output::Service_Brake_Command */kcg_bool *Service_Brake_Command,
  /* Output::EB_Requested */kcg_bool *EB_Requested);

#endif /* _Output_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

