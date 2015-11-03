/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "storeTIUData_trainData_pkg.h"

/* trainData_pkg::storeTIUData */
void storeTIUData_trainData_pkg(
  /* trainData_pkg::storeTIUData::trainDatafromTIU */ trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::storeTIUData::originalTrainData */ trainData_T_TIU_Types_Pkg *originalTrainData,
  /* trainData_pkg::storeTIUData::actualStatus */ trainDataStatus_T_trainData_Typ *actualStatus,
  /* trainData_pkg::storeTIUData::actualTrainData */ trainData_T_TIU_Types_Pkg *actualTrainData,
  /* trainData_pkg::storeTIUData::updatedStatus */ trainDataStatus_T_trainData_Typ *updatedStatus)
{
  kcg_copy_trainData_T_TIU_Types_(actualTrainData, trainDatafromTIU);
  kcg_copy_trainDataStatus_T_trai(
    updatedStatus,
    (trainDataStatus_T_trainData_Typ *) &cNoStates_trainData_Types_pkg);
  (*updatedStatus).valid = kcg_true;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** storeTIUData_trainData_pkg.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

