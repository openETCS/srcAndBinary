/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Driver_Reqest_to_int */
void Write_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Driver_Reqest_to_int::dmi_driver_request_ct */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_driver_request_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Driver_Reqest_to_int::dmi_driver_request_int */ DMI_Driver_Request_int_array_T_DATA *dmi_driver_request_int)
{
  /* ck__L22 */ if ((*dmi_driver_request_ct).valid) {
    /* 1 */
    C_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC(
      dmi_driver_request_ct,
      dmi_driver_request_int);
  }
  else {
    kcg_copy_DMI_Driver_Request_int_array_T_DATA(
      dmi_driver_request_int,
      (DMI_Driver_Request_int_array_T_DATA *)
        &cDMI_Driver_Reqest_int_array_DATA_Packets_DMI_to_EVC);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

