/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendLevelListPkg_manage_DMI_Out.h"

/* manage_DMI_Output_Pkg::sendLevelListPkg */
void sendLevelListPkg_manage_DMI_Out(
  /* manage_DMI_Output_Pkg::sendLevelListPkg::levelList */ DMI_LevelList_T_DMI_Types_Pkg *levelList,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::UpdateLevelsRequested */ kcg_bool UpdateLevelsRequested,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::levelDataPkg */ DMI_EVC_Level_Data_T_DMI_Messag *levelDataPkg)
{
  /* 1 */ if (UpdateLevelsRequested) {
    (*levelDataPkg).valid = kcg_true;
    (*levelDataPkg).system_clock = inSystemTime;
    kcg_copy_DMI_LevelList_T_DMI_Ty(&(*levelDataPkg).levelList, levelList);
  }
  else {
    kcg_copy_DMI_EVC_Level_Data_T_D(
      levelDataPkg,
      (DMI_EVC_Level_Data_T_DMI_Messag *) &cEmptyLevelData_manage_DMI_Outp);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendLevelListPkg_manage_DMI_Out.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

