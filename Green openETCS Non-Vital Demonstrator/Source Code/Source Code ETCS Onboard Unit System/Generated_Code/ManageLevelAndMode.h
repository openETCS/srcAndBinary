/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _ManageLevelAndMode_H_
#define _ManageLevelAndMode_H_

#include "kcg_types.h"
#include "Input.h"
#include "Output.h"
#include "CheckLevelAndMode.h"
#include "ManageModes.h"
#include "ManageLevels.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_Level_And_Mode_Types_Pkg /* ManageLevelAndMode::Valid_Mode_And_Level */ Valid_Mode_And_Level;
  DMI_ModesToDMI_T_DMI_Types_Pkg /* ManageLevelAndMode::Data_To_DMI */ Data_To_DMI;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* ManageLevelAndMode::Data_To_BG_Management */ Data_To_BG_Management;
  kcg_bool /* ManageLevelAndMode::Service_Brake_Command */ Service_Brake_Command;
  kcg_bool /* ManageLevelAndMode::EB_Requested */ EB_Requested;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ManageLevels /* 1 */ _1_Context_1;
  outC_ManageModes /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ManageLevelAndMode;

/* ===========  node initialization and cycle functions  =========== */
/* ManageLevelAndMode */
extern void ManageLevelAndMode(
  /* ManageLevelAndMode::Data_From_DMI */DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* ManageLevelAndMode::Data_From_Localisation */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* ManageLevelAndMode::Data_From_TIU */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* ManageLevelAndMode::Data_From_Track_Messages */T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* ManageLevelAndMode::Data_From_Track_Packets */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* ManageLevelAndMode::Data_From_Speed_and_Supervision */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* ManageLevelAndMode::Cab_In */T_Cab_Level_And_Mode_Types_Pkg Cab_In,
  /* ManageLevelAndMode::Continue_Shunting_Function_Active_In */kcg_bool Continue_Shunting_Function_Active_In,
  /* ManageLevelAndMode::driver_level_transition_In */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* ManageLevelAndMode::Error_BG_System_Version */kcg_bool Error_BG_System_Version,
  /* ManageLevelAndMode::Failure_Occured_In */kcg_bool Failure_Occured_In,
  /* ManageLevelAndMode::Interface_To_National_System_In */kcg_bool Interface_To_National_System_In,
  /* ManageLevelAndMode::Linking_Reaction_To_Trip */kcg_bool Linking_Reaction_To_Trip,
  /* ManageLevelAndMode::National_Trip_Order_In */kcg_bool National_Trip_Order_In,
  /* ManageLevelAndMode::OnBoard_Powered_In */kcg_bool OnBoard_Powered_In,
  /* ManageLevelAndMode::Stop_Shunting_Stored_In */kcg_bool Stop_Shunting_Stored_In,
  /* ManageLevelAndMode::Trip_Order_Given_By_Balise */kcg_bool Trip_Order_Given_By_Balise,
  /* ManageLevelAndMode::Valid_Train_Data_Stored_In */kcg_bool Valid_Train_Data_Stored_In,
  /* ManageLevelAndMode::ERTMS_capabilities_In */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  outC_ManageLevelAndMode *outC);

extern void ManageLevelAndMode_reset(outC_ManageLevelAndMode *outC);

#endif /* _ManageLevelAndMode_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageLevelAndMode.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */

