/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _manageDMI_Input_manage_DMI_Inp
#define _manageDMI_Input_manage_DMI_Inp

#include "kcg_types.h"
#include "Write_int_to_DMI_to_EVC_Message.h"
#include "updateDMIStatus_manage_DMI_Inpu.h"
#include "receiveRequestsModesAndLevel_ma.h"
#include "changeLevelByDiver_manage_DMI_I.h"
#include "triggerForMA_manage_DMI_Input_P.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_EVC_status_T_DMI_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::currentDMIStatus */ currentDMIStatus;
  DMI_Identifier_T_DMI_Messages_D /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Identifier */ fromDMI_Identifier;
  kcg_bool /* manage_DMI_Input_Pkg::manageDMI_Input::outUpdateLevelsDMI */ outUpdateLevelsDMI;
  _24_DMI_Driver_Identifier_T_DMI /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_DriverIdentifier */ fromDMI_DriverIdentifier;
  _23_DMI_Train_Running_Number_T_ /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainRunningNumber */ fromDMI_TrainRunningNumber;
  DMI_Radio_Net_Data_T_DMI_Messag /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_RadioNetData */ fromDMI_RadioNetData;
  DMI_Icon_Ack_T_DMI_Messages_DMI /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Icon_Ack */ fromDMI_Icon_Ack;
  DMI_Train_Data_T_DMI_Messages_B /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainData */ fromDMI_TrainData;
  DMI_Train_Data_Ack_T_DMI_Messag /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainDataAck */ fromDMI_TrainDataAck;
  _22_DMI_Adhesion_Factor_Data_T_ /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_AdhesionFactor */ fromDMI_AdhesionFactor;
  DMI_To_Modes_T_DMI_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::forModesAndLevel */ forModesAndLevel;
  T_LevelTransition_Level_And_Mod /* manage_DMI_Input_Pkg::manageDMI_Input::ML_levelTransition */ ML_levelTransition;
  DMI_TXT_MSGList_status_T_DMI_Ty /* manage_DMI_Input_Pkg::manageDMI_Input::outStatusList */ outStatusList;
  DMI_Driver_Request_T_DMI_Messag /* manage_DMI_Input_Pkg::manageDMI_Input::outDriverRequest */ outDriverRequest;
  NID_STM_DMI_Types_Pkg /* manage_DMI_Input_Pkg::manageDMI_Input::updatedNTC */ updatedNTC;
  Driver2MAR_T_MA_Request /* manage_DMI_Input_Pkg::manageDMI_Input::outForMA */ outForMA;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_manageDMI_Input_manage_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Input_Pkg::manageDMI_Input */
extern void manageDMI_Input_manage_DMI_Inpu(
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI */ DMI_to_EVC_Message_int_T_API_DM *fromDMI,
  /* manage_DMI_Input_Pkg::manageDMI_Input::dmiStatusReset */ kcg_bool dmiStatusReset,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Input_Pkg::manageDMI_Input::lasttNTC */ NID_STM_DMI_Types_Pkg lasttNTC,
  outC_manageDMI_Input_manage_DMI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageDMI_Input_reset_manage_DM(
  outC_manageDMI_Input_manage_DMI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageDMI_Input_init_manage_DMI(
  outC_manageDMI_Input_manage_DMI *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _manageDMI_Input_manage_DMI_Inp */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageDMI_Input_manage_DMI_Inpu.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */

