/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapModeToTractionCutOff_output_.h"

/* output_to_TIU_API_Pkg::mapModeToTractionCutOff */
M_traction_cutoff_command_T_TIU mapModeToTractionCutOff_output_(
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::inModeLevel */ T_Mode_Level_Level_And_Mode_Typ *inModeLevel)
{
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::tractionCutOff */
  static M_traction_cutoff_command_T_TIU tractionCutOff;
  
  switch ((*inModeLevel).Mode) {
    case M_MODE_Full_Supervision :
      tractionCutOff = release_traction_cutoff_TIU_Typ;
      break;
    case M_MODE_Limited_Supervision :
      tractionCutOff = release_traction_cutoff_TIU_Typ;
      break;
    case M_MODE_National_System :
      tractionCutOff = release_traction_cutoff_TIU_Typ;
      break;
    case M_MODE_On_Sight :
      tractionCutOff = release_traction_cutoff_TIU_Typ;
      break;
    case M_MODE_Passive_Shunting :
      tractionCutOff = release_traction_cutoff_TIU_Typ;
      break;
    case M_MODE_Shunting :
      tractionCutOff = release_traction_cutoff_TIU_Typ;
      break;
    case M_MODE_Staff_Responsible :
      tractionCutOff = release_traction_cutoff_TIU_Typ;
      break;
    case M_MODE_Unfitted :
      tractionCutOff = release_traction_cutoff_TIU_Typ;
      break;
    case M_MODE_Stand_By :
      tractionCutOff = apply_traction_cutoff_TIU_Types;
      break;
    case M_MODE_No_Power :
      tractionCutOff = apply_traction_cutoff_TIU_Types;
      break;
    
    default :
      tractionCutOff = traction_cutoff_command_not_def;
  }
  return tractionCutOff;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapModeToTractionCutOff_output_.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

