/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapMoRCtoRadio_CS_manage_DMI_Ou.h"

/* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS */
connectionStatusRadioUnit_T_API mapMoRCtoRadio_CS_manage_DMI_Ou(
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::inMoRC_status */ morcStatus_T_RCM_Session_Types_ *inMoRC_status)
{
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::outBMI_CS */
  static connectionStatusRadioUnit_T_API outBMI_CS;
  
  /* 1 */ if ((*inMoRC_status).connection.valid) {
    /* 2 */ if ((*inMoRC_status).connection.settingUpConnectionHasFailed) {
      outBMI_CS = conn_SetupFailed_API_RadioCommu;
    }
    else {
      switch ((*inMoRC_status).connection.status) {
        case mcs_connecting_RCM_Types_Pkg :
          outBMI_CS = conn_no_connection_API_RadioCom;
          break;
        case mcs_connected_RCM_Types_Pkg :
          outBMI_CS = conn_ConnectionUp_API_RadioComm;
          break;
        
        default :
          outBMI_CS = conn_unknown_API_RadioCommunica;
      }
    }
  }
  else {
    outBMI_CS = conn_unknown_API_RadioCommunica;
  }
  return outBMI_CS;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapMoRCtoRadio_CS_manage_DMI_Ou.c
** Generation date: 2015-12-07T14:50:19
*************************************************************$ */

