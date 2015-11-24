/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int */
void Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int::dmi_identifier_ct */ DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int::dmi_identifier_int */ DMI_Identifier_int_array_T_DATA *dmi_identifier_int)
{
  /* ck__L38 */ if ((*dmi_identifier_ct).valid) {
    /* 1 */
    C_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
      dmi_identifier_ct,
      dmi_identifier_int);
  }
  else {
    kcg_copy_DMI_Identifier_int_array_T_DATA(
      dmi_identifier_int,
      (DMI_Identifier_int_array_T_DATA *)
        &cDMI_Identifier_int_array_DATA_Packets_DMI_to_EVC);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-24T10:24:42
*************************************************************$ */

