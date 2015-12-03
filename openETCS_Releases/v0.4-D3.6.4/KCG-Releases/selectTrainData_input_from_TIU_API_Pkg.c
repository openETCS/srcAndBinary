/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectTrainData_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::selectTrainData */
void selectTrainData_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::selectTrainData::newTIUTrainData */ trainData_T_TIU_Types_Pkg *newTIUTrainData,
  /* input_from_TIU_API_Pkg::selectTrainData::EVC_trainData */ trainData_T_TIU_Types_Pkg *EVC_trainData,
  /* input_from_TIU_API_Pkg::selectTrainData::outTrainData */ trainData_T_TIU_Types_Pkg *outTrainData)
{
  /* 1 */ if ((*EVC_trainData).valid) {
    kcg_copy_trainData_T_TIU_Types_Pkg(outTrainData, EVC_trainData);
  }
  else /* 2 */ if ((*newTIUTrainData).valid) {
    kcg_copy_trainData_T_TIU_Types_Pkg(outTrainData, newTIUTrainData);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(
      outTrainData,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** selectTrainData_input_from_TIU_API_Pkg.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

