/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas */
void Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::Planning_Area_Speed_Profile */DMI_SpeedProfileArray_T_DMI_Types_Pkg *Planning_Area_Speed_Profile,
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::Loc_Abs_to_DMI */array_real_32 *Loc_Abs_to_DMI,
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::MRSP_to_DMI */array_real_32 *MRSP_to_DMI)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_from_Track_Atlas::_L6 */
  static kcg_int _L6;
  
  for (i = 0; i < 32; i++) {
    /* 1 */
    Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func(
      i,
      &(*Planning_Area_Speed_Profile)[i],
      &tmp,
      &(*Loc_Abs_to_DMI)[i],
      &(*MRSP_to_DMI)[i]);
    _L6 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L6; i < 32; i++) {
    (*Loc_Abs_to_DMI)[i] = 0.0;
    (*MRSP_to_DMI)[i] = 0.0;
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Planning_Area_Speed_Profile_from_Track_Atlas_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

