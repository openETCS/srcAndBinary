/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier */
void Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int,
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::dmi_driver_identifier_ct */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct)
{
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::_L25 */ kcg_bool _L25;
  
  _L25 = 1 == (*dmi_driver_identifier_int)[0];
  /* ck__L25 */ if (_L25) {
    /* 1 */
    C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
      dmi_driver_identifier_int,
      dmi_driver_identifier_ct);
  }
  else {
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      dmi_driver_identifier_ct,
      (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
        &cDMI_Driver_Identifier_DATA_Packets_Bothways);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

