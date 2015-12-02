/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_fs_flatten_array_TM_lib_internal.h"

/* TM_lib_internal::C_P021_fs_flatten_array */
void C_P021_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P021_fs_flatten_array::i */ kcg_int i,
  /* TM_lib_internal::C_P021_fs_flatten_array::Acc */ P021_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P021_fs_flatten_array::section_arrays */ P021_OBU_sectionlist_array_T_TM *section_arrays,
  /* TM_lib_internal::C_P021_fs_flatten_array::flat */ P021_sections_array_flat_T_TM *flat)
{
  /* TM_lib_internal::C_P021_fs_flatten_array */ kcg_int tmp;
  
  kcg_copy_P021_sections_array_flat_T_TM(flat, Acc);
  if ((0 <= i / 3) & (i / 3 < 33) & ((0 <= i % 3) & (i % 3 < 3))) {
    tmp = (*section_arrays)[i / 3][i % 3];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 99)) {
    (*flat)[i] = tmp;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

