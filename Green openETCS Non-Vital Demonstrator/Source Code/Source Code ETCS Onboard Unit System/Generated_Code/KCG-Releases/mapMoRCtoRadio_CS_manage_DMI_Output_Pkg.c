/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS */
connectionStatusRadioUnit_T_API_RadioCommunication_Pkg mapMoRCtoRadio_CS_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::inMoRC_status */ morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status)
{
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::outBMI_CS */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg outBMI_CS;
  
  /* 1 */ if ((*inMoRC_status).connection.valid) {
    /* 2 */ if ((*inMoRC_status).connection.settingUpConnectionHasFailed) {
      outBMI_CS = conn_SetupFailed_API_RadioCommunication_Pkg;
    }
    else {
      switch ((*inMoRC_status).connection.status) {
        case mcs_connecting_RCM_Types_Pkg :
          outBMI_CS = conn_no_connection_API_RadioCommunication_Pkg;
          break;
        case mcs_connected_RCM_Types_Pkg :
          outBMI_CS = conn_ConnectionUp_API_RadioCommunication_Pkg;
          break;
        
        default :
          outBMI_CS = conn_unknown_API_RadioCommunication_Pkg;
      }
    }
  }
  else {
    outBMI_CS = conn_unknown_API_RadioCommunication_Pkg;
  }
  return outBMI_CS;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

