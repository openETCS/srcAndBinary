/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendBrakesToDMI_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sendBrakesToDMI_init_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_brakeCommand.valid = kcg_true;
  outC->rem_brakeCommand.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->rem_brakeCommand.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->dmi_iconRequest.valid = kcg_true;
  outC->dmi_iconRequest.system_clock = 0;
  outC->dmi_iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->dmi_iconRequest.DMI_m_icon_flashing_freq = 0.0;
  outC->dmi_iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->dmi_iconRequest.DMI_nid_icon_rank = 0;
  outC->dmi_iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->dmi_iconRequest.DMI_nid_area_rank = 0;
  outC->dmi_iconRequest.DMI_nid_icon_identifier = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendBrakesToDMI_reset_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::sendBrakesToDMI */
void sendBrakesToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */ Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::sendBrakesToDMI */ M_brake_signal_command_T_TIU_Types_Pkg tmp;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::applyBrake */ kcg_bool applyBrake;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::changeBrakeCommand */ kcg_bool changeBrakeCommand;
  
  /* last_init_ck_loc_brakeCommand */ if (outC->init) {
    outC->init = kcg_false;
    tmp = cInitBrakeCommand_manage_DMI_Output_Pkg.m_emergencybrake_cm;
  }
  else {
    tmp = outC->rem_brakeCommand.m_emergencybrake_cm;
  }
  changeBrakeCommand = (*brakeCommand).m_emergencybrake_cm != tmp;
  applyBrake = changeBrakeCommand & (apply_brake_TIU_Types_Pkg ==
      (*brakeCommand).m_emergencybrake_cm) & (*brakeCommand).valid;
  /* ck_applyBrake */ if (applyBrake) {
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->dmi_iconRequest,
      (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cIconRequestEB_manage_DMI_Output_Pkg);
    outC->dmi_iconRequest.system_clock = inSystemTime;
  }
  else {
    else_clock_IfBlock1 = (*brakeCommand).valid &
      ((*brakeCommand).m_emergencybrake_cm == release_brake_TIU_Types_Pkg) &
      changeBrakeCommand;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->dmi_iconRequest,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cIconClearEB_manage_DMI_Output_Pkg);
      outC->dmi_iconRequest.system_clock = inSystemTime;
    }
    else {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->dmi_iconRequest,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cEmptyIconRequest_manage_DMI_Output_Pkg);
    }
  }
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->rem_brakeCommand, brakeCommand);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendBrakesToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

