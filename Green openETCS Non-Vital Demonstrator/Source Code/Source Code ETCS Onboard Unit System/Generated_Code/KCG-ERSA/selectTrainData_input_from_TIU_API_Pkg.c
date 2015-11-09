/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectTrainData_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::selectTrainData */
void selectTrainData_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::selectTrainData::newTIUTrainData */trainData_T_TIU_Types_Pkg *newTIUTrainData,
  /* input_from_TIU_API_Pkg::selectTrainData::EVC_trainData */trainData_T_TIU_Types_Pkg *EVC_trainData,
  /* input_from_TIU_API_Pkg::selectTrainData::outTrainData */trainData_T_TIU_Types_Pkg *outTrainData)
{
  if ((*EVC_trainData).valid) {
    kcg_copy_trainData_T_TIU_Types_Pkg(outTrainData, EVC_trainData);
  }
  else if ((*newTIUTrainData).valid) {
    kcg_copy_trainData_T_TIU_Types_Pkg(outTrainData, newTIUTrainData);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(
      outTrainData,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** selectTrainData_input_from_TIU_API_Pkg.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

