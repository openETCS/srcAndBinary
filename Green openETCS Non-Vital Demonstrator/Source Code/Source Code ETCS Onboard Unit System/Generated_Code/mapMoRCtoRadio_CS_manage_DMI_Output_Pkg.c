/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS */
connectionStatusRadioUnit_T_API_RadioCommunication_Pkg mapMoRCtoRadio_CS_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::inMoRC_CS */safeRadioConnectionStatus_Type_MoRC_Pck inMoRC_CS)
{
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::outBMI_CS */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg outBMI_CS;
  
  switch (inMoRC_CS) {
    case srcs_ConnectionUp_MoRC_Pck :
      outBMI_CS = conn_ConnectionUp_API_RadioCommunication_Pkg;
      break;
    case srcs_ConnectionLost_SetupFailed_MoRC_Pck :
      outBMI_CS = conn_SetupFailed_API_RadioCommunication_Pkg;
      break;
    
    default :
      outBMI_CS = conn_unknown_API_RadioCommunication_Pkg;
  }
  return outBMI_CS;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.c
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

