/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_Integrator_manage_DMI_Output_Pkg.h"

void DMI_Integrator_reset_manage_DMI_Output_Pkg(
  outC_DMI_Integrator_manage_DMI_Output_Pkg *outC)
{
  /* 1 */ manageDMI_Output_reset_manage_DMI_Output_Pkg(&outC->Context_1);
  /* 1 */ sendVersion_reset_manage_DMI_Output_Pkg(&outC->_1_Context_1);
  /* 1 */ cyclicReportToDMI_reset_manage_DMI_Output_Pkg(&outC->_2_Context_1);
}

/* manage_DMI_Output_Pkg::DMI_Integrator */
void DMI_Integrator_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::DMI_Integrator::incurrentDMIStatus */DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::DMI_Integrator::TIU_TrainStatus */TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inOdometry */odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inTrainPosition */trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inBrakeCommand */Brake_command_T_TIU_Types_Pkg *inBrakeCommand,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inSpeedSupervision */speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inModeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inNationalValues */nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inMovementAuthority */movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inRadioConnectionStatus */safeRadioConnectionStatus_Type_MoRC_Pck inRadioConnectionStatus,
  /* manage_DMI_Output_Pkg::DMI_Integrator::trainDataFromEVC */trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_entryRequest */DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_evc_coded_train_data */DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_trackDescription */DataForDMI_t_TrackAtlasTypes *dmi_trackDescription,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_identifierRequest */DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* manage_DMI_Output_Pkg::DMI_Integrator::evc_systemVersion */M_VERSION evc_systemVersion,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_displayControl */DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_displayControl,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_EVC_levelList */DMI_LevelList_T_DMI_Types_Pkg *dmi_EVC_levelList,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmiUpdateLevelsDMI */kcg_bool dmiUpdateLevelsDMI,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_EVC_radioNet */DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_radioNet,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_driverIdentifier */DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driverIdentifier,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_trainRunningNumber */DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_trainRunningNumber,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_adhesionFactor */DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesionFactor,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_fromBG */kcg_bool dmi_fromBG,
  /* manage_DMI_Output_Pkg::DMI_Integrator::dmi_fromModesAndLevel */DMI_ModesToDMI_T_DMI_Types_Pkg *dmi_fromModesAndLevel,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inNTC */NID_NTC inNTC,
  /* manage_DMI_Output_Pkg::DMI_Integrator::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  outC_DMI_Integrator_manage_DMI_Output_Pkg *outC)
{
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg tmp3;
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg tmp2;
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg tmp1;
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg tmp;
  /* manage_DMI_Output_Pkg::DMI_Integrator::doTrainData */
  static kcg_bool doTrainData;
  /* manage_DMI_Output_Pkg::DMI_Integrator::levelUpdate */
  static kcg_bool levelUpdate;
  /* manage_DMI_Output_Pkg::DMI_Integrator::_L31 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L31;
  /* manage_DMI_Output_Pkg::DMI_Integrator::_L30 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L30;
  /* manage_DMI_Output_Pkg::DMI_Integrator::_L77 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L77;
  
  /* 1 */
  manageTextMessages_manage_TextMessages_Pkg(
    inSystemTime,
    inStatusList,
    dmi_fromBG,
    dmi_fromModesAndLevel,
    &_L77,
    &outC->outStatusList);
  /* 1 */
  doEntryRequest_manage_DMI_Output_Pkg(
    dmi_entryRequest,
    inSystemTime,
    &_L31,
    &_L30,
    &doTrainData,
    &levelUpdate);
  /* 1 */
  cyclicReportToDMI_manage_DMI_Output_Pkg(
    incurrentDMIStatus,
    inSystemTime,
    inOdometry,
    inTrainPosition,
    inSpeedSupervision,
    inModeAndLevel,
    inNationalValues,
    inMovementAuthority,
    inRadioConnectionStatus,
    inNTC,
    &outC->_2_Context_1);
  /* 1 */
  copyTrackDescription_manage_DMI_Output_Pkg(
    dmi_trackDescription,
    inSystemTime,
    &tmp3);
  /* 1 */
  sendVersion_manage_DMI_Output_Pkg(
    evc_systemVersion,
    incurrentDMIStatus,
    inSystemTime,
    &outC->_1_Context_1);
  /* 1 */
  sendLevelListPkg_manage_DMI_Output_Pkg(
    dmi_EVC_levelList,
    (kcg_bool) (levelUpdate | dmiUpdateLevelsDMI),
    inSystemTime,
    &tmp2);
  if (doTrainData) {
    /* 2 */
    sendTrainData_manage_DMI_Output_Pkg(inSystemTime, trainDataFromEVC, &tmp1);
  }
  else {
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &tmp1,
      (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDefaultTrainData_manage_DMI_Output_Pkg);
  }
  /* 2 */
  sendBrakesToDMI_manage_DMI_Output_Pkg(inBrakeCommand, inSystemTime, &tmp);
  /* 1 */
  manageDMI_Output_manage_DMI_Output_Pkg(
    TIU_TrainStatus,
    &outC->_2_Context_1.packetDynamic,
    &_L31,
    &_L30,
    dmi_evc_coded_train_data,
    &_L77,
    &tmp3,
    dmi_identifierRequest,
    &outC->_1_Context_1.VersionPkg,
    dmi_displayControl,
    &tmp2,
    dmi_EVC_radioNet,
    dmi_driverIdentifier,
    dmi_trainRunningNumber,
    &tmp1,
    dmi_adhesionFactor,
    &tmp,
    inSystemTime,
    &outC->Context_1);
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
    &outC->to_DMI,
    &outC->Context_1.to_DMI);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_Integrator_manage_DMI_Output_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

