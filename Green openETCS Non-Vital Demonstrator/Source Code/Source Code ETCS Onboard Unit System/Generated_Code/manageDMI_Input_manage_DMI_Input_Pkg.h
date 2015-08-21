/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */
#ifndef _manageDMI_Input_manage_DMI_Input_Pkg_H_
#define _manageDMI_Input_manage_DMI_Input_Pkg_H_

#include "kcg_types.h"
#include "updateDMIStatus_manage_DMI_Input_Pkg.h"
#include "receiveRequestsModesAndLevel_manage_DMI_Input_Pkg.h"
#include "changeLevelByDiver_manage_DMI_Input_Pkg.h"
#include "triggerForMA_manage_DMI_Input_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_EVC_status_T_DMI_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::currentDMIStatus */ currentDMIStatus;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Identifier */ fromDMI_Identifier;
  kcg_bool /* manage_DMI_Input_Pkg::manageDMI_Input::outUpdateLevelsDMI */ outUpdateLevelsDMI;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_DriverIdentifier */ fromDMI_DriverIdentifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainRunningNumber */ fromDMI_TrainRunningNumber;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_RadioNetData */ fromDMI_RadioNetData;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Icon_Ack */ fromDMI_Icon_Ack;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainData */ fromDMI_TrainData;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainDataAck */ fromDMI_TrainDataAck;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_AdhesionFactor */ fromDMI_AdhesionFactor;
  DMI_To_Modes_T_DMI_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::forModesAndLevel */ forModesAndLevel;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::ML_levelTransition */ ML_levelTransition;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::outStatusList */ outStatusList;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::outDriverRequest */ outDriverRequest;
  NID_STM_DMI_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::updatedNTC */ updatedNTC;
  Driver2MAR_T_MA_Request /* manage_DMI_Input_Pkg::manageDMI_Input::outForMA */ outForMA;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_manageDMI_Input_manage_DMI_Input_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Input_Pkg::manageDMI_Input */
extern void manageDMI_Input_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI */DMI_to_EVC_Message_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::manageDMI_Input::dmiStatusReset */kcg_bool dmiStatusReset,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Input_Pkg::manageDMI_Input::lasttNTC */NID_STM_DMI_Types_Pkg lasttNTC,
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC);

extern void manageDMI_Input_reset_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC);

#endif /* _manageDMI_Input_manage_DMI_Input_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageDMI_Input_manage_DMI_Input_Pkg.h
** Generation date: 2015-08-21T17:26:00
*************************************************************$ */

