/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainDataStorage_trainData_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void trainDataStorage_init_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC)
{
  kcg_int i;
  
  outC->init = kcg_true;
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = 0;
  outC->actualTrainData.valid = kcg_true;
  outC->actualTrainData.acknowledgedByDriver = kcg_true;
  outC->actualTrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->actualTrainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->actualTrainData.trainLength = 0;
  outC->actualTrainData.brakePerctage = 0;
  outC->actualTrainData.maxTrainSpeed = 0;
  outC->actualTrainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->actualTrainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->actualTrainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->actualTrainData.axleNumber = 0;
  outC->actualTrainData.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    outC->actualTrainData.nationSystems[i] = 0;
  }
  outC->actualTrainData.numberTractionSystems = 0;
  for (i = 0; i < 4; i++) {
    outC->actualTrainData.tractionSystem[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->actualTrainData.tractionSystem[i].nid_ctraction = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void trainDataStorage_reset_trainData_pkg(
  outC_trainDataStorage_trainData_pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::trainDataStorage */
void trainDataStorage_trainData_pkg(
  /* trainData_pkg::trainDataStorage::reset */ kcg_bool reset,
  /* trainData_pkg::trainDataStorage::trainDatafromTIU */ trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainDataStorage::trainDatafromDriver */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainData_pkg::trainDataStorage::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::trainDataStorage::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::trainDataStorage::eventsForTrainData */ trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  outC_trainDataStorage_trainData_pkg *outC)
{
  /* trainData_pkg::trainDataStorage::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* trainData_pkg::trainDataStorage::trainData */ trainData_T_TIU_Types_Pkg last_trainData;
  /* trainData_pkg::trainDataStorage::dataFromTIU */ kcg_bool dataFromTIU;
  
  dataFromTIU = (*trainDatafromTIU).valid & !(*actualStatus).valid;
  /* last_init_ck_trainData */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &last_trainData,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(&last_trainData, &outC->actualTrainData);
  }
  /* ck_dataFromTIU */ if (dataFromTIU) {
    /* 1 */
    storeTIUData_trainData_pkg(
      trainDatafromTIU,
      &last_trainData,
      actualStatus,
      &outC->actualTrainData,
      &outC->updatedStatus);
  }
  else {
    else_clock_IfBlock1 = (*actualStatus).valid &
      ((*trainDatafromDriver).valid | (*trainDataAckfromDriver).valid);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      /* 1 */
      storeDriverInput_trainData_pkg(
        trainDatafromDriver,
        trainDataAckfromDriver,
        &last_trainData,
        actualStatus,
        &outC->actualTrainData,
        &outC->updatedStatus);
    }
    else /* ck_anon_activ */ if (reset) {
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->updatedStatus,
        (trainDataStatus_T_trainData_Types_pkg *)
          &cNoStates_trainData_Types_pkg);
      kcg_copy_trainData_T_TIU_Types_Pkg(
        &outC->actualTrainData,
        (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
    }
    else {
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->updatedStatus,
        actualStatus);
      kcg_copy_trainData_T_TIU_Types_Pkg(
        &outC->actualTrainData,
        &last_trainData);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trainDataStorage_trainData_pkg.c
** Generation date: 2015-12-09T10:03:50
*************************************************************$ */

