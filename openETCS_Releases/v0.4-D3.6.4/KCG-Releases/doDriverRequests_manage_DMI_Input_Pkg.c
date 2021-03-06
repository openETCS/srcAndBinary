/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doDriverRequests_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::doDriverRequests */
void doDriverRequests_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::doDriverRequests::inDriverRequest */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *inDriverRequest,
  /* manage_DMI_Input_Pkg::doDriverRequests::outDriverRequestToModes */ DMI_DriverRequest_T_DMI_Types_Pkg *outDriverRequestToModes,
  /* manage_DMI_Input_Pkg::doDriverRequests::outDriverRequestToLevels */ kcg_bool *outDriverRequestToLevels)
{
  *outDriverRequestToLevels = (*inDriverRequest).valid &
    ((*inDriverRequest).m_request == Level_entry_request_DMI_Types_Pkg);
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
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      outDriverRequestToModes,
      (DMI_DriverRequest_T_DMI_Types_Pkg *)
        &cNoDriverRequestToModes_manage_DMI_Input_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** doDriverRequests_manage_DMI_Input_Pkg.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

