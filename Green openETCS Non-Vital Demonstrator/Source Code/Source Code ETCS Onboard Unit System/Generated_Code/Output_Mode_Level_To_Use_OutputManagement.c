/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_Mode_Level_To_Use_OutputManagement.h"

/* OutputManagement::Output_Mode_Level_To_Use */
void Output_Mode_Level_To_Use_OutputManagement(
  /* OutputManagement::Output_Mode_Level_To_Use::next_level */M_LEVEL next_level,
  /* OutputManagement::Output_Mode_Level_To_Use::currentMode */T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* OutputManagement::Output_Mode_Level_To_Use::Level_Mode_Compatible */kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_Mode_Level_To_Use::Valid_Mode_And_Level */T_Mode_Level_Level_And_Mode_Types_Pkg *Valid_Mode_And_Level)
{
  (*Valid_Mode_And_Level).valid = Level_Mode_Compatible;
  (*Valid_Mode_And_Level).level = next_level;
  switch (currentMode) {
    case FS_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Full_Supervision;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_On_Sight;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Staff_Responsible;
      break;
    case SH_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Shunting;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Unfitted;
      break;
    case SL_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Sleeping;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Stand_By;
      break;
    case TR_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Trip;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Post_Trip;
      break;
    case SF_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_System_Failure;
      break;
    case IS_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Isolation;
      break;
    case NL_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Non_Leading;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Limited_Supervision;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_National_System;
      break;
    case RV_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Reversing;
      break;
    case PS_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_Passive_Shunting;
      break;
    case NP_Level_And_Mode_Types_Pkg :
      (*Valid_Mode_And_Level).Mode = M_MODE_No_Power;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output_Mode_Level_To_Use_OutputManagement.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

