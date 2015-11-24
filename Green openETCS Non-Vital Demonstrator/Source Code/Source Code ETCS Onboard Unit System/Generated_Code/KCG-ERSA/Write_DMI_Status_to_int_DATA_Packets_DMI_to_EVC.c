/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int */
void Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int::dim_status_ct */ DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int::dmi_status_int */ DMI_Status_int_array_T_DATA *dmi_status_int)
{
  /* ck__L25 */ if ((*dim_status_ct).valid) {
    /* 1 */
    C_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(dim_status_ct, dmi_status_int);
  }
  else {
    kcg_copy_DMI_Status_int_array_T_DATA(
      dmi_status_int,
      (DMI_Status_int_array_T_DATA *)
        &cDMI_Status_int_array_DATA_Packets_DMI_to_EVC);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

