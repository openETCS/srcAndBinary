/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber */
kcg_int CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::start */kcg_bool start,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::in_arraykey */array_bool_12 *in_arraykey)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L4 */
  static kcg_int _L4;
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L5 */
  static kcg_int _L5;
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::out_KeyNumber */
  static kcg_int out_KeyNumber;
  
  _L5 = 0;
  if (start) {
    for (i = 0; i < 12; i++) {
      tmp1 = _L5;
      /* 1 */
      CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
        tmp1,
        (*in_arraykey)[i],
        &tmp,
        &_L5);
      _L4 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L4 = 0;
  }
  if (_L4 < 10) {
    out_KeyNumber = _L4 + ASCII_0_DMI_Control_Pkg;
  }
  else {
    switch (_L4) {
      case 10 :
        out_KeyNumber = ASCII_offset_Backsp_DMI_Control_Pkg +
          ASCII_0_DMI_Control_Pkg;
        break;
      case 11 :
        out_KeyNumber = ASCII_offset_0_DMI_Control_Pkg +
          ASCII_0_DMI_Control_Pkg;
        break;
      
      default :
        out_KeyNumber = 0 + ASCII_0_DMI_Control_Pkg;
    }
  }
  return out_KeyNumber;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

