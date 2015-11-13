/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainTrainProperties_EVC_Sup.h"

/* EVC_Support_Pkg::maintainTrainProperties */
void maintainTrainProperties_EVC_Sup(
  /* EVC_Support_Pkg::maintainTrainProperties::trainProperties */ trainProperties_T_TrainPosition *trainProperties,
  /* EVC_Support_Pkg::maintainTrainProperties::trainRunningNumber */ _25_DMI_Train_Running_Number_T_ *trainRunningNumber,
  /* EVC_Support_Pkg::maintainTrainProperties::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* EVC_Support_Pkg::maintainTrainProperties::nid_engine */ NID_ENGINE nid_engine,
  /* EVC_Support_Pkg::maintainTrainProperties::UpdatedtrainProperties */ trainProperties_T_TrainPosition *UpdatedtrainProperties)
{
  (*UpdatedtrainProperties).nid_engine = nid_engine;
  (*UpdatedtrainProperties).l_train = (*trainData).trainLength / 100;
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &(*UpdatedtrainProperties).d_baliseAntenna_2_frontend,
    (LocWithInAcc_T_Obu_BasicTypes_P *) &cD_Antenna2FE);
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &(*UpdatedtrainProperties).d_frontend_2_rearend,
    (LocWithInAcc_T_Obu_BasicTypes_P *) &cD_FE2RE);
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &(*UpdatedtrainProperties).locationAccuracy_DefaultValue,
    (LocWithInAcc_T_Obu_BasicTypes_P *) &cLocationAccuracyDefault);
  kcg_copy_LocWithInAcc_T_Obu_Bas(
    &(*UpdatedtrainProperties).centerDetectionAcc_DefaultValue,
    (LocWithInAcc_T_Obu_BasicTypes_P *) &cCenterDetectionAccuracyDefault);
  /* 1 */ if ((*trainRunningNumber).valid) {
    (*UpdatedtrainProperties).nid_operational =
      (*trainRunningNumber).trainRunningNumber;
  }
  else {
    (*UpdatedtrainProperties).nid_operational =
      (*trainProperties).nid_operational;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** maintainTrainProperties_EVC_Sup.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

