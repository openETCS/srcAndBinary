/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _receiveRequestsModesAndLevel_m
#define _receiveRequestsModesAndLevel_m

#include "kcg_types.h"
#include "receiveTextMessageAck_manage_Te.h"
#include "doDriverRequests_manage_DMI_Inp.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel */
extern void receiveRequestsModesAndLevel_ma(
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_driverRequest */ DMI_Driver_Request_T_DMI_Messag *fromDMI_driverRequest,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_Icon_Ack */ DMI_Icon_Ack_T_DMI_Messages_DMI *fromDMI_Icon_Ack,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_TextMsg_Ack */ DMI_Text_Message_Ack_T_DMI_Mess *fromDMI_TextMsg_Ack,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::forModesAndLevel */ DMI_To_Modes_T_DMI_Types_Pkg *forModesAndLevel,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *outStatusList,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::outDriverRequestToLevels */ kcg_bool *outDriverRequestToLevels);

#endif /* _receiveRequestsModesAndLevel_m */
/* $**************** KCG Version 6.4 (build i21) ****************
** receiveRequestsModesAndLevel_ma.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

