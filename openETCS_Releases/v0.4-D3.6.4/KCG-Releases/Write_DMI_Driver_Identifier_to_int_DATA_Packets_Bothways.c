/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int */
void Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::dmi_driver_identifier_ct */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct,
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int)
{
  /* ck__L22 */ if ((*dmi_driver_identifier_ct).valid) {
    /* 1 */
    C_DMI_Driver_Identifier_to_int1_DATA_Packets_Bothways(
      dmi_driver_identifier_ct,
      dmi_driver_identifier_int);
  }
  else {
    kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
      dmi_driver_identifier_int,
      (DMI_Driver_Identifier_int_array_T_DATA *)
        &cDMI_Driver_Identifier_int_DATA_Packets_Bothways);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

