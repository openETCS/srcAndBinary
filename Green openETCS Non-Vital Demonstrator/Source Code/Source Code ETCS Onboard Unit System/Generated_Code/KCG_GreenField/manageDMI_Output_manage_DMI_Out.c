/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageDMI_Output_manage_DMI_Out.h"

#ifndef KCG_USER_DEFINED_INIT
void manageDMI_Output_init_manage_DM(outC_manageDMI_Output_manage_DM *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 31; i++) {
    outC->outStatusList[i].valid = kcg_true;
    outC->outStatusList[i].dmi_textMessageID = 0;
    outC->outStatusList[i].timeStamp = 0;
    outC->outStatusList[i].textReport = Q_TEXTREPORT_No_driver_acknowle;
    outC->outStatusList[i].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[i].nid_textmessage = 0;
    outC->outStatusList[i].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[i].whichMode = M_MODE_Full_Supervision;
  }
  for (i = 0; i < 999; i++) {
    outC->to_DMI[i] = 0;
  }
  /* 1 */ collectDMIPackets_init_manage_D(&outC->_3_Context_1);
  /* 2 */ sendBrakesToDMI_init_manage_DMI(&outC->Context_2);
  /* 1 */ sendVersion_init_manage_DMI_Out(&outC->_2_Context_1);
  /* 1 */ doIdentifierRequest_init_manage(&outC->_1_Context_1);
  /* 1 */ cyclicReportToDMI_init_manage_D(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageDMI_Output_reset_manage_D(outC_manageDMI_Output_manage_DM *outC)
{
  /* 1 */ collectDMIPackets_reset_manage_(&outC->_3_Context_1);
  /* 2 */ sendBrakesToDMI_reset_manage_DM(&outC->Context_2);
  /* 1 */ sendVersion_reset_manage_DMI_Ou(&outC->_2_Context_1);
  /* 1 */ doIdentifierRequest_reset_manag(&outC->_1_Context_1);
  /* 1 */ cyclicReportToDMI_reset_manage_(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::manageDMI_Output */
void manageDMI_Output_manage_DMI_Out(
  /* manage_DMI_Output_Pkg::manageDMI_Output::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Output_Pkg::manageDMI_Output::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inTrainPosition */ trainPosition_T_TrainPosition_T *inTrainPosition,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inBrakeCommand */ Brake_command_T_TIU_Types_Pkg *inBrakeCommand,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Ty *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Typ *inModeAndLevel,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inNationalValues */ nationValuesForDMI_T_DMI_Types_ *inNationalValues,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inMovementAuthority */ movementAuthorityForDMI_T_DMI_T *inMovementAuthority,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inMoRC_status */ morcStatus_T_RCM_Session_Types_ *inMoRC_status,
  /* manage_DMI_Output_Pkg::manageDMI_Output::trainDataFromEVC */ trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Message *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_evc_coded_train_data */ _29_DMI_EVC_Coded_Train_Data_T_ *dmi_evc_coded_train_data,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_trackDescription */ DataForDMI_t_TrackAtlasTypes *dmi_trackDescription,
  /* manage_DMI_Output_Pkg::manageDMI_Output::evc_systemVersion */ M_VERSION evc_systemVersion,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_displayControl */ DMI_Display_Control_T_DMI_Messa *dmi_displayControl,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_EVC_levelList */ DMI_LevelList_T_DMI_Types_Pkg *dmi_EVC_levelList,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmiUpdateLevelsDMI */ kcg_bool dmiUpdateLevelsDMI,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_EVC_radioNet */ _27_DMI_EVC_Radio_Net_Data_T_DM *dmi_EVC_radioNet,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_driverIdentifier */ _26_DMI_Driver_Identifier_T_DMI *dmi_driverIdentifier,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_trainRunningNumber */ _25_DMI_Train_Running_Number_T_ *dmi_trainRunningNumber,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_adhesionFactor */ _24_DMI_Adhesion_Factor_Data_T_ *dmi_adhesionFactor,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_fromBG */ kcg_bool dmi_fromBG,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inModeLevel_Ack */ T_AcknoledgementRequest_Level_A *inModeLevel_Ack,
  /* manage_DMI_Output_Pkg::manageDMI_Output::announcedLevel */ T_AnnouncedLevel_Level_And_Mode *announcedLevel,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inNTC */ NID_NTC inNTC,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  outC_manageDMI_Output_manage_DM *outC)
{
  /* manage_DMI_Output_Pkg::manageDMI_Output */
  static DMI_Track_Description_T_DMI_Mes tmp2;
  /* manage_DMI_Output_Pkg::manageDMI_Output */
  static DMI_EVC_Level_Data_T_DMI_Messag tmp1;
  /* manage_DMI_Output_Pkg::manageDMI_Output */
  static DMI_Train_Data_T_DMI_Messages_B tmp;
  /* manage_DMI_Output_Pkg::manageDMI_Output::doTrainData */
  static kcg_bool doTrainData;
  /* manage_DMI_Output_Pkg::manageDMI_Output::levelUpdate */
  static kcg_bool levelUpdate;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L31 */
  static DMI_Menu_Request_T_DMI_Messages _L31;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L30 */
  static DMI_Entry_Request_T_DMI_Message _L30;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L77 */
  static DMI_Text_Message_T_DMI_Messages _L77;
  
  /* 1 */
  doEntryRequest_manage_DMI_Outpu(
    dmi_entryRequest,
    inSystemTime,
    &_L31,
    &_L30,
    &doTrainData,
    &levelUpdate);
  /* 1 */
  manageTextMessages_manage_TextM(
    inSystemTime,
    inStatusList,
    dmi_fromBG,
    inModeLevel_Ack,
    announcedLevel,
    &_L77,
    &outC->outStatusList);
  /* 1 */
  cyclicReportToDMI_manage_DMI_Ou(
    incurrentDMIStatus,
    inSystemTime,
    inOdometry,
    inTrainPosition,
    inSpeedSupervision,
    inModeAndLevel,
    inNationalValues,
    inMovementAuthority,
    inMoRC_status,
    inNTC,
    &outC->Context_1);
  /* 1 */
  copyTrackDescription_manage_DMI(dmi_trackDescription, inSystemTime, &tmp2);
  /* 1 */
  doIdentifierRequest_manage_DMI_(
    TIU_TrainStatus,
    inSystemTime,
    evc_systemVersion,
    &outC->_1_Context_1);
  /* 1 */
  sendVersion_manage_DMI_Output_P(
    evc_systemVersion,
    incurrentDMIStatus,
    inSystemTime,
    &outC->_2_Context_1);
  /* 1 */
  sendLevelListPkg_manage_DMI_Out(
    dmi_EVC_levelList,
    (kcg_bool) (levelUpdate | dmiUpdateLevelsDMI),
    inSystemTime,
    &tmp1);
  /* ck_doTrainData */ if (doTrainData) {
    /* 2 */
    sendTrainData_manage_DMI_Output(inSystemTime, trainDataFromEVC, &tmp);
  }
  else {
    kcg_copy_DMI_Train_Data_T_DMI_M(
      &tmp,
      (DMI_Train_Data_T_DMI_Messages_B *) &cDefaultTrainData_manage_DMI_Ou);
  }
  /* 2 */
  sendBrakesToDMI_manage_DMI_Outp(
    inBrakeCommand,
    inSystemTime,
    &outC->Context_2);
  /* 1 */
  collectDMIPackets_manage_DMI_Ou(
    TIU_TrainStatus,
    &outC->Context_1.packetDynamic,
    &_L31,
    &_L30,
    dmi_evc_coded_train_data,
    &_L77,
    &tmp2,
    &outC->_1_Context_1.identifierRequest,
    &outC->_2_Context_1.VersionPkg,
    dmi_displayControl,
    &tmp1,
    dmi_EVC_radioNet,
    dmi_driverIdentifier,
    dmi_trainRunningNumber,
    &tmp,
    dmi_adhesionFactor,
    &outC->Context_2.dmi_iconRequest,
    inSystemTime,
    &outC->_3_Context_1);
  /* 1 */
  Write_EVC_to_DMI_to_int_Message(&outC->_3_Context_1.to_DMI, &outC->to_DMI);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageDMI_Output_manage_DMI_Out.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

