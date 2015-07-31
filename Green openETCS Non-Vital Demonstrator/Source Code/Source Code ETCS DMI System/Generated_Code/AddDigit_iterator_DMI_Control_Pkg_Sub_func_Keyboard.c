/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator */
void AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::Index */kcg_int Index,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::KeyNumber */kcg_int KeyNumber,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::in_digit_display */kcg_int in_digit_display,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::condition */kcg_bool *condition,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::out_digit_display */kcg_int *out_digit_display)
{
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::_L3 */
  static kcg_bool _L3;
  
  _L3 = in_digit_display == ASCII_space_DMI_Control_Pkg;
  *condition = !_L3;
  if (_L3) {
    *out_digit_display = KeyNumber;
  }
  else {
    *out_digit_display = in_digit_display;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

