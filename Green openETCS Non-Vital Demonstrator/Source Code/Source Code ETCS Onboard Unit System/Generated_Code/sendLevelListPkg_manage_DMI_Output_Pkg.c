/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendLevelListPkg_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendLevelListPkg */
void sendLevelListPkg_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendLevelListPkg::levelList */ DMI_LevelList_T_DMI_Types_Pkg *levelList,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::UpdateLevelsRequested */ kcg_bool UpdateLevelsRequested,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::levelDataPkg */ DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *levelDataPkg)
{
  /* 1 */ if (UpdateLevelsRequested) {
    (*levelDataPkg).valid = kcg_true;
    (*levelDataPkg).system_clock = inSystemTime;
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &(*levelDataPkg).levelList,
      levelList);
  }
  else {
    kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      levelDataPkg,
      (DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cEmptyLevelData_manage_DMI_Output_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendLevelListPkg_manage_DMI_Output_Pkg.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

