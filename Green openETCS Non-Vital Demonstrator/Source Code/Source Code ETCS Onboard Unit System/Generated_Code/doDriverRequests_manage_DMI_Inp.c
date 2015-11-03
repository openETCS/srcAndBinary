/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doDriverRequests_manage_DMI_Inp.h"

/* manage_DMI_Input_Pkg::doDriverRequests */
void doDriverRequests_manage_DMI_Inp(
  /* manage_DMI_Input_Pkg::doDriverRequests::inDriverRequest */ DMI_Driver_Request_T_DMI_Messag *inDriverRequest,
  /* manage_DMI_Input_Pkg::doDriverRequests::outDriverRequestToModes */ DMI_DriverRequest_T_DMI_Types_P *outDriverRequestToModes,
  /* manage_DMI_Input_Pkg::doDriverRequests::outDriverRequestToLevels */ kcg_bool *outDriverRequestToLevels)
{
  *outDriverRequestToLevels = (*inDriverRequest).valid &
    ((*inDriverRequest).m_request == Level_entry_request_DMI_Types_P);
  /* ck_isValid */ if ((*inDriverRequest).valid) {
    (*outDriverRequestToModes).valid = (*inDriverRequest).valid;
    (*outDriverRequestToModes).Req_Exit_SH = (*inDriverRequest).m_request ==
      Shunting_exit_DMI_Types_Pkg;
    (*outDriverRequestToModes).Req_NL = (*inDriverRequest).m_request ==
      Non_leading_DMI_Types_Pkg;
    (*outDriverRequestToModes).Req_Override = (*inDriverRequest).m_request ==
      Override_EOA_DMI_Types_Pkg;
    (*outDriverRequestToModes).Req_SH = (*inDriverRequest).m_request ==
      Shunting_entry_DMI_Types_Pkg;
    (*outDriverRequestToModes).Req_Start = (*inDriverRequest).m_request ==
      Start_of_mission_DMI_Types_Pkg;
    (*outDriverRequestToModes).ETCS_Isolated = (*inDriverRequest).m_request ==
      Request_isolation_DMI_Types_Pkg;
  }
  else {
    kcg_copy_DMI_DriverRequest_T_DM(
      outDriverRequestToModes,
      (DMI_DriverRequest_T_DMI_Types_P *) &cNoDriverRequestToModes_manage_);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** doDriverRequests_manage_DMI_Inp.c
** Generation date: 2015-11-03T13:50:13
*************************************************************$ */

