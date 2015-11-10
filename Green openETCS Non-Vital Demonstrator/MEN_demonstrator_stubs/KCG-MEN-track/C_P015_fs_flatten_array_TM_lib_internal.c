/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_fs_flatten_array_TM_lib_internal.h"

/* TM_lib_internal::C_P015_fs_flatten_array */
void C_P015_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P015_fs_flatten_array::i */kcg_int i,
  /* TM_lib_internal::C_P015_fs_flatten_array::Acc */P015_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P015_fs_flatten_array::section_arrays */P015_OBU_sectionlist_array_T_TM *section_arrays,
  /* TM_lib_internal::C_P015_fs_flatten_array::flat */P015_sections_array_flat_T_TM *flat)
{
  kcg_int tmp;
  
  kcg_copy_P015_sections_array_flat_T_TM(flat, Acc);
  if ((0 <= i / 4) & (i / 4 < 32) & ((0 <= i % 4) & (i % 4 < 4))) {
    tmp = (*section_arrays)[i / 4][i % 4];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 128)) {
    (*flat)[i] = tmp;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

