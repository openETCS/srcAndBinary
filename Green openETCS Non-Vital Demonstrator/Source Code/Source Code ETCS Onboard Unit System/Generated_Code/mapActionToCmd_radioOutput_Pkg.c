/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapActionToCmd_radioOutput_Pkg.h"

/* radioOutput_Pkg::mapActionToCmd */
cmdRadioUnit_T_API_RadioCommunication_Pkg mapActionToCmd_radioOutput_Pkg(
  /* radioOutput_Pkg::mapActionToCmd::fromAction */mobileHWAction_Type_MoRC_Pck fromAction)
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mapActionToCmd_radioOutput_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

