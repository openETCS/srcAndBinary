/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_flatten_sections_TM_lib_.h"

/* TM_lib_internal::C_P021_flatten_sections */
void C_P021_flatten_sections_TM_lib_(
  /* TM_lib_internal::C_P021_flatten_sections::MergedSections */ P021_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P021_flatten_sections::Flattened */ P021_sections_array_flat_T_TM *Flattened)
{
  /* TM_lib_internal::C_P021_flatten_sections */
  static P021_sections_array_flat_T_TM acc;
  static kcg_int i;
  /* TM_lib_internal::C_P021_flatten_sections::_L74 */
  static array_int_3_33 _L74;
  
  for (i = 0; i < 33; i++) {
    /* 1 */ C_P021_fs_struct_to_array_TM_li(&(*MergedSections)[i], &_L74[i]);
  }
  kcg_copy_P021_sections_array_fl(
    Flattened,
    (P021_sections_array_flat_T_TM *) &DEFAULT_P021_sections_array_fla);
  for (i = 0; i < 231; i++) {
    kcg_copy_P021_sections_array_fl(&acc, Flattened);
    /* 1 */ C_P021_fs_flatten_array_TM_lib_(i, &acc, &_L74, Flattened);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_flatten_sections_TM_lib_.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

