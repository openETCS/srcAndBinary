/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_fs_flatten_array_TM_lib_internal.h"

/* TM_lib_internal::C_P058_fs_flatten_array */
void C_P058_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P058_fs_flatten_array::i */ kcg_int i,
  /* TM_lib_internal::C_P058_fs_flatten_array::Acc */ P058_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P058_fs_flatten_array::section_arrays */ P058_OBU_sectionlist_array_T_TM *section_arrays,
  /* TM_lib_internal::C_P058_fs_flatten_array::flat */ P058_sections_array_flat_T_TM *flat)
{
  /* TM_lib_internal::C_P058_fs_flatten_array */ kcg_int tmp;
  
  kcg_copy_P058_sections_array_flat_T_TM(flat, Acc);
  if ((0 <= i / 2) & (i / 2 < 32) & ((0 <= i % 2) & (i % 2 < 2))) {
    tmp = (*section_arrays)[i / 2][i % 2];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 64)) {
    (*flat)[i] = tmp;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P058_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-11-25T14:46:14
*************************************************************$ */

