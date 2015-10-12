/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_DMI_OutputManagement.h"

/* OutputManagement::Output_To_DMI */
void Output_To_DMI_OutputManagement(
  /* OutputManagement::Output_To_DMI::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_To_DMI::needsAckFromDriver */ kcg_bool needsAckFromDriver,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_From_Mode */ T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* OutputManagement::Output_To_DMI::isNewLevel */ kcg_bool isNewLevel,
  /* OutputManagement::Output_To_DMI::announcedLevelTransition */ T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* OutputManagement::Output_To_DMI::isAvailableForUse */ kcg_bool isAvailableForUse,
  /* OutputManagement::Output_To_DMI::announcedLevel */ T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevel,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *Data_To_DMI_Ack)
{
  /* OutputManagement::Output_To_DMI */
  static kcg_bool tmp1;
  /* OutputManagement::Output_To_DMI */
  static M_MODE tmp;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &(*announcedLevel).LevelTransition,
    announcedLevelTransition);
  (*announcedLevel).IsAvailableForUse = isAvailableForUse;
  (*Data_To_DMI_Ack).SH_Req_RefusedByRBC =
    (*Data_To_DMI_From_Mode).SH_Refused_By_RBC;
  (*Data_To_DMI_Ack).LevelNeedsAck = needsAckFromDriver;
  /* ck_Loc_Ack_LS_Req_To_Driver */ if ((*Data_To_DMI_From_Mode).Ack_LS) {
    tmp1 = kcg_true;
    tmp = M_MODE_Limited_Supervision;
  }
  else /* ck_anon_activ */ if ((*Data_To_DMI_From_Mode).Ack_OS) {
    tmp1 = kcg_true;
    tmp = M_MODE_On_Sight;
  }
  else /* ck_anon_activ */ if ((*Data_To_DMI_From_Mode).Ack_RV) {
    tmp1 = kcg_true;
    tmp = M_MODE_Reversing;
  }
  else /* ck_anon_activ */ if ((*Data_To_DMI_From_Mode).Ack_SH) {
    tmp1 = kcg_true;
    tmp = M_MODE_Shunting;
  }
  else /* ck_anon_activ */ if ((*Data_To_DMI_From_Mode).Ack_SN) {
    tmp1 = kcg_true;
    tmp = M_MODE_National_System;
  }
  else /* ck_anon_activ */ if ((*Data_To_DMI_From_Mode).Ack_SR) {
    tmp1 = kcg_true;
    tmp = M_MODE_Staff_Responsible;
  }
  else /* ck_anon_activ */ if ((*Data_To_DMI_From_Mode).Ack_TR) {
    tmp1 = kcg_true;
    tmp = M_MODE_Trip;
  }
  else /* ck_anon_activ */ if ((*Data_To_DMI_From_Mode).Ack_UN) {
    tmp1 = kcg_true;
    tmp = M_MODE_Unfitted;
  }
  else {
    tmp1 = needsAckFromDriver;
    tmp = M_MODE_Stand_By;
  }
  (*Data_To_DMI_Ack).valid = Level_Mode_Compatible & (tmp1 | isNewLevel |
      (*Data_To_DMI_From_Mode).SH_Refused_By_RBC);
  (*Data_To_DMI_Ack).whichMode = tmp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_DMI_OutputManagement.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

