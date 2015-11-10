/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "storeDriverInput_trainData_pkg.h"

/* trainData_pkg::storeDriverInput */
void storeDriverInput_trainData_pkg(
  /* trainData_pkg::storeDriverInput::fromDMI_TrainData */ DMI_Train_Data_T_DMI_Messages_B *fromDMI_TrainData,
  /* trainData_pkg::storeDriverInput::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messag *trainDataAckfromDriver,
  /* trainData_pkg::storeDriverInput::originalTrainData */ trainData_T_TIU_Types_Pkg *originalTrainData,
  /* trainData_pkg::storeDriverInput::actualStatus */ trainDataStatus_T_trainData_Typ *actualStatus,
  /* trainData_pkg::storeDriverInput::trainDataForEVC */ trainData_T_TIU_Types_Pkg *trainDataForEVC,
  /* trainData_pkg::storeDriverInput::updatedStatus */ trainDataStatus_T_trainData_Typ *updatedStatus)
{
  /* trainData_pkg::storeDriverInput::newState */
  static kcg_bool newState;
  
  /* 1 */ if ((*trainDataAckfromDriver).valid) {
    newState = (*trainDataAckfromDriver).acknowledged;
  }
  else {
    newState = (*originalTrainData).acknowledgedByDriver;
  }
  /* ck_updateTrainData */ if ((*fromDMI_TrainData).valid) {
    (*trainDataForEVC).valid = (*originalTrainData).valid;
    (*trainDataForEVC).acknowledgedByDriver = newState;
    (*trainDataForEVC).trainCategory = (*fromDMI_TrainData).trainCategory;
    (*trainDataForEVC).cantDeficientcy = (*originalTrainData).cantDeficientcy;
    (*trainDataForEVC).trainLength = (*fromDMI_TrainData).l_train;
    (*trainDataForEVC).brakePerctage = (*fromDMI_TrainData).m_brakeperct;
    (*trainDataForEVC).maxTrainSpeed = (*fromDMI_TrainData).v_maxTrain;
    (*trainDataForEVC).loadingGauge = (*fromDMI_TrainData).m_loadingGauge;
    (*trainDataForEVC).axleLoadCategory = (*fromDMI_TrainData).m_axleLoad;
    (*trainDataForEVC).airtightSystem = (*fromDMI_TrainData).m_airTight;
    (*trainDataForEVC).axleNumber = (*originalTrainData).axleNumber;
    (*trainDataForEVC).numberNationalSystems =
      (*originalTrainData).numberNationalSystems;
    kcg_copy_aNID_NTC_T_Packet_Trai(
      &(*trainDataForEVC).nationSystems,
      &(*originalTrainData).nationSystems);
    (*trainDataForEVC).numberTractionSystems =
      (*originalTrainData).numberTractionSystems;
    kcg_copy_aTractionIdentity_T_Pa(
      &(*trainDataForEVC).tractionSystem,
      &(*originalTrainData).tractionSystem);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_(trainDataForEVC, originalTrainData);
    (*trainDataForEVC).acknowledgedByDriver = newState;
  }
  kcg_copy_trainDataStatus_T_trai(updatedStatus, actualStatus);
  (*updatedStatus).validatedByDriver = newState;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** storeDriverInput_trainData_pkg.c
** Generation date: 2015-11-10T23:01:11
*************************************************************$ */

