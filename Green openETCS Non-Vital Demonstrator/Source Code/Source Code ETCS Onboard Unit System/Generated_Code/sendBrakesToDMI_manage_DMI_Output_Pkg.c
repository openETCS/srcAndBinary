/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendBrakesToDMI_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendBrakesToDMI */
void sendBrakesToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */ Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::dmi_iconRequest */ DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_iconRequest)
{
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::applyBrake */
  static kcg_bool applyBrake;
  
  applyBrake = (apply_brake_TIU_Types_Pkg ==
      (*brakeCommand).m_emergencybrake_cm) & (*brakeCommand).valid;
  /* ck_applyBrake */ if (applyBrake) {
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      dmi_iconRequest,
      (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cIconRequestEB_manage_DMI_Output_Pkg);
    (*dmi_iconRequest).system_clock = inSystemTime;
  }
  else {
    else_clock_IfBlock1 = (*brakeCommand).valid &
      ((*brakeCommand).m_emergencybrake_cm == release_brake_TIU_Types_Pkg);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        dmi_iconRequest,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cIconClearEB_manage_DMI_Output_Pkg);
      (*dmi_iconRequest).system_clock = inSystemTime;
    }
    else {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        dmi_iconRequest,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cEmptyIconRequest_manage_DMI_Output_Pkg);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendBrakesToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

