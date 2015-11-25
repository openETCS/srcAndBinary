/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int */
void C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::dmi_driver_request_ct */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_driver_request_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Driver_Reqest_to_int::dmi_driver_request_int */ DMI_Driver_Request_int_array_T_DATA *dmi_driver_request_int)
{
  (*dmi_driver_request_int)[0] = 1;
  (*dmi_driver_request_int)[1] = (*dmi_driver_request_ct).systemTime;
  (*dmi_driver_request_int)[2] = /* 1 */
    CAST_DMI_Request_to_int_DATA_Variables((*dmi_driver_request_ct).m_request);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

