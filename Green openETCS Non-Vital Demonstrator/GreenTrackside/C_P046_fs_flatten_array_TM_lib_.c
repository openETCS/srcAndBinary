/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_fs_flatten_array_TM_lib_.h"

/* TM_lib_internal::C_P046_fs_flatten_array */
void C_P046_fs_flatten_array_TM_lib_(
  /* TM_lib_internal::C_P046_fs_flatten_array::i */ kcg_int i,
  /* TM_lib_internal::C_P046_fs_flatten_array::Acc */ P046_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P046_fs_flatten_array::section_arrays */ P046_OBU_sectionlist_array_T_TM *section_arrays,
  /* TM_lib_internal::C_P046_fs_flatten_array::flat */ P046_sections_array_flat_T_TM *flat)
{
  /* TM_lib_internal::C_P046_fs_flatten_array */
  static kcg_int tmp;
  
  kcg_copy_P046_sections_array_fl(flat, Acc);
  if ((0 <= i / 2) & (i / 2 < 33) & ((0 <= i % 2) & (i % 2 < 2))) {
    tmp = (*section_arrays)[i / 2][i % 2];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 66)) {
    (*flat)[i] = tmp;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P046_fs_flatten_array_TM_lib_.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

