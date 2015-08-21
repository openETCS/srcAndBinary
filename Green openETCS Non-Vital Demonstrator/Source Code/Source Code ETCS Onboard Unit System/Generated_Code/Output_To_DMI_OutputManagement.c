/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_DMI_OutputManagement.h"

/* OutputManagement::Output_To_DMI */
void Output_To_DMI_OutputManagement(
  /* OutputManagement::Output_To_DMI::Level_Mode_Compatible */kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_To_DMI::needsAckFromDriver */kcg_bool needsAckFromDriver,
  /* OutputManagement::Output_To_DMI::previous_level */M_LEVEL previous_level,
  /* OutputManagement::Output_To_DMI::next_level */M_LEVEL next_level,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_From_Mode */T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* OutputManagement::Output_To_DMI::Data_To_DMI */DMI_ModesToDMI_T_DMI_Types_Pkg *Data_To_DMI)
{
  static kcg_bool tmp1;
  static M_MODE tmp;
  
  (*Data_To_DMI).SH_Req_RefusedByRBC =
    (*Data_To_DMI_From_Mode).SH_Refused_By_RBC;
  (*Data_To_DMI).LevelNeedsAck = needsAckFromDriver;
  (*Data_To_DMI).newLevel = next_level;
  (*Data_To_DMI).previousLevel = previous_level;
  if ((*Data_To_DMI_From_Mode).Ack_LS) {
    tmp1 = kcg_true;
    tmp = M_MODE_Limited_Supervision;
  }
  else if ((*Data_To_DMI_From_Mode).Ack_OS) {
    tmp1 = kcg_true;
    tmp = M_MODE_On_Sight;
  }
  else if ((*Data_To_DMI_From_Mode).Ack_RV) {
    tmp1 = kcg_true;
    tmp = M_MODE_Reversing;
  }
  else if ((*Data_To_DMI_From_Mode).Ack_SH) {
    tmp1 = kcg_true;
    tmp = M_MODE_Shunting;
  }
  else if ((*Data_To_DMI_From_Mode).Ack_SN) {
    tmp1 = kcg_true;
    tmp = M_MODE_National_System;
  }
  else if ((*Data_To_DMI_From_Mode).Ack_SR) {
    tmp1 = kcg_true;
    tmp = M_MODE_Staff_Responsible;
  }
  else if ((*Data_To_DMI_From_Mode).Ack_TR) {
    tmp1 = kcg_true;
    tmp = M_MODE_Trip;
  }
  else if ((*Data_To_DMI_From_Mode).Ack_UN) {
    tmp1 = kcg_true;
    tmp = M_MODE_Unfitted;
  }
  else {
    tmp1 = needsAckFromDriver;
    tmp = M_MODE_Stand_By;
  }
  (*Data_To_DMI).valid = Level_Mode_Compatible & tmp1;
  (*Data_To_DMI).whichMode = tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output_To_DMI_OutputManagement.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

