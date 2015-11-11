/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Text_Message_to_int_DA.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int */
void CAST_DMI_Text_Message_to_int_DA(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::dmi_text_message_ct */ DMI_Text_Message_T_DMI_Messages *dmi_text_message_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Text_Message_to_int::dmi_text_message_int */ DMI_Text_Message_int_array_T_DA *dmi_text_message_int)
{
  (&(&(*dmi_text_message_int)[0])[0])[1] = (*dmi_text_message_ct).system_clock;
  (&(&(*dmi_text_message_int)[0])[0])[2] =
    (*dmi_text_message_ct).textMessage_ID;
  (&(&(*dmi_text_message_int)[0])[0])[4] = (*dmi_text_message_ct).l_text;
  (&(&(*dmi_text_message_int)[0])[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_text_message_ct).valid);
  (&(&(*dmi_text_message_int)[0])[0])[3] = /* 1 */
    CAST_DMI_Q_TEXT_to_int_DATA_Var((*dmi_text_message_ct).q_text);
  /* 1 */
  CAST_DMI_TEXT_to_int_DATA_Varia(
    &(*dmi_text_message_ct).x_text,
    (DMI_TEXT_INT_Array_T_DATA *) &(&(*dmi_text_message_int)[0])[5]);
  (&(*dmi_text_message_int)[260])[0] = /* 1 */
    CAST_Q_TEXTCLASS_to_int_TM_conv((*dmi_text_message_ct).q_textClass);
  (&(*dmi_text_message_int)[260])[1] = /* 1 */
    CAST_Q_TEXTCONFIRM_to_int_TM_co((*dmi_text_message_ct).q_textConfirm);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Text_Message_to_int_DA.c
** Generation date: 2015-11-11T16:04:20
*************************************************************$ */

