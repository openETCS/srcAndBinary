/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeTwoMessages_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeTwoMessages */
void MergeTwoMessages_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTwoMessages::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTwoMessages::acc */array_char_30_5 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTwoMessages::DefaultMsgQueue */array_char_30_5 *DefaultMsgQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTwoMessages::new_SingleMsgQueue */array_char_30_5 *new_SingleMsgQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTwoMessages::num */kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTwoMessages::plainTextQueue */array_char_30_5 *plainTextQueue)
{
  array_char_30 tmp2;
  array_char_30 tmp1;
  array_char_30 tmp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTwoMessages::_L104 */ kcg_int _L104;
  
  _L104 = index - num;
  if ((0 <= index) & (index < 5)) {
    kcg_copy_array_char_30(&tmp2, &(*DefaultMsgQueue)[index]);
  }
  else {
    kcg_copy_array_char_30(
      &tmp2,
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  }
  if (!kcg_comp_array_char_30(
      &tmp2,
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
    kcg_copy_array_char_30_5(plainTextQueue, acc);
  }
  else if (kcg_comp_array_char_30_5(
      (array_char_30_5 *) &cPlainText_DMI_Control_Pkg,
      DefaultMsgQueue) | kcg_comp_array_char_30_5(
      DefaultMsgQueue,
      (array_char_30_5 *) &cPlainText_fix_DMI_Control_Pkg)) {
    kcg_copy_array_char_30_5(plainTextQueue, acc);
    if ((0 <= _L104) & (_L104 < 5)) {
      kcg_copy_array_char_30(&tmp1, &(*new_SingleMsgQueue)[_L104]);
    }
    else {
      kcg_copy_array_char_30(
        &tmp1,
        (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    }
    if ((0 <= index) & (index < 5)) {
      kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp1);
    }
  }
  else if (kcg_comp_array_char_30_5(
      new_SingleMsgQueue,
      (array_char_30_5 *) &cPlainText_fix_DMI_Control_Pkg)) {
    kcg_copy_array_char_30_5(plainTextQueue, acc);
    if ((0 <= num) & (num < 5)) {
      kcg_copy_array_char_30(
        &(*plainTextQueue)[num],
        (array_char_30 *) &cPlainText_single_fix_DMI_Control_Pkg);
    }
  }
  else {
    kcg_copy_array_char_30_5(plainTextQueue, acc);
    if ((0 <= _L104) & (_L104 < 5)) {
      kcg_copy_array_char_30(&tmp, &(*new_SingleMsgQueue)[_L104]);
    }
    else {
      kcg_copy_array_char_30(
        &tmp,
        (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    }
    if ((0 <= index) & (index < 5)) {
      kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeTwoMessages_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-12T10:31:59
*************************************************************$ */

