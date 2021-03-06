/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void manageDMI_Input_init_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  static kcg_int i;
  
  outC->outUpdateLevelsDMI = kcg_true;
  outC->init = kcg_true;
  outC->outForMA.trackAheadFree = kcg_true;
  outC->outForMA.driverSelectsStart = kcg_true;
  outC->updatedNTC = 0;
  outC->outDriverRequest.valid = kcg_true;
  outC->outDriverRequest.systemTime = 0;
  outC->outDriverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  for (i = 0; i < 31; i++) {
    outC->outStatusList[i].valid = kcg_true;
    outC->outStatusList[i].dmi_textMessageID = 0;
    outC->outStatusList[i].timeStamp = 0;
    outC->outStatusList[i].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->outStatusList[i].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[i].nid_textmessage = 0;
    outC->outStatusList[i].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[i].whichMode = M_MODE_Full_Supervision;
  }
  outC->ML_levelTransition.is_set = kcg_true;
  outC->ML_levelTransition.transition.level = M_LEVEL_Level_0;
  outC->ML_levelTransition.transition.position = 0;
  outC->ML_levelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->ML_levelTransition.transition.immediateAck = kcg_true;
  outC->ML_levelTransition.transition.AckLength = 0;
  outC->ML_levelTransition.LRBG = 0;
  outC->ML_levelTransition.referenceLocation = 0;
  outC->forModesAndLevel.valid = kcg_true;
  outC->forModesAndLevel.DriverAck.valid = kcg_true;
  outC->forModesAndLevel.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->forModesAndLevel.DriverAck.acknowledgement = kcg_true;
  outC->forModesAndLevel.DriverRequest.valid = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Exit_SH = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_NL = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Override = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_SH = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Start = kcg_true;
  outC->forModesAndLevel.DriverRequest.ETCS_Isolated = kcg_true;
  outC->forModesAndLevel.LevelAck = kcg_true;
  outC->fromDMI_AdhesionFactor.valid = kcg_true;
  outC->fromDMI_AdhesionFactor.systemTime = 0;
  outC->fromDMI_AdhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->fromDMI_TrainDataAck.valid = kcg_true;
  outC->fromDMI_TrainDataAck.systemTime = 0;
  outC->fromDMI_TrainDataAck.acknowledged = kcg_true;
  outC->fromDMI_TrainData.valid = kcg_true;
  outC->fromDMI_TrainData.systemTime = 0;
  outC->fromDMI_TrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->fromDMI_TrainData.l_train = 0;
  outC->fromDMI_TrainData.m_brakeperct = 0;
  outC->fromDMI_TrainData.v_maxTrain = 0;
  outC->fromDMI_TrainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->fromDMI_TrainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->fromDMI_TrainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->fromDMI_Icon_Ack.valid = kcg_true;
  outC->fromDMI_Icon_Ack.systemTime = 0;
  outC->fromDMI_Icon_Ack.DMI_nid_icon_identifier = 0;
  outC->fromDMI_RadioNetData.valid = kcg_true;
  outC->fromDMI_RadioNetData.systemTime = 0;
  outC->fromDMI_TrainRunningNumber.valid = kcg_true;
  outC->fromDMI_TrainRunningNumber.systemTime = 0;
  outC->fromDMI_TrainRunningNumber.trainRunningNumber = 0;
  outC->fromDMI_DriverIdentifier.valid = kcg_true;
  outC->fromDMI_DriverIdentifier.systemTime = 0;
  for (i = 0; i < 9; i++) {
    outC->fromDMI_DriverIdentifier.driverIdentifier[i] = ' ';
  }
  outC->fromDMI_Identifier.valid = kcg_true;
  outC->fromDMI_Identifier.systemTime = 0;
  outC->fromDMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->fromDMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->fromDMI_Identifier.l_name = 0;
  for (i = 0; i < 255; i++) {
    outC->fromDMI_Identifier.DMI_name[i] = ' ';
  }
  outC->fromDMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->currentDMIStatus.DMI_Active = kcg_true;
  outC->currentDMIStatus.DMI_Error = kcg_true;
  outC->currentDMIStatus.DMI_DriverIdValidated = kcg_true;
  outC->currentDMIStatus.DMI_LevelSelectedByDirver = kcg_true;
  outC->currentDMIStatus.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->currentDMIStatus.DMI_TrainRunningNumberValidated = kcg_true;
  outC->currentDMIStatus.DMI_TrainDataValidated = kcg_true;
  outC->currentDMIStatus.DMI_StartReceived = kcg_true;
  outC->currentDMIStatus.DMI_Identifier.valid = kcg_true;
  outC->currentDMIStatus.DMI_Identifier.systemTime = 0;
  outC->currentDMIStatus.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->currentDMIStatus.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  outC->currentDMIStatus.DMI_Identifier.l_name = 0;
  for (i = 0; i < 255; i++) {
    outC->currentDMIStatus.DMI_Identifier.DMI_name[i] = ' ';
  }
  outC->currentDMIStatus.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageDMI_Input_reset_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Input_Pkg::manageDMI_Input */
void manageDMI_Input_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::manageDMI_Input::dmiStatusReset */ kcg_bool dmiStatusReset,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Input_Pkg::manageDMI_Input::lasttNTC */ NID_STM_DMI_Types_Pkg lasttNTC,
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L14 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L14;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L54 */
  static DMI_to_EVC_Message_T_API_DMI_Pkg _L54_IfBlock1;
  
  IfBlock1_clock = (1 == (*fromDMI)[0]) & !dmiStatusReset;
  /* last_init_ck_DMI_Status_inEVC */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L14,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
  }
  else {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L14, &outC->currentDMIStatus);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* 2 */ Write_int_to_DMI_to_EVC_Messages(fromDMI, &_L54_IfBlock1);
    /* 2 */
    updateDMIStatus_manage_DMI_Input_Pkg(
      &_L14,
      &_L54_IfBlock1,
      _L14.DMI_TrainRunningNumberFirstValidation,
      &outC->currentDMIStatus);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      &_L54_IfBlock1.identifier);
    /* 1 */
    receiveRequestsModesAndLevel_manage_DMI_Input_Pkg(
      &_L54_IfBlock1.driverRequest,
      &_L54_IfBlock1.iconAck,
      &_L54_IfBlock1.textMessageAck,
      inSystemTime,
      inStatusList,
      &outC->forModesAndLevel,
      &outC->outStatusList,
      &outC->outUpdateLevelsDMI);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_DriverIdentifier,
      &_L54_IfBlock1.driverIdentifier);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainRunningNumber,
      &_L54_IfBlock1.trainRunningNumber);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_RadioNetData,
      &_L54_IfBlock1.radioNetData);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      &_L54_IfBlock1.iconAck);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainData,
      &_L54_IfBlock1.trainData);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TrainDataAck,
      &_L54_IfBlock1.trainDataAck);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      &_L54_IfBlock1.adhesionFactor);
    /* 1 */
    changeLevelByDiver_manage_DMI_Input_Pkg(
      &_L54_IfBlock1.selectedLevel,
      lasttNTC,
      &outC->ML_levelTransition,
      &outC->updatedNTC);
    /* 1 */
    triggerForMA_manage_DMI_Input_Pkg(
      &_L54_IfBlock1.driverRequest,
      &outC->outForMA);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->outDriverRequest,
      &_L54_IfBlock1.driverRequest);
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
    /* ck_anon_activ */ if (dmiStatusReset) {
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &outC->currentDMIStatus,
        (DMI_EVC_status_T_DMI_Types_Pkg *)
          &cDMI_EVC_Status_Default_DMI_Types_Pkg);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outC->outStatusList,
        (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *)
          &cEmptyTestStatusList_DMI_Types_Pkg);
      outC->updatedNTC = lasttNTC;
      kcg_copy_Driver2MAR_T_MA_Request(
        &outC->outForMA,
        (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->outDriverRequest,
        (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
    }
    else {
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->currentDMIStatus, &_L14);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outC->outStatusList,
        inStatusList);
      outC->updatedNTC = lasttNTC;
      kcg_copy_Driver2MAR_T_MA_Request(
        &outC->outForMA,
        (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->outDriverRequest,
        (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageDMI_Input_manage_DMI_Input_Pkg.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

