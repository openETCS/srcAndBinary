/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AckMsgManager_DMI_Control_Pkg_Utils.h"

void AckMsgManager_reset_DMI_Control_Pkg_Utils(
  outC_AckMsgManager_DMI_Control_Pkg_Utils *outC)
{
  /* 1 */ FlashingOperator_reset_DMI_Control_Pkg_Utils(&outC->Context_1);
}

/* DMI_Control_Pkg::Utils::AckMsgManager */
void AckMsgManager_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::AckMsgManager::Queue */array__15402 *Queue,
  /* DMI_Control_Pkg::Utils::AckMsgManager::SystemTime */kcg_int SystemTime,
  outC_AckMsgManager_DMI_Control_Pkg_Utils *outC)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* DMI_Control_Pkg::Utils::AckMsgManager::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  static array_real_5 default_Array_mm;
  /* DMI_Control_Pkg::Utils::AckMsgManager::FixText */
  static kcg_bool FixText;
  /* DMI_Control_Pkg::Utils::AckMsgManager::PlainText */
  static kcg_bool PlainText;
  
  default_Array_mm[0] = - 1.0;
  default_Array_mm[1] = - 1.0;
  default_Array_mm[2] = - 1.0;
  default_Array_mm[3] = - 1.0;
  default_Array_mm[4] = - 1.0;
  /* CheckTypeOfText */
  CheckTypeOfText_DMI_Control_Pkg_Utils(Queue, &FixText, &PlainText);
  if (FixText) {
    _L7_IfBlock1 = kcg_false;
    kcg_copy_array_real_5(
      &outC->Array_mm,
      (array_real_5 *) &cArray_mm_DMI_Control_Pkg);
    kcg_copy_array_real_5(
      &outC->Array_hh,
      (array_real_5 *) &cArray_hh_DMI_Control_Pkg);
    kcg_copy_array_char_30_5(
      &outC->ArrayPlainText,
      (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
    for (i = 0; i < 27; i++) {
      tmp1 = _L7_IfBlock1;
      /* 1 */
      Find_Q_Text_iterator_DMI_Control_Pkg_Utils(
        i,
        tmp1,
        ArrayEnum_Q_text_DMI_Control_Pkg[i],
        (*Queue)[0].dmi_msg.q_text,
        &tmp,
        &_L7_IfBlock1);
      (&outC->IndexFixedMsg[0])[0] = i + 1;
      if (!tmp) {
        break;
      }
    }
    (&outC->IndexFixedMsg[1])[0] = 0;
    (&outC->IndexFixedMsg[1])[1] = 0;
    (&outC->IndexFixedMsg[1])[2] = 0;
    (&outC->IndexFixedMsg[1])[3] = 0;
  }
  else {
    outC->IndexFixedMsg[0] = 0;
    outC->IndexFixedMsg[1] = 0;
    outC->IndexFixedMsg[2] = 0;
    outC->IndexFixedMsg[3] = 0;
    outC->IndexFixedMsg[4] = 0;
    if (PlainText) {
      kcg_copy_array_char_30(
        &outC->ArrayPlainText[0],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[0]);
      kcg_copy_array_char_30(
        &outC->ArrayPlainText[1],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[30]);
      kcg_copy_array_char_30(
        &outC->ArrayPlainText[2],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[60]);
      kcg_copy_array_char_30(
        &outC->ArrayPlainText[3],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[90]);
      kcg_copy_array_char_30(
        &outC->ArrayPlainText[4],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[120]);
      kcg_copy_array_real_5(
        &outC->Array_mm,
        (array_real_5 *) &cArray_mm_DMI_Control_Pkg);
      kcg_copy_array_real_5(
        &outC->Array_hh,
        (array_real_5 *) &cArray_hh_DMI_Control_Pkg);
    }
    else {
      kcg_copy_array_real_5(&outC->Array_mm, &default_Array_mm);
      kcg_copy_array_real_5(&outC->Array_hh, &default_Array_mm);
      kcg_copy_array_char_30_5(
        &outC->ArrayPlainText,
        (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
    }
  }
  /* 1 */
  FlashingOperator_DMI_Control_Pkg_Utils(
    kcg_true,
    SystemTime,
    cIntervalFlashingTimeMsg_DMI_Control_Pkg,
    &outC->Context_1);
  outC->FlashingBorderMsg = outC->Context_1.flashigOut;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** AckMsgManager_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

