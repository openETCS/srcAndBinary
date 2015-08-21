/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"

void manageDMI_Input_reset_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  outC->init = kcg_true;
}

/* manage_DMI_Input_Pkg::manageDMI_Input */
void manageDMI_Input_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI */DMI_to_EVC_Message_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::manageDMI_Input::dmiStatusReset */kcg_bool dmiStatusReset,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Input_Pkg::manageDMI_Input::lasttNTC */NID_STM_DMI_Types_Pkg lasttNTC,
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L14 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L14;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L14,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
  }
  else {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L14, &outC->currentDMIStatus);
  }
  IfBlock1_clock = (*fromDMI).present & !dmiStatusReset;
  if (IfBlock1_clock) {
    /* 1 */
    changeLevelByDiver_manage_DMI_Input_Pkg(
      &(*fromDMI).selectedLevel,
      lasttNTC,
      &outC->ML_levelTransition,
      &outC->updatedNTC);
    /* 1 */
    receiveRequestsModesAndLevel_manage_DMI_Input_Pkg(
      &(*fromDMI).driverRequest,
      &(*fromDMI).iconAck,
      &(*fromDMI).textMessageAck,
      inSystemTime,
      inStatusList,
      &outC->forModesAndLevel,
      &outC->outStatusList,
      &outC->outUpdateLevelsDMI);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      &(*fromDMI).identifier);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_DriverIdentifier,
      &(*fromDMI).driverIdentifier);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainRunningNumber,
      &(*fromDMI).trainRunningNumber);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_RadioNetData,
      &(*fromDMI).radioNetData);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      &(*fromDMI).iconAck);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainData,
      &(*fromDMI).trainData);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TrainDataAck,
      &(*fromDMI).trainDataAck);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      &(*fromDMI).adhesionFactor);
    /* 1 */
    triggerForMA_manage_DMI_Input_Pkg(
      &(*fromDMI).driverRequest,
      &outC->outForMA);
    /* 2 */
    updateDMIStatus_manage_DMI_Input_Pkg(
      &_L14,
      fromDMI,
      _L14.DMI_TrainRunningNumberFirstValidation,
      &outC->currentDMIStatus);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->outDriverRequest,
      &(*fromDMI).driverRequest);
  }
  else {
    outC->outUpdateLevelsDMI = kcg_false;
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIIdentifierDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_DriverIdentifier,
      (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
        &cDMIDriverIdentifierDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainRunningNumber,
      (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
        &cDMITrainRunningNumberDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_RadioNetData,
      (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIRadioNetDataDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIIconAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainData,
      (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMITrainDataDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TrainDataAck,
      (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMITrainDataAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMIAdhesionFactorDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->forModesAndLevel,
      (DMI_To_Modes_T_DMI_Types_Pkg *)
        &cAckModesAndLevels_manage_DMI_Input_Pkg);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->ML_levelTransition,
      (T_LevelTransition_Level_And_Mode_Types_Pkg *)
        &M_Default_Transition_Level_And_Mode_Types_Pkg);
    if (dmiStatusReset) {
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outC->outStatusList,
        (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *)
          &cEmptyTestStatusList_DMI_Types_Pkg);
      outC->updatedNTC = lasttNTC;
      kcg_copy_Driver2MAR_T_MA_Request(
        &outC->outForMA,
        (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &outC->currentDMIStatus,
        (DMI_EVC_status_T_DMI_Types_Pkg *)
          &cDMI_EVC_Status_Default_DMI_Types_Pkg);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->outDriverRequest,
        (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
    }
    else {
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outC->outStatusList,
        inStatusList);
      outC->updatedNTC = lasttNTC;
      kcg_copy_Driver2MAR_T_MA_Request(
        &outC->outForMA,
        (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->currentDMIStatus, &_L14);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->outDriverRequest,
        (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageDMI_Input_manage_DMI_Input_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

