/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ImpMsgManager_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::ImpMsgManager */
void ImpMsgManager_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::ImpMsgManager::Queue */array__15402 *Queue,
  /* DMI_Control_Pkg::Utils::ImpMsgManager::IndexFixedMsg */array_int_5 *IndexFixedMsg,
  /* DMI_Control_Pkg::Utils::ImpMsgManager::ArrayPlainText */array_char_30_5 *ArrayPlainText,
  /* DMI_Control_Pkg::Utils::ImpMsgManager::Array_hh */array_real_5 *Array_hh,
  /* DMI_Control_Pkg::Utils::ImpMsgManager::Array_mm */array_real_5 *Array_mm,
  /* DMI_Control_Pkg::Utils::ImpMsgManager::isImportantMsg */kcg_bool *isImportantMsg)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* DMI_Control_Pkg::Utils::ImpMsgManager::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  static array_real_5 default_Array_mm;
  /* DMI_Control_Pkg::Utils::ImpMsgManager::FixText */
  static kcg_bool FixText;
  /* DMI_Control_Pkg::Utils::ImpMsgManager::PlainText */
  static kcg_bool PlainText;
  
  *isImportantMsg = kcg_false;
  default_Array_mm[0] = - 1.0;
  default_Array_mm[1] = - 1.0;
  default_Array_mm[2] = - 1.0;
  default_Array_mm[3] = - 1.0;
  default_Array_mm[4] = - 1.0;
  /* 1 */ CheckTypeOfText_DMI_Control_Pkg_Utils(Queue, &FixText, &PlainText);
  if (FixText) {
    _L7_IfBlock1 = kcg_false;
    kcg_copy_array_real_5(
      Array_mm,
      (array_real_5 *) &cArray_mm_DMI_Control_Pkg);
    kcg_copy_array_real_5(
      Array_hh,
      (array_real_5 *) &cArray_hh_DMI_Control_Pkg);
    kcg_copy_array_char_30_5(
      ArrayPlainText,
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
      (&(*IndexFixedMsg)[0])[0] = i + 1;
      if (!tmp) {
        break;
      }
    }
    (&(*IndexFixedMsg)[1])[0] = 0;
    (&(*IndexFixedMsg)[1])[1] = 0;
    (&(*IndexFixedMsg)[1])[2] = 0;
    (&(*IndexFixedMsg)[1])[3] = 0;
  }
  else {
    (*IndexFixedMsg)[0] = 0;
    (*IndexFixedMsg)[1] = 0;
    (*IndexFixedMsg)[2] = 0;
    (*IndexFixedMsg)[3] = 0;
    (*IndexFixedMsg)[4] = 0;
    if (PlainText) {
      kcg_copy_array_char_30(
        &(*ArrayPlainText)[0],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[0]);
      kcg_copy_array_char_30(
        &(*ArrayPlainText)[1],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[30]);
      kcg_copy_array_char_30(
        &(*ArrayPlainText)[2],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[60]);
      kcg_copy_array_char_30(
        &(*ArrayPlainText)[3],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[90]);
      kcg_copy_array_char_30(
        &(*ArrayPlainText)[4],
        (array_char_30 *) &(*Queue)[0].dmi_msg.x_text[120]);
      kcg_copy_array_real_5(
        Array_mm,
        (array_real_5 *) &cArray_mm_DMI_Control_Pkg);
      kcg_copy_array_real_5(
        Array_hh,
        (array_real_5 *) &cArray_hh_DMI_Control_Pkg);
    }
    else {
      kcg_copy_array_real_5(Array_mm, &default_Array_mm);
      kcg_copy_array_real_5(Array_hh, &default_Array_mm);
      kcg_copy_array_char_30_5(
        ArrayPlainText,
        (array_char_30_5 *) &cPlainText_DMI_Control_Pkg);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ImpMsgManager_DMI_Control_Pkg_Utils.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

