/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */
#ifndef _sendTrainData_manage_DMI_Outpu
#define _sendTrainData_manage_DMI_Outpu

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_DMI_Output_Pkg::sendTrainData */
extern void sendTrainData_manage_DMI_Output(
  /* manage_DMI_Output_Pkg::sendTrainData::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::sendTrainData::trainDataFromEVC */ trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* manage_DMI_Output_Pkg::sendTrainData::trainData_ForDMI */ DMI_Train_Data_T_DMI_Messages_B *trainData_ForDMI);

#endif /* _sendTrainData_manage_DMI_Outpu */
/* $**************** KCG Version 6.4 (build i21) ****************
** sendTrainData_manage_DMI_Output.h
** Generation date: 2015-11-11T16:04:19
*************************************************************$ */

