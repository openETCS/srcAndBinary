/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "receiveRequestsModesAndLevel_ma.h"

/* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel */
void receiveRequestsModesAndLevel_ma(
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_driverRequest */ DMI_Driver_Request_T_DMI_Messag *fromDMI_driverRequest,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_Icon_Ack */ DMI_Icon_Ack_T_DMI_Messages_DMI *fromDMI_Icon_Ack,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::fromDMI_TextMsg_Ack */ DMI_Text_Message_Ack_T_DMI_Mess *fromDMI_TextMsg_Ack,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::inSystemTime */ T_internal_Type_Obu_BasicTypes_ inSystemTime,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *inStatusList,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::forModesAndLevel */ DMI_To_Modes_T_DMI_Types_Pkg *forModesAndLevel,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::outStatusList */ DMI_TXT_MSGList_status_T_DMI_Ty *outStatusList,
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::outDriverRequestToLevels */ kcg_bool *outDriverRequestToLevels)
{
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L5 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L5;
  /* manage_DMI_Input_Pkg::receiveRequestsModesAndLevel::_L9 */
  static DMI_DriverRequest_T_DMI_Types_P _L9;
  
  /* 1 */
  receiveTextMessageAck_manage_Te(
    inSystemTime,
    inStatusList,
    fromDMI_TextMsg_Ack,
    outStatusList,
    &_L5);
  /* 1 */
  doDriverRequests_manage_DMI_Inp(
    fromDMI_driverRequest,
    &_L9,
    outDriverRequestToLevels);
  kcg_copy_DMI_To_Modes_T_DMI_Typ(forModesAndLevel, &_L5);
  kcg_copy_DMI_DriverRequest_T_DM(&(*forModesAndLevel).DriverRequest, &_L9);
  (*forModesAndLevel).valid = _L5.valid | _L9.valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** receiveRequestsModesAndLevel_ma.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

