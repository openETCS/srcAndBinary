/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _sendLevelListPkg_manage_DMI_Ou
#define _sendLevelListPkg_manage_DMI_Ou

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_DMI_Output_Pkg::sendLevelListPkg */
extern void sendLevelListPkg_manage_DMI_Out(
  /* manage_DMI_Output_Pkg::sendLevelListPkg::levelList */ DMI_LevelList_T_DMI_Types_Pkg *levelList,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::UpdateLevelsRequested */ kcg_bool UpdateLevelsRequested,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::levelDataPkg */ DMI_EVC_Level_Data_T_DMI_Messag *levelDataPkg);

#endif /* _sendLevelListPkg_manage_DMI_Ou */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendLevelListPkg_manage_DMI_Out.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

