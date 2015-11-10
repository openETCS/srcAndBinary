/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */
#ifndef _manageDMI_Output_manage_DMI_Ou
#define _manageDMI_Output_manage_DMI_Ou

#include "kcg_types.h"
#include "doEntryRequest_manage_DMI_Outpu.h"
#include "sendTrainData_manage_DMI_Output.h"
#include "sendLevelListPkg_manage_DMI_Out.h"
#include "copyTrackDescription_manage_DMI.h"
#include "manageTextMessages_manage_TextM.h"
#include "Write_EVC_to_DMI_to_int_Message.h"
#include "cyclicReportToDMI_manage_DMI_Ou.h"
#include "collectDMIPackets_manage_DMI_Ou.h"
#include "sendBrakesToDMI_manage_DMI_Outp.h"
#include "sendVersion_manage_DMI_Output_P.h"
#include "doIdentifierRequest_manage_DMI_.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_int_T_API_DM /* manage_DMI_Output_Pkg::manageDMI_Output::to_DMI */ to_DMI;
  DMI_TXT_MSGList_status_T_DMI_Ty /* manage_DMI_Output_Pkg::manageDMI_Output::outStatusList */ outStatusList;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_collectDMIPackets_manage_D /* 1 */ _3_Context_1;
  outC_sendBrakesToDMI_manage_DMI /* 2 */ Context_2;
  outC_sendVersion_manage_DMI_Out /* 1 */ _2_Context_1;
  outC_doIdentifierRequest_manage /* 1 */ _1_Context_1;
  outC_cyclicReportToDMI_manage_D /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_manageDMI_Output_manage_DM;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::manageDMI_Output */
extern void manageDMI_Output_manage_DMI_Out(
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
  outC_manageDMI_Output_manage_DM *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageDMI_Output_reset_manage_D(
  outC_manageDMI_Output_manage_DM *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageDMI_Output_init_manage_DM(
  outC_manageDMI_Output_manage_DM *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _manageDMI_Output_manage_DMI_Ou */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageDMI_Output_manage_DMI_Out.h
** Generation date: 2015-11-10T23:01:06
*************************************************************$ */

