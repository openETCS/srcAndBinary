/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:20
*************************************************************$ */
#ifndef _sendTrainData_manage_DMI_Output_Pkg_H_
#define _sendTrainData_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* manage_DMI_Output_Pkg::sendTrainData */
extern void sendTrainData_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendTrainData::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendTrainData::trainDataFromEVC */trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* manage_DMI_Output_Pkg::sendTrainData::trainData_ForDMI */DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainData_ForDMI);

#endif /* _sendTrainData_manage_DMI_Output_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendTrainData_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-09T11:52:20
*************************************************************$ */

