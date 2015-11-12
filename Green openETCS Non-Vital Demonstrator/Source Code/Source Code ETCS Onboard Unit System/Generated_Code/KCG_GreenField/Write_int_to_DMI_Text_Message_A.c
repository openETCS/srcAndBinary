/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Text_Message_A.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack */
void Write_int_to_DMI_Text_Message_A(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack::dmi_text_message_ack_int */ DMI_Text_Message_Ack_int_array_ *dmi_text_message_ack_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack::dmi_text_message_ack_ct */ DMI_Text_Message_Ack_T_DMI_Mess *dmi_text_message_ack_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack::_L15 */
  static kcg_bool _L15;
  
  _L15 = 1 == (*dmi_text_message_ack_int)[0];
  /* ck__L15 */ if (_L15) {
    /* 1 */
    C_int_to_DMI_Text_Message_Ack_D(
      dmi_text_message_ack_int,
      dmi_text_message_ack_ct);
  }
  else {
    kcg_copy_DMI_Text_Message_Ack_T(
      dmi_text_message_ack_ct,
      (DMI_Text_Message_Ack_T_DMI_Mess *) &cDMI_Text_Message_Ack_DATA_Pack);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Text_Message_A.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

