/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_identifier_DAT.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier */
void Write_int_to_DMI_identifier_DAT(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::dmi_identifier_int_in */ DMI_Identifier_int_array_T_DATA *dmi_identifier_int_in,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::dmi_identifier_ct_out */ DMI_Identifier_T_DMI_Messages_D *dmi_identifier_ct_out)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::_L278 */
  static kcg_bool _L278;
  
  _L278 = 1 == (*dmi_identifier_int_in)[0];
  /* ck__L278 */ if (_L278) {
    /* 1 */
    C_int_to_DMI_identifier_DATA_Pa(
      dmi_identifier_int_in,
      dmi_identifier_ct_out);
  }
  else {
    kcg_copy_DMI_Identifier_T_DMI_M(
      dmi_identifier_ct_out,
      (DMI_Identifier_T_DMI_Messages_D *) &cDMI_Identifier_DATA_Packets_DM);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_identifier_DAT.c
** Generation date: 2015-12-07T14:50:20
*************************************************************$ */

