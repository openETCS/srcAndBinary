/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Icon_Ack_DATA_.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack */
void Write_int_to_DMI_Icon_Ack_DATA_(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::dmi_icon_ack_int */ DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::dmi_icon_ack_ct */ DMI_Icon_Ack_T_DMI_Messages_DMI *dmi_icon_ack_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack::_L16 */
  static kcg_bool _L16;
  
  _L16 = 1 == (*dmi_icon_ack_int)[0];
  /* ck__L16 */ if (_L16) {
    /* 1 */ C_int_to_DMI_Icon_Ack_DATA_Pack(dmi_icon_ack_int, dmi_icon_ack_ct);
  }
  else {
    kcg_copy_DMI_Icon_Ack_T_DMI_Mes(
      dmi_icon_ack_ct,
      (DMI_Icon_Ack_T_DMI_Messages_DMI *) &cDMI_Icon_Ack_DATA_Packets_DMI_);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Icon_Ack_DATA_.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

