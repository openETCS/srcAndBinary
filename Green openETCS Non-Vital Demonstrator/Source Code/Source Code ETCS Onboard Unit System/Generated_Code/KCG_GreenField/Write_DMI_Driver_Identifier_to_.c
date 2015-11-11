/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Driver_Identifier_to_.h"

/* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int */
void Write_DMI_Driver_Identifier_to_(
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::dmi_driver_identifier_ct */ _26_DMI_Driver_Identifier_T_DMI *dmi_driver_identifier_ct,
  /* DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array *dmi_driver_identifier_int)
{
  /* ck__L22 */ if ((*dmi_driver_identifier_ct).valid) {
    /* 1 */
    C_DMI_Driver_Identifier_to_int1(
      dmi_driver_identifier_ct,
      dmi_driver_identifier_int);
  }
  else {
    kcg_copy_DMI_Driver_Identifier_(
      dmi_driver_identifier_int,
      (DMI_Driver_Identifier_int_array *) &cDMI_Driver_Identifier_int_DATA);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Driver_Identifier_to_.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

