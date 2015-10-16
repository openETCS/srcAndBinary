/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapActionToCmd_radioOutput_Pkg.h"

/* radioOutput_Pkg::mapActionToCmd */
cmdRadioUnit_T_API_RadioCommunication_Pkg mapActionToCmd_radioOutput_Pkg(
  /* radioOutput_Pkg::mapActionToCmd::fromAction */ mobileHWAction_Type_MoRC_Pck fromAction)
{
  /* radioOutput_Pkg::mapActionToCmd::toRTMCMD */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg toRTMCMD;
  
  switch (fromAction) {
    case mhwa_register_MoRC_Pck :
      toRTMCMD = cmdr_networkRegister_API_RadioCommunication_Pkg;
      break;
    case mhwa_connect_MoRC_Pck :
      toRTMCMD = cmdr_connection_request_API_RadioCommunication_Pkg;
      break;
    case mhwa_disconnect_MoRC_Pck :
      toRTMCMD = cmdr_disconnection_request_API_RadioCommunication_Pkg;
      break;
    case mhwa_unregister_MoRC_Pck :
      toRTMCMD = cmdr_networkUnregister_API_RadioCommunication_Pkg;
      break;
    
    default :
      toRTMCMD = cmdr_not_relevant_API_RadioCommunication_Pkg;
  }
  return toRTMCMD;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapActionToCmd_radioOutput_Pkg.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

