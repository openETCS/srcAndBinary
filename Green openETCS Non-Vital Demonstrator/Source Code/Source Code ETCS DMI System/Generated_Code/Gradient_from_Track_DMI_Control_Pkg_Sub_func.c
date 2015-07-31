/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gradient_from_Track_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Gradient_from_Track */
void Gradient_from_Track_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::Track_Atlas_Gradient */DMI_gradientProfileArray_T_DMI_Types_Pkg *Track_Atlas_Gradient,
  /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::Gradient_End */array_real_32 *Gradient_End,
  /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::Gradient_Begin */array_real_32 *Gradient_Begin,
  /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::Gradient_Value */array_real_32 *Gradient_Value)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* DMI_Control_Pkg::Sub_func::Gradient_from_Track::_L24 */
  static kcg_int _L24;
  
  for (i = 0; i < 32; i++) {
    /* 1 */
    Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func(
      i,
      &(*Track_Atlas_Gradient)[i],
      &tmp,
      &(*Gradient_Begin)[i],
      &(*Gradient_End)[i],
      &(*Gradient_Value)[i]);
    _L24 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L24; i < 32; i++) {
    (*Gradient_Begin)[i] = 0.0;
    (*Gradient_End)[i] = 0.0;
    (*Gradient_Value)[i] = 0.0;
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Gradient_from_Track_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

