/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handleTraction_output_to_TIU_API_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void handleTraction_init_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  outC->init = kcg_true;
  outC->tractionCutOffStatus =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->outTrainCommands.valid = kcg_true;
  outC->outTrainCommands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->outTrainCommands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->outTrainCommands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->outTrainCommands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void handleTraction_reset_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* output_to_TIU_API_Pkg::handleTraction */
void handleTraction_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::handleTraction::in_train_commands */ Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::handleTraction::inModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  /* output_to_TIU_API_Pkg::handleTraction::tempTractionCutOffStatus */
  static M_traction_cutoff_command_T_TIU_Types_Pkg tempTractionCutOffStatus;
  /* output_to_TIU_API_Pkg::handleTraction::_L8 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L8;
  /* output_to_TIU_API_Pkg::handleTraction::_L11 */
  static kcg_bool _L11;
  
  tempTractionCutOffStatus = /* 1 */
    mapModeToTractionCutOff_output_to_TIU_API_Pkg(inModeLevel);
  /* last_init_ck_tractionCutOffStatus */ if (outC->init) {
    outC->init = kcg_false;
    _L8 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  }
  else {
    _L8 = outC->tractionCutOffStatus;
  }
  _L11 = _L8 != tempTractionCutOffStatus;
  /* 1 */ if (_L11) {
    outC->tractionCutOffStatus = tempTractionCutOffStatus;
  }
  else {
    outC->tractionCutOffStatus = _L8;
  }
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &outC->outTrainCommands,
    in_train_commands);
  outC->outTrainCommands.valid = (*in_train_commands).valid | _L11;
  outC->outTrainCommands.m_traction_cutoff_cm = outC->tractionCutOffStatus;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** handleTraction_output_to_TIU_API_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

