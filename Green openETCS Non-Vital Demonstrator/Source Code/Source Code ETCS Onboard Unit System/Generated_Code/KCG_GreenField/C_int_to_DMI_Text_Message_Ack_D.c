/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Text_Message_Ack_D.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack */
void C_int_to_DMI_Text_Message_Ack_D(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack::dmi_text_message_ack_int */ DMI_Text_Message_Ack_int_array_ *dmi_text_message_ack_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack::dmi_text_message_ack_ct */ DMI_Text_Message_Ack_T_DMI_Mess *dmi_text_message_ack_ct)
{
  (*dmi_text_message_ack_ct).systemTime = (*dmi_text_message_ack_int)[1];
  (*dmi_text_message_ack_ct).textMessage_ID = (*dmi_text_message_ack_int)[2];
  (*dmi_text_message_ack_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_text_message_ack_int)[0]);
  (*dmi_text_message_ack_ct).acknowledged = /* 2 */
    Int_to_Bool_Utilities((*dmi_text_message_ack_int)[3]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Text_Message_Ack_D.c
** Generation date: 2015-11-03T14:28:12
*************************************************************$ */

