/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator */
void CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator::acc */kcg_int acc,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator::in_arraykey */kcg_bool in_arraykey,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator::condition */kcg_bool *condition,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator::out_acc */kcg_int *out_acc)
{
  *out_acc = acc;
  *condition = !in_arraykey;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

