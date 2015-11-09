/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectTrainData_input_from_TIU_.h"

/* input_from_TIU_API_Pkg::selectTrainData */
void selectTrainData_input_from_TIU_(
  /* input_from_TIU_API_Pkg::selectTrainData::newTIUTrainData */ trainData_T_TIU_Types_Pkg *newTIUTrainData,
  /* input_from_TIU_API_Pkg::selectTrainData::EVC_trainData */ trainData_T_TIU_Types_Pkg *EVC_trainData,
  /* input_from_TIU_API_Pkg::selectTrainData::outTrainData */ trainData_T_TIU_Types_Pkg *outTrainData)
{
  /* 1 */ if ((*EVC_trainData).valid) {
    kcg_copy_trainData_T_TIU_Types_(outTrainData, EVC_trainData);
  }
  else /* 2 */ if ((*newTIUTrainData).valid) {
    kcg_copy_trainData_T_TIU_Types_(outTrainData, newTIUTrainData);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_(
      outTrainData,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** selectTrainData_input_from_TIU_.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */
