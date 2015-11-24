/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_Mode_Level_To_Use_OutputManagement.h"

#ifndef KCG_USER_DEFINED_INIT
void Output_Mode_Level_To_Use_init_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC)
{
  outC->init = kcg_true;
  outC->rem_currentMode = NP_Level_And_Mode_Types_Pkg;
  outC->Compatible_Mode_And_Level.compatibleModeAndLevel = kcg_true;
  outC->Compatible_Mode_And_Level.level = M_LEVEL_Level_0;
  outC->Compatible_Mode_And_Level.newLevel = kcg_true;
  outC->Compatible_Mode_And_Level.Mode = M_MODE_Full_Supervision;
  outC->Compatible_Mode_And_Level.newMode = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_Mode_Level_To_Use_reset_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* OutputManagement::Output_Mode_Level_To_Use */
void Output_Mode_Level_To_Use_OutputManagement(
  /* OutputManagement::Output_Mode_Level_To_Use::next_level */ M_LEVEL next_level,
  /* OutputManagement::Output_Mode_Level_To_Use::currentMode */ T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* OutputManagement::Output_Mode_Level_To_Use::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_Mode_Level_To_Use::isNewLevel */ kcg_bool isNewLevel,
  outC_Output_Mode_Level_To_Use_OutputManagement *outC)
{
  /* OutputManagement::Output_Mode_Level_To_Use */ T_Mode_Level_And_Mode_Types_Pkg tmp;
  
  outC->Compatible_Mode_And_Level.compatibleModeAndLevel =
    Level_Mode_Compatible;
  outC->Compatible_Mode_And_Level.level = next_level;
  outC->Compatible_Mode_And_Level.newLevel = isNewLevel;
  switch (currentMode) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Full_Supervision;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_On_Sight;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Staff_Responsible;
      break;
    case SH_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Shunting;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Unfitted;
      break;
    case SL_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Sleeping;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Stand_By;
      break;
    case TR_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Trip;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Post_Trip;
      break;
    case SF_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_System_Failure;
      break;
    case IS_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Isolation;
      break;
    case NL_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Non_Leading;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Limited_Supervision;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_National_System;
      break;
    case RV_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Reversing;
      break;
    case PS_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_Passive_Shunting;
      break;
    case NP_Level_And_Mode_Types_Pkg :
      outC->Compatible_Mode_And_Level.Mode = M_MODE_No_Power;
      break;
    
  }
  /* last_init_ck_currentMode */ if (outC->init) {
    outC->init = kcg_false;
    tmp = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    tmp = outC->rem_currentMode;
  }
  outC->Compatible_Mode_And_Level.newMode = currentMode != tmp;
  outC->rem_currentMode = currentMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_Mode_Level_To_Use_OutputManagement.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

